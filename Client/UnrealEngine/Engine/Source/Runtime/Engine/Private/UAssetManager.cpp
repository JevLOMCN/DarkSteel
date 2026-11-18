// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 156

// StaticClass @ 14758c480

UClass * __cdecl UAssetManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetManager",
               &Z_Registration_Info_UClass_UAssetManager.InnerSingleton,
               StaticRegisterNativesUAssetManager,0x528,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetManager>,InternalVTableHelperCtorCaller<UAssetManager>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetManager.InnerSingleton;
}

// UAssetManager @ 1475a69f0

UAssetManager * __thiscall UAssetManager::UAssetManager(UAssetManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAssetManager__6B_;
  *(undefined8 *)&this->AssetPathMap = 0;
  *(undefined8 *)&(this->AssetPathMap).field_0x8 = 0;
  *(undefined8 *)&(this->AssetPathMap).field_0x20 = 0;
  *(undefined4 *)&(this->AssetPathMap).field_0x28 = 0;
  *(undefined4 *)&(this->AssetPathMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetPathMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetPathMap).field_0x34 = 0;
  *(undefined8 *)&(this->AssetPathMap).field_0x40 = 0;
  *(undefined4 *)&(this->AssetPathMap).field_0x48 = 0;
  *(undefined8 *)&this->AssetRuleOverrides = 0;
  *(undefined8 *)&(this->AssetRuleOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->AssetRuleOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->AssetRuleOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x48 = 0;
  *(undefined8 *)&this->ManagementParentMap = 0;
  *(undefined8 *)&(this->ManagementParentMap).field_0x8 = 0;
  *(undefined8 *)&(this->ManagementParentMap).field_0x20 = 0;
  *(undefined4 *)&(this->ManagementParentMap).field_0x28 = 0;
  *(undefined4 *)&(this->ManagementParentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagementParentMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ManagementParentMap).field_0x34 = 0;
  *(undefined8 *)&(this->ManagementParentMap).field_0x40 = 0;
  *(undefined4 *)&(this->ManagementParentMap).field_0x48 = 0;
  *(undefined8 *)&this->CookRuleManagementParentMap = 0;
  *(undefined8 *)&(this->CookRuleManagementParentMap).field_0x8 = 0;
  *(undefined8 *)&(this->CookRuleManagementParentMap).field_0x20 = 0;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x28 = 0;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x34 = 0;
  *(undefined8 *)&(this->CookRuleManagementParentMap).field_0x40 = 0;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x48 = 0;
  *(undefined8 *)&this->CachedAssetBundles = 0;
  *(undefined8 *)&(this->CachedAssetBundles).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetBundles).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x34 = 0;
  *(undefined8 *)&(this->CachedAssetBundles).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x48 = 0;
  *(undefined8 *)&(this->WarningInvalidAssets).Elements = 0;
  *(undefined8 *)&(this->WarningInvalidAssets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WarningInvalidAssets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x34 = 0;
  (this->WarningInvalidAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WarningInvalidAssets).HashSize = 0;
  (this->AlreadyScannedDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlreadyScannedDirectories).ArrayNum = 0;
  (this->AlreadyScannedDirectories).ArrayMax = 0;
  (this->AllAssetSearchRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllAssetSearchRoots).ArrayNum = 0;
  (this->AllAssetSearchRoots).ArrayMax = 0;
  (this->AddedAssetSearchRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedAssetSearchRoots).ArrayNum = 0;
  (this->AddedAssetSearchRoots).ArrayMax = 0;
  FStreamableManager::FStreamableManager(&this->StreamableManager);
  (this->PendingChunkInstalls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChunkInstalls).ArrayNum = 0;
  (this->PendingChunkInstalls).ArrayMax = 0;
  *(undefined8 *)&this->PrimaryAssetEncryptionKeyCache = 0;
  *(undefined8 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x8 = 0;
  *(undefined8 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x20 = 0;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x28 = 0;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x34 = 0;
  *(undefined8 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x40 = 0;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x48 = 0;
  (this->ObjectReferenceList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferenceList).ArrayNum = 0;
  (this->ObjectReferenceList).ArrayMax = 0;
  this->bObjectReferenceListDirty = true;
  *(undefined8 *)&this->PrimaryAssetTypeRedirects = 0;
  *(undefined8 *)&(this->PrimaryAssetTypeRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->PrimaryAssetTypeRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->PrimaryAssetTypeRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x48 = 0;
  *(undefined8 *)&this->PrimaryAssetIdRedirects = 0;
  *(undefined8 *)&(this->PrimaryAssetIdRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->PrimaryAssetIdRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->PrimaryAssetIdRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x48 = 0;
  *(undefined8 *)&this->AssetPathRedirects = 0;
  *(undefined8 *)&(this->AssetPathRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->AssetPathRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->AssetPathRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x48 = 0;
  *(undefined8 *)&this->OnAddedAssetSearchRootDelegate = 0;
  *(undefined8 *)&(this->OnAddedAssetSearchRootDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddedAssetSearchRootDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnAddedAssetSearchRootDelegate).field_0x18 = 2;
  (this->ChunkInstallDelegateHandle).ID = 0;
  this->bOldTemporaryCachingMode = false;
  this->bScanningFromInitialConfig = false;
  *(undefined8 *)&this->AssetTypeMap = 0;
  *(undefined8 *)&(this->AssetTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->AssetTypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->AssetTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->AssetTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->AssetTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->AssetTypeMap).field_0x48 = 0;
  return this;
}

// UAssetManager @ 1475a6d70

UAssetManager * __thiscall UAssetManager::UAssetManager(UAssetManager *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UAssetManager__6B_;
  *(undefined8 *)&this->AssetPathMap = 0;
  *(undefined8 *)&(this->AssetPathMap).field_0x8 = 0;
  *(undefined8 *)&(this->AssetPathMap).field_0x20 = 0;
  *(undefined4 *)&(this->AssetPathMap).field_0x28 = 0;
  *(undefined4 *)&(this->AssetPathMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetPathMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetPathMap).field_0x34 = 0;
  *(undefined8 *)&(this->AssetPathMap).field_0x40 = 0;
  *(undefined4 *)&(this->AssetPathMap).field_0x48 = 0;
  *(undefined8 *)&this->AssetRuleOverrides = 0;
  *(undefined8 *)&(this->AssetRuleOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->AssetRuleOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->AssetRuleOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x48 = 0;
  *(undefined8 *)&this->ManagementParentMap = 0;
  *(undefined8 *)&(this->ManagementParentMap).field_0x8 = 0;
  *(undefined8 *)&(this->ManagementParentMap).field_0x20 = 0;
  *(undefined4 *)&(this->ManagementParentMap).field_0x28 = 0;
  *(undefined4 *)&(this->ManagementParentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagementParentMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ManagementParentMap).field_0x34 = 0;
  *(undefined8 *)&(this->ManagementParentMap).field_0x40 = 0;
  *(undefined4 *)&(this->ManagementParentMap).field_0x48 = 0;
  *(undefined8 *)&this->CookRuleManagementParentMap = 0;
  *(undefined8 *)&(this->CookRuleManagementParentMap).field_0x8 = 0;
  *(undefined8 *)&(this->CookRuleManagementParentMap).field_0x20 = 0;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x28 = 0;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x34 = 0;
  *(undefined8 *)&(this->CookRuleManagementParentMap).field_0x40 = 0;
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x48 = 0;
  *(undefined8 *)&this->CachedAssetBundles = 0;
  *(undefined8 *)&(this->CachedAssetBundles).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAssetBundles).field_0x20 = 0;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x28 = 0;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x34 = 0;
  *(undefined8 *)&(this->CachedAssetBundles).field_0x40 = 0;
  *(undefined4 *)&(this->CachedAssetBundles).field_0x48 = 0;
  *(undefined8 *)&(this->WarningInvalidAssets).Elements = 0;
  *(undefined8 *)&(this->WarningInvalidAssets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WarningInvalidAssets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x34 = 0;
  (this->WarningInvalidAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WarningInvalidAssets).HashSize = 0;
  (this->AlreadyScannedDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlreadyScannedDirectories).ArrayNum = 0;
  (this->AlreadyScannedDirectories).ArrayMax = 0;
  (this->AllAssetSearchRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllAssetSearchRoots).ArrayNum = 0;
  (this->AllAssetSearchRoots).ArrayMax = 0;
  (this->AddedAssetSearchRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedAssetSearchRoots).ArrayNum = 0;
  (this->AddedAssetSearchRoots).ArrayMax = 0;
  FStreamableManager::FStreamableManager(&this->StreamableManager);
  (this->PendingChunkInstalls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChunkInstalls).ArrayNum = 0;
  (this->PendingChunkInstalls).ArrayMax = 0;
  *(undefined8 *)&this->PrimaryAssetEncryptionKeyCache = 0;
  *(undefined8 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x8 = 0;
  *(undefined8 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x20 = 0;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x28 = 0;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x34 = 0;
  *(undefined8 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x40 = 0;
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x48 = 0;
  (this->ObjectReferenceList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferenceList).ArrayNum = 0;
  (this->ObjectReferenceList).ArrayMax = 0;
  this->bTargetPlatformsAllowDevelopmentObjects = false;
  this->bObjectReferenceListDirty = true;
  *(undefined8 *)&this->PrimaryAssetTypeRedirects = 0;
  *(undefined8 *)&(this->PrimaryAssetTypeRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->PrimaryAssetTypeRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->PrimaryAssetTypeRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x48 = 0;
  *(undefined8 *)&this->PrimaryAssetIdRedirects = 0;
  *(undefined8 *)&(this->PrimaryAssetIdRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->PrimaryAssetIdRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->PrimaryAssetIdRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x48 = 0;
  *(undefined8 *)&this->AssetPathRedirects = 0;
  *(undefined8 *)&(this->AssetPathRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->AssetPathRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->AssetPathRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->AssetPathRedirects).field_0x48 = 0;
  *(undefined8 *)&this->OnAddedAssetSearchRootDelegate = 0;
  *(undefined8 *)&(this->OnAddedAssetSearchRootDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnAddedAssetSearchRootDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnAddedAssetSearchRootDelegate).field_0x18 = 2;
  (this->ChunkInstallDelegateHandle).ID = 0;
  *(undefined8 *)&this->AssetTypeMap = 0;
  *(undefined8 *)&(this->AssetTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->AssetTypeMap).field_0x20 = 0;
  this->bOldTemporaryCachingMode = false;
  this->bScanningFromInitialConfig = false;
  *(undefined4 *)&(this->AssetTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->AssetTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->AssetTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->AssetTypeMap).field_0x48 = 0;
  this->bIsGlobalAsyncScanEnvironment = false;
  this->bShouldGuessTypeAndName = false;
  this->bShouldUseSynchronousLoad = false;
  this->bIsLoadingFromPakFiles = false;
  this->bShouldAcquireMissingChunksOnLoad = false;
  this->NumBulkScanRequests = 0;
  this->bIsPrimaryAssetDirectoryCurrent = false;
  this->bIsManagementDatabaseCurrent = false;
  this->bUpdateManagementDatabaseAfterScan = false;
  this->bIncludeOnlyOnDiskAssets = true;
  this->bHasCompletedInitialScan = false;
  this->NumberOfSpawnedNotifications = 0;
  return this;
}

// ~UAssetManager @ 1475aa3c0

void __thiscall UAssetManager::~UAssetManager(UAssetManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7UAssetManager__6B_;
  *(undefined4 *)&(this->AssetTypeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AssetTypeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetTypeMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAddedAssetSearchRootDelegate).field_0x8,
             *(int *)&(this->OnAddedAssetSearchRootDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnAddedAssetSearchRootDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddedAssetSearchRootDelegate);
  *(undefined4 *)&(this->AssetPathRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AssetPathRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetPathRedirects);
  *(undefined4 *)&(this->PrimaryAssetIdRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrimaryAssetIdRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrimaryAssetIdRedirects);
  *(undefined4 *)&(this->PrimaryAssetTypeRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrimaryAssetTypeRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrimaryAssetTypeRedirects);
  pFVar2 = (this->ObjectReferenceList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PrimaryAssetEncryptionKeyCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrimaryAssetEncryptionKeyCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrimaryAssetEncryptionKeyCache);
  DestructItems<UAssetManager::FPendingChunkInstall,int>
            ((FPendingChunkInstall *)(this->PendingChunkInstalls).AllocatorInstance.Data,
             (this->PendingChunkInstalls).ArrayNum);
  pFVar2 = (this->PendingChunkInstalls).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FStreamableManager::~FStreamableManager(&this->StreamableManager);
  DestructItems<FString,int>
            ((FString *)(this->AddedAssetSearchRoots).AllocatorInstance.Data,
             (this->AddedAssetSearchRoots).ArrayNum);
  pFVar2 = (this->AddedAssetSearchRoots).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->AllAssetSearchRoots).AllocatorInstance.Data,
             (this->AllAssetSearchRoots).ArrayNum);
  pFVar2 = (this->AllAssetSearchRoots).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->AlreadyScannedDirectories).AllocatorInstance.Data,
             (this->AlreadyScannedDirectories).ArrayNum);
  pFVar2 = (this->AlreadyScannedDirectories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->WarningInvalidAssets).HashSize = 0;
  FVar3 = (this->WarningInvalidAssets).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FPrimaryAssetId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimaryAssetId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WarningInvalidAssets).Elements);
  *(undefined4 *)&(this->CachedAssetBundles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedAssetBundles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedAssetBundles);
  *(undefined4 *)&(this->CookRuleManagementParentMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CookRuleManagementParentMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CookRuleManagementParentMap);
  *(undefined4 *)&(this->ManagementParentMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ManagementParentMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagementParentMap);
  *(undefined4 *)&(this->AssetRuleOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AssetRuleOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetRuleOverrides);
  *(undefined4 *)&(this->AssetPathMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AssetPathMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPrimaryAssetId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPrimaryAssetId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPrimaryAssetId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetPathMap);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1475ac720

bool __thiscall
`UAssetManager::SearchAssetRegistryPaths'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((*(char *)(*(longlong *)((longlong)this + 0x10) + 0x38) != '\0') &&
     (cVar4 = (**(code **)(**(longlong **)this + 0x480))
                        (*(longlong **)this,param_1,*(longlong *)((longlong)this + 0x10) + 0x88),
     cVar4 == '\0')) {
    return true;
  }
  bVar5 = FCompiledAssetManagerSearchRules::PassesWildcardsAndDelegates
                    (*(FCompiledAssetManagerSearchRules **)((longlong)this + 0x10),param_1,
                     *(UAssetManager **)this);
  if (bVar5) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    if ((((FAssetData *)pFVar2->Data <= param_1) &&
        (param_1 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) &&
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
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar7 * 0x68),param_1);
  }
  return true;
}

// operator() @ 1475acbe0

FString * __thiscall
`UAssetManager::ScanPathsForPrimaryAssets'::__l43::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  FName local_res8;
  FName local_res10;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  lVar1 = *(longlong *)(*(longlong *)this + 0x30);
  if (lVar1 == 0) {
    bVar9 = *(longlong *)((longlong)this + 0x10) == 0;
  }
  else {
    bVar9 = lVar1 == *(longlong *)((longlong)this + 0x10);
  }
  if (!bVar9) {
    if (lVar1 == 0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_res8 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res8,&local_88);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_res10,&local_98);
    }
    ::FString::PrintfImpl(&local_78,L", (BaseClass: \'%s\' != expected: \'%s\')");
    iVar8 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar8);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (*(char *)(*(longlong *)this + 0x38) != *(char *)((longlong)this + 0x18)) {
    ::FString::PrintfImpl(&local_68,L", (bHasBlueprintClasses: \'%d\' != expected: \'%d\')");
    iVar8 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (*(char *)(*(longlong *)this + 0x39) != *(char *)((longlong)this + 0x19)) {
    ::FString::PrintfImpl(&local_58,L", (bIsEditorOnly: \'%d\' != expected: \'%d\')");
    iVar8 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar8);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  iVar8 = (int)(*(longlong **)((longlong)this + 8))[1];
  if (0 < iVar8) {
    puVar5 = (undefined8 *)**(longlong **)((longlong)this + 8);
    iVar3 = 3;
    if (iVar8 < 3) {
      iVar3 = iVar8;
    }
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
    iVar6 = 0;
    iVar3 = iVar6;
    if (0 < iVar8) {
      iVar3 = iVar8;
    }
    if ((iVar3 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    bVar9 = true;
    puVar7 = puVar5 + (longlong)iVar3 * 2;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
      if (bVar9) {
        bVar9 = false;
      }
      else {
        ::FString::AppendChars(&local_a8,L", ",2);
      }
      iVar8 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar8 = iVar6;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)*puVar5,iVar8);
    }
    ::FString::PrintfImpl(&local_48,L", (Paths=%s%s)");
    iVar8 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar8 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar8);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars
            (__return_storage_ptr__,
             L". Another plugin, ini, or system has different parameters for this PrimaryAssetType name. Run with -LogCmds=\"LogAssetManager VeryVerbose\" to log more information."
             ,0xa2);
  return __return_storage_ptr__;
}

// AcquireChunkList @ 1475af680

void __thiscall
UAssetManager::AcquireChunkList
          (UAssetManager *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_2,Type param_3,
          TSharedPtr<FStreamableHandle,1> *param_4)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStreamableHandle *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  IPlatformChunkInstall *pIVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ulong64 *puVar13;
  uint uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  UAssetManager *local_98;
  undefined1 local_90 [8];
  FScriptContainerElement *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  uVar9 = (this->PendingChunkInstalls).ArrayNum;
  piVar1 = &(this->PendingChunkInstalls).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(this->PendingChunkInstalls).AllocatorInstance,piVar1);
  }
  (this->PendingChunkInstalls).ArrayNum = uVar9 + 1;
  uVar14 = 0;
  if ((int)uVar9 < (int)(uVar9 + 1)) {
    uVar14 = ~uVar9 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           ((this->PendingChunkInstalls).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x48);
  if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
    pTVar2[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar2[1].ArrayNum = 0;
    pTVar2[1].ArrayMax = 0;
    pTVar2[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar2[2].ArrayNum = 0;
    pTVar2[2].ArrayMax = 0;
    pTVar2[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar2[3].ArrayNum = 0;
    pTVar2[3].ArrayMax = 0;
    *(undefined4 *)&pTVar2[4].AllocatorInstance.Data = 0;
    this_00 = pTVar2;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this_00 + 3),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_00,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_00 + 1,param_1);
  pTVar5 = (param_4->SharedReferenceCount).ReferenceController;
  pFVar6 = param_4->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = this_00[2].AllocatorInstance.Data;
  pTStack_80 = *(TReferenceControllerBase<1> **)&this_00[2].ArrayNum;
  this_00[2].AllocatorInstance.Data = (FScriptContainerElement *)pFVar6;
  *(TReferenceControllerBase<1> **)&this_00[2].ArrayNum = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  pIVar10 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  if ((this->ChunkInstallDelegateHandle).ID == 0) {
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    pcVar7 = *(code **)((longlong)*pIVar10 + 0x58);
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXI_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUAssetManager____A6AXI_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_98 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_98);
      puVar11[4] = _vcall__1448__flat______;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    puVar13 = (ulong64 *)(*pcVar7)(pIVar10,local_90,&local_78);
    (this->ChunkInstallDelegateHandle).ID = *puVar13;
  }
  pFVar15 = this_00[1].AllocatorInstance.Data;
  iVar4 = this_00[1].ArrayNum;
  pFVar3 = pFVar15 + (longlong)iVar4 * 4;
  while( true ) {
    if (this_00[1].ArrayNum != iVar4) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar3) break;
    (**(code **)((longlong)*pIVar10 + 0x40))(pIVar10,*(undefined4 *)pFVar15,param_3);
    pFVar15 = pFVar15 + 4;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// AcquireResourcesForAssetList @ 1475af930

void __thiscall
UAssetManager::AcquireResourcesForAssetList
          (UAssetManager *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_2,Type param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  TDelegateBase<FNotThreadSafeDelegateMode> local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pcVar1 = *(code **)(this->_padding_ + 0x418);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_50,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_HV__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 3),&local_50);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  (*pcVar1)(this,param_1,&local_68,param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_50);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AcquireResourcesForAssetList @ 1475afa30

void __thiscall
UAssetManager::AcquireResourcesForAssetList
          (UAssetManager *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_2,Type param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong lVar5;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  FDelegateAllocation local_98;
  ForAnyElementType local_88;
  undefined8 local_80;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  undefined8 local_40;
  TSharedPtr<FStreamableHandle,1> local_38;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  (**(code **)(this->_padding_ + 0x408))(this,param_1,&local_58);
  if ((int)local_40 < 1) {
    if ((int)local_50 == 0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      local_a0 = (undefined1  [8])0x0;
      local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_98.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
                 (FWriteAccessScope *)local_c8);
      local_b0.Data = (FScriptContainerElement *)&local_98;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_98);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::`9'::<lambda_2>_>
                   ::_vftable_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + 3),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78);
      }
      if (local_b8._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78);
      local_b8 = 0;
      local_c8._0_8_ = (atomic<unsigned___int64>)0x0;
      local_c8._8_8_ = (atomic<unsigned___int64> *)0x0;
      local_38.Object = (FStreamableHandle *)0x0;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FStreamableHandle::ExecuteDelegate
                ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                  *)local_a0,&local_38,
                 (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                  *)local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_78);
      if (((int)local_b8 != 0) &&
         ((FMRSWRecursiveAccessDetector *)local_c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
        (**(code **)*(atomic<unsigned___int64> *)local_c8._8_8_)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(local_c8 + 8),0,0,0x10);
        local_b8 = local_b8 & 0xffffffff00000000;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if ((FMRSWRecursiveAccessDetector *)local_c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
                 (FWriteAccessScope *)&local_78);
      if ((local_98.DelegateSize != 0) &&
         (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_98,0,0,0x10);
        local_98.DelegateSize = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_98.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_a0);
    }
    else {
      local_38.Object = (FStreamableHandle *)0x0;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pcVar1 = *(code **)(this->_padding_ + 0x5a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      pvVar2 = local_58;
      lVar5 = (longlong)(int)local_50;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = CONCAT44(local_80._4_4_,(int)local_50);
      if ((int)local_50 == 0) {
        local_80 = local_50 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_50,0,&local_88,(int)local_50,(int *)((longlong)&local_80 + 4));
        memcpy(local_88.Data,pvVar2,lVar5 << 2);
      }
      local_c8._0_8_ = (atomic<unsigned___int64>)0x0;
      local_c8._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_78);
      local_60 = (FDelegateAllocation *)(local_c8 + 8);
      puVar3 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)(local_c8 + 8));
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::`11'::<lambda_3>_>
                   ::_vftable_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + 3),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
        puVar3[6] = 0;
        puVar3[6] = local_88.Data;
        local_88.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(puVar3 + 7) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar3 + 0x3c) = local_80._4_4_;
        local_80 = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      (*pcVar1)(this,&local_58,local_c8,param_3,&local_38);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
    }
  }
  else {
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    pvVar2 = local_58;
    lVar5 = (longlong)(int)local_50;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = CONCAT44(local_a8._4_4_,(int)local_50);
    if ((int)local_50 == 0) {
      local_a8 = local_50 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_50,0,&local_b0,(int)local_50,(int *)((longlong)&local_a8 + 4));
      memcpy(local_b0.Data,pvVar2,lVar5 << 2);
    }
    local_a0 = (undefined1  [8])0x0;
    local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_98.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
               (FWriteAccessScope *)&local_78);
    local_60 = &local_98;
    puVar3 = UE::Core::Private::DelegateAllocate(0x40,&local_98);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::`5'::<lambda_1>_>
                 ::_vftable_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      puVar3[6] = 0;
      puVar3[6] = local_b0.Data;
      local_b0.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar3 + 7) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = local_a8._4_4_;
      local_a8 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if ((FDelegateAllocation *)local_b0.Data != (FDelegateAllocation *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    local_b8 = 0;
    local_c8._0_8_ = (atomic<unsigned___int64>)0x0;
    local_c8._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_38.Object = (FStreamableHandle *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FStreamableHandle::ExecuteDelegate
              ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                *)local_a0,&local_38,
               (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_78);
    if (((int)local_b8 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_c8._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_c8 + 8),0,0,0x10);
      local_b8 = local_b8 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if ((FMRSWRecursiveAccessDetector *)local_c8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_c8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
               (FWriteAccessScope *)&local_78);
    if ((local_98.DelegateSize != 0) &&
       (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_98.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_98.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// AcquireResourcesForPrimaryAssetList @ 1475affd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAssetManager::AcquireResourcesForPrimaryAssetList
          (UAssetManager *this,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_2,Type param_3)

{
  void *_Dst;
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this_00;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPrimaryAssetData *pFVar8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  FScriptContainerElement *pFVar13;
  FSoftObjectPath *_Src;
  FSoftObjectPath *pFVar14;
  FPrimaryAssetId *pFVar15;
  int iVar16;
  FName FVar17;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_160;
  uint local_150;
  uint local_14c;
  uint local_148;
  Type local_144;
  FPrimaryAssetId *local_140;
  FSoftObjectPath local_138;
  FScriptContainerElement *local_118;
  UAssetManager *local_110;
  undefined1 local_108 [32];
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *local_e8;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *local_e0;
  FSparseArrayAllocationInfo local_d8;
  FString local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar15 = (FPrimaryAssetId *)(param_1->AllocatorInstance).Data;
  local_148 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_148;
  local_108._24_8_ = pFVar15 + uVar10;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_144 = param_3;
  local_110 = this;
  local_e8 = param_1;
  local_e0 = param_2;
  do {
    while( true ) {
      uVar4 = local_108._24_8_;
      local_140 = pFVar15;
      if (local_e8->ArrayNum != (int)uVar10) {
        `TCheckedPointerIterator<FPrimaryAssetId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      this_00 = local_e0;
      if (pFVar15 == (FPrimaryAssetId *)uVar4) {
        pcVar2 = *(code **)(this->_padding_ + 0x410);
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
        pTVar9 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
                 Array((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                        *)local_98,&local_160);
        (*pcVar2)(this,pTVar9,local_b8,local_144);
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
        if ((FSoftObjectPath *)local_160.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_160.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_50 = 0;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_58);
        }
        TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
        return;
      }
      pFVar8 = GetNameData(this,pFVar15,true);
      if (pFVar8 == (FPrimaryAssetData *)0x0) break;
      if (*(longlong *)&(pFVar8->AssetPtr).field_0x8 != 0) {
        TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
        Emplace<FSoftObjectPath_const_&>
                  ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                   local_98,(FSoftObjectPath *)local_108,(bool *)&(pFVar8->AssetPtr).field_0x8);
      }
      local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.ArrayNum = 0;
      local_160.ArrayMax = 0;
      (**(code **)(this->_padding_ + 0x400))(this,pFVar15,&local_160);
      uVar10 = (ulonglong)local_160.ArrayNum;
      local_14c = local_160.ArrayNum;
      pFVar14 = (FSoftObjectPath *)(local_160.AllocatorInstance.Data + uVar10 * 0x18);
      pFVar13 = local_160.AllocatorInstance.Data + 0x10;
      local_108._16_8_ = pFVar14;
      while( true ) {
        local_118 = pFVar13;
        if (local_160.ArrayNum != (int)uVar10) {
          `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_168);
        }
        if ((FSoftObjectPath *)(pFVar13 + -0x10) == pFVar14) break;
        if ((((FSoftObjectPath *)(pFVar13 + -0x10))->AssetPath).PackageName != (FName)0x0) {
          local_150 = *(uint *)pFVar13;
          uVar10 = (ulonglong)(int)local_150;
          FVar17 = (FName)(((TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)(pFVar13 + -8)
                           )->AllocatorInstance).Data;
          local_108._8_8_ = uVar10 * 0x10 + (longlong)FVar17;
          while( true ) {
            uVar4 = local_108._8_8_;
            _Src = (FSoftObjectPath *)0x0;
            if (*(int *)pFVar13 != (int)uVar10) {
              `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_168);
            }
            pFVar14 = (FSoftObjectPath *)local_108._16_8_;
            if (FVar17 == (FName)uVar4) break;
            local_b8._0_8_ = *(undefined8 *)FVar17;
            local_b8._8_8_ = *(FName *)((longlong)FVar17 + 8);
            local_138.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_138.AssetPath.PackageName.Number = 0;
            local_138.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_138.AssetPath.AssetName.Number = 0;
            local_138.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138.SubPathString.Data.ArrayNum = 0;
            local_138.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_138,(FTopLevelAssetPath *)local_b8);
            if (local_64 == 0) {
              iVar7 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x28,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                                 (int *)(local_98 + 0xc));
              TBitArray<FDefaultBitArrayAllocator>::Add
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
              iVar16 = local_68;
            }
            else {
              local_64 = local_64 + -1;
              iVar16 = *(int *)(local_98._0_8_ + 4 + (longlong)local_68 * 0x28);
              iVar7 = local_68;
              if (local_64 != 0) {
                *(undefined4 *)(local_98._0_8_ + (longlong)iVar16 * 0x28) = 0xffffffff;
              }
            }
            local_68 = iVar16;
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,&local_d8,iVar7);
            iVar16 = local_d8.Index;
            if (local_d8.Pointer != (FSoftObjectPath *)0x0) {
              (local_d8.Pointer)->PackageName = local_138.AssetPath.PackageName;
              (local_d8.Pointer)->AssetName = local_138.AssetPath.AssetName;
              (((FUtf8String *)((longlong)local_d8.Pointer + 0x10))->Data).AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (((FUtf8String *)((longlong)local_d8.Pointer + 0x10))->Data).AllocatorInstance.Data =
                   local_138.SubPathString.Data.AllocatorInstance.Data;
              local_138.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (((FUtf8String *)((longlong)local_d8.Pointer + 0x10))->Data).ArrayNum =
                   local_138.SubPathString.Data.ArrayNum;
              (((FUtf8String *)((longlong)local_d8.Pointer + 0x10))->Data).ArrayMax =
                   local_138.SubPathString.Data.ArrayMax;
              local_138.SubPathString.Data.ArrayNum = 0;
              local_138.SubPathString.Data.ArrayMax = 0;
              (((FSoftObjectPath *)((longlong)local_d8.Pointer + 0x20))->AssetPath).PackageName.
              ComparisonIndex.Value = 0xffffffff;
              _Src = local_d8.Pointer;
            }
            uVar6 = ::GetTypeHash(_Src);
            if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
              FVar12 = (ForElementType<FSetElementId>)local_60;
              if (local_58 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = local_58;
              }
              for (iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(local_50 - 1U & uVar6) * 4);
                  iVar7 != -1; iVar7 = *(int *)(local_98._0_8_ + 0x20 + (longlong)iVar7 * 0x28)) {
                bVar5 = FSoftObjectPath::operator==
                                  ((FSoftObjectPath *)((longlong)iVar7 * 0x28 + local_98._0_8_),_Src
                                  );
                if (bVar5) {
                  if (iVar7 != -1) {
                    _Dst = (void *)(local_98._0_8_ + (longlong)iVar7 * 0x28);
                    pvVar1 = *(void **)(local_98._0_8_ + 0x10 + (longlong)iVar7 * 0x28);
                    if (pvVar1 != (void *)0x0) {
                      FMemory::Free(pvVar1);
                    }
                    memmove(_Dst,_Src,0x20);
                    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_98,iVar16,1);
                    iVar16 = iVar7;
                  }
                  if (iVar7 != -1) goto LAB_1475b0387;
                  break;
                }
              }
            }
            uVar11 = local_98._8_4_ - local_64;
            if (uVar11 < 4) {
              iVar7 = 1;
            }
            else {
              uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar7 = 1 << ((byte)lVar3 & 0x1f);
            }
            if (((int)uVar11 < 1) || (iVar7 <= local_50)) {
              uVar6 = local_50 - 1U & uVar6;
              _Src[1].AssetPath.PackageName.Number = uVar6;
              FVar12 = (ForElementType<FSetElementId>)local_60;
              if (local_58 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = local_58;
              }
              uVar10 = (longlong)local_50 - 1U & (longlong)(int)uVar6;
              _Src[1].AssetPath.PackageName.ComparisonIndex.Value =
                   *(uint *)((longlong)FVar12 + uVar10 * 4);
              *(int *)((longlong)FVar12 + uVar10 * 4) = iVar16;
            }
            else {
              local_50 = iVar7;
              TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Rehash
                        ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                          *)local_98);
            }
LAB_1475b0387:
            if (local_138.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.SubPathString.Data.AllocatorInstance.Data);
            }
            FVar17 = (FName)((longlong)FVar17 + 0x10);
            uVar10 = (ulonglong)local_150;
            pFVar13 = local_118;
          }
        }
        uVar10 = (ulonglong)local_14c;
        pFVar13 = pFVar13 + 0x18;
      }
      DestructItems<FAssetBundleEntry,int>
                ((FAssetBundleEntry *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
      this = local_110;
      pFVar15 = local_140;
      if ((FSoftObjectPath *)local_160.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
        this = local_110;
        pFVar15 = local_140;
      }
LAB_1475b03e5:
      pFVar15 = pFVar15 + 1;
      uVar10 = (ulonglong)local_148;
    }
    pcVar2 = *(code **)(this->_padding_ + 0x518);
    ::FString::FString(&local_c8,L"AcquireResourcesForPrimaryAssetList failed to find NameData");
    (*pcVar2)(this,pFVar15,&local_c8);
    if (local_c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1475b03e5;
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    pFVar15 = pFVar15 + 1;
    uVar10 = (ulonglong)local_148;
  } while( true );
}

// AddAssetSearchRoot @ 1475b0bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAssetManager::AddAssetSearchRoot(UAssetManager *this,FString *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  FString local_48;
  FDestructionSentinel local_38;
  
  GetNormalizedPackagePath(&local_48,param_1,false);
  pTVar3 = &this->AllAssetSearchRoots;
  pFVar15 = (pTVar3->AllocatorInstance).Data;
  pFVar17 = pFVar15 + (longlong)(this->AllAssetSearchRoots).ArrayNum * 0x10;
  uVar13 = local_48.Data._8_8_;
  if (pFVar15 != pFVar17) {
    do {
      iVar11 = *(int *)(pFVar15 + 8);
      if (iVar11 == (int)uVar13) {
        if (1 < iVar11) {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)pFVar15,(wchar_t *)local_48.Data.AllocatorInstance.Data);
          bVar18 = iVar11 == 0;
          uVar13 = local_48.Data._8_8_;
          goto LAB_1475b0c4b;
        }
LAB_1475b0d2b:
        if (1 < (byte)LogAssetManager._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        }
        goto LAB_1475b0f63;
      }
      bVar18 = iVar11 + (int)uVar13 == 1;
LAB_1475b0c4b:
      if (bVar18) goto LAB_1475b0d2b;
      pFVar15 = pFVar15 + 0x10;
    } while (pFVar15 != pFVar17);
    pFVar15 = (pTVar3->AllocatorInstance).Data;
  }
  if (((pFVar15 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar15 + (longlong)(this->AllAssetSearchRoots).ArrayMax * 0x10)) &&
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
  iVar11 = (this->AllAssetSearchRoots).ArrayNum;
  piVar1 = &(this->AllAssetSearchRoots).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar1);
  }
  iVar8 = local_48.Data.ArrayNum;
  FVar7.Data = local_48.Data.AllocatorInstance.Data;
  (this->AllAssetSearchRoots).ArrayNum = iVar11 + 1;
  pFVar15 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  *(undefined8 *)pFVar15 = 0;
  *(int *)(pFVar15 + 8) = local_48.Data.ArrayNum;
  if (local_48.Data.ArrayNum == 0) {
    *(int *)(pFVar15 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_48.Data.ArrayNum,
               (int *)(pFVar15 + 0xc));
    memcpy(*(void **)pFVar15,FVar7.Data,(longlong)iVar8 * 2);
  }
  pTVar3 = &this->AddedAssetSearchRoots;
  pFVar15 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar15 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar15 + (longlong)(this->AddedAssetSearchRoots).ArrayMax * 0x10)) &&
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
  iVar11 = (this->AddedAssetSearchRoots).ArrayNum;
  piVar1 = &(this->AddedAssetSearchRoots).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar1);
  }
  FVar7.Data = local_48.Data.AllocatorInstance.Data;
  (this->AddedAssetSearchRoots).ArrayNum = iVar11 + 1;
  pFVar15 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  *(undefined8 *)pFVar15 = 0;
  *(int *)(pFVar15 + 8) = local_48.Data.ArrayNum;
  if (local_48.Data.ArrayNum == 0) {
    *(int *)(pFVar15 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_48.Data.ArrayNum,
               (int *)(pFVar15 + 0xc));
    memcpy(*(void **)pFVar15,FVar7.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnAddedAssetSearchRootDelegate,(FWriteAccessScope *)&local_38);
  puVar2 = &(this->OnAddedAssetSearchRootDelegate).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  bVar18 = false;
  uVar14 = *(int *)&(this->OnAddedAssetSearchRootDelegate).field_0x10 - 1;
  if (-1 < (int)uVar14) {
    lVar16 = (longlong)(int)uVar14 << 4;
    bVar18 = false;
    do {
      uVar12 = 0;
      if ((int)uVar14 < *(int *)&(this->OnAddedAssetSearchRootDelegate).field_0x10) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->OnAddedAssetSearchRootDelegate).field_0x8;
      if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
          (plVar5 = *(longlong **)(lVar4 + lVar16), plVar5 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar5 + 0x68))(), cVar10 == '\0')) {
        bVar18 = true;
      }
      lVar16 = lVar16 + -0x10;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  puVar2 = &(this->OnAddedAssetSearchRootDelegate).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + -1;
  if (bVar18) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnAddedAssetSearchRootDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
LAB_1475b0f63:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// AddDynamicAsset @ 1475b1740

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAssetManager::AddDynamicAsset
          (UAssetManager *this,FPrimaryAssetId *param_1,FSoftObjectPath *param_2,
          FAssetBundleData *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TSoftClassPtr<UObject> *pTVar3;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *this_00;
  FName FVar4;
  FAssetBundleEntry *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char *pcVar9;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar10;
  FPrimaryAssetTypeData *pFVar11;
  FPrimaryAssetData *pFVar12;
  atomic<unsigned_char> *paVar13;
  FPrimaryAssetTypeData *pFVar14;
  int iVar15;
  int local_res10;
  FName local_f0;
  TSharedPtr<FPrimaryAssetTypeData,1> local_e8;
  TSharedPtr<FAssetBundleData,1> local_d8;
  TRawPtrProxy<FPrimaryAssetTypeData> local_c8 [2];
  FPrimaryAssetTypeData *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FString local_a8;
  FName *local_98;
  FPrimaryAssetTypeData **local_90;
  FString local_88;
  FString local_78;
  undefined1 local_68 [24];
  void *local_50;
  
  pFVar14 = (FPrimaryAssetTypeData *)0x0;
  FVar4 = (param_1->PrimaryAssetType).Name;
  if ((FVar4 == (FName)0x0) || (param_1->PrimaryAssetName == (FName)0x0)) {
    pcVar9 = "PrimaryAssetId.IsValid()";
    iVar15 = 0x6a4;
    paVar13 = &bGEnsureHasExecuted<_1539323056344791388>;
  }
  else if (((param_2->AssetPath).PackageName == (FName)0x0) ||
          ((param_2->SubPathString).Data.ArrayNum < 2)) {
    this_00 = &this->AssetTypeMap;
    local_f0 = FVar4;
    pTVar10 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
              ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                      *)this_00,FVar4);
    if (pTVar10 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
      pFVar11 = ::operator_new(0x1c8);
      local_c8[0].Object = pFVar14;
      if (pFVar11 != (FPrimaryAssetTypeData *)0x0) {
        FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(&pFVar11->Info);
        *(undefined8 *)&(pFVar11->DeferredAssetScanPaths).Elements = 0;
        *(undefined8 *)&(pFVar11->DeferredAssetScanPaths).Elements.field_0x8 = 0;
        *(undefined8 *)&(pFVar11->DeferredAssetScanPaths).Elements.field_0x20 = 0;
        *(undefined4 *)&(pFVar11->DeferredAssetScanPaths).Elements.field_0x28 = 0;
        *(undefined4 *)&(pFVar11->DeferredAssetScanPaths).Elements.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar11->DeferredAssetScanPaths).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar11->DeferredAssetScanPaths).Elements.field_0x34 = 0;
        *(undefined8 *)&(pFVar11->DeferredAssetScanPaths).Hash.SecondaryData.field_0x0 = 0;
        (pFVar11->DeferredAssetScanPaths).HashSize = 0;
        *(undefined8 *)&(pFVar11->AdditionalAssetScanPaths).Elements = 0;
        *(undefined8 *)&(pFVar11->AdditionalAssetScanPaths).Elements.field_0x8 = 0;
        *(undefined8 *)&(pFVar11->AdditionalAssetScanPaths).Elements.field_0x20 = 0;
        *(undefined4 *)&(pFVar11->AdditionalAssetScanPaths).Elements.field_0x28 = 0;
        *(undefined4 *)&(pFVar11->AdditionalAssetScanPaths).Elements.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar11->AdditionalAssetScanPaths).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar11->AdditionalAssetScanPaths).Elements.field_0x34 = 0;
        *(undefined8 *)&(pFVar11->AdditionalAssetScanPaths).Hash.SecondaryData.field_0x0 = 0;
        (pFVar11->AdditionalAssetScanPaths).HashSize = 0;
        *(undefined8 *)&(pFVar11->RealAssetScanPaths).Elements = 0;
        *(undefined8 *)&(pFVar11->RealAssetScanPaths).Elements.field_0x8 = 0;
        *(undefined8 *)&(pFVar11->RealAssetScanPaths).Elements.field_0x20 = 0;
        *(undefined4 *)&(pFVar11->RealAssetScanPaths).Elements.field_0x28 = 0;
        *(undefined4 *)&(pFVar11->RealAssetScanPaths).Elements.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar11->RealAssetScanPaths).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar11->RealAssetScanPaths).Elements.field_0x34 = 0;
        (pFVar11->RealAssetScanPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        (pFVar11->RealAssetScanPaths).HashSize = 0;
        *(undefined8 *)&pFVar11->AssetMap = 0;
        *(undefined8 *)&(pFVar11->AssetMap).field_0x8 = 0;
        *(undefined8 *)&(pFVar11->AssetMap).field_0x20 = 0;
        *(undefined4 *)&(pFVar11->AssetMap).field_0x28 = 0;
        *(undefined4 *)&(pFVar11->AssetMap).field_0x2c = 0x80;
        *(undefined4 *)&(pFVar11->AssetMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar11->AssetMap).field_0x34 = 0;
        *(undefined8 *)&(pFVar11->AssetMap).field_0x40 = 0;
        *(undefined4 *)&(pFVar11->AssetMap).field_0x48 = 0;
        local_c8[0].Object = pFVar11;
      }
      TSharedPtr<FPrimaryAssetTypeData,1>::
      TSharedPtr<FPrimaryAssetTypeData,1><FPrimaryAssetTypeData>(&local_e8,local_c8);
      pFVar11 = local_e8.Object;
      FVar4 = local_f0;
      if ((local_e8.Object == (FPrimaryAssetTypeData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      (pFVar11->Info).PrimaryAssetType = FVar4;
      local_b8 = local_e8.Object;
      pTStack_b0 = local_e8.SharedReferenceCount.ReferenceController;
      (pFVar11->Info).bIsDynamicAsset = true;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_e8.Object == (FPrimaryAssetTypeData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      local_98 = &local_f0;
      local_90 = &local_b8;
      TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FPrimaryAssetTypeData,1>_&&>_>
                ((TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<FName_const_&,TSharedRef<FPrimaryAssetTypeData,1>_&&> *)
                 &local_res10,(bool *)&local_98);
      pTVar10 = (TSharedRef<FPrimaryAssetTypeData,1> *)
                (*(longlong *)&this_00->field_0x0 + (longlong)local_res10 * 0x20 + 8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      if ((pTVar10 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FoundType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                             ,0x6bb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar11 = pTVar10->Object;
    if ((pFVar11->Info).bIsDynamicAsset != false) {
      pFVar12 = TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
                ::Find((TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
                        *)&pFVar11->AssetMap,param_1->PrimaryAssetName);
      if (((pFVar12 != (FPrimaryAssetData *)0x0) &&
          (bVar7 = FSoftObjectPath::operator==
                             ((FSoftObjectPath *)&(pFVar12->AssetPtr).field_0x8,param_2), !bVar7))
         && (2 < (byte)LogAssetManager._0_1_)) {
        FSoftObjectPath::ToString(param_2,&local_78);
        FSoftObjectPath::ToString((FSoftObjectPath *)&(pFVar12->AssetPtr).field_0x8,&local_a8);
        FPrimaryAssetId::ToString(param_1,&local_88);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      local_68._0_8_ = 0;
      FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_68 + 8),param_2);
      FPrimaryAssetTypeData::FindOrAddAsset
                (pFVar11,param_1->PrimaryAssetName,(FSoftObjectPtr *)local_68,param_2,
                 &this->AssetPathMap);
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      if (0 < (param_3->Bundles).ArrayNum) {
        pFVar11 = ::operator_new(0x20);
        if (pFVar11 == (FPrimaryAssetTypeData *)0x0) {
          local_d8.Object = ___xmm_00000000000000000000000000000010;
          local_d8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)_UNK_150651568;
        }
        else {
          *(undefined4 *)&(pFVar11->Info).AssetBaseClass.SoftObjectPtr = 1;
          puVar1 = &(pFVar11->Info).AssetBaseClass.SoftObjectPtr.field_0x8;
          *(undefined4 *)&(pFVar11->Info).AssetBaseClass.SoftObjectPtr.field_0x4 = 1;
          (pFVar11->Info).PrimaryAssetType =
               (FName)&
                      ___7__TIntrusiveReferenceController_UFAssetBundleData___00_SharedPointerInternals__6B_
          ;
          puVar2 = &(pFVar11->Info).AssetBaseClass.SoftObjectPtr.field_0x14;
          *(undefined8 *)puVar1 = 0;
          iVar15 = (param_3->Bundles).ArrayNum;
          pFVar5 = (FAssetBundleEntry *)(param_3->Bundles).AllocatorInstance.Data;
          *(int *)&(pFVar11->Info).AssetBaseClass.SoftObjectPtr.field_0x10 = iVar15;
          if (iVar15 == 0) {
            *(undefined4 *)puVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar15,0,(ForAnyElementType *)puVar1,iVar15,(int *)puVar2);
            ConstructItems<FAssetBundleEntry,FAssetBundleEntry,int>(*(void **)puVar1,pFVar5,iVar15);
          }
          puVar1 = &(pFVar11->Info).AssetBaseClass.SoftObjectPtr.field_0x8;
          if ((puVar1 == (undefined1 *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          LOCK();
          pTVar3 = &(pFVar11->Info).AssetBaseClass;
          *(int *)&pTVar3->SoftObjectPtr = *(int *)&pTVar3->SoftObjectPtr + 1;
          UNLOCK();
          pFVar14 = pFVar11;
          local_d8.Object = (FAssetBundleData *)puVar1;
          local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11
          ;
        }
        TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
        ::Emplace<FPrimaryAssetId_const_&,TSharedPtr<FAssetBundleData,1>_>
                  ((TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
                    *)&this->CachedAssetBundles,param_1,&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        return true;
      }
      if (pFVar12 != (FPrimaryAssetData *)0x0) {
        TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
        ::Remove((TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
                  *)&this->CachedAssetBundles,param_1);
      }
      return true;
    }
    pcVar9 = "TypeData.Info.bIsDynamicAsset";
    iVar15 = 0x6c0;
    paVar13 = &bGEnsureHasExecuted<_1539323056344791360>;
  }
  else {
    pcVar9 = "AssetPath.IsNull() || AssetPath.IsAsset()";
    iVar15 = 0x6a9;
    paVar13 = &bGEnsureHasExecuted<_1539323056344791383>;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                     ,iVar15,pcVar9);
  if (!bVar7) {
    return false;
  }
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return (bool)uVar8;
}

// ApplyCustomPrimaryAssetRulesOverride @ 1475b3000

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
UAssetManager::ApplyCustomPrimaryAssetRulesOverride
          (UAssetManager *this,FPrimaryAssetRulesCustomOverride *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  (**(code **)(this->_padding_ + 0x358))(this,(param_1->PrimaryAssetType).Name,&local_48,0);
  iVar3 = (int)local_40;
  uVar5 = (ulonglong)(int)local_40;
  puVar7 = local_48 + uVar5 * 2;
  puVar6 = local_48;
  while( true ) {
    if ((int)uVar5 != iVar3) {
      `TCheckedPointerIterator<FPrimaryAssetId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar6 == puVar7) break;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    local_38 = uVar1;
    uStack_30 = uVar2;
    cVar4 = (**(code **)(this->_padding_ + 0x580))(this,&local_38,param_1);
    if (cVar4 != '\0') {
      local_38 = uVar1;
      uStack_30 = uVar2;
      (**(code **)(this->_padding_ + 0x438))(this,&local_38,&param_1->Rules);
    }
    uVar5 = local_40 & 0xffffffff;
    puVar6 = puVar6 + 2;
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// BeginDestroy @ 1475b5320

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall UAssetManager::BeginDestroy(UAssetManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  UObject::BeginDestroy((UObject *)this);
  iVar11 = 0;
  puVar1 = &(this->AssetTypeMap).field_0x10;
  iVar3 = *(int *)&(this->AssetTypeMap).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->AssetTypeMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475b53cd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1475b53cd:
  uVar10 = *(uint *)&(this->AssetTypeMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AssetTypeMap).field_0x8 -
                       *(int *)&(this->AssetTypeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->AssetTypeMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475b54d0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1475b54d0:
  while( true ) {
    if (*(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FPrimaryAssetTypeData::ResetAssets
              (*(FPrimaryAssetTypeData **)
                ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->AssetTypeMap),
               &this->AssetPathMap);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// CallOrRegister_OnAssetManagerCreated @ 1475b6ef0

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

void __cdecl
UAssetManager::CallOrRegister_OnAssetManagerCreated
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_res10;
  FReadAccessScope local_28;
  
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->AssetManager).field0_0x0.DebugPtr != (UAssetManager *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    if (*(int *)&param_1->field_0x10 != 0) {
      (**(code **)(**(longlong **)&param_1->field_0x8 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return;
    }
    (**(code **)(_DAT_00000000 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnAssetManagerCreatedDelegate,
             &local_res10);
  return;
}

// CallOrRegister_OnCompletedInitialScan @ 1475b6f80

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

void __cdecl
UAssetManager::CallOrRegister_OnCompletedInitialScan
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  char cVar1;
  UAssetManager *pUVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_res10;
  FReadAccessScope local_28;
  
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->AssetManager).field0_0x0.DebugPtr != (UAssetManager *)0x0)) {
    pUVar2 = Get();
    cVar1 = (**(code **)(pUVar2->_padding_ + 0x2f0))(pUVar2);
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
      if (*(int *)&param_1->field_0x10 != 0) {
        (**(code **)(**(longlong **)&param_1->field_0x8 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return;
    }
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnCompletedInitialScanDelegate,
             &local_res10);
  return;
}

// CallPreGarbageCollect @ 1475b7020

void __thiscall UAssetManager::CallPreGarbageCollect(UAssetManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001475b7023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x558))();
  return;
}

// ChangeBundleStateForMatchingPrimaryAssets @ 1475b7440

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::ChangeBundleStateForMatchingPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,FAssetManagerLoadParams *param_3,
          FSourceLocation *param_4)

{
  bool bVar1;
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> local_78;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  ulonglong local_58;
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68 = (undefined1  [8])0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_50._0_8_ = (FScriptContainerElement *)0x0;
  local_50._8_8_ = (TReferenceControllerBase<1> *)0x0;
  bVar1 = GetPrimaryAssetsWithBundleState
                    (this,&local_78,
                     (TArray<FPrimaryAssetType,TSizedDefaultAllocator<32>_> *)local_50,param_2,
                     (TArray<FName,TSizedDefaultAllocator<32>_> *)local_68,false);
  if ((atomic<unsigned___int64>)local_68 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if (bVar1) {
    local_38._0_4_ = (param_4->Impl)._Line;
    local_38._4_4_ = (param_4->Impl)._Column;
    local_38._8_4_ = *(undefined4 *)&(param_4->Impl)._File;
    local_38._12_4_ = *(undefined4 *)((longlong)&(param_4->Impl)._File + 4);
    local_38._16_8_ = (param_4->Impl)._Function;
    (**(code **)(this->_padding_ + 0x3b8))
              (this,__return_storage_ptr__,&local_78,param_1,param_2,0,param_3,local_38);
  }
  else {
    local_58 = 0;
    local_68 = (undefined1  [8])0x0;
    local_50._0_8_ = (FScriptContainerElement *)0x0;
    local_50._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    FStreamableHandle::ExecuteDelegate
              (&param_3->OnComplete,(TSharedPtr<FStreamableHandle,1> *)local_50,
               (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)local_38);
    if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = local_58 & 0xffffffff00000000;
    }
    if (local_38[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(local_38._12_4_,local_38._8_4_),
                 (FDestructionSentinel *)local_38);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ChangeBundleStateForMatchingPrimaryAssets @ 1475b75e0

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::ChangeBundleStateForMatchingPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,int param_4,
          FSourceLocation *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_b8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  int local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_40,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_b8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_90.Data = pFVar2;
  local_88 = iVar1;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)local_b8);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  local_50 = param_4;
  local_b8._0_4_ = (param_5->Impl)._Line;
  local_b8._4_4_ = (param_5->Impl)._Column;
  local_b8._8_4_ = *(undefined4 *)&(param_5->Impl)._File;
  local_b8._12_4_ = *(undefined4 *)((longlong)&(param_5->Impl)._File + 4);
  local_b8._16_8_ = (param_5->Impl)._Function;
  (**(code **)(this->_padding_ + 0x3c8))
            (this,__return_storage_ptr__,param_1,param_2,&local_98,local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)local_b8);
  if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_b8);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return __return_storage_ptr__;
}

// ChangeBundleStateForPrimaryAssets @ 1475b78f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::ChangeBundleStateForPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          FAssetManagerLoadParams *param_5,FSourceLocation *param_6)

{
  char *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  undefined8 uVar5;
  char *pcVar6;
  FPrimaryAssetData *pFVar7;
  FAssetManagerDownloadParams FVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  TSharedPtr<FStreamableHandle,1> *pTVar14;
  ForElementType<FName> FVar15;
  TSharedPtr<FStreamableHandle,1> *pTVar16;
  FAssetManagerDownloadParams *pFVar17;
  FName *pFVar18;
  FStreamableHandle *pFVar19;
  uchar *puVar20;
  void *pvVar21;
  FString *pFVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulong64 uVar25;
  FMRSWRecursiveAccessDetector *this_00;
  ForElementType<FName> FVar26;
  FDestructionSentinel *pFVar27;
  FIdentityFunctor FVar28;
  uint uVar29;
  ushort uVar30;
  FPrimaryAssetId *pFVar31;
  uint *puVar32;
  longlong lVar33;
  FName *pFVar34;
  FPrimaryAssetLoadState *pFVar35;
  uint uVar36;
  uint uVar37;
  FPrimaryAssetId *pFVar38;
  ForElementType<FName> FVar39;
  undefined1 auStackY_1058 [32];
  FIdentityFunctor local_1008;
  undefined1 local_1007;
  undefined1 local_1006;
  undefined1 local_1005;
  undefined1 local_1004 [4];
  ForAnyElementType local_1000;
  undefined8 local_ff8;
  FPrimaryAssetId *local_ff0;
  UAssetManager *local_fe8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_fe0;
  TSharedPtr<FStreamableHandle,1> local_fc8;
  undefined1 local_fb8 [8];
  FAssetManagerLoadParams *local_fb0;
  FAssetManagerDownloadParams local_fa8;
  int local_fa4;
  FPrimaryAssetId *local_fa0;
  ForElementType<FName> local_f98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f90;
  ForAnyElementType local_f88;
  int local_f80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f78;
  ForAnyElementType FStack_f70;
  int local_f68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f60;
  ForAnyElementType FStack_f58;
  int local_f50;
  int local_f48;
  FAssetManagerDownloadParams local_f44;
  undefined1 local_f40;
  FPrimaryAssetData *local_f38;
  undefined8 local_f30;
  FSharedReferencer<1> FStack_f28;
  FString local_f20;
  undefined8 local_f10;
  FSharedReferencer<1> FStack_f08;
  FAssetManagerDownloadParams local_f00;
  char local_efc;
  uint local_ef8;
  FAssetManagerDownloadParams local_ef4;
  uint local_ef0;
  undefined8 local_eec;
  undefined8 local_ee4;
  FSourceLocation *local_ed8;
  TSharedPtr<FStreamableHandle,1> *local_ed0;
  uint local_ec8 [2];
  TSharedPtr<FStreamableHandle,1> *local_ec0;
  uint local_eb8 [2];
  FSoftObjectPath local_eb0;
  undefined1 local_e90 [8];
  FDelegateAllocation local_e88;
  undefined1 local_e78 [8];
  FDelegateAllocation local_e70;
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *local_e60;
  ForElementType<FName> local_e58;
  FString local_e50;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_e40;
  UAssetManager *local_e38;
  longlong local_e30;
  FName *local_e28;
  undefined8 local_e20;
  UAssetManager *local_e18;
  TSharedPtr<FStreamableHandle,1> *local_e10;
  FStreamableAsyncLoadParams local_e08;
  ForElementType<FName> local_d88;
  uint uStack_d80;
  undefined4 uStack_d7c;
  FString local_d78;
  TSharedPtr<FStreamableHandle,1> *local_d68;
  int iStack_d60;
  undefined4 uStack_d5c;
  FDestructionSentinel local_d58;
  FDestructionSentinel local_d40;
  FDestructionSentinel local_d28;
  FDestructionSentinel local_d10;
  FDestructionSentinel local_cf8;
  FDestructionSentinel local_ce0;
  FDestructionSentinel local_cc8;
  FDelegateAllocation *local_cb0;
  FDestructionSentinel local_ca8;
  FDelegateAllocation *local_c90;
  FString local_c88;
  TArrayView<FName_const_,int> local_c78;
  TSharedPtr<FStreamableHandle,1> local_c68;
  FPrimaryAssetId local_c58;
  TSharedPtr<FStreamableHandle,1> local_c48;
  TArrayView<TSharedPtr<FStreamableHandle,1>_const_,int> local_c38;
  undefined8 local_c28;
  char *pcStack_c20;
  char *local_c18;
  source_location local_c08;
  FTopLevelAssetPath local_be8;
  FString local_bd8;
  FString local_bc8;
  ForElementType<FName> local_bb8;
  uint local_ab0;
  int local_aac;
  TStringBuilderBase<wchar_t> local_aa8;
  wchar_t local_a88 [256];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1024];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_1058;
  pFVar31 = (FPrimaryAssetId *)(param_1->AllocatorInstance).Data;
  local_ed8 = param_6;
  local_ef8 = param_1->ArrayNum;
  uVar13 = (ulonglong)(int)local_ef8;
  pFVar38 = pFVar31 + uVar13;
  local_fb0 = param_5;
  local_1000.Data = (FScriptContainerElement *)0x0;
  local_ff8 = 0;
  FVar28 = local_1008;
  iVar12 = 0;
  local_ff0 = pFVar38;
  local_fe8 = this;
  local_e60 = param_1;
  local_e40 = param_2;
  local_e10 = __return_storage_ptr__;
  do {
    local_fa0 = pFVar31;
    if (local_e60->ArrayNum != (int)uVar13) {
      local_1008 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FPrimaryAssetId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1008);
    }
    if (pFVar31 == pFVar38) {
      local_e08.TargetsToStream.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e08.OnComplete._16_4_ = 0;
      local_e08.OnCancel._16_4_ = 0;
      local_e08.OnUpdate._16_4_ = 0;
      local_e08.Priority = 0;
      local_e08.OnComplete._0_8_ = 0;
      local_e08.OnComplete._8_8_ = 0;
      local_e08.TargetsToStream.ArrayNum = 0;
      local_e08.TargetsToStream.ArrayMax = 0;
      local_e08.OnCancel._0_8_ = 0;
      local_e08.OnCancel._8_8_ = 0;
      local_e08.bManageActiveHandle = false;
      local_e08.bStartStalled = false;
      local_e08.OnUpdate._0_8_ = 0;
      local_e08.OnUpdate._8_8_ = 0;
      local_e08.DownloadParams.bIsSet = false;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e08.OnComplete,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e08.OnCancel,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_5->OnCancel);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e08.OnUpdate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_5->OnUpdate);
      uVar5._0_4_ = (local_ed8->Impl)._Line;
      uVar5._4_4_ = (local_ed8->Impl)._Column;
      pcVar6 = (local_ed8->Impl)._File;
      pcVar1 = (local_ed8->Impl)._Function;
      pFVar22 = ::FString::FString(&local_bc8,&FStreamableHandle::HandleDebugName_CombinedHandle);
      iStack_d60 = (int)local_ff8;
      local_d68 = (TSharedPtr<FStreamableHandle,1> *)local_1000.Data;
      if (((int)local_ff8 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
        return pTVar16;
      }
      pTVar16 = local_e10;
      local_c38._12_4_ = uStack_d5c;
      local_c38.ArrayNum = iStack_d60;
      local_c38.DataPtr = local_d68;
      local_c08._0_8_ = uVar5;
      local_c08._File = pcVar6;
      local_c08._Function = pcVar1;
      FStreamableManager::CreateCombinedHandle
                (&this->StreamableManager,local_e10,&local_c38,pFVar22,None,&local_e08,
                 (FSourceLocation *)&local_c08);
      if (local_e08.DownloadParams.bIsSet != false) {
        FStreamableDownloadCachePin::~FStreamableDownloadCachePin
                  ((FStreamableDownloadCachePin *)&local_e08.DownloadParams);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e08.OnUpdate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e08.OnCancel);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e08.OnComplete);
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_e08.TargetsToStream.AllocatorInstance.Data,
                 local_e08.TargetsToStream.ArrayNum);
      if ((FSoftObjectPath *)local_e08.TargetsToStream.AllocatorInstance.Data !=
          (FSoftObjectPath *)0x0) {
        FMemory::Free(local_e08.TargetsToStream.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FStreamableHandle,1>,int>
                ((TSharedPtr<FStreamableHandle,1> *)local_1000.Data,(int)local_ff8);
      if ((TSharedPtr<FStreamableHandle,1> *)local_1000.Data !=
          (TSharedPtr<FStreamableHandle,1> *)0x0) {
        FMemory::Free(local_1000.Data);
      }
      return pTVar16;
    }
    local_fa4 = iVar12 + 1;
    if (499 < local_fa4) {
      local_fa4 = 0;
      FMoviePlayerProxy::BlockingTick();
    }
    local_f38 = GetNameData(this,pFVar31,true);
    if (local_f38 == (FPrimaryAssetData *)0x0) {
      pcVar3 = *(code **)(this->_padding_ + 0x518);
      ::FString::FString(&local_d78,L"ChangeBundleStateForPrimaryAssets failed to find NameData");
      (*pcVar3)(this,local_fa0,&local_d78);
      if (local_d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d78.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_ab0 = 0;
      local_bb8.SecondaryData = (ForElementType<FName>)0x0;
      local_aac = 0x20;
      if (!param_4) {
        pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(local_f38->PendingState).Storage;
        pTVar14 = &FPrimaryAssetLoadState::InvalidHandle;
        if (pTVar16 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
          pTVar14 = pTVar16;
        }
        pFVar19 = pTVar14->Object;
        if (((pFVar19 == (FStreamableHandle *)0x0) || (pFVar19->bCanceled != false)) ||
           (pFVar19->bReleased != false)) {
          if ((local_f38->CurrentState).Storage == (uchar *)0x0) {
            local_ec0 = (TSharedPtr<FStreamableHandle,1> *)0x0;
            local_eb8[0] = 0;
          }
          else {
            uVar30 = (local_f38->CurrentState).NumBundleNames;
            local_ec0 = (TSharedPtr<FStreamableHandle,1> *)
                        FPrimaryAssetLoadState::GetBundleNamesInternal(&local_f38->CurrentState);
            local_eb8[0] = (uint)uVar30;
          }
          puVar32 = local_eb8;
          pTVar16 = local_ec0;
        }
        else if (pTVar16 == (TSharedPtr<FStreamableHandle,1> *)0x0) {
          local_ed0 = (TSharedPtr<FStreamableHandle,1> *)0x0;
          local_ec8[0] = 0;
          puVar32 = local_ec8;
          pTVar16 = (TSharedPtr<FStreamableHandle,1> *)0x0;
        }
        else {
          puVar32 = local_ec8;
          local_ed0 = pTVar16 + 1;
          local_ec8[0] = (uint)(local_f38->PendingState).NumBundleNames;
          pTVar16 = local_ed0;
        }
        uVar36 = *puVar32;
        local_ab0 = uVar36;
        if ((uVar36 == 0) && (local_aac == 0)) {
          local_aac = 0x20;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,uVar36,local_aac,&local_bb8,uVar36,&local_aac);
          FVar39 = (ForElementType<FName>)&local_bb8;
          if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar39 = local_bb8.SecondaryData;
          }
          if (uVar36 != 0) {
            memcpy((void *)FVar39,pTVar16,(longlong)(int)uVar36 << 3);
          }
        }
        local_ef0 = param_3->ArrayNum;
        uVar13 = (ulonglong)(int)local_ef0;
        local_f98 = (ForElementType<FName>)(param_3->AllocatorInstance).Data;
        FVar39 = (ForElementType<FName>)((longlong)local_f98 + uVar13 * 8);
        FVar26 = local_bb8.SecondaryData;
        local_e58 = FVar39;
        while( true ) {
          if (param_3->ArrayNum != (int)uVar13) {
            local_1007 = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1007);
            FVar26 = local_bb8.SecondaryData;
          }
          FVar28 = local_1008;
          if (local_f98 == FVar39) break;
          FVar15 = (ForElementType<FName>)&local_bb8;
          if (FVar26 != (ForElementType<FName>)0x0) {
            FVar15 = FVar26;
          }
          if ((ulonglong)FVar15 <= (ulonglong)local_f98) {
            FVar15 = (ForElementType<FName>)&local_bb8;
            if (FVar26 != (ForElementType<FName>)0x0) {
              FVar15 = FVar26;
            }
            if (((ulonglong)local_f98 < (ulonglong)((longlong)FVar15 + (longlong)local_aac * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), FVar26 = local_bb8.SecondaryData, bVar10)) {
              pcVar3 = (code *)swi(3);
              pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
              return pTVar16;
            }
          }
          lVar24 = (longlong)(int)local_ab0;
          FVar15 = local_f98;
          if (local_ab0 != 0) {
            FVar39 = (ForElementType<FName>)&local_bb8;
            if (FVar26 != (ForElementType<FName>)0x0) {
              FVar39 = FVar26;
            }
            uVar29 = 0;
            lVar33 = 0;
            bVar10 = *(longlong *)FVar39 != *(longlong *)local_f98;
            uVar36 = 0;
            do {
              lVar33 = lVar33 + 1;
              uVar37 = uVar36 + 1;
              if (lVar33 < lVar24) {
                do {
                  if (bVar10 != (*(longlong *)((longlong)FVar39 + lVar33 * 8) != *(longlong *)FVar15
                                )) break;
                  uVar37 = uVar37 + 1;
                  lVar33 = lVar33 + 1;
                } while (lVar33 < lVar24);
              }
              if (bVar10 != false) {
                if (uVar29 != uVar36) {
                  memmove((void *)((longlong)FVar39 + (longlong)(int)uVar29 * 8),
                          (void *)((longlong)FVar39 + (longlong)(int)uVar36 * 8),
                          (longlong)(int)(uVar37 - uVar36) << 3);
                  FVar15 = local_f98;
                }
                uVar29 = uVar29 + (uVar37 - uVar36);
              }
              bVar10 = (bool)(bVar10 ^ 1);
              uVar36 = uVar37;
            } while (lVar33 < lVar24);
            local_ab0 = uVar29;
            FVar26 = local_bb8.SecondaryData;
            FVar39 = local_e58;
          }
          uVar13 = (ulonglong)local_ef0;
          local_f98 = (ForElementType<FName>)((longlong)FVar15 + 8);
        }
      }
      pTVar9 = local_e40;
      pFVar7 = local_f38;
      pFVar34 = (FName *)(local_e40->AllocatorInstance).Data;
      iVar12 = local_e40->ArrayNum;
      pFVar18 = pFVar34 + iVar12;
      while( true ) {
        if (pTVar9->ArrayNum != iVar12) {
          local_1006 = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1006);
        }
        if (pFVar34 == pFVar18) break;
        TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<FName_const_&>
                  ((TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
                   &local_bb8,pFVar34);
        pFVar34 = pFVar34 + 1;
      }
      FVar39 = (ForElementType<FName>)&local_bb8;
      if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
        FVar39 = local_bb8.SecondaryData;
      }
      AlgoImpl::
      IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
                ((FName *)FVar39,local_ab0,FVar28,(FNameLexicalLess *)local_fb8);
      if ((pFVar7->PendingState).Storage == (uchar *)0x0) {
        pTVar16 = &FPrimaryAssetLoadState::InvalidHandle;
      }
      else {
        pTVar16 = FPrimaryAssetLoadState::GetHandleInternal(&pFVar7->PendingState);
      }
      uVar36 = local_ab0;
      param_5 = local_fb0;
      pFVar19 = pTVar16->Object;
      if (((pFVar19 == (FStreamableHandle *)0x0) || (pFVar19->bCanceled != false)) ||
         (pFVar19->bReleased != false)) {
        if ((pFVar7->CurrentState).Storage == (uchar *)0x0) {
          pTVar16 = &FPrimaryAssetLoadState::InvalidHandle;
        }
        else {
          pTVar16 = FPrimaryAssetLoadState::GetHandleInternal(&pFVar7->CurrentState);
        }
        uVar36 = local_ab0;
        pFVar19 = pTVar16->Object;
        if (((pFVar19 != (FStreamableHandle *)0x0) && (pFVar19->bCanceled == false)) &&
           (pFVar19->bReleased == false)) {
          lVar24 = (longlong)(int)local_ab0;
          FVar39 = (ForElementType<FName>)&local_bb8;
          if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar39 = local_bb8.SecondaryData;
          }
          if (((int)local_ab0 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          if (((pFVar7->CurrentState).NumBundleNames == uVar36) &&
             (bVar10 = (pFVar7->CurrentState).bWithDownloadParams,
             bVar10 == (param_5->DownloadParams).bIsSet)) {
            if (bVar10 != false) {
              pFVar17 = FPrimaryAssetLoadState::GetDownloadParamsInternal(&pFVar7->CurrentState);
              if ((((param_5->DownloadParams).bIsSet == true) &&
                  ((*pFVar17).Priority == (param_5->DownloadParams).TypedValue.Priority)) &&
                 ((*pFVar17).bInstallSoftReferences ==
                  (param_5->DownloadParams).TypedValue.bInstallSoftReferences)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (bVar10) goto LAB_1475b8197;
            }
            if ((pFVar7->CurrentState).Storage == (uchar *)0x0) {
              pFVar18 = (FName *)0x0;
              uVar29 = 0;
            }
            else {
              uVar29 = (uint)(pFVar7->CurrentState).NumBundleNames;
              pFVar18 = FPrimaryAssetLoadState::GetBundleNamesInternal(&pFVar7->CurrentState);
            }
            if (uVar36 == uVar29) {
              if (uVar36 != 0) {
                FVar26 = FVar39;
                do {
                  if (*(longlong *)FVar26 !=
                      *(longlong *)((longlong)pFVar18 + ((longlong)FVar26 - (longlong)FVar39)))
                  goto LAB_1475b814c;
                  lVar24 = lVar24 + -1;
                  FVar26 = (ForElementType<FName>)((longlong)FVar26 + 8);
                } while (lVar24 != 0);
              }
              bVar10 = true;
            }
            else {
LAB_1475b814c:
              bVar10 = false;
            }
            if (bVar10) {
              pFVar38 = local_ff0;
              this = local_fe8;
              if (local_bb8.SecondaryData == (ForElementType<FName>)0x0) goto LAB_1475b7fc0;
              goto LAB_1475b7fb1;
            }
          }
        }
      }
      else {
        lVar24 = (longlong)(int)local_ab0;
        FVar39 = (ForElementType<FName>)&local_bb8;
        if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
          FVar39 = local_bb8.SecondaryData;
        }
        if (((int)local_ab0 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
          return pTVar16;
        }
        if (((pFVar7->PendingState).NumBundleNames == uVar36) &&
           (bVar10 = (pFVar7->PendingState).bWithDownloadParams,
           bVar10 == (param_5->DownloadParams).bIsSet)) {
          if (bVar10 != false) {
            pFVar17 = FPrimaryAssetLoadState::GetDownloadParamsInternal(&pFVar7->PendingState);
            if ((((param_5->DownloadParams).bIsSet == true) &&
                ((*pFVar17).Priority == (param_5->DownloadParams).TypedValue.Priority)) &&
               ((*pFVar17).bInstallSoftReferences ==
                (param_5->DownloadParams).TypedValue.bInstallSoftReferences)) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            if (bVar10) goto LAB_1475b7e51;
          }
          if ((pFVar7->PendingState).Storage == (uchar *)0x0) {
            uVar29 = 0;
            pFVar18 = (FName *)0x0;
          }
          else {
            uVar29 = (uint)(pFVar7->PendingState).NumBundleNames;
            pFVar18 = FPrimaryAssetLoadState::GetBundleNamesInternal(&pFVar7->PendingState);
          }
          if (uVar36 == uVar29) {
            if (uVar36 != 0) {
              FVar26 = FVar39;
              do {
                if (*(longlong *)FVar26 !=
                    *(longlong *)((longlong)pFVar18 + ((longlong)FVar26 - (longlong)FVar39)))
                goto LAB_1475b7e98;
                lVar24 = lVar24 + -1;
                FVar26 = (ForElementType<FName>)((longlong)FVar26 + 8);
              } while (lVar24 != 0);
            }
            bVar10 = true;
          }
          else {
LAB_1475b7e98:
            bVar10 = false;
          }
          puVar20 = (pFVar7->PendingState).Storage;
          if (bVar10) {
            if (puVar20 == (uchar *)0x0) {
              pTVar16 = &FPrimaryAssetLoadState::InvalidHandle;
            }
            else {
              pTVar16 = FPrimaryAssetLoadState::GetHandleInternal(&pFVar7->PendingState);
            }
            if (((local_1000.Data <= pTVar16) &&
                (pTVar16 < (TSharedPtr<FStreamableHandle,1> *)
                           (local_1000.Data + (longlong)local_ff8._4_4_ * 0x10))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar3 = (code *)swi(3);
              pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
              return pTVar16;
            }
            iVar12 = (int)local_ff8;
            if ((int)local_ff8 == local_ff8._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_1000,(int *)((longlong)&local_ff8 + 4));
            }
            local_ff8 = CONCAT44(local_ff8._4_4_,iVar12 + 1);
            *(FStreamableHandle **)&local_1000.Data[(longlong)iVar12 * 0x10].field_0x0 =
                 pTVar16->Object;
            pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
            *(TReferenceControllerBase<1> **)(local_1000.Data + (longlong)iVar12 * 0x10 + 8) =
                 pTVar2;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar38 = local_ff0;
            this = local_fe8;
            if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
LAB_1475b7fb1:
              FMemory::Free((void *)local_bb8.SecondaryData);
              pFVar38 = local_ff0;
              this = local_fe8;
            }
            goto LAB_1475b7fc0;
          }
        }
        else {
LAB_1475b7e51:
          puVar20 = (pFVar7->PendingState).Storage;
        }
        pFVar35 = &pFVar7->PendingState;
        if (puVar20 == (uchar *)0x0) {
          pTVar16 = &FPrimaryAssetLoadState::InvalidHandle;
        }
        else {
          pTVar16 = FPrimaryAssetLoadState::GetHandleInternal(pFVar35);
        }
        pFVar19 = pTVar16->Object;
        if (((pFVar19 != (FStreamableHandle *)0x0) && (pFVar19->bCanceled == false)) &&
           (pFVar19->bReleased == false)) {
          pFVar19 = TSharedPtr<FStreamableHandle,1>::operator->(pTVar16);
          FStreamableHandle::CancelHandle(pFVar19);
        }
        if (pFVar35->Storage == (uchar *)0x0) {
          (pFVar7->PendingState).NumBundleNames = 0;
          (pFVar7->PendingState).bWithDownloadParams = false;
        }
        else {
          FPrimaryAssetLoadState::DestroyStoredItems(pFVar35);
          FMemory::Free(pFVar35->Storage);
          pFVar35->Storage = (uchar *)0x0;
          (pFVar7->PendingState).NumBundleNames = 0;
          (pFVar7->PendingState).bWithDownloadParams = false;
        }
      }
LAB_1475b8197:
      local_fe0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_fe0.ArrayNum = 0;
      local_fe0.ArrayMax = 0;
      if (*(longlong *)&(pFVar7->AssetPtr).field_0x8 != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_fe0.AllocatorInstance,&local_fe0.ArrayMax);
        local_fe0.ArrayNum = iVar12 + 1;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_fe0.AllocatorInstance.Data + (longlong)iVar12 * 0x20),
                   (FSoftObjectPath *)&(pFVar7->AssetPtr).field_0x8);
      }
      uVar36 = local_ab0;
      pFVar31 = local_fa0;
      FVar39 = (ForElementType<FName>)&local_bb8;
      if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
        FVar39 = local_bb8.SecondaryData;
      }
      FVar26 = (ForElementType<FName>)((longlong)FVar39 + (longlong)(int)local_ab0 * 8);
      while( true ) {
        uVar29 = 0;
        if (local_ab0 != uVar36) {
          local_1005 = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1005);
        }
        uVar37 = local_ab0;
        pFVar7 = local_f38;
        pFVar38 = local_fa0;
        FVar28 = local_1008;
        if (FVar39 == FVar26) break;
        (**(code **)(local_fe8->_padding_ + 0x3f8))
                  (local_fe8,&local_e30,pFVar31,*(undefined8 *)FVar39);
        if (local_e30 == 0) {
          if (5 < (byte)LogAssetManager._0_1_) {
            ::FName::ToString((FName *)FVar39,&local_bd8);
            local_aa8.End = (wchar_t *)&local_888;
            local_eec = 0;
            local_aa8.Base = local_a88;
            local_aa8.CurPos = local_a88;
            local_aa8.bIsDynamic = false;
            local_aa8.bIsExternal = false;
            if (((pFVar31->PrimaryAssetType).Name != (FName)0x0) &&
               (pFVar31->PrimaryAssetName != (FName)0x0)) {
              ::FName::AppendString((FName *)pFVar31,&local_aa8);
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_aa8,L":",1);
              ::FName::AppendString(&pFVar31->PrimaryAssetName,&local_aa8);
            }
            ::FString::ConstructFromPtrSize
                      (&local_e50,local_aa8.Base,
                       (int)((longlong)local_aa8.CurPos - (longlong)local_aa8.Base >> 1));
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_aa8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
            if (local_e50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e50.Data.AllocatorInstance.Data);
            }
            if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          iVar12 = (int)local_e20;
          pFVar34 = local_e28 + (longlong)iVar12 * 2;
          pFVar18 = local_e28;
          while( true ) {
            if ((int)local_e20 != iVar12) {
              local_1004[0] = 0;
              `TCheckedPointerIterator<FTopLevelAssetPath,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1004);
            }
            if (pFVar18 == pFVar34) break;
            local_be8.PackageName = *pFVar18;
            local_be8.AssetName = pFVar18[1];
            local_eb0.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_eb0.AssetPath.PackageName.Number = 0;
            local_eb0.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_eb0.AssetPath.AssetName.Number = 0;
            local_eb0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_eb0.SubPathString.Data.ArrayNum = 0;
            local_eb0.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_eb0,&local_be8);
            TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath>
                      (&local_fe0,&local_eb0);
            if (local_eb0.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_eb0.SubPathString.Data.AllocatorInstance.Data);
            }
            pFVar18 = pFVar18 + 2;
          }
        }
        if (local_e28 != (FName *)0x0) {
          FMemory::Free(local_e28);
        }
        FVar39 = (ForElementType<FName>)((longlong)FVar39 + 8);
      }
      if (local_fe0.ArrayNum == 0) {
        pFVar35 = &local_f38->CurrentState;
        bVar10 = (local_fb0->DownloadParams).bIsSet;
        if (bVar10 != false) {
          local_ef4 = (local_fb0->DownloadParams).TypedValue;
        }
        FVar8 = local_ef4;
        FVar39 = (ForElementType<FName>)&local_bb8;
        if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
          FVar39 = local_bb8.SecondaryData;
        }
        if (((int)local_ab0 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
          return pTVar16;
        }
        uVar30 = (ushort)uVar37;
        local_f30 = 0;
        FStack_f28.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (((uVar37 != (uVar37 & 0xffff)) || ((int)uVar37 < 0)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
          return pTVar16;
        }
        puVar20 = pFVar35->Storage;
        if (puVar20 == (uchar *)0x0) {
LAB_1475b8581:
          FMemory::Free(pFVar35->Storage);
          lVar24 = (ulonglong)uVar30 * 8;
          if (bVar10 == false) {
            uVar25 = lVar24 + 0x10;
          }
          else {
            uVar25 = lVar24 + 0x14;
          }
          puVar20 = FMemory::Malloc(uVar25,0);
          pFVar35->Storage = puVar20;
          (pFVar7->CurrentState).NumBundleNames = uVar30;
          (pFVar7->CurrentState).bWithDownloadParams = bVar10;
          *(undefined8 *)puVar20 = local_f30;
          *(TReferenceControllerBase<1> **)(puVar20 + 8) = FStack_f28.ReferenceController;
          FStack_f28.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_f30 = 0;
          if ((pFVar35->Storage == (uchar *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Storage",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                                  ,0x85,L""), bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          puVar20 = pFVar35->Storage;
          if (uVar30 != 0) goto LAB_1475b8611;
        }
        else {
          if ((uVar30 != (pFVar7->CurrentState).NumBundleNames) ||
             (bVar10 != (pFVar7->CurrentState).bWithDownloadParams)) {
            FPrimaryAssetLoadState::DestroyStoredItems(pFVar35);
            goto LAB_1475b8581;
          }
          if (puVar20 != (uchar *)&local_f30) {
            *(undefined8 *)puVar20 = local_f30;
            local_f30 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar20 + 8),&FStack_f28);
          }
          if ((pFVar35->Storage == (uchar *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Storage",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                                  ,0x85,L""), bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          puVar20 = pFVar35->Storage;
LAB_1475b8611:
          memcpy(puVar20 + 0x10,(void *)FVar39,(ulonglong)uVar30 << 3);
        }
        if (bVar10 != false) {
          pFVar17 = FPrimaryAssetLoadState::GetDownloadParamsInternal(pFVar35);
          *pFVar17 = FVar8;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_f28.ReferenceController);
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_fe0.AllocatorInstance.Data,local_fe0.ArrayNum);
        if ((FSoftObjectPath *)local_fe0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_fe0.AllocatorInstance.Data);
        }
        param_5 = local_fb0;
        pFVar38 = local_ff0;
        this = local_fe8;
        if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
          FMemory::Free((void *)local_bb8.SecondaryData);
          param_5 = local_fb0;
          pFVar38 = local_ff0;
          this = local_fe8;
        }
      }
      else {
        local_888.End = (wchar_t *)local_68;
        local_ee4 = 0;
        local_888.Base = local_868;
        local_888.CurPos = local_868;
        local_888.bIsDynamic = false;
        local_888.bIsExternal = false;
        if (((local_fa0->PrimaryAssetType).Name != (FName)0x0) &&
           (local_fa0->PrimaryAssetName != (FName)0x0)) {
          ::FName::AppendString((FName *)local_fa0,&local_888);
          if (local_888.End < local_888.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_888,1);
          }
          pvVar21 = FGenericPlatformString::Memcpy(local_888.CurPos,L":",2);
          local_888.CurPos = (wchar_t *)((longlong)pvVar21 + 2);
          ::FName::AppendString(&pFVar38->PrimaryAssetName,&local_888);
        }
        if (0 < (int)local_ab0) {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_888,L" (",2);
          if (0 < (int)local_ab0) {
            do {
              if (0 < (int)uVar29) {
                if (local_888.End < local_888.CurPos + 2) {
                  TStringBuilderBase<wchar_t>::Extend(&local_888,2);
                }
                pvVar21 = FGenericPlatformString::Memcpy(local_888.CurPos,L", ",4);
                local_888.CurPos = (wchar_t *)((longlong)pvVar21 + 4);
              }
              uVar36 = 0;
              if ((int)uVar29 < (int)local_ab0) {
                uVar36 = ~uVar29 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar3 = (code *)swi(3);
                pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
                return pTVar16;
              }
              FVar39 = (ForElementType<FName>)&local_bb8;
              if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
                FVar39 = local_bb8.SecondaryData;
              }
              ::FName::AppendString
                        ((FName *)((longlong)FVar39 + (longlong)(int)uVar29 * 8),&local_888);
              uVar29 = uVar29 + 1;
            } while ((int)uVar29 < (int)local_ab0);
          }
          if (local_888.End < local_888.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_888,1);
          }
          pvVar21 = FGenericPlatformString::Memcpy(local_888.CurPos,L")",2);
          local_888.CurPos = (wchar_t *)((longlong)pvVar21 + 2);
        }
        param_5 = local_fb0;
        this = local_fe8;
        local_f90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_f88.Data = (FScriptContainerElement *)0x0;
        local_f80 = 0;
        local_f40 = (local_fb0->DownloadParams).bIsSet != false;
        local_f48 = local_fb0->Priority;
        local_f78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_f70.Data = (FScriptContainerElement *)0x0;
        local_f68 = 0;
        local_f60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_f58.Data = (FScriptContainerElement *)0x0;
        local_f50 = 0;
        if ((bool)local_f40) {
          local_f44 = (local_fb0->DownloadParams).TypedValue;
        }
        local_f20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f20.Data.ArrayNum = 0;
        local_f20.Data.ArrayMax = 0;
        pcVar3 = *(code **)(local_fe8->_padding_ + 0x3f0);
        local_c28._0_4_ = (local_ed8->Impl)._Line;
        local_c28._4_4_ = (local_ed8->Impl)._Column;
        pcStack_c20 = (local_ed8->Impl)._File;
        local_c18 = (local_ed8->Impl)._Function;
        pFVar22 = ::FString::ConstructFromPtrSize
                            (&local_c88,local_888.Base,
                             (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1));
        if (&local_f20 != pFVar22) {
          if (local_f20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f20.Data.AllocatorInstance.Data);
          }
          local_f20.Data.AllocatorInstance.Data = (pFVar22->Data).AllocatorInstance.Data;
          (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f20.Data.ArrayNum = (pFVar22->Data).ArrayNum;
          local_f20.Data.ArrayMax = (pFVar22->Data).ArrayMax;
          (pFVar22->Data).ArrayNum = 0;
          (pFVar22->Data).ArrayMax = 0;
        }
        if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c88.Data.AllocatorInstance.Data);
        }
        (*pcVar3)(this,&local_fc8,&local_fe0,&local_f90);
        if (local_f20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f20.Data.AllocatorInstance.Data);
        }
        if (local_fc8.Object == (FStreamableHandle *)0x0) {
LAB_1475b8cd5:
          uVar36 = local_ab0;
          pFVar7 = local_f38;
          bVar10 = (param_5->DownloadParams).bIsSet;
          pFVar35 = &local_f38->PendingState;
          if (bVar10 != false) {
            local_fa8 = (param_5->DownloadParams).TypedValue;
          }
          FVar39 = (ForElementType<FName>)&local_bb8;
          if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar39 = local_bb8.SecondaryData;
          }
          if (((int)local_ab0 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          uVar30 = (ushort)uVar36;
          local_f10 = 0;
          FStack_f08.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (((uVar36 != (uVar36 & 0xffff)) || ((int)uVar36 < 0)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          puVar20 = pFVar35->Storage;
          if (puVar20 == (uchar *)0x0) {
LAB_1475b8df5:
            FMemory::Free(pFVar35->Storage);
            lVar24 = (ulonglong)uVar30 * 8;
            if (bVar10 == false) {
              uVar25 = lVar24 + 0x10;
            }
            else {
              uVar25 = lVar24 + 0x14;
            }
            puVar20 = FMemory::Malloc(uVar25,0);
            pFVar35->Storage = puVar20;
            (pFVar7->PendingState).NumBundleNames = uVar30;
            (pFVar7->PendingState).bWithDownloadParams = bVar10;
            *(undefined8 *)puVar20 = local_f10;
            *(TReferenceControllerBase<1> **)(puVar20 + 8) = FStack_f08.ReferenceController;
            FStack_f08.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_f10 = 0;
            if ((pFVar35->Storage == (uchar *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Storage",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                                    ,0x85,L""), bVar11)) {
              pcVar3 = (code *)swi(3);
              pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
              return pTVar16;
            }
            puVar20 = pFVar35->Storage;
            if (uVar30 != 0) goto LAB_1475b8e85;
          }
          else {
            if ((uVar30 != (pFVar7->PendingState).NumBundleNames) ||
               (bVar10 != (pFVar7->PendingState).bWithDownloadParams)) {
              FPrimaryAssetLoadState::DestroyStoredItems(pFVar35);
              goto LAB_1475b8df5;
            }
            if (puVar20 != (uchar *)&local_f10) {
              *(undefined8 *)puVar20 = local_f10;
              local_f10 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(puVar20 + 8),&FStack_f08);
            }
            if ((pFVar35->Storage == (uchar *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Storage",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                                    ,0x85,L""), bVar11)) {
              pcVar3 = (code *)swi(3);
              pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
              return pTVar16;
            }
            puVar20 = pFVar35->Storage;
LAB_1475b8e85:
            memcpy(puVar20 + 0x10,(void *)FVar39,(ulonglong)uVar30 << 3);
          }
          if (bVar10 != false) {
            pFVar17 = FPrimaryAssetLoadState::GetDownloadParamsInternal(pFVar35);
            *pFVar17 = local_fa8;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_f08.ReferenceController);
          this = local_fe8;
          local_c58.PrimaryAssetType.Name.ComparisonIndex.Value =
               (pFVar38->PrimaryAssetType).Name.ComparisonIndex.Value;
          local_c58.PrimaryAssetType.Name.Number = (pFVar38->PrimaryAssetType).Name.Number;
          local_c58.PrimaryAssetName.ComparisonIndex.Value =
               (pFVar38->PrimaryAssetName).ComparisonIndex.Value;
          local_c58.PrimaryAssetName.Number = (pFVar38->PrimaryAssetName).Number;
          local_c48.Object = local_fc8.Object;
          local_c48.SharedReferenceCount.ReferenceController =
               local_fc8.SharedReferenceCount.ReferenceController;
          if (local_fc8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          OnAssetStateChangeCompleted(local_fe8,&local_c48,&local_c58);
          param_5 = local_fb0;
        }
        else {
          if ((local_fc8.Object == (FStreamableHandle *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          uVar36 = local_ab0;
          pFVar7 = local_f38;
          if ((local_fc8.Object)->bLoadCompleted != false) goto LAB_1475b8cd5;
          local_efc = (param_5->DownloadParams).bIsSet;
          if ((bool)local_efc != false) {
            local_f00 = (param_5->DownloadParams).TypedValue;
          }
          local_d88 = (ForElementType<FName>)&local_bb8;
          if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
            local_d88 = local_bb8.SecondaryData;
          }
          if (((int)local_ab0 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          local_c68.Object = local_fc8.Object;
          local_c68.SharedReferenceCount.ReferenceController =
               local_fc8.SharedReferenceCount.ReferenceController;
          uStack_d80 = uVar36;
          if (local_fc8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_c78._12_4_ = uStack_d7c;
          local_c78.ArrayNum = uVar36;
          local_c78.DataPtr = (FName *)local_d88;
          FPrimaryAssetLoadState::SetState
                    (&pFVar7->PendingState,&local_c68,&local_c78,SUB86(&local_f00,0));
          if ((local_fc8.Object == (FStreamableHandle *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          pFVar19 = local_fc8.Object;
          local_e90 = (undefined1  [8])0x0;
          local_e88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_e88.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e90,
                     (FWriteAccessScope *)&local_cc8);
          local_cb0 = &local_e88;
          puVar23 = UE::Core::Private::DelegateAllocate(0x30,&local_e88);
          if (puVar23 != (undefined8 *)0x0) {
            *puVar23 = &
                       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__UFPrimaryAssetId____6B_
            ;
            FVar4 = pFVar38->PrimaryAssetName;
            *(FName *)(puVar23 + 1) = (pFVar38->PrimaryAssetType).Name;
            *(FName *)(puVar23 + 2) = FVar4;
            uVar25 = FDelegateHandle::GenerateNewID();
            puVar23[3] = uVar25;
            *puVar23 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUAssetManager____A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__UFPrimaryAssetId____6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            local_e38 = this;
            puVar23[4] = 0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar23 + 4),(FObjectPtr)&local_e38);
            puVar23[5] = OnAssetStateChangeCompleted;
          }
          if (local_cc8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_cc8.Accessor,&local_cc8);
          }
          FStreamableHandle::BindCompleteDelegate
                    (pFVar19,(TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                              *)local_e90);
          if ((local_fc8.Object == (FStreamableHandle *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          pFVar19 = local_fc8.Object;
          local_e78 = (undefined1  [8])0x0;
          local_e70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_e70.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e78,
                     (FWriteAccessScope *)&local_ca8);
          local_c90 = &local_e70;
          puVar23 = UE::Core::Private::DelegateAllocate(0x30,&local_e70);
          if (puVar23 != (undefined8 *)0x0) {
            *puVar23 = &
                       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__UFPrimaryAssetId____6B_
            ;
            FVar4 = pFVar38->PrimaryAssetName;
            *(FName *)(puVar23 + 1) = (pFVar38->PrimaryAssetType).Name;
            *(FName *)(puVar23 + 2) = FVar4;
            uVar25 = FDelegateHandle::GenerateNewID();
            puVar23[3] = uVar25;
            *puVar23 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUAssetManager____A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__UFPrimaryAssetId____6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            local_e18 = this;
            puVar23[4] = 0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar23 + 4),(FObjectPtr)&local_e18);
            puVar23[5] = OnAssetStateChangeCompleted;
          }
          if (local_ca8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ca8.Accessor,&local_ca8);
          }
          FStreamableHandle::BindCancelDelegate
                    (pFVar19,(TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                              *)local_e78);
        }
        if (local_fc8.Object == (FStreamableHandle *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_fc8.SharedReferenceCount.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_f60,(FWriteAccessScope *)&local_d58);
          if ((local_f50 != 0) && (FStack_f58.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_f58.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_f58,0,0,0x10);
            local_f50 = 0;
          }
          if (local_d58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d58.Accessor,&local_d58);
          }
          if (FStack_f58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_f58.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f60.AccessDetector);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_f78,(FWriteAccessScope *)&local_d40);
          if ((local_f68 != 0) && (FStack_f70.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_f70.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_f70,0,0,0x10);
            local_f68 = 0;
          }
          if (local_d40.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d40.Accessor,&local_d40);
          }
          if (FStack_f70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_f70.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f78.AccessDetector);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_f90,(FWriteAccessScope *)&local_d28);
          if ((local_f80 != 0) && (local_f88.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_f88.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_f88,0,0,0x10);
            local_f80 = 0;
          }
          if (local_d28.bDestroyed == false) {
            pFVar27 = &local_d28;
            this_00 = local_d28.Accessor;
LAB_1475b904c:
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(this_00,pFVar27);
          }
        }
        else {
          if (((local_1000.Data <= &local_fc8) &&
              (&local_fc8 <
               (TSharedPtr<FStreamableHandle,1> *)
               (local_1000.Data + (longlong)local_ff8._4_4_ * 0x10))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar3)();
            return pTVar16;
          }
          iVar12 = (int)local_ff8;
          if ((int)local_ff8 == local_ff8._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_1000,(int *)((longlong)&local_ff8 + 4));
          }
          local_ff8 = CONCAT44(local_ff8._4_4_,iVar12 + 1);
          *(FStreamableHandle **)&local_1000.Data[(longlong)iVar12 * 0x10].field_0x0 =
               local_fc8.Object;
          *(TReferenceControllerBase<1> **)(local_1000.Data + (longlong)iVar12 * 0x10 + 8) =
               local_fc8.SharedReferenceCount.ReferenceController;
          if (local_fc8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_fc8.SharedReferenceCount.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_f60,(FWriteAccessScope *)&local_d10);
          if ((local_f50 != 0) && (FStack_f58.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_f58.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_f58,0,0,0x10);
            local_f50 = 0;
          }
          if (local_d10.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d10.Accessor,&local_d10);
          }
          if (FStack_f58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_f58.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f60.AccessDetector);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_f78,(FWriteAccessScope *)&local_cf8);
          if ((local_f68 != 0) && (FStack_f70.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_f70.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_f70,0,0,0x10);
            local_f68 = 0;
          }
          if (local_cf8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_cf8.Accessor,&local_cf8);
          }
          if (FStack_f70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_f70.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f78.AccessDetector);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_f90,(FWriteAccessScope *)&local_ce0);
          if ((local_f80 != 0) && (local_f88.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_f88.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_f88,0,0,0x10);
            local_f80 = 0;
          }
          if (local_ce0.bDestroyed == false) {
            pFVar27 = &local_ce0;
            this_00 = local_ce0.Accessor;
            goto LAB_1475b904c;
          }
        }
        if (local_f88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f88.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f90.AccessDetector);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_fe0.AllocatorInstance.Data,local_fe0.ArrayNum);
        if ((FSoftObjectPath *)local_fe0.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_fe0.AllocatorInstance.Data);
        }
        pFVar38 = local_ff0;
        if (local_bb8.SecondaryData != (ForElementType<FName>)0x0) {
          FMemory::Free((void *)local_bb8.SecondaryData);
          pFVar38 = local_ff0;
        }
      }
    }
LAB_1475b7fc0:
    pFVar31 = local_fa0 + 1;
    uVar13 = (ulonglong)local_ef8;
    iVar12 = local_fa4;
  } while( true );
}

// ChangeBundleStateForPrimaryAssets @ 1475b9520

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::ChangeBundleStateForPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5,int param_6,
          FSourceLocation *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_b8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  int local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_40,param_5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_b8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_90.Data = pFVar2;
  local_88 = iVar1;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)local_b8);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  local_50 = param_6;
  local_b8._0_4_ = (param_7->Impl)._Line;
  local_b8._4_4_ = (param_7->Impl)._Column;
  local_b8._8_4_ = *(undefined4 *)&(param_7->Impl)._File;
  local_b8._12_4_ = *(undefined4 *)((longlong)&(param_7->Impl)._File + 4);
  local_b8._16_8_ = (param_7->Impl)._Function;
  (**(code **)(this->_padding_ + 0x3b8))
            (this,__return_storage_ptr__,param_1,param_2,param_3,param_4,&local_98,local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)local_b8);
  if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_b8);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return __return_storage_ptr__;
}

// CreatePrimaryAssetIdFromChunkId @ 1475bce70

FPrimaryAssetId * __cdecl
UAssetManager::CreatePrimaryAssetIdFromChunkId(FPrimaryAssetId *__return_storage_ptr__,int param_1)

{
  FName FVar1;
  FNameEntryId FVar2;
  
  if (param_1 == -1) {
    (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
    (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
    (__return_storage_ptr__->PrimaryAssetName).Number = 0;
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ChunkName,"Chunk");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2.Value = ChunkName.ComparisonIndex.Value;
  (__return_storage_ptr__->PrimaryAssetType).Name = PackageChunkType.Name;
  FVar1.Number = param_1 + 1;
  FVar1.ComparisonIndex.Value = FVar2.Value;
  __return_storage_ptr__->PrimaryAssetName = FVar1;
  return __return_storage_ptr__;
}

// DeterminePrimaryAssetIdForObject @ 1475bfa40

/* WARNING: Enum "Type": Some values do not have unique names */

FPrimaryAssetId * __thiscall
UAssetManager::DeterminePrimaryAssetIdForObject
          (UAssetManager *this,FPrimaryAssetId *__return_storage_ptr__,UObject *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  FName *this_00;
  longlong lVar4;
  FName *pFVar5;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *pTVar6;
  bool bVar7;
  FPrimaryAssetId *pFVar8;
  UPackage *pUVar9;
  FName FVar10;
  wchar_t *pwVar11;
  int iVar12;
  int iVar13;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  FName FVar19;
  uint *puVar20;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *pTVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  uint uVar23;
  UObjectBaseUtility *this_01;
  undefined1 local_res8 [8];
  FPrimaryAssetId *local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  uint local_228;
  FName local_220;
  FString local_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  UObjectBaseUtility *local_1e8;
  FSoftObjectPath local_1e0;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_178;
  FName local_170;
  FName local_168;
  FName FStack_160;
  FString local_158;
  FString local_148;
  FName *local_138;
  uint uStack_130;
  uint uStack_12c;
  FName local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  FName *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  FString local_90;
  FScriptContainerElement *local_78;
  undefined8 uStack_70;
  undefined4 local_4c;
  uint uVar14;
  
  this_01 = (UObjectBaseUtility *)param_1;
  if ((*(uint *)&param_1->field_0x8 >> 4 & 1) != 0) {
    this_01 = *(UObjectBaseUtility **)&param_1->field_0x10;
  }
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  local_1e8 = this_01;
  UObjectBaseUtility::GetPathName(this_01,&local_218,(UObject *)0x0);
  uVar14 = 0;
  iVar13 = 0;
  local_1e0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1e0.AssetPath.PackageName.Number = 0;
  local_1e0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1e0.AssetPath.AssetName.Number = 0;
  pcVar2 = *(code **)(this->_padding_ + 0x340);
  local_1e0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.SubPathString.Data.ArrayNum = 0;
  local_1e0.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_1e0,(UObject *)this_01);
  (*pcVar2)(this,&local_168,&local_1e0);
  if (local_1e0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.SubPathString.Data.AllocatorInstance.Data);
  }
  local_208 = 0;
  if ((local_168 == (FName)0x0) || (local_200 = 0, FStack_160 == (FName)0x0)) {
    uVar15 = 0;
    pTVar21 = &this->AssetTypeMap;
    pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AssetTypeMap).field_0x10;
    local_220.ComparisonIndex.Value = 0;
    local_220.Number = 0;
    uVar17 = *(uint *)&(this->AssetTypeMap).field_0x28;
    uStack_1b4 = 1;
    uStack_1a4 = uVar15;
    uStack_1b8 = uVar15;
    local_1a0 = uVar15;
    if (uVar17 != 0) {
      puVar20 = *(uint **)&(this->AssetTypeMap).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)pTVar22;
      }
      uVar16 = *puVar20;
      uStack_1b8 = uVar14;
      local_1a0 = uVar14;
      while (uVar16 == 0) {
        uStack_1b8 = uStack_1b8 + 1;
        local_1a0 = local_1a0 + 0x20;
        uStack_1a4 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1b8)
        goto LAB_1475bfb9c;
        uVar16 = puVar20[(int)uStack_1b8];
      }
      uStack_1b4 = ~(uVar16 - 1) & uVar16;
      uVar1 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_190 = (int)lVar4;
      uStack_1a4 = local_190 + -1 + local_1a0;
      if ((int)uVar17 < (int)uStack_1a4) {
        uStack_1a4 = uVar17;
      }
    }
LAB_1475bfb9c:
    uVar16 = *(uint *)&(this->AssetTypeMap).field_0x28;
    uStack_19c = local_4c;
    uVar23 = uVar16 & 0xffffffe0;
    iStack_198 = *(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34;
    TStack_d0._padding_ = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_1a8 = 0xffffffff;
    TStack_d0.CurrentBitIndex = uStack_1a4;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar16 >> 5;
    TStack_d0._28_4_ = local_4c;
    TStack_d0.BaseBitIndex = local_1a0;
    uStack_b0 = CONCAT44(uStack_194,iStack_198);
    local_1c0 = pTVar21;
    local_1b0 = (undefined1 *)pTVar22;
    local_180 = pTVar22;
    local_178 = pTVar21;
    local_d8 = pTVar21;
    TStack_d0.Array = pTVar22;
    if ((((int)uVar16 < 0) || ((int)uVar17 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FPrimaryAssetId *)(*pcVar2)();
      return pFVar8;
    }
    uVar17 = *(uint *)&(this->AssetTypeMap).field_0x28;
    local_228 = uVar16;
    if (uVar16 != uVar17) {
      puVar3 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
      puVar18 = (undefined1 *)pTVar22;
      if (puVar3 != (undefined1 *)0x0) {
        puVar18 = puVar3;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
      while (uVar16 == 0) {
        iVar12 = iVar12 + 1;
        uVar23 = uVar23 + 0x20;
        uVar16 = uVar17;
        local_228 = uVar17;
        if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < iVar12)
        goto LAB_1475bfcc0;
        uVar16 = *(uint *)(puVar18 + (longlong)iVar12 * 4);
      }
      uVar1 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_18c = (int)lVar4;
      uVar16 = local_18c + -1 + uVar23;
      local_228 = uVar16;
      if ((int)uVar17 < (int)uVar16) {
        uVar16 = uVar17;
        local_228 = uVar17;
      }
    }
LAB_1475bfcc0:
    while( true ) {
      pTVar6 = local_d8;
      if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_d0.CurrentBitIndex == uVar16) && (TStack_d0.Array == pTVar22)) &&
         (pTVar6 == pTVar21)) break;
      this_00 = *(FName **)((longlong)TStack_d0.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar6);
      FVar10 = this_00[6];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar10 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar10);
      }
      if ((*(int *)(*(longlong *)&local_res18->field_0x10 + 0x38) <
           *(int *)((longlong)FVar10 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)&local_res18->field_0x10 + 0x30) +
           (longlong)*(int *)((longlong)FVar10 + 0x38) * 8) != (longlong)FVar10 + 0x30)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_138 = this_00 + 0x25;
        uVar17 = this_00[0x2a].ComparisonIndex.Value;
        FVar10 = (FName)(this_00 + 0x27);
        uStack_12c = 1;
        uStack_11c = uVar14;
        uStack_130 = uVar15;
        local_118 = uVar14;
        if (uVar17 != 0) {
          FVar19 = FVar10;
          if (this_00[0x29] != (FName)0x0) {
            FVar19 = this_00[0x29];
          }
          uVar16 = *(uint *)FVar19;
          uStack_130 = uVar14;
          while (uVar16 == 0) {
            uStack_130 = uStack_130 + 1;
            local_118 = local_118 + 0x20;
            uStack_11c = uVar17;
            if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_130)
            goto LAB_1475bfdeb;
            uVar16 = *(uint *)((longlong)FVar19 + (longlong)(int)uStack_130 * 4);
          }
          uStack_12c = -uVar16 & uVar16;
          uVar1 = (ulonglong)uStack_12c * 2 + 1;
          lVar4 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_188 = (int)lVar4;
          uStack_11c = local_188 + -1 + local_118;
          if ((int)uVar17 < (int)uStack_11c) {
            uStack_11c = uVar17;
          }
        }
LAB_1475bfdeb:
        uVar23 = this_00[0x2a].ComparisonIndex.Value;
        uStack_114 = uStack_1a4;
        iStack_110 = this_00[0x26].ComparisonIndex.Value - this_00[0x2b].Number;
        uVar16 = uVar23 & 0xffffffe0;
        TStack_100._padding_ = CONCAT44(uStack_12c,uStack_130);
        uStack_120 = 0xffffffff;
        TStack_100.CurrentBitIndex = uStack_11c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        iVar12 = (int)uVar23 >> 5;
        TStack_100._28_4_ = uStack_1a4;
        TStack_100.BaseBitIndex = local_118;
        uStack_e0 = CONCAT44(uStack_10c,iStack_110);
        local_128 = FVar10;
        local_108 = local_138;
        TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar10;
        if ((((int)uVar23 < 0) || ((int)uVar17 < (int)uVar23)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FPrimaryAssetId *)(*pcVar2)();
          return pFVar8;
        }
        uVar17 = this_00[0x2a].ComparisonIndex.Value;
        if (uVar23 != uVar17) {
          FVar19 = FVar10;
          if (this_00[0x29] != (FName)0x0) {
            FVar19 = this_00[0x29];
          }
          uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar12 * 4);
          while (uVar23 == 0) {
            iVar12 = iVar12 + 1;
            uVar16 = uVar16 + 0x20;
            uVar23 = uVar17;
            if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < iVar12)
            goto LAB_1475bfeed;
            uVar23 = *(uint *)((longlong)FVar19 + (longlong)iVar12 * 4);
          }
          uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_184 = (int)lVar4;
          uVar23 = local_184 + -1 + uVar16;
          if ((int)uVar17 < (int)uVar23) {
            uVar23 = uVar17;
          }
        }
LAB_1475bfeed:
        while( true ) {
          pFVar5 = local_108;
          if (local_108[1].ComparisonIndex.Value - local_108[6].Number != (int)uStack_e0) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_100.CurrentBitIndex == uVar23) && ((FName)TStack_100.Array == FVar10)) &&
             (pTVar22 = local_180, uVar16 = local_228, pFVar5 == this_00 + 0x25)) break;
          FVar19 = *pFVar5;
          iVar12 = *(int *)((longlong)FVar19 + 8 + (longlong)TStack_100.CurrentBitIndex * 0x18);
          if (iVar12 == 0) {
            pwVar11 = L"";
            uVar17 = uVar15;
          }
          else {
            pwVar11 = *(wchar_t **)((longlong)FVar19 + (longlong)TStack_100.CurrentBitIndex * 0x18);
            uVar17 = iVar12 - 1;
          }
          bVar7 = ::FString::StartsWith(&local_218,pwVar11,uVar17,IgnoreCase);
          if (bVar7) {
            local_1f8 = 0;
            if (local_220 == (FName)0x0) {
              local_220 = *this_00;
            }
            else if (2 < (byte)LogAssetManager._0_1_) {
              ::FName::ToString(&local_220,&local_158);
              ::FName::ToString(this_00,&local_90);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
          }
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
        }
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      pTVar21 = local_178;
    }
    local_1f0 = 0;
    if (local_220 == (FName)0x0) {
      (local_res10->PrimaryAssetType).Name = (FName)0x0;
      (local_res10->PrimaryAssetName).ComparisonIndex = 0;
      (local_res10->PrimaryAssetName).Number = 0;
      __return_storage_ptr__ = local_res10;
    }
    else {
      pUVar9 = UObjectBaseUtility::GetOutermost(local_1e8);
      local_170 = (FName)pUVar9->_padding_;
      ::FName::ToString(&local_170,&local_148);
      local_a8 = local_148.Data.AllocatorInstance.Data;
      if (local_148.Data.ArrayNum != 0) {
        iVar13 = local_148.Data.ArrayNum + -1;
      }
      uStack_70 = CONCAT44(uStack_9c,iVar13);
      local_78 = local_148.Data.AllocatorInstance.Data;
      iStack_a0 = iVar13;
      FVar10 = FPackageName::GetShortFName((TStringView<wchar_t> *)local_98);
      __return_storage_ptr__ = local_res10;
      local_res10->PrimaryAssetName = *(FName *)FVar10;
      (local_res10->PrimaryAssetType).Name = local_220;
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    (__return_storage_ptr__->PrimaryAssetType).Name = local_168;
    __return_storage_ptr__->PrimaryAssetName = FStack_160;
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DoesAssetMatchSearchRules @ 1475c1970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UAssetManager::DoesAssetMatchSearchRules
          (UAssetManager *this,FAssetData *param_1,FAssetManagerSearchRules *param_2)

{
  FName FVar1;
  FName FVar2;
  ulonglong uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  IAssetRegistry *pIVar8;
  longlong lVar9;
  FString *this_00;
  int iVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  wchar_t *pwVar13;
  ForAnyElementType this_01;
  FScriptContainerElement *pFVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  FString local_190;
  ForAnyElementType local_178;
  undefined8 local_170;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  void *local_138;
  ulonglong local_130;
  undefined1 local_128 [88];
  ForAnyElementType local_d0;
  int local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  ForAnyElementType local_b0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  undefined1 local_68 [8];
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  FCompiledAssetManagerSearchRules::FCompiledAssetManagerSearchRules
            ((FCompiledAssetManagerSearchRules *)local_128,param_2);
  if ((param_2->AssetBaseClass).field0_0x0.DebugPtr == (UClass *)0x0) {
LAB_1475c1b70:
    iVar15 = (param_2->AssetScanPaths).ArrayNum;
    pFVar14 = (param_2->AssetScanPaths).AllocatorInstance.Data;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = iVar15;
    if (iVar15 == 0) {
      local_194 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar15,0,&local_1a0,iVar15,&local_194);
      ConstructItems<FString,FString,int>(local_1a0.Data,(FString *)pFVar14,iVar15);
    }
    if (param_2->bSkipVirtualPathExpansion == false) {
      (**(code **)(this->_padding_ + 0x2f8))(this,&local_1a0);
    }
    iVar15 = local_198;
    bVar16 = local_198 != 0;
    pFVar14 = local_1a0.Data + (longlong)local_198 * 0x10;
    this_01.Data = local_1a0.Data;
    while( true ) {
      if (local_198 != iVar15) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1a8);
      }
      if (this_01.Data == pFVar14) break;
      ::FString::ReplaceInline((FString *)this_01.Data,L"//",L"/",CaseSensitive);
      bVar5 = ::FString::EndsWith((FString *)this_01.Data,L"/",1,CaseSensitive);
      if (bVar5) {
        iVar10 = *(int *)(this_01.Data + 8) + -1;
        if (*(int *)(this_01.Data + 8) == 0) {
          iVar10 = 0;
        }
        if (iVar10 + -1 < iVar10) {
          iVar10 = iVar10 + -1;
        }
        iVar11 = 0;
        if (0 < iVar10) {
          iVar11 = iVar10;
        }
        ::FString::RemoveAt((FString *)this_01.Data,iVar11,1,Default);
      }
      this_00 = ::FName::ToString(&param_1->PackageName,&local_190);
      iVar10 = *(int *)(this_01.Data + 8) + -1;
      if (*(int *)(this_01.Data + 8) == 0) {
        iVar10 = 0;
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)this_01.Data;
      }
      bVar5 = ::FString::StartsWith(this_00,pwVar13,iVar10,IgnoreCase);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (bVar5) goto LAB_1475c1d05;
      this_01.Data = this_01.Data + 0x10;
    }
    if (bVar16) goto LAB_1475c1d1c;
LAB_1475c1d05:
    bVar16 = FCompiledAssetManagerSearchRules::PassesWildcardsAndDelegates
                       ((FCompiledAssetManagerSearchRules *)local_128,param_1,this);
    if (bVar16) {
      bVar16 = true;
    }
    else {
LAB_1475c1d1c:
      bVar16 = false;
    }
    DestructItems<FString,int>((FString *)local_1a0.Data,local_198);
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
  }
  else {
    pIVar8 = GetAssetRegistry(this);
    local_168.AllocatorInstance.InlineData[0] = '\0';
    local_168.AllocatorInstance.InlineData[1] = '\0';
    local_168.AllocatorInstance.InlineData[2] = '\0';
    local_168.AllocatorInstance.InlineData[3] = '\0';
    local_168.AllocatorInstance.InlineData[4] = '\0';
    local_168.AllocatorInstance.InlineData[5] = '\0';
    local_168.AllocatorInstance.InlineData[6] = '\0';
    local_168.AllocatorInstance.InlineData[7] = '\0';
    local_168.AllocatorInstance.InlineData[8] = '\0';
    local_168.AllocatorInstance.InlineData[9] = '\0';
    local_168.AllocatorInstance.InlineData[10] = '\0';
    local_168.AllocatorInstance.InlineData[0xb] = '\0';
    local_168.AllocatorInstance.InlineData[0xc] = '\0';
    local_168.AllocatorInstance.InlineData[0xd] = '\0';
    local_168.AllocatorInstance.InlineData[0xe] = '\0';
    local_168.AllocatorInstance.InlineData[0xf] = '\0';
    local_140 = 0;
    local_130 = 0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_168.NumBits = 0;
    local_168.MaxBits = 0x80;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_138 = (void *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x140))(pIVar8);
    local_130 = local_130 & 0xffffffff00000000;
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    uVar3 = local_170 >> 0x20;
    local_170 = local_170 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_178,0,(int *)((longlong)&local_170 + 4));
    }
    local_148 = 0xffffffff;
    local_144 = 0;
    local_168.NumBits = 0;
    if (0x80 < (uint)local_168.MaxBits) {
      local_168.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_168,0);
    }
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    if (param_2->bHasBlueprintClasses == false) {
      FVar1 = (param_1->AssetClassPath).AssetName;
      uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      FVar2 = (param_1->AssetClassPath).PackageName;
      uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      uVar7 = uVar7 + FVar2.Number;
      if (local_a0._8_4_ != local_a0._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)local_68;
        if (local_60 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = local_60;
        }
        iVar15 = *(int *)((longlong)FVar12 +
                         (ulonglong)
                         (local_58 - 1U &
                         (uVar7 * 0x40 + uVar6 + FVar1.Number + -0x61c88647 + (uVar7 >> 2) ^ uVar7))
                         * 4);
        if (iVar15 != -1) {
          do {
            lVar9 = (longlong)iVar15;
            if ((*(FName *)(local_a0._0_8_ + lVar9 * 0x18) == (param_1->AssetClassPath).PackageName)
               && (*(FName *)(local_a0._0_8_ + 8 + lVar9 * 0x18) ==
                   (param_1->AssetClassPath).AssetName)) {
              if (iVar15 != -1) goto LAB_1475c1b70;
              goto LAB_1475c1bb1;
            }
            iVar15 = *(int *)(local_a0._0_8_ + 0x10 + lVar9 * 0x18);
          } while (iVar15 != -1);
          bVar16 = false;
          goto LAB_1475c1d4d;
        }
      }
    }
    else {
      cVar4 = (**(code **)(this->_padding_ + 0x480))(this,param_1,&local_a0);
      if (cVar4 != '\0') goto LAB_1475c1b70;
    }
LAB_1475c1bb1:
    bVar16 = false;
  }
LAB_1475c1d4d:
  local_58 = 0;
  if (local_60 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60);
  }
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a0);
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  DestructItems<FString,int>((FString *)local_c0.Data,local_b8);
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  DestructItems<FString,int>((FString *)local_d0.Data,local_c8);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_128 + 0x40));
  DestructItems<FString,int>((FString *)local_128._32_8_,local_128._40_4_);
  if ((FString *)local_128._32_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_128._32_8_);
  }
  DestructItems<FString,int>((FString *)local_128._16_8_,local_128._24_4_);
  if ((FString *)local_128._16_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_128._16_8_);
  }
  DestructItems<FString,int>((FString *)local_128._0_8_,local_128._8_4_);
  if ((FString *)local_128._0_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  return bVar16;
}

// DoesPrimaryAssetMatchCustomOverride @ 1475c2150

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::DoesPrimaryAssetMatchCustomOverride
          (UAssetManager *this,FPrimaryAssetId *param_1,FPrimaryAssetRulesCustomOverride *param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  FString local_38;
  FSoftObjectPath local_28;
  
  if (1 < (param_2->FilterDirectory).Path.Data.ArrayNum) {
    (**(code **)(this->_padding_ + 0x328))(this,&local_28,param_1);
    FSoftObjectPath::ToString(&local_28,&local_38);
    if ((param_2->FilterDirectory).Path.Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(param_2->FilterDirectory).Path.Data.AllocatorInstance.Data;
      if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_1475c21cf;
    }
    sVar2 = wcslen(_Str);
    iVar1 = ::FString::Find(&local_38,_Str,(int)sVar2,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
LAB_1475c21cf:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// DownloadAssetList @ 1475c2230

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::DownloadAssetList
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          FAssetManagerLoadParams *param_2,FString *param_3,FSourceLocation *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FStreamableHandle,1> *pTVar3;
  FString local_b8;
  FStreamableAsyncLoadParams local_a8;
  source_location local_28;
  
  if ((param_2->DownloadParams).bIsSet == false) {
    if (1 < (byte)LogAssetManager._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    }
    __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    UE::AssetManager::Private::GetStreamableAsyncLoadParams(&local_a8,param_2);
    if (&local_a8 != (FStreamableAsyncLoadParams *)param_1) {
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data,
                 local_a8.TargetsToStream.ArrayNum);
      if ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data !=
          (FSoftObjectPath *)0x0) {
        FMemory::Free(local_a8.TargetsToStream.AllocatorInstance.Data);
      }
      local_a8.TargetsToStream.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.TargetsToStream.ArrayNum = param_1->ArrayNum;
      local_a8.TargetsToStream.ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
    }
    local_a8.bManageActiveHandle = false;
    if ((local_a8.DownloadParams.bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar1)();
      return pTVar3;
    }
    local_a8.DownloadParams.TypedValue.bDownloadOnly = true;
    local_28._Line = (param_4->Impl)._Line;
    local_28._Column = (param_4->Impl)._Column;
    local_28._File = (param_4->Impl)._File;
    local_28._Function = (param_4->Impl)._Function;
    local_b8.Data.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = (param_3->Data).ArrayNum;
    local_b8.Data.ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
    FStreamableManager::RequestAsyncLoad
              (&this->StreamableManager,__return_storage_ptr__,&local_a8,&local_b8,
               (FSourceLocation *)&local_28);
    if (local_a8.DownloadParams.bIsSet != false) {
      FStreamableDownloadCachePin::~FStreamableDownloadCachePin
                ((FStreamableDownloadCachePin *)&local_a8.DownloadParams);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8.OnUpdate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8.OnCancel);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8.OnComplete);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data,
               local_a8.TargetsToStream.ArrayNum);
    if ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data != (FSoftObjectPath *)0x0
       ) {
      FMemory::Free(local_a8.TargetsToStream.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// DumpAssetRegistryInfo @ 1475c23e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAssetManager::DumpAssetRegistryInfo(void)

{
  FName FVar1;
  UAssetManager *pUVar2;
  FName *pFVar3;
  FModuleManager *this;
  IModuleInterface *pIVar4;
  IAssetRegistry *pIVar5;
  FName local_res8;
  
  if (4 < (byte)LogAssetManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    if (4 < (byte)LogAssetManager._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    }
  }
  pUVar2 = Get();
  pIVar5 = pUVar2->CachedAssetRegistry;
  if (pIVar5 == (IAssetRegistry *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,L"AssetRegistry");
    FVar1 = *pFVar3;
    this = FModuleManager::Get();
    pIVar4 = FModuleManager::LoadModuleChecked(this,FVar1);
    pIVar5 = (IAssetRegistry *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
    pUVar2->CachedAssetRegistry = pIVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001475c2484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar5 + 0x3c8))(pIVar5,1);
  return;
}

// DumpAssetTypeSummary @ 1475c24a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __cdecl UAssetManager::DumpAssetTypeSummary(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UAssetManager *pUVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  int *piVar7;
  int iVar8;
  FPrimaryAssetTypeInfo *pFVar9;
  FScriptContainerElement *pFVar10;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FPrimaryAssetTypeInfo *local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (((GEngine == (UEngine *)0x0) ||
      ((GEngine->AssetManager).field0_0x0.DebugPtr == (UAssetManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UAssetManager::IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                         ,0xdcf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = Get();
  local_88 = (FPrimaryAssetTypeInfo *)0x0;
  local_80 = 0;
  (**(code **)(pUVar4->_padding_ + 0x368))(pUVar4,&local_88);
  AlgoImpl::
  IntroSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpAssetTypeSummary_::__l2::<lambda_1>_>_>
            (local_88,(uint)local_80,local_res8[0]._0_1_,(<lambda_1> *)local_res8);
  if (4 < (byte)LogAssetManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
  }
  uVar5 = (ulonglong)(int)(uint)local_80;
  local_res8[0] = (uint)local_80;
  piVar7 = &(local_88->AssetScanPaths).ArrayNum;
  pFVar9 = local_88 + uVar5;
  while( true ) {
    if ((uint)local_80 != (int)uVar5) {
      `TCheckedPointerIterator<FPrimaryAssetTypeInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FPrimaryAssetTypeInfo *)(piVar7 + -0x1e) == pFVar9) break;
    if (4 < (byte)LogAssetManager._0_1_) {
      iVar1 = *piVar7;
      bVar3 = true;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar6 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->AllocatorInstance).
               Data;
      pFVar10 = pFVar6 + (longlong)iVar1 * 0x10;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      while( true ) {
        if (*piVar7 != iVar1) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar6 == pFVar10) break;
        if (bVar3) {
          bVar3 = false;
        }
        else {
          ::FString::AppendChars(&local_78,L", ",2);
        }
        iVar8 = *(int *)(pFVar6 + 8) + -1;
        if (*(int *)(pFVar6 + 8) == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_78,*(wchar_t **)pFVar6,iVar8);
        pFVar6 = pFVar6 + 0x10;
      }
      local_res20 = *(FName *)(*(longlong *)(piVar7 + -0x12) + 0x18);
      ::FName::ToString(&local_res20,&local_68);
      ::FName::ToString((FName *)(piVar7 + -0x1e),&local_58);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    uVar5 = (ulonglong)local_res8[0];
    piVar7 = piVar7 + 0x22;
  }
  DestructItems<FPrimaryAssetTypeInfo,int>(local_88,(uint)local_80);
  if (local_88 != (FPrimaryAssetTypeInfo *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// DumpBundlesForAsset @ 1475c26f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAssetManager::DumpBundlesForAsset(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  ForAnyElementType FVar3;
  FName *pFVar4;
  bool bVar5;
  int iVar6;
  UAssetManager *pUVar7;
  TSharedPtr<FAssetBundleData,1> *this;
  FAssetBundleData *pFVar8;
  longlong lVar9;
  FName this_00;
  FName FVar10;
  FName *pFVar11;
  uint uVar12;
  FName *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName *local_res18;
  FString local_78;
  FPrimaryAssetId local_68;
  FString local_58;
  FString local_48;
  
  if (param_1->ArrayNum < 1) {
    if (2 < (byte)LogAssetManager._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = *(int *)(pFVar1 + 8);
    lVar9 = (longlong)local_78.Data.ArrayNum;
    _Src = *(void **)pFVar1;
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    iVar6 = ::FString::Find(&local_78,L":",1,IgnoreCase,FromStart,-1);
    if (iVar6 == -1) {
      if (2 < (byte)LogAssetManager._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      }
    }
    else {
      if (((GEngine == (UEngine *)0x0) ||
          ((GEngine->AssetManager).field0_0x0.DebugPtr == (UAssetManager *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("UAssetManager::IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                             ,0xe3c,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = Get();
      uVar12 = local_78.Data.ArrayNum - 1;
      FVar3.Data = local_78.Data.AllocatorInstance.Data;
      if (local_78.Data.ArrayNum == 0) {
        uVar12 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      FPrimaryAssetId::ParseTypeAndName(&local_68,(wchar_t *)FVar3.Data,uVar12);
      this = TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
             ::Find((TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
                     *)&pUVar7->CachedAssetBundles,&local_68);
      if (this == (TSharedPtr<FAssetBundleData,1> *)0x0) {
        if (3 < (byte)LogAssetManager._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        }
      }
      else {
        if (3 < (byte)LogAssetManager._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        }
        pFVar8 = TSharedPtr<FAssetBundleData,1>::operator*<FAssetBundleData>(this);
        iVar6 = (pFVar8->Bundles).ArrayNum;
        this_01 = (FName *)(pFVar8->Bundles).AllocatorInstance.Data;
        pFVar11 = this_01 + 2;
        local_res18 = this_01 + (longlong)iVar6 * 3;
        while( true ) {
          pFVar4 = local_res18;
          if ((pFVar8->Bundles).ArrayNum != iVar6) {
            `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (this_01 == pFVar4) break;
          if (3 < (byte)LogAssetManager._0_1_) {
            ::FName::ToString(this_01,&local_58);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          uVar12 = (pFVar11->ComparisonIndex).Value;
          this_00 = pFVar11[-1];
          FVar10 = (FName)((longlong)this_00 + (longlong)(int)uVar12 * 0x10);
          while( true ) {
            if ((pFVar11->ComparisonIndex).Value != uVar12) {
              `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (this_00 == FVar10) break;
            if (3 < (byte)LogAssetManager._0_1_) {
              FTopLevelAssetPath::ToString((FTopLevelAssetPath *)this_00,&local_48);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            this_00 = (FName)((longlong)this_00 + 0x10);
          }
          this_01 = this_01 + 3;
          pFVar11 = pFVar11 + 3;
        }
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DumpLoadedAssetState @ 1475c2a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __cdecl UAssetManager::DumpLoadedAssetState(void)

{
  uint uVar1;
  uint uVar2;
  FName FVar3;
  undefined1 *puVar4;
  FStreamableHandle *pFVar5;
  code *pcVar6;
  FIdentityFunctor FVar7;
  ForAnyElementType _Src;
  longlong *plVar8;
  FPrimaryAssetTypeInfo *pFVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  UAssetManager *pUVar15;
  FName *pFVar16;
  TSharedPtr<FStreamableHandle,1> *pTVar17;
  FString *pFVar18;
  TSharedPtr<FStreamableHandle,1> *pTVar19;
  byte bVar20;
  ulonglong uVar21;
  FName *pFVar22;
  longlong lVar23;
  undefined1 *puVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement FVar26;
  FPrimaryAssetTypeInfo *pFVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  int iVar30;
  FName *pFVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  int iVar33;
  undefined8 *puVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  FLoadedInfo *pFVar36;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_198;
  undefined8 local_190;
  undefined1 local_188 [8];
  FPrimaryAssetTypeInfo *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  uint uStack_158;
  uint uStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  FString local_140;
  uint local_130;
  FPrimaryAssetTypeInfo *local_128;
  int local_120;
  int local_11c;
  longlong *local_118;
  UAssetManager *local_110;
  FPrimaryAssetTypeInfo *local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_54;
  
  if (((GEngine == (UEngine *)0x0) ||
      ((GEngine->AssetManager).field0_0x0.DebugPtr == (UAssetManager *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("UAssetManager::IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                          ,0xde8,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar15 = Get();
  local_180 = (FPrimaryAssetTypeInfo *)0x0;
  local_178 = 0;
  local_110 = pUVar15;
  (**(code **)(pUVar15->_padding_ + 0x368))(pUVar15,&local_180);
  AlgoImpl::
  IntroSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpLoadedAssetState_::__l2::<lambda_1>_>_>
            (local_180,(uint)local_178,local_res8[0],(<lambda_1> *)local_res20);
  if (4 < (byte)LogAssetManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
  }
  uVar21 = (ulonglong)(int)(uint)local_178;
  local_130 = (uint)local_178;
  local_108 = local_180 + uVar21;
  pFVar27 = local_180;
  do {
    pFVar9 = local_108;
    pFVar31 = (FName *)0x0;
    local_128 = pFVar27;
    if ((uint)local_178 != (int)uVar21) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FPrimaryAssetTypeInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar27 == pFVar9) {
      DestructItems<FPrimaryAssetTypeInfo,int>(local_180,(uint)local_178);
      if (local_180 != (FPrimaryAssetTypeInfo *)0x0) {
        FMemory::Free(local_180);
      }
      return;
    }
    FVar3 = pFVar27->PrimaryAssetType;
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    uVar13 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    pFVar22 = pFVar31;
    if (*(int *)&(pUVar15->AssetTypeMap).field_0x8 != *(int *)&(pUVar15->AssetTypeMap).field_0x34) {
      puVar4 = *(undefined1 **)&(pUVar15->AssetTypeMap).field_0x40;
      puVar24 = &(pUVar15->AssetTypeMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      uVar13 = *(uint *)(puVar24 +
                        (ulonglong)
                        (*(int *)&(pUVar15->AssetTypeMap).field_0x48 - 1U & FVar3.Number + uVar13) *
                        4);
      if (uVar13 != 0xffffffff) {
        do {
          pFVar22 = (FName *)((longlong)(int)uVar13 * 0x20 + *(longlong *)&pUVar15->AssetTypeMap);
          if (*pFVar22 == FVar3) break;
          uVar13 = pFVar22[3].ComparisonIndex.Value;
          pFVar22 = pFVar31;
        } while (uVar13 != 0xffffffff);
      }
    }
    uVar29 = 0;
    uVar13 = 1;
    pFVar16 = pFVar22 + 1;
    if (pFVar22 == (FName *)0x0) {
      pFVar16 = pFVar31;
    }
    FVar3 = *pFVar16;
    pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar3 + 0x188);
    uVar1 = *(uint *)((longlong)FVar3 + 0x1a0);
    local_118 = (longlong *)((longlong)FVar3 + 0x178);
    uStack_154 = uVar29;
    if (uVar1 != 0) {
      pTVar32 = pTVar35;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar3 + 0x198) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar32 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar3 + 0x198);
      }
      uVar2 = *(uint *)(pTVar32->AllocatorInstance).InlineData;
      pFVar22 = pFVar31;
      while( true ) {
        uVar29 = (uint)pFVar22;
        if (uVar2 != 0) break;
        lVar23 = (longlong)(int)uVar29;
        pFVar31 = (FName *)(ulonglong)((int)pFVar31 + 0x20);
        uVar29 = uVar29 + 1;
        pFVar22 = (FName *)(ulonglong)uVar29;
        uStack_154 = uVar1;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
        goto LAB_1475c2c9e;
        uVar2 = *(uint *)((pTVar32->AllocatorInstance).InlineData + lVar23 * 4 + 4);
      }
      uVar13 = -uVar2 & uVar2;
      uVar21 = (ulonglong)uVar13 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_120 = (int)lVar23;
      uStack_154 = (int)pFVar31 + -1 + local_120;
      if ((int)uVar1 < (int)uStack_154) {
        uStack_154 = uVar1;
      }
    }
LAB_1475c2c9e:
    uStack_14c = local_54;
    iStack_148 = *(int *)((longlong)FVar3 + 0x180) - *(int *)((longlong)FVar3 + 0x1ac);
    uVar2 = *(uint *)((longlong)FVar3 + 0x1a0);
    bVar20 = (byte)uVar2 & 0x1f;
    iVar33 = (int)uVar2 >> 5;
    uStack_168 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar13,uVar29);
    uVar29 = uVar2 & 0xffffffe0;
    TStack_f8.CurrentBitIndex = uStack_154;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    uVar13 = -1 << bVar20;
    local_150 = (int)pFVar31;
    local_170 = CONCAT44(1 << bVar20,iVar33);
    local_160 = CONCAT44(uVar2,uVar13);
    TStack_f8._padding_ = (longlong)uStack_168;
    TStack_f8._28_4_ = local_54;
    TStack_f8.BaseBitIndex = local_150;
    uStack_d8 = CONCAT44(uStack_144,iStack_148);
    uStack_168 = pTVar35;
    uStack_158 = uVar29;
    local_100 = local_118;
    TStack_f8.Array = pTVar35;
    if ((((int)uVar2 < 0) || ((int)uVar1 < (int)uVar2)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar8 = local_118;
    pTVar32 = uStack_168;
    uVar1 = *(uint *)((longlong)FVar3 + 0x1a0);
    if (uVar2 != uVar1) {
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar3 + 0x198) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar35 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar3 + 0x198);
      }
      uVar13 = uVar13 & *(uint *)((pTVar35->AllocatorInstance).InlineData + (longlong)iVar33 * 4);
      while (uVar13 == 0) {
        uStack_158 = uVar29 + 0x20;
        lVar23 = (longlong)iVar33;
        iVar33 = iVar33 + 1;
        uVar21 = (ulonglong)local_170 >> 0x20;
        local_170 = CONCAT44((int)uVar21,iVar33);
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_1475c2def;
        uVar13 = *(uint *)((pTVar35->AllocatorInstance).InlineData + lVar23 * 4 + 4);
        local_160 = 0xffffffff;
        uVar29 = uStack_158;
      }
      local_170 = CONCAT44(-uVar13 & uVar13,(undefined4)local_170);
      uVar21 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_11c = (int)lVar23;
      iVar33 = local_11c + -1 + uVar29;
      local_160 = CONCAT44(iVar33,(undefined4)local_160);
      if ((int)uVar1 < iVar33) {
LAB_1475c2def:
        local_160 = CONCAT44(uVar1,(undefined4)local_160);
      }
    }
    uStack_80 = CONCAT44(uStack_154,uStack_158);
    local_98 = local_170;
    pTStack_90 = uStack_168;
    local_88 = local_160;
    uVar11 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_160 >> 0x20);
    iVar33 = local_88._4_4_;
    local_88 = uVar11;
    while( true ) {
      plVar10 = local_100;
      if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      FVar7 = local_res8[0];
      if (((TStack_f8.CurrentBitIndex == iVar33) && (TStack_f8.Array == pTVar32)) &&
         (plVar10 == plVar8)) break;
      puVar34 = (undefined8 *)((longlong)TStack_f8.CurrentBitIndex * 0x78 + *plVar10);
      pTVar19 = (TSharedPtr<FStreamableHandle,1> *)puVar34[0xc];
      pTVar17 = &FPrimaryAssetLoadState::InvalidHandle;
      if (pTVar19 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
        pTVar17 = pTVar19;
      }
      pFVar5 = pTVar17->Object;
      if (((pFVar5 == (FStreamableHandle *)0x0) || (pFVar5->bCanceled != false)) ||
         (pFVar5->bReleased != false)) {
        pTVar17 = &FPrimaryAssetLoadState::InvalidHandle;
        if ((TSharedPtr<FStreamableHandle,1> *)puVar34[10] != (TSharedPtr<FStreamableHandle,1> *)0x0
           ) {
          pTVar17 = (TSharedPtr<FStreamableHandle,1> *)puVar34[10];
        }
        pFVar5 = pTVar17->Object;
        if (((pFVar5 != (FStreamableHandle *)0x0) && (pFVar5->bCanceled == false)) &&
           (pFVar5->bReleased == false)) goto LAB_1475c2ebf;
      }
      else {
LAB_1475c2ebf:
        pTVar17 = &FPrimaryAssetLoadState::InvalidHandle;
        if (pTVar19 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
          pTVar17 = pTVar19;
        }
        pFVar5 = pTVar17->Object;
        if (((pFVar5 == (FStreamableHandle *)0x0) || (pFVar5->bCanceled != false)) ||
           (lVar23 = 0x60, pFVar5->bReleased != false)) {
          lVar23 = 0x50;
        }
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        if (*(longlong *)(lVar23 + (longlong)puVar34) != 0) {
          pFVar22 = (FName *)(*(longlong *)(lVar23 + (longlong)puVar34) + 0x10);
          pFVar31 = pFVar22 + *(ushort *)(lVar23 + 8 + (longlong)puVar34);
          iVar14 = 0;
          if (pFVar22 != pFVar31) {
            while( true ) {
              if (1 < iVar14) {
                ::FString::AppendChars(&local_140,L", ",2);
              }
              pFVar18 = ::FName::ToString(pFVar22,&local_d0);
              iVar14 = (pFVar18->Data).ArrayNum;
              iVar30 = iVar14 + -1;
              if (iVar14 == 0) {
                iVar30 = 0;
              }
              ::FString::AppendChars
                        (&local_140,(wchar_t *)(pFVar18->Data).AllocatorInstance.Data,iVar30);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              pFVar22 = pFVar22 + 1;
              if (pFVar22 == pFVar31) break;
              iVar14 = local_140.Data.ArrayNum;
            }
          }
        }
        pTVar19 = &FPrimaryAssetLoadState::InvalidHandle;
        if ((TSharedPtr<FStreamableHandle,1> *)puVar34[0xc] !=
            (TSharedPtr<FStreamableHandle,1> *)0x0) {
          pTVar19 = (TSharedPtr<FStreamableHandle,1> *)puVar34[0xc];
        }
        pFVar5 = pTVar19->Object;
        if (((pFVar5 == (FStreamableHandle *)0x0) || (pFVar5->bCanceled != false)) ||
           (pFVar5->bReleased != false)) {
          FVar26 = (FScriptContainerElement)0x0;
        }
        else {
          FVar26 = (FScriptContainerElement)0x1;
        }
        iVar14 = (int)local_190;
        if ((int)local_190 == local_190._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_198,(int *)((longlong)&local_190 + 4));
        }
        _Src.Data = local_140.Data.AllocatorInstance.Data;
        local_190 = CONCAT44(local_190._4_4_,iVar14 + 1);
        pFVar25 = local_198.Data + (longlong)iVar14 * 0x20;
        *(undefined8 *)&pFVar25->field_0x0 = *puVar34;
        pFVar28 = pFVar25 + 0x10;
        pFVar25[8] = FVar26;
        *(FScriptContainerElement **)pFVar28 = (FScriptContainerElement *)0x0;
        lVar23 = (longlong)local_140.Data.ArrayNum;
        *(int *)(pFVar25 + 0x18) = local_140.Data.ArrayNum;
        if (local_140.Data.ArrayNum == 0) {
          *(int *)(pFVar25 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)pFVar28,
                     local_140.Data.ArrayNum,(int *)(pFVar25 + 0x1c));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar28,_Src.Data,lVar23 * 2);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    }
    if (0 < (int)local_190) {
      if (4 < (byte)LogAssetManager._0_1_) {
        ::FName::ToString(&local_128->PrimaryAssetType,&local_c0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      AlgoImpl::
      IntroSortInternal<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,int,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,_UAssetManager::DumpLoadedAssetState_::__l48::<lambda_2>_>_>
                ((FLoadedInfo *)local_198.Data,(int)local_190,FVar7,(<lambda_2> *)local_188);
      iVar33 = (int)local_190;
      pFVar36 = (FLoadedInfo *)(local_198.Data + (longlong)(int)local_190 * 0x20);
      pFVar28 = local_198.Data + 0x10;
      while( true ) {
        if ((int)local_190 != iVar33) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<`UAssetManager::DumpLoadedAssetState'::__l31::FLoadedInfo,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((FLoadedInfo *)(pFVar28 + -0x10) == pFVar36) break;
        if (4 < (byte)LogAssetManager._0_1_) {
          ::FName::ToString((FName *)(pFVar28 + -0x10),&local_b0);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        pFVar28 = pFVar28 + 0x20;
      }
    }
    DestructItems<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,int>
              ((FLoadedInfo *)local_198.Data,(int)local_190);
    if ((FLoadedInfo *)local_198.Data != (FLoadedInfo *)0x0) {
      FMemory::Free(local_198.Data);
    }
    pFVar27 = local_128 + 1;
    uVar21 = (ulonglong)local_130;
    pUVar15 = local_110;
  } while( true );
}

// DumpReferencersForPackage @ 1475c31f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001475c36e4) */
/* WARNING: Removing unreachable block (ram,0x0001475c338a) */
/* WARNING: Removing unreachable block (ram,0x0001475c384a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAssetManager::DumpReferencersForPackage(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  code *pcVar2;
  UAssetManager *pUVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  IAssetRegistry *pIVar7;
  ulonglong uVar8;
  FName *pFVar9;
  void *pvVar10;
  FDateTime this;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  FName *pFVar14;
  undefined1 auStack_3b8 [32];
  FString *local_398;
  FScriptContainerElement *local_390;
  longlong local_388;
  longlong local_380;
  undefined8 local_378;
  ForAnyElementType local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined1 local_357 [7];
  FString local_350;
  FString local_340;
  FString local_330;
  uint local_320;
  void *local_318;
  ulonglong local_310;
  undefined8 local_308;
  FString local_300;
  FScriptContainerElement *local_2f0;
  IAssetRegistry *local_2e8;
  UAssetManager *local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  FName local_2a8 [2];
  FString local_298;
  FString local_288;
  FString local_278;
  void *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (param_1->ArrayNum != 0) {
    if (((GEngine == (UEngine *)0x0) ||
        ((GEngine->AssetManager).field0_0x0.DebugPtr == (UAssetManager *)0x0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UAssetManager::IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0xe7d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2e0 = Get();
    pIVar7 = GetAssetRegistry(local_2e0);
    local_368.Data = (FScriptContainerElement *)0x0;
    local_360 = 0;
    local_2e8 = pIVar7;
    ::FString::FString(&local_350,L"digraph { ");
    if (local_368.Data <= (FScriptContainerElement *)&local_350) {
      if ((FScriptContainerElement *)&local_350 < local_368.Data + (longlong)local_360._4_4_ * 0x10)
      {
        local_380 = (longlong)(int)local_360;
        local_378 = 0x10;
        local_398 = &local_350;
        local_390 = local_368.Data;
        local_388 = (longlong)local_360._4_4_;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    iVar5 = (int)local_360;
    if ((int)local_360 == local_360._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_368,(int *)((longlong)&local_360 + 4));
    }
    local_360 = CONCAT44(local_360._4_4_,iVar5 + 1);
    pFVar11 = local_368.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_350.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_350.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_350.Data.ArrayMax;
    local_350.Data.ArrayNum = 0;
    local_350.Data.ArrayMax = 0;
    local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320 = param_1->ArrayNum;
    uVar8 = (ulonglong)(int)local_320;
    pFVar11 = (param_1->AllocatorInstance).Data;
    local_2f0 = pFVar11 + uVar8 * 0x10;
    while( true ) {
      pFVar12 = local_2f0;
      if (param_1->ArrayNum != (int)uVar8) {
        local_358 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_358);
      }
      if (pFVar11 == pFVar12) break;
      local_318 = (void *)0x0;
      local_310 = 0;
      local_268 = (void *)0x0;
      pcVar2 = *(code **)((longlong)*pIVar7 + 0x100);
      local_260 = 0;
      local_25c = 1;
      local_278.Data.AllocatorInstance.Data._0_2_ = 0;
      if (*(int *)(pFVar11 + 8) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)pFVar11;
      }
      pFVar9 = ::FName::FName(local_2a8,pwVar13);
      local_2c8 = *pFVar9;
      local_2c0 = 0;
      local_398 = &local_278;
      local_2b8 = 0;
      local_2b0 = 0;
      (*pcVar2)(pIVar7,&local_2c8,&local_318,1);
      if (local_268 != (void *)0x0) {
        FMemory::Free(local_268);
      }
      iVar5 = (int)local_310;
      uVar8 = (ulonglong)(int)local_310;
      pFVar14 = (FName *)(uVar8 * 0x20 + (longlong)local_318);
      pFVar9 = (FName *)((longlong)local_318 + 0x10);
      while( true ) {
        if ((int)uVar8 != iVar5) {
          local_357[0] = 0;
          `TCheckedPointerIterator<FAssetIdentifier,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_357);
        }
        if (pFVar9 + -2 == pFVar14) break;
        local_258.Base = local_238;
        local_258.bIsDynamic = false;
        local_258.bIsExternal = false;
        local_258.CurPos = local_238;
        local_258.End = (wchar_t *)local_38;
        FVar1 = pFVar9[-1];
        if (FVar1 == (FName)0x0) {
          ::FName::AppendString(pFVar9 + -2,&local_258);
          if (*pFVar9 != (FName)0x0) {
            if (local_258.End < local_258.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_258,1);
            }
            pvVar10 = FGenericPlatformString::Memcpy(local_258.CurPos,L".",2);
            this_00 = pFVar9;
            goto LAB_1475c3560;
          }
        }
        else {
          local_2d0 = *pFVar9;
          local_308 = 0;
          local_2d8 = FVar1;
          if ((FVar1 != (FName)0x0) && (local_2d0 != (FName)0x0)) {
            ::FName::AppendString(&local_2d8,&local_258);
            if (local_258.End < local_258.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_258,1);
            }
            pvVar10 = FGenericPlatformString::Memcpy(local_258.CurPos,L":",2);
            this_00 = &local_2d0;
LAB_1475c3560:
            local_258.CurPos = (wchar_t *)((longlong)pvVar10 + 2);
            ::FName::AppendString(this_00,&local_258);
          }
        }
        if (pFVar9[1] != (FName)0x0) {
          if (local_258.End < local_258.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_258,2);
          }
          pvVar10 = FGenericPlatformString::Memcpy(local_258.CurPos,L"::",4);
          local_258.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
          ::FName::AppendString(pFVar9 + 1,&local_258);
        }
        ::FString::ConstructFromPtrSize
                  (&local_300,local_258.Base,
                   (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
        ::FString::PrintfImpl(&local_340,L"\t\"%s\" -> \"%s\";");
        if (local_368.Data <= (FScriptContainerElement *)&local_340) {
          if ((FScriptContainerElement *)&local_340 <
              local_368.Data + (longlong)local_360._4_4_ * 0x10) {
            local_380 = (longlong)(int)local_360;
            local_378 = 0x10;
            local_398 = &local_340;
            local_390 = local_368.Data;
            local_388 = (longlong)local_360._4_4_;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        iVar6 = (int)local_360;
        if ((int)local_360 == local_360._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_368,(int *)((longlong)&local_360 + 4));
        }
        local_360 = CONCAT44(local_360._4_4_,iVar6 + 1);
        pFVar12 = local_368.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_340.Data.AllocatorInstance.Data;
        *(int *)(pFVar12 + 8) = local_340.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_340.Data.ArrayMax;
        local_340.Data.ArrayNum = 0;
        local_340.Data.ArrayMax = 0;
        local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (4 < (byte)LogAssetManager._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        }
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
        uVar8 = local_310 & 0xffffffff;
        pFVar9 = pFVar9 + 4;
      }
      if (local_318 != (void *)0x0) {
        FMemory::Free(local_318);
      }
      pFVar11 = pFVar11 + 0x10;
      uVar8 = (ulonglong)local_320;
      pIVar7 = local_2e8;
    }
    ::FString::FString(&local_330,L"}");
    if (local_368.Data <= (FScriptContainerElement *)&local_330) {
      if ((FScriptContainerElement *)&local_330 < local_368.Data + (longlong)local_360._4_4_ * 0x10)
      {
        local_380 = (longlong)(int)local_360;
        local_378 = 0x10;
        local_398 = &local_330;
        local_390 = local_368.Data;
        local_388 = (longlong)local_360._4_4_;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    iVar5 = (int)local_360;
    if ((int)local_360 == local_360._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_368,(int *)((longlong)&local_360 + 4));
    }
    pUVar3 = local_2e0;
    local_360 = CONCAT44(local_360._4_4_,iVar5 + 1);
    pFVar11 = local_368.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_330.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_330.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_330.Data.ArrayMax;
    local_330.Data.ArrayNum = 0;
    local_330.Data.ArrayMax = 0;
    local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pcVar2 = *(code **)(local_2e0->_padding_ + 0x520);
    this = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this.Ticks,&local_288);
    if (param_1->ArrayNum < 1) {
      local_398 = (FString *)0x0;
      local_390 = (FScriptContainerElement *)(longlong)param_1->ArrayNum;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ::FString::PrintfImpl(&local_298,L"ReferencersForPackage%s%s.gv");
    (*pcVar2)(pUVar3,&local_298,&local_368);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_368.Data,(int)local_360);
    if (local_368.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data);
    }
  }
  return;
}

// ExpandVirtualPaths @ 1475c64a0

bool __thiscall
UAssetManager::ExpandVirtualPaths
          (UAssetManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar18;
  FString *pFVar19;
  uint uVar20;
  bool local_res18;
  FString local_68;
  FString local_58;
  
  iVar6 = param_1->ArrayNum;
  uVar20 = 0;
  local_res18 = false;
  if (iVar6 < 1) {
    return false;
  }
  do {
    uVar10 = ~uVar20 >> 0x1f;
    uVar14 = 0;
    if ((int)uVar20 < iVar6) {
      uVar14 = uVar10;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    lVar9 = (longlong)(int)uVar20;
    if (AssetSearchRootsVirtualPath.Data.ArrayNum == 0) {
      pwVar17 = L"";
LAB_1475c656c:
      sVar8 = wcslen(pwVar17);
      iVar6 = ::FString::Find((FString *)(pFVar11 + lVar9 * 0x10),pwVar17,(int)sVar8,IgnoreCase,
                              FromStart,-1);
      if (iVar6 == -1) goto LAB_1475c65c6;
      pFVar19 = &AssetSearchRootsVirtualPath;
      pTVar18 = &this->AllAssetSearchRoots;
LAB_1475c667e:
      iVar6 = pTVar18->ArrayNum;
      local_res18 = true;
      if (iVar6 == 0) {
        uVar14 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar14 = uVar10;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = (param_1->AllocatorInstance).Data + lVar9 * 0x10;
        if (*(void **)pFVar11 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar11);
        }
        piVar1 = &param_1->ArrayNum;
        iVar6 = param_1->ArrayNum + ~uVar20;
        if (iVar6 != 0) {
          memmove(pFVar11,pFVar11 + 0x10,(longlong)iVar6 << 4);
        }
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        uVar20 = uVar20 - 1;
      }
      else {
        lVar13 = 0;
        uVar14 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar14 = uVar10;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = (param_1->AllocatorInstance).Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = *(int *)(pFVar11 + lVar9 * 0x10 + 8);
        lVar12 = (longlong)local_68.Data.ArrayNum;
        _Src = *(void **)(pFVar11 + lVar9 * 0x10);
        if (local_68.Data.ArrayNum == 0) {
          local_68.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                     local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
          memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
        }
        if (1 < iVar6) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,iVar6 + -1,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          lVar12 = (longlong)(int)(uVar20 + 1) * 0x10;
          pFVar11 = (param_1->AllocatorInstance).Data + lVar12;
          sVar8 = (longlong)(iVar6 + -1) * 0x10;
          memmove(pFVar11 + sVar8,pFVar11,(longlong)(int)(iVar7 - (uVar20 + 1)) << 4);
          memset((param_1->AllocatorInstance).Data + lVar12,0,sVar8);
        }
        uVar14 = 0;
        if (0 < iVar6) {
          lVar12 = 0;
          do {
            uVar10 = 0;
            if ((int)uVar14 < pTVar18->ArrayNum) {
              uVar10 = ~uVar14 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar11 = (pTVar18->AllocatorInstance).Data;
            if (*(int *)(pFVar11 + lVar12 + 8) == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = *(wchar_t **)(pFVar11 + lVar12);
            }
            if ((pFVar19->Data).ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
            }
            pFVar11 = (FScriptContainerElement *)
                      ::FString::Replace(&local_68,&local_58,pwVar16,pwVar17,IgnoreCase);
            uVar10 = 0;
            if ((int)(uVar14 + uVar20) < param_1->ArrayNum) {
              uVar10 = ~(uVar14 + uVar20) >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar15 = (param_1->AllocatorInstance).Data + (lVar9 + lVar13) * 0x10;
            if (pFVar15 != pFVar11) {
              pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar15->field_0x0)->
                       AllocatorInstance).Data;
              if (pFVar2 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2);
              }
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar15->field_0x0)->
              AllocatorInstance).Data =
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->
                   AllocatorInstance).Data;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar11->field_0x0)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(int *)&pFVar15[8].field_0x0 = *(int *)&pFVar11[8].field_0x0;
              *(int *)&pFVar15[0xc].field_0x0 = *(int *)&pFVar11[0xc].field_0x0;
              *(undefined8 *)&pFVar11[8].field_0x0 = 0;
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            uVar14 = uVar14 + 1;
            lVar13 = lVar13 + 1;
            lVar12 = lVar12 + 0x10;
          } while (lVar13 < iVar6);
        }
        uVar20 = uVar20 + iVar6 + -1;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pwVar17 = (wchar_t *)AssetSearchRootsVirtualPath.Data.AllocatorInstance.Data;
      if (AssetSearchRootsVirtualPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1475c656c;
LAB_1475c65c6:
      uVar14 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar14 = uVar10;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      if (DynamicSearchRootsVirtualPath.Data.ArrayNum == 0) {
        pwVar17 = L"";
LAB_1475c6633:
        sVar8 = wcslen(pwVar17);
        iVar6 = ::FString::Find((FString *)(pFVar11 + lVar9 * 0x10),pwVar17,(int)sVar8,IgnoreCase,
                                FromStart,-1);
        if (iVar6 != -1) {
          pFVar19 = &DynamicSearchRootsVirtualPath;
          pTVar18 = &this->AddedAssetSearchRoots;
          goto LAB_1475c667e;
        }
      }
      else {
        pwVar17 = (wchar_t *)DynamicSearchRootsVirtualPath.Data.AllocatorInstance.Data;
        if (DynamicSearchRootsVirtualPath.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) goto LAB_1475c6633;
      }
    }
    iVar6 = param_1->ArrayNum;
    uVar20 = uVar20 + 1;
    if (iVar6 <= (int)uVar20) {
      return local_res18;
    }
  } while( true );
}

// ExtractChunkIdFromPrimaryAssetId @ 1475c6a50

int __cdecl UAssetManager::ExtractChunkIdFromPrimaryAssetId(FPrimaryAssetId *param_1)

{
  if ((param_1->PrimaryAssetType).Name == PackageChunkType.Name) {
    return (param_1->PrimaryAssetName).Number - 1;
  }
  return -1;
}

// ExtractPrimaryAssetIdFromData @ 1475c6a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetId * __thiscall
UAssetManager::ExtractPrimaryAssetIdFromData
          (UAssetManager *this,FPrimaryAssetId *__return_storage_ptr__,FAssetData *param_1,
          FPrimaryAssetType param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar4;
  FPrimaryAssetId *pFVar5;
  undefined8 uVar6;
  FName FVar7;
  undefined1 auStackY_308 [32];
  uint local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  FPrimaryAssetId local_2b8;
  wchar_t *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  TStringView<wchar_t> local_298;
  undefined1 local_288 [16];
  void *local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_308;
  FAssetData::GetPrimaryAssetId(param_1,&local_2b8);
  if (((CONCAT44(local_2b8.PrimaryAssetType.Name.Number,
                 local_2b8.PrimaryAssetType.Name.ComparisonIndex.Value) == 0) ||
      (CONCAT44(local_2b8.PrimaryAssetName.Number,local_2b8.PrimaryAssetName.ComparisonIndex.Value)
       == 0)) && (param_2.Name != (FName)0x0)) {
    if ((param_1->PackageFlags & 0x20000) != 0) {
      local_268.Base = local_248;
      local_268.bIsDynamic = false;
      local_268.bIsExternal = false;
      local_268.CurPos = local_248;
      local_268.End = (wchar_t *)local_48;
      ::FName::AppendString(&param_1->PackageName,&local_268);
      local_2a8 = local_268.Base;
      iStack_2a0 = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
      local_298._12_4_ = uStack_29c;
      local_298.Size = iStack_2a0;
      local_298.DataPtr = local_268.Base;
      bVar3 = FPackageName::IsUnderGeneratedPackageSubPath(&local_298);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
      if (bVar3) {
        FVar7 = param_1->PackageName;
        (__return_storage_ptr__->PrimaryAssetType).Name = SuppressionType.Name;
        __return_storage_ptr__->PrimaryAssetName = FVar7;
        return __return_storage_ptr__;
      }
    }
    FVar7 = param_1->AssetName;
    if (param_2.Name == MapType.Name) {
      FVar7 = param_1->PackageName;
    }
    if (this->bShouldGuessTypeAndName != false) {
      pTVar4 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
               ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                       *)&this->AssetTypeMap,param_2.Name);
      if (pTVar4 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1539323056344791017>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x817,"FoundType");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FPrimaryAssetId *)(*pcVar2)();
          return pFVar5;
        }
      }
      else {
        lVar1 = this->_padding_;
        uVar6 = (**(code **)(lVar1 + 0x488))(this,local_288,param_1);
        (**(code **)(lVar1 + 0x340))(this,&local_2c8,uVar6);
        if (local_278 != (void *)0x0) {
          FMemory::Free(local_278);
        }
        if ((CONCAT44(uStack_2c4,local_2c8) == 0) ||
           (local_2b8.PrimaryAssetType.Name.ComparisonIndex.Value = local_2c8,
           local_2b8.PrimaryAssetType.Name.Number = uStack_2c4,
           local_2b8.PrimaryAssetName.ComparisonIndex.Value = uStack_2c0,
           local_2b8.PrimaryAssetName.Number = uStack_2bc, CONCAT44(uStack_2bc,uStack_2c0) == 0)) {
          (__return_storage_ptr__->PrimaryAssetType).Name = param_2.Name;
          __return_storage_ptr__->PrimaryAssetName = FVar7;
          return __return_storage_ptr__;
        }
      }
    }
  }
  (__return_storage_ptr__->PrimaryAssetType).Name.ComparisonIndex.Value =
       local_2b8.PrimaryAssetType.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->PrimaryAssetType).Name.Number = local_2b8.PrimaryAssetType.Name.Number;
  (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex.Value =
       local_2b8.PrimaryAssetName.ComparisonIndex.Value;
  (__return_storage_ptr__->PrimaryAssetName).Number = local_2b8.PrimaryAssetName.Number;
  return __return_storage_ptr__;
}

// ExtractSoftObjectPaths @ 1475c6c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAssetManager::ExtractSoftObjectPaths
          (UAssetManager *this,UStruct *param_1,void *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  void *pvVar3;
  FName *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FFieldClass *pFVar8;
  TTuple<FProperty_const_*,void_const_*> *pTVar9;
  longlong lVar10;
  UScriptStruct *pUVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar13;
  undefined1 auStackY_7c8 [32];
  FSoftObjectPath local_788;
  FPropertyValueIterator local_768;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  if ((param_1 == (UStruct *)0x0) || (param_2 == (void *)0x0)) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1539323056344789782>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0xcea,"Struct && StructValue");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pFVar8 = FProperty::StaticClass();
    FPropertyValueIterator::FPropertyValueIterator
              (&local_768,pFVar8,param_1,param_2,FullRecursion,IncludeDeprecated);
LAB_1475c6cf0:
    if (0 < local_768.PropertyIteratorStack.ArrayNum) {
      pTVar9 = FPropertyValueIterator::operator->(&local_768);
      pvVar3 = *(void **)pTVar9;
      pTVar9 = FPropertyValueIterator::operator->(&local_768);
      pFVar4 = *(FName **)&pTVar9->field_0x8;
      bVar7 = IsThisNotNull(pvVar3,"FField::GetFName");
      lVar10 = 0;
      if (bVar7) {
        lVar10 = *(longlong *)((longlong)pvVar3 + 0x20);
      }
      pFVar12 = (param_4->AllocatorInstance).Data;
      pFVar1 = pFVar12 + (longlong)param_4->ArrayNum * 8;
      for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
        if (*(longlong *)pFVar12 == lVar10) {
          local_768.bSkipRecursionOnce = true;
          FPropertyValueIterator::IterateToNext(&local_768);
          goto LAB_1475c6cf0;
        }
      }
      local_788.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_788.AssetPath.PackageName.Number = 0;
      local_788.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_788.AssetPath.AssetName.Number = 0;
      local_788.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_788.SubPathString.Data.ArrayNum = 0;
      local_788.SubPathString.Data.ArrayMax = 0;
      if (pvVar3 != (void *)0x0) {
        if (((*(ulonglong *)(*(longlong *)((longlong)pvVar3 + 8) + 0x18) & 0x200000000) == 0) &&
           (uVar2 = *(uint *)(*(longlong *)((longlong)pvVar3 + 8) + 0x18), (uVar2 >> 0x1d & 1) == 0)
           ) {
          if ((uVar2 >> 0x14 & 1) != 0) {
            pUVar11 = FSoftObjectPath::StaticStruct();
            if (*(UScriptStruct **)((longlong)pvVar3 + 0x70) == (UScriptStruct *)0x0) {
              bVar7 = pUVar11 == (UScriptStruct *)0x0;
            }
            else {
              bVar7 = *(UScriptStruct **)((longlong)pvVar3 + 0x70) == pUVar11;
            }
            if (!bVar7) {
              pUVar11 = FSoftClassPath::StaticStruct();
              if (*(UScriptStruct **)((longlong)pvVar3 + 0x70) == (UScriptStruct *)0x0) {
                bVar7 = pUVar11 == (UScriptStruct *)0x0;
              }
              else {
                bVar7 = *(UScriptStruct **)((longlong)pvVar3 + 0x70) == pUVar11;
              }
              if (!bVar7) goto LAB_1475c6ed9;
            }
            if (pFVar4 != (FName *)0x0) {
              local_788.AssetPath.PackageName = *pFVar4;
              local_788.AssetPath.AssetName = pFVar4[1];
              if ((FName *)&local_788.SubPathString != pFVar4 + 2) {
                uVar2 = pFVar4[3].ComparisonIndex.Value;
                FVar5 = pFVar4[2];
                local_788.SubPathString.Data.ArrayNum = uVar2;
                if ((uVar2 == 0) && (local_788.SubPathString.Data.ArrayMax == 0)) {
                  local_788.SubPathString.Data.ArrayNum = 0;
                  local_788.SubPathString.Data.ArrayMax = 0;
                  local_768.bSkipRecursionOnce = true;
                  goto LAB_1475c6ed9;
                }
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar2,local_788.SubPathString.Data.ArrayMax,
                           (ForAnyElementType *)&local_788.SubPathString,uVar2,
                           &local_788.SubPathString.Data.ArrayMax);
                if (uVar2 != 0) {
                  memcpy(local_788.SubPathString.Data.AllocatorInstance.Data,(void *)FVar5,
                         (longlong)(int)uVar2);
                }
              }
            }
            local_768.bSkipRecursionOnce = true;
          }
        }
        else if (pFVar4 != (FName *)0x0) {
          local_788.AssetPath.PackageName = pFVar4[1];
          local_788.AssetPath.AssetName = pFVar4[2];
          if ((FName *)&local_788.SubPathString != pFVar4 + 3) {
            uVar2 = pFVar4[4].ComparisonIndex.Value;
            FVar5 = pFVar4[3];
            local_788.SubPathString.Data.ArrayMax = 0;
            local_788.SubPathString.Data.ArrayNum = uVar2;
            if (uVar2 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar2,0,(ForAnyElementType *)&local_788.SubPathString,uVar2,
                         &local_788.SubPathString.Data.ArrayMax);
              memcpy(local_788.SubPathString.Data.AllocatorInstance.Data,(void *)FVar5,
                     (longlong)(int)uVar2);
            }
          }
        }
      }
LAB_1475c6ed9:
      if (local_788.AssetPath.PackageName != (FName)0x0) {
        TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath_const_&>
                  (param_3,&local_788);
      }
      if (local_788.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_788.SubPathString.Data.AllocatorInstance.Data);
      }
      FPropertyValueIterator::IterateToNext(&local_768);
      goto LAB_1475c6cf0;
    }
    FVar13 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_768;
    if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar13 = local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
              ((FPropertyValueStackEntry *)FVar13,local_768.PropertyIteratorStack.ArrayNum);
    if (local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FMemory::Free((void *)local_768.PropertyIteratorStack.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FindMissingChunkList @ 1475c9950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAssetManager::FindMissingChunkList
          (UAssetManager *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  uint *puVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  undefined8 uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FPakPlatformFile *this_00;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  IPlatformChunkInstall *pIVar10;
  FPlatformFileManager *this_01;
  ulonglong uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_02;
  longlong lVar17;
  undefined1 *puVar18;
  ForElementType<unsigned_int> FVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  int iVar28;
  uint *puVar29;
  undefined1 auStackY_438 [32];
  int local_3e8;
  undefined1 local_3e4;
  undefined1 local_3e3;
  undefined1 local_3e2 [2];
  uint local_3e0;
  undefined4 local_3dc;
  Type local_3d8;
  uint local_3d4;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_3d0;
  undefined8 uStack_3c8;
  TBitArray<FDefaultBitArrayAllocator> *local_3c0;
  uint uStack_3b8;
  uint uStack_3b4;
  int local_3b0;
  undefined4 uStack_3ac;
  int iStack_3a8;
  undefined4 uStack_3a4;
  int local_3a0;
  uint uStack_39c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_398;
  undefined4 local_390;
  uint uStack_38c;
  int iStack_388;
  undefined4 uStack_384;
  IPlatformChunkInstall *local_380;
  TArray<int,TSizedDefaultAllocator<32>_> *local_378;
  FScriptContainerElement *local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_368;
  undefined4 local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  FPakPlatformFile *local_330;
  TArray<int,TSizedDefaultAllocator<32>_> *local_328;
  FScriptContainerElement *local_320;
  UAssetManager *local_318;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *local_310;
  TPairInitializer<int_const_&,EChunkLocation::Type_const_&> local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 uStack_2a8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_298;
  undefined8 uStack_278;
  uint *local_270;
  Type *local_268;
  FSparseArrayAllocationInfo local_260;
  TArrayView<int_const_,int> local_250 [2];
  undefined4 local_224;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_220;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1f8;
  FScriptContainerElement local_1c0 [8];
  ForAnyElementType local_1b8;
  uint local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  undefined1 local_158 [32];
  ForElementType<unsigned_int> local_138;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  ForElementType<FSetElementId> local_118;
  int local_110;
  FAssetData local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
  if (this->bIsLoadingFromPakFiles == false) {
    bVar7 = false;
  }
  else {
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = 0;
    local_180 = 0;
    local_174 = 0;
    local_168 = (undefined1 *)0x0;
    local_160 = 0;
    local_17c = 0x80;
    local_178 = 0xffffffff;
    local_378 = param_2;
    local_328 = param_3;
    local_318 = this;
    local_310 = param_1;
    pIVar10 = FWindowsPlatformMisc::GetPlatformChunkInstall();
    local_380 = pIVar10;
    this_01 = FPlatformFileManager::Get();
    local_330 = (FPakPlatformFile *)FPlatformFileManager::FindPlatformFile(this_01,L"PakFile");
    if ((local_330 == (FPakPlatformFile *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pak",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0xac0,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    local_3d4 = param_1->ArrayNum;
    uVar11 = (ulonglong)(int)local_3d4;
    pFVar26 = (param_1->AllocatorInstance).Data;
    local_320 = pFVar26 + uVar11 * 0x20;
    while( true ) {
      pFVar13 = local_320;
      local_370 = pFVar26;
      if (param_1->ArrayNum != (int)uVar11) {
        local_3e4 = 0;
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_3e4);
      }
      if (pFVar26 == pFVar13) break;
      local_108.ChunkArrayRegistryHandle.Index = -1;
      local_108.PackageName.ComparisonIndex.Value = 0;
      local_108.PackageName.Number = 0;
      local_108.PackagePath.ComparisonIndex.Value = 0;
      local_108.PackagePath.Number = 0;
      local_108.AssetName.ComparisonIndex.Value = 0;
      local_108.AssetName.Number = 0;
      local_108.AssetClass.ComparisonIndex.Value = 0;
      local_108.AssetClass.Number = 0;
      local_108.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
      local_108.AssetClassPath.PackageName.Number = 0;
      local_108.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
      local_108.AssetClassPath.AssetName.Number = 0;
      local_108.PackageFlags = 0;
      local_108.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
      local_108.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
      local_108.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_108.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_108.ChunkIDs.ArrayNum = 0;
      local_108.ChunkIDs.ArrayMax = 2;
      (**(code **)(this->_padding_ + 0x478))(this,pFVar26,&local_108);
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      local_1f8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_1f8.AllocationFlags.NumBits = 0;
      local_1f8.AllocationFlags.MaxBits = 0x80;
      local_1f8.FirstFreeIndex = -1;
      local_1f8.NumFreeIndices = 0;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = 0;
      local_158._0_8_ = (FScriptContainerElement *)0x0;
      local_158._8_8_ = 0;
      local_138 = (ForElementType<unsigned_int>)0x0;
      local_130 = 0;
      local_12c = 0x80;
      local_128 = -1;
      local_124 = 0;
      local_118 = (ForElementType<FSetElementId>)0x0;
      local_110 = 0;
      FAssetData::GetChunkIDs(&local_108,local_250);
      this_00 = local_330;
      puVar1 = (uint *)(local_250[0].DataPtr + local_250[0].ArrayNum);
      uVar25 = local_1f8.AllocationFlags.NumBits;
      for (puVar29 = (uint *)local_250[0].DataPtr; puVar29 != puVar1; puVar29 = puVar29 + 1) {
        puVar24 = (uint *)0x0;
        local_3e0 = *puVar29;
        uVar11 = (ulonglong)local_3e0;
        if ((int)local_1a0 != local_174) {
          puVar18 = local_170;
          if (local_168 != (undefined1 *)0x0) {
            puVar18 = local_168;
          }
          for (iVar22 = *(int *)(puVar18 + (ulonglong)(local_160 - 1U & local_3e0) * 4);
              iVar22 != -1; iVar22 = *(int *)(local_1a8 + 8 + (longlong)iVar22 * 0x10)) {
            if (*(uint *)(local_1a8 + (longlong)iVar22 * 0x10) == local_3e0) goto LAB_1475c9cdb;
          }
        }
        local_3d8 = (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,uVar11);
        if ((1 < (int)local_3d8) && (bVar7 = FPakPlatformFile::AnyChunksAvailable(this_00), bVar7))
        {
          local_3d8 = FPakPlatformFile::GetPakChunkLocation(this_00,local_3e0);
        }
        local_270 = &local_3e0;
        local_268 = &local_3d8;
        TSet<TTuple<int,enum_EChunkLocation::Type>,TDefaultMapHashableKeyFuncs<int,enum_EChunkLocation::Type,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,enum_EChunkLocation::Type_const_&>_>
                  (&local_1a8,&local_308,(bool *)&local_270);
        uVar11 = (ulonglong)local_3e0;
        uVar25 = local_1f8.AllocationFlags.NumBits;
LAB_1475c9cdb:
        puVar23 = puVar24;
        if ((int)local_1a0 != local_174) {
          puVar18 = local_170;
          if (local_168 != (undefined1 *)0x0) {
            puVar18 = local_168;
          }
          uVar9 = *(uint *)(puVar18 + (local_160 - 1 & uVar11) * 4);
          while (puVar23 = puVar24, uVar9 != 0xffffffff) {
            puVar23 = (uint *)((longlong)(int)uVar9 * 0x10 + local_1a8);
            if (*puVar23 == (uint)uVar11) {
              if (puVar23 != (uint *)0x0) goto LAB_1475c9d6b;
              break;
            }
            uVar9 = puVar23[2];
          }
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        uVar25 = local_1f8.AllocationFlags.NumBits;
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
LAB_1475c9d6b:
        uVar9 = puVar23[1];
        if (uVar9 == 0) {
          piVar20 = &local_340;
          this_02 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158;
LAB_1475ca1d4:
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (this_02,piVar20,(bool *)&local_3e0);
          uVar25 = local_1f8.AllocationFlags.NumBits;
        }
        else if (uVar9 == 1) {
          if (local_1f8.NumFreeIndices == 0) {
            iVar22 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xc,4,1,(ForAnyElementType *)&local_1f8,&local_1f8.Data.ArrayNum,
                                &local_1f8.Data.ArrayMax);
            iVar28 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               (&local_1f8.AllocationFlags,1);
            FVar19 = (ForElementType<unsigned_int>)&local_1f8.AllocationFlags;
            if (local_1f8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_1f8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            bVar15 = (byte)iVar28 & 0x1f;
            if (iVar28 < 0) {
              iVar28 = iVar28 + 0x1f;
              bVar15 = bVar15 - 0x20;
            }
            puVar23 = (uint *)((longlong)FVar19 + (longlong)(iVar28 >> 5) * 4);
            *puVar23 = *puVar23 & ~(1 << (bVar15 & 0x1f));
            iVar28 = local_1f8.FirstFreeIndex;
          }
          else {
            iVar28 = *(int *)(local_1f8.Data.AllocatorInstance.Data +
                             (longlong)local_1f8.FirstFreeIndex * 0xc + 4);
            local_1f8.NumFreeIndices = local_1f8.NumFreeIndices + -1;
            iVar22 = local_1f8.FirstFreeIndex;
            if (local_1f8.NumFreeIndices != 0) {
              *(undefined4 *)(local_1f8.Data.AllocatorInstance.Data + (longlong)iVar28 * 0xc) =
                   0xffffffff;
            }
          }
          local_1f8.FirstFreeIndex = iVar28;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex(&local_1f8,&local_260,iVar22);
          if (local_260.Pointer != (uint *)0x0) {
            *(uint *)local_260.Pointer = local_3e0;
            *(uint *)((longlong)local_260.Pointer + 4) = 0xffffffff;
            puVar24 = local_260.Pointer;
          }
          uVar25 = *puVar24;
          if ((local_1f8.Data.ArrayNum - local_1f8.NumFreeIndices != 1) &&
             (local_1f8.Data.ArrayNum != local_1f8.NumFreeIndices)) {
            FVar16.Data = local_1c0;
            if (local_1b8.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_1b8.Data;
            }
            for (iVar22 = *(int *)(FVar16.Data + (ulonglong)(local_1b0 - 1 & uVar25) * 4);
                iVar22 != -1;
                iVar22 = *(int *)(local_1f8.Data.AllocatorInstance.Data + (longlong)iVar22 * 0xc + 4
                                 )) {
              if (*(uint *)(local_1f8.Data.AllocatorInstance.Data + (longlong)iVar22 * 0xc) ==
                  uVar25) {
                if (iVar22 != -1) {
                  *(uint *)(local_1f8.Data.AllocatorInstance.Data + (longlong)iVar22 * 0xc) = uVar25
                  ;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized(&local_1f8,local_260.Index,1);
                  uVar25 = local_1f8.AllocationFlags.NumBits;
                  goto LAB_1475ca1e8;
                }
                break;
              }
            }
          }
          uVar21 = 1;
          uVar9 = local_1f8.Data.ArrayNum - local_1f8.NumFreeIndices;
          if (3 < uVar9) {
            uVar11 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_348 = (undefined4)lVar17;
            uVar21 = 1 << ((byte)lVar17 & 0x1f);
          }
          if (((int)uVar9 < 1) || ((int)uVar21 <= (int)local_1b0)) {
            uVar25 = local_1b0 - 1 & uVar25;
            puVar24[2] = uVar25;
            FVar16.Data = local_1c0;
            if (local_1b8.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_1b8.Data;
            }
            uVar11 = (longlong)(int)local_1b0 - 1U & (longlong)(int)uVar25;
            puVar24[1] = *(uint *)(FVar16.Data + uVar11 * 4);
            *(int *)(FVar16.Data + uVar11 * 4) = local_260.Index;
            uVar25 = local_1f8.AllocationFlags.NumBits;
          }
          else {
            local_1b0 = uVar21;
            if (local_1b8.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b8,0,0,4)
              ;
            }
            if (uVar21 != 0) {
              uVar25 = uVar21;
              if (uVar21 < 2) {
                if (local_1b8.Data != (FScriptContainerElement *)0x0) {
                  uVar25 = 0;
                  goto LAB_1475c9fca;
                }
              }
              else {
LAB_1475c9fca:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_1b8,0,uVar25,4);
              }
              if (0 < (int)uVar21) {
                uVar27 = (ulonglong)uVar21;
                uVar11 = 0;
                do {
                  FVar16.Data = local_1c0;
                  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
                    FVar16.Data = local_1b8.Data;
                  }
                  uVar12 = uVar11 & (longlong)(int)uVar21 - 1U;
                  uVar11 = uVar11 + 1;
                  *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
            }
            uVar25 = local_1f8.AllocationFlags.NumBits;
            if (local_1b0 != 0) {
              uStack_39c = 1;
              local_3a0 = 0;
              pTStack_398 = &local_1f8.AllocationFlags;
              uStack_38c = 0;
              iStack_388 = 0;
              if (local_1f8.AllocationFlags.NumBits != 0) {
                FVar19 = (ForElementType<unsigned_int>)&local_1f8.AllocationFlags;
                if (local_1f8.AllocationFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar19 = local_1f8.AllocationFlags.AllocatorInstance.SecondaryData;
                }
                uVar9 = *(uint *)FVar19;
                while (uVar9 == 0) {
                  iStack_388 = iStack_388 + 0x20;
                  lVar17 = (longlong)local_3a0;
                  local_3a0 = local_3a0 + 1;
                  if ((int)((local_1f8.AllocationFlags.NumBits - 1U) +
                           ((int)(local_1f8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                      local_3a0) goto LAB_1475ca0de;
                  uVar9 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar17 * 4);
                }
                uStack_39c = -uVar9 & uVar9;
                uVar11 = (ulonglong)uStack_39c * 2 + 1;
                lVar17 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                local_344 = (int)lVar17;
                uStack_38c = local_344 + -1 + iStack_388;
                if (local_1f8.AllocationFlags.NumBits < (int)uStack_38c) {
LAB_1475ca0de:
                  uStack_38c = local_1f8.AllocationFlags.NumBits;
                }
              }
              local_390 = 0xffffffff;
              local_308.Value = (Type *)&local_1f8;
              local_2f8._padding_ = CONCAT44(uStack_39c,local_3a0);
              local_2f8.CurrentBitIndex = uStack_38c;
              local_2f8.UnvisitedBitMask = 0xffffffff;
              local_2f8._28_4_ = uStack_384;
              local_2f8.BaseBitIndex = iStack_388;
              local_2f8.Array = pTStack_398;
              uVar9 = uStack_38c;
              if ((int)uStack_38c < local_1f8.AllocationFlags.NumBits) {
                do {
                  lVar17 = (longlong)(int)uVar9;
                  pFVar26 = (((TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,TSizedDefaultAllocator<32>_>
                               *)local_308.Value)->AllocatorInstance).Data;
                  uVar25 = local_1b0 - 1 & *(uint *)(pFVar26 + lVar17 * 0xc);
                  *(uint *)(pFVar26 + lVar17 * 0xc + 8) = uVar25;
                  FVar16.Data = local_1c0;
                  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
                    FVar16.Data = local_1b8.Data;
                  }
                  uVar11 = (longlong)(int)local_1b0 - 1U & (longlong)(int)uVar25;
                  *(undefined4 *)(pFVar26 + lVar17 * 0xc + 4) =
                       *(undefined4 *)(FVar16.Data + uVar11 * 4);
                  *(uint *)(FVar16.Data + uVar11 * 4) = uVar9;
                  local_2f8.UnvisitedBitMask =
                       local_2f8.UnvisitedBitMask & ~local_2f8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
                  uVar25 = local_1f8.AllocationFlags.NumBits;
                  uVar9 = local_2f8.CurrentBitIndex;
                } while (local_2f8.CurrentBitIndex < (local_2f8.Array)->NumBits);
              }
            }
          }
        }
        else if ((uVar9 == 2) || (uVar9 == 3)) {
          piVar20 = (int *)((longlong)&local_308.Key + 4);
          this_02 = &local_98;
          goto LAB_1475ca1d4;
        }
LAB_1475ca1e8:
        pIVar10 = local_380;
        param_3 = local_328;
      }
      if (local_98.Elements._8_4_ == local_98.Elements._52_4_) {
        iVar22 = local_1f8.Data.ArrayNum - local_1f8.NumFreeIndices;
        if (iVar22 < 1) {
          if (0 < local_158._8_4_ - local_124) {
            local_368.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
            local_368._padding_._0_4_ = 0;
            local_368._padding_._4_4_ = 1;
            local_368.UnvisitedBitMask = 0xffffffff;
            local_368.CurrentBitIndex = 0;
            local_368.BaseBitIndex = 0;
            if (local_130 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_368);
            }
            uStack_3c8 = CONCAT44(local_368._padding_._4_4_,(undefined4)local_368._padding_);
            iStack_3a8 = local_158._8_4_ - local_124;
            local_3d0 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_158;
            uStack_3b4 = local_368.CurrentBitIndex;
            uStack_3b8 = local_368.UnvisitedBitMask;
            uStack_3ac = local_368._28_4_;
            local_3b0 = local_368.BaseBitIndex;
            local_3c0 = local_368.Array;
            uStack_278 = CONCAT44(uStack_3a4,iStack_3a8);
            TStack_298.Array = local_368.Array;
            local_2a0 = local_3d0;
            TStack_298._padding_ = uStack_3c8;
            TStack_298._16_8_ = _uStack_3b8;
            TStack_298._24_8_ = _local_3b0;
            pTVar14 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                (&local_220,
                                 (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),
                                 local_130);
            uStack_3c8 = pTVar14->_padding_;
            pTVar3 = pTVar14->Array;
            uVar4._0_4_ = pTVar14->UnvisitedBitMask;
            uVar4._4_4_ = pTVar14->CurrentBitIndex;
            local_3b0 = pTVar14->BaseBitIndex;
            uStack_3ac = *(undefined4 *)&pTVar14->field_0x1c;
            local_3c0 = pTVar3;
            _uStack_3b8 = uVar4;
            while( true ) {
              pTVar6 = local_2a0;
              if ((local_2a0->Data).ArrayNum - local_2a0->NumFreeIndices != (int)uStack_278) {
                local_3e2[0] = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e2);
              }
              if (((TStack_298.CurrentBitIndex == uVar4._4_4_) && (TStack_298.Array == pTVar3)) &&
                 (pTVar6 == (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_158)) break;
              local_3dc = *(undefined4 *)
                           ((pTVar6->Data).AllocatorInstance.Data +
                           (longlong)TStack_298.CurrentBitIndex * 0xc);
              pFVar26 = (param_3->AllocatorInstance).Data;
              if (((pFVar26 <= (FScriptContainerElement *)&local_3dc) &&
                  ((FScriptContainerElement *)&local_3dc < pFVar26 + (longlong)param_3->ArrayMax * 4
                  )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              iVar22 = param_3->ArrayNum;
              if (iVar22 == param_3->ArrayMax) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              param_3->ArrayNum = iVar22 + 1;
              *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_3dc;
              TStack_298.UnvisitedBitMask =
                   TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_298);
            }
          }
        }
        else {
          local_3e8 = -1;
          iVar28 = 0;
          uVar9 = 1;
          local_3b0 = 0;
          uStack_3b4 = 0;
          if (uVar25 != 0) {
            FVar19 = (ForElementType<unsigned_int>)&local_1f8.AllocationFlags;
            if (local_1f8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_1f8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar21 = *(uint *)FVar19;
            iVar28 = 0;
            local_3b0 = 0;
            while (uVar21 == 0) {
              lVar17 = (longlong)iVar28;
              local_3b0 = local_3b0 + 0x20;
              iVar28 = iVar28 + 1;
              uStack_3b4 = uVar25;
              if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
              goto LAB_1475ca2b0;
              uVar21 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar17 * 4);
            }
            uVar9 = -uVar21 & uVar21;
            uVar11 = (ulonglong)uVar9 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_33c = (int)lVar17;
            uStack_3b4 = local_3b0 + -1 + local_33c;
            if ((int)uVar25 < (int)uStack_3b4) {
              uStack_3b4 = uVar25;
            }
          }
LAB_1475ca2b0:
          local_3d0 = &local_1f8;
          local_3c0 = &local_1f8.AllocationFlags;
          uStack_3c8 = CONCAT44(uVar9,iVar28);
          uStack_3b8 = 0xffffffff;
          uVar9 = uVar25 & 0xffffffe0;
          TStack_2c8._padding_ = uStack_3c8;
          uStack_3ac = local_224;
          uStack_2a8 = CONCAT44(uStack_3a4,iVar22);
          iVar28 = (int)uVar25 >> 5;
          TStack_2c8.BaseBitIndex = local_3b0;
          TStack_2c8._28_4_ = local_224;
          TStack_2c8.UnvisitedBitMask = 0xffffffff;
          TStack_2c8.CurrentBitIndex = uStack_3b4;
          uVar21 = uVar25;
          iStack_3a8 = iVar22;
          local_2d0 = local_3d0;
          TStack_2c8.Array = local_3c0;
          if (((int)uVar25 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), uVar21 = local_1f8.AllocationFlags.NumBits, bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          pTVar5 = local_378;
          if (uVar25 != uVar21) {
            FVar19 = (ForElementType<unsigned_int>)&local_1f8.AllocationFlags;
            if (local_1f8.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_1f8.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar25 = -1 << ((byte)uVar25 & 0x1f) &
                     *(uint *)((longlong)FVar19 + (longlong)iVar28 * 4);
            while (uVar25 == 0) {
              lVar17 = (longlong)iVar28;
              uVar9 = uVar9 + 0x20;
              iVar28 = iVar28 + 1;
              uVar25 = uVar21;
              if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
              goto LAB_1475ca3e0;
              uVar25 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar17 * 4);
            }
            uVar11 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_338 = (int)lVar17;
            uVar25 = (uVar9 - 1) + local_338;
            if ((int)uVar21 < (int)uVar25) {
              uVar25 = uVar21;
            }
          }
LAB_1475ca3e0:
          while( true ) {
            pTVar6 = local_2d0;
            if ((local_2d0->Data).ArrayNum - local_2d0->NumFreeIndices != (int)uStack_2a8) {
              local_3e3 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3e3);
            }
            if (((TStack_2c8.CurrentBitIndex == uVar25) &&
                (TStack_2c8.Array == &local_1f8.AllocationFlags)) && (pTVar6 == &local_1f8)) break;
            iVar22 = *(int *)((pTVar6->Data).AllocatorInstance.Data +
                             (longlong)TStack_2c8.CurrentBitIndex * 0xc);
            pFVar13 = (pTVar5->AllocatorInstance).Data;
            pFVar26 = pFVar13 + (longlong)pTVar5->ArrayNum * 4;
            for (; pFVar13 != pFVar26; pFVar13 = pFVar13 + 4) {
              if (*(int *)pFVar13 == iVar22) {
                local_3e8 = -1;
                goto LAB_1475ca527;
              }
            }
            if (local_3e8 == -1) {
              local_3e8 = iVar22;
            }
            TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
          }
          if (local_3e8 != -1) {
            pFVar26 = (pTVar5->AllocatorInstance).Data;
            if (((pFVar26 <= (FScriptContainerElement *)&local_3e8) &&
                ((FScriptContainerElement *)&local_3e8 < pFVar26 + (longlong)pTVar5->ArrayMax * 4))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            iVar22 = pTVar5->ArrayNum;
            if (iVar22 == pTVar5->ArrayMax) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
            }
            pTVar5->ArrayNum = iVar22 + 1;
            *(int *)((pTVar5->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_3e8;
          }
        }
      }
LAB_1475ca527:
      local_110 = 0;
      if (local_118 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_118);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_158);
      local_1b0 = 0;
      if (local_1b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_1f8);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      if (local_108.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_108.ChunkIDs.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_108.TagsAndValues);
      pFVar26 = local_370 + 0x20;
      uVar11 = (ulonglong)local_3d4;
      pIVar10 = local_380;
      this = local_318;
      param_1 = local_310;
    }
    if ((local_378->ArrayNum < 1) && (param_3->ArrayNum < 1)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    local_160 = 0;
    if (local_168 != (undefined1 *)0x0) {
      FMemory::Free(local_168);
    }
    TSparseArray<TSparseSetElement<TTuple<int,enum_EChunkLocation::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,enum_EChunkLocation::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1a8);
  }
  return bVar7;
}

// FinishInitialLoading @ 1475cbb60

void __thiscall UAssetManager::FinishInitialLoading(UAssetManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->AssetTypeMap).field_0x10;
  iVar3 = *(int *)&(this->AssetTypeMap).field_0x28;
  bVar5 = false;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->AssetTypeMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475cbc0f;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1475cbc0f:
  uVar10 = *(uint *)&(this->AssetTypeMap).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AssetTypeMap).field_0x8 -
                       *(int *)&(this->AssetTypeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->AssetTypeMap).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475cbd11;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_1475cbd11:
  while( true ) {
    if (*(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)
             ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->AssetTypeMap);
    if (*(int *)(lVar9 + 0x90) != *(int *)(lVar9 + 0xbc)) {
      bVar5 = true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (!bVar5) {
    (**(code **)(this->_padding_ + 0x588))();
  }
  return;
}

// Get @ 1475cd620

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAssetManager * __cdecl UAssetManager::Get(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAssetManager *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar3 = (GEngine->AssetManager).field0_0x0.DebugPtr;
  if (pUVar3 == (UAssetManager *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UAssetManager *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return pUVar3;
}

// GetAllReferencersForPackage @ 1475cd880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAssetManager::GetAllReferencersForPackage
          (TSet<FAssetData,DefaultKeyFuncs<FAssetData,0>,FDefaultSetAllocator> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  UAssetManager *pUVar8;
  FName *pFVar9;
  FModuleManager *this;
  IModuleInterface *pIVar10;
  IAssetRegistry *pIVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  FAssetData *pFVar19;
  FAssetData *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  undefined8 *puVar24;
  FAssetData *pFVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  int iVar28;
  undefined1 auStackY_388 [32];
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356 [2];
  int local_354;
  FAssetData *local_350;
  undefined8 local_348;
  FNameEntryId local_340;
  uint uStack_33c;
  FName FStack_338;
  undefined4 local_330;
  uint uStack_32c;
  FNameEntryId FStack_328;
  uint uStack_324;
  undefined4 local_320;
  int local_31c;
  FName local_318;
  int local_310;
  undefined4 local_30c;
  undefined1 local_308 [20];
  uint uStack_2f4;
  FName FStack_2f0;
  FName local_2e8;
  FName FStack_2e0;
  longlong *local_2d8;
  FAssetDataTagMapSharedView_u_0 FStack_2d0;
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  uint local_2b8;
  uchar auStack_2b4 [4];
  int iStack_2b0;
  undefined4 uStack_2ac;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  FName local_278 [4];
  uchar local_254 [12];
  undefined1 local_248 [32];
  ForElementType<unsigned_int> local_228;
  uint local_220;
  int local_21c;
  int local_218;
  int local_214;
  FScriptContainerElement local_210 [8];
  ForAnyElementType local_208;
  uint local_200;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_1f8;
  undefined2 local_1a8;
  void *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  FSoftObjectPath *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  void *local_f8;
  undefined4 local_f0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_354 = param_3;
  if (param_3 < 1) {
    local_358 = 0;
    `UAssetManager::GetAllReferencersForPackage'::__l2::<lambda_1>::operator()(&local_358);
  }
  pUVar8 = Get();
  pIVar11 = pUVar8->CachedAssetRegistry;
  if (pIVar11 == (IAssetRegistry *)0x0) {
    pFVar9 = ::FName::FName(local_278,L"AssetRegistry");
    FVar2 = *pFVar9;
    this = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModuleChecked(this,FVar2);
    pIVar11 = (IAssetRegistry *)(**(code **)((longlong)*pIVar10 + 0x40))(pIVar10);
    pUVar8->CachedAssetRegistry = pIVar11;
  }
  iVar18 = param_2->ArrayNum;
  uVar14 = 0;
  pFVar22 = (param_2->AllocatorInstance).Data;
  local_1f8.Elements._0_8_ = 0;
  local_1f8.Elements._8_8_ = 0;
  local_1f8.Elements._32_8_ = 0;
  local_1f8.Elements._40_4_ = 0;
  local_1f8.Elements._44_4_ = 0x80;
  local_1f8.Elements._48_4_ = 0xffffffff;
  local_1f8.Elements._52_4_ = 0;
  local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1f8.HashSize = 0;
  local_248._0_8_ = (FScriptContainerElement *)0x0;
  local_248._8_8_ = 0;
  local_228 = (ForElementType<unsigned_int>)0x0;
  local_220 = 0;
  local_21c = 0x80;
  local_218 = -1;
  local_214 = 0;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200 = 0;
  uVar16 = uVar14;
  if (iVar18 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = (ulonglong)local_220;
  }
  uVar17 = iVar18 + (local_248._8_4_ - local_214);
  if (uVar17 <= (uint)(local_248._8_4_ - local_214)) goto LAB_1475cdc23;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_248,uVar17);
  if (uVar17 < 4) {
    uVar17 = 1;
  }
  else {
    uVar16 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_320 = (undefined4)lVar15;
    uVar17 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((local_200 == 0) || ((int)local_200 < (int)uVar17)) {
    local_200 = uVar17;
    if (local_208.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_208,0,0,4);
    }
    if (uVar17 != 0) {
      uVar21 = uVar17;
      if (uVar17 < 2) {
        if (local_208.Data != (FScriptContainerElement *)0x0) {
          uVar21 = 0;
          goto LAB_1475cda6d;
        }
      }
      else {
LAB_1475cda6d:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_208,0,uVar21,4);
      }
      if (0 < (int)uVar17) {
        uVar26 = (ulonglong)uVar17;
        uVar16 = uVar14;
        do {
          FVar13.Data = local_210;
          if (local_208.Data != (FScriptContainerElement *)0x0) {
            FVar13.Data = local_208.Data;
          }
          uVar12 = uVar16 & (longlong)(int)uVar17 - 1U;
          uVar16 = uVar16 + 1;
          *(undefined4 *)(FVar13.Data + uVar12 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_200 != 0) {
      uVar16 = (ulonglong)local_220;
      FStack_338 = (FName)((longlong)local_248 + 0x10);
      local_340.Value = 0;
      uStack_33c = 1;
      uStack_32c = 0;
      FStack_328.Value = 0;
      if (local_220 != 0) {
        FVar27 = (ForElementType<unsigned_int>)((longlong)local_248 + 0x10);
        if (local_228 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_228;
        }
        uVar17 = *(uint *)FVar27;
        uVar26 = uVar14;
        while (uVar17 == 0) {
          FStack_328.Value = (int)uVar26 + 0x20;
          uVar26 = (ulonglong)FStack_328.Value;
          iVar28 = (int)uVar14;
          local_340.Value = iVar28 + 1;
          uVar14 = (ulonglong)local_340.Value;
          if ((int)((local_220 - 1) + ((int)(local_220 - 1) >> 0x1f & 0x1fU)) >> 5 <
              (int)local_340.Value) goto LAB_1475cdb73;
          uVar17 = ((uint *)((longlong)FVar27 + 4))[iVar28];
        }
        uStack_33c = -uVar17 & uVar17;
        uVar14 = (ulonglong)uStack_33c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_31c = (int)lVar15;
        uStack_32c = local_31c + -1 + FStack_328.Value;
        uVar14 = (ulonglong)uStack_32c;
        if ((int)local_220 < (int)uStack_32c) {
LAB_1475cdb73:
          uVar14 = (ulonglong)local_220;
          uStack_32c = local_220;
        }
      }
      local_330 = 0xffffffff;
      local_308._8_8_ = local_248;
      uStack_2f4 = uStack_33c;
      local_308._16_4_ = local_340.Value;
      local_2e8.Number = uStack_32c;
      local_2e8.ComparisonIndex.Value = 0xffffffff;
      FStack_2e0.Number = uStack_324;
      FStack_2e0.ComparisonIndex.Value = FStack_328.Value;
      FStack_2f0 = FStack_338;
      if ((int)local_220 <= (int)uVar14) goto LAB_1475cdc23;
      do {
        puVar24 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + *(longlong *)local_308._8_8_);
        uVar3 = *puVar24;
        uVar17 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar17 = local_200 - 1 & uVar17 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar24 + 0xc) = uVar17;
        FVar13.Data = local_210;
        if (local_208.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_208.Data;
        }
        uVar16 = (longlong)(int)local_200 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar13.Data + uVar16 * 4);
        *(int *)(FVar13.Data + uVar16 * 4) = (int)uVar14;
        local_2e8.ComparisonIndex.Value = local_2e8.ComparisonIndex.Value & ~uStack_2f4;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_308 + 0x10));
        uVar14 = (ulonglong)local_2e8.Number;
      } while ((int)local_2e8.Number < *(int *)((longlong)FStack_2f0 + 0x18));
    }
  }
  uVar16 = (ulonglong)local_220;
LAB_1475cdc23:
  iVar28 = 0;
  pFVar1 = pFVar22 + (longlong)iVar18 * 8;
  if (pFVar22 != pFVar1) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_248,&local_318,
                 (bool *)pFVar22);
      pFVar22 = pFVar22 + 8;
    } while (pFVar22 != pFVar1);
    uVar16 = (ulonglong)local_220;
  }
  if (local_354 < 1) {
LAB_1475ce2f0:
    local_200 = 0;
    if (local_208.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_248);
    local_1f8.HashSize = 0;
    if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1f8.Elements);
    return;
  }
  do {
    FStack_2d0.Bits._0_4_ = 0;
    FStack_2d0.Fixed.PairBegin = 1;
    local_2b8 = 0;
    uVar17 = (uint)uVar16;
    uStack_2bc = local_2b8;
    if (uVar17 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_248 + 0x10);
      if (local_228 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_228;
      }
      uVar21 = *(uint *)FVar27;
      while (uVar21 == 0) {
        lVar15 = (longlong)(int)FStack_2d0.Bits._0_4_;
        local_2b8 = local_2b8 + 0x20;
        FStack_2d0.Bits._0_4_ = FStack_2d0.Bits._0_4_ + 1;
        uStack_2bc = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)FStack_2d0.Bits._0_4_) goto LAB_1475cdce1;
        uVar21 = ((uint *)((longlong)FVar27 + 4))[lVar15];
      }
      FStack_2d0.Fixed.PairBegin = -uVar21 & uVar21;
      uVar14 = (ulonglong)FStack_2d0.Fixed.PairBegin * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_318.Number = (uint)lVar15;
      uStack_2bc = (local_2b8 - 1) + local_318.Number;
      if ((int)uVar17 < (int)uStack_2bc) {
        uStack_2bc = uVar17;
      }
    }
LAB_1475cdce1:
    local_2d8 = (longlong *)local_248;
    auStack_2b4[0] = local_254[0];
    auStack_2b4[1] = local_254[1];
    auStack_2b4[2] = local_254[2];
    auStack_2b4[3] = local_254[3];
    local_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10);
    uVar21 = uVar17 & 0xffffffe0;
    iStack_2b0 = local_248._8_4_ - local_214;
    TStack_2a0._padding_ = CONCAT44(FStack_2d0.Fixed.PairBegin,FStack_2d0.Bits._0_4_);
    uStack_2c0 = 0xffffffff;
    TStack_2a0.CurrentBitIndex = uStack_2bc;
    TStack_2a0.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar17 >> 5;
    TStack_2a0._28_1_ = local_254[0];
    TStack_2a0._29_1_ = local_254[1];
    TStack_2a0._30_1_ = local_254[2];
    TStack_2a0._31_1_ = local_254[3];
    TStack_2a0.BaseBitIndex = local_2b8;
    uStack_280 = CONCAT44(uStack_2ac,iStack_2b0);
    local_2a8 = local_2d8;
    TStack_2a0.Array = local_2c8;
    uVar23 = uVar17;
    if (((int)uVar17 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), uVar23 = local_220, bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar17 != uVar23) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_248 + 0x10);
      if (local_228 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_228;
      }
      uVar17 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar18 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar18;
        uVar21 = uVar21 + 0x20;
        iVar18 = iVar18 + 1;
        uVar17 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_1475cddf0;
        uVar17 = ((uint *)((longlong)FVar27 + 4))[lVar15];
      }
      uVar14 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_310 = (int)lVar15;
      uVar17 = (uVar21 - 1) + local_310;
      if ((int)uVar23 < (int)uVar17) {
        uVar17 = uVar23;
      }
    }
LAB_1475cddf0:
    while( true ) {
      plVar6 = local_2a8;
      if ((int)local_2a8[1] - *(int *)((longlong)local_2a8 + 0x34) != (int)uStack_280) {
        local_357 = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_357);
      }
      if (((TStack_2a0.CurrentBitIndex == uVar17) &&
          (TStack_2a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10))) &&
         (plVar6 == (longlong *)local_248)) break;
      local_188 = (void *)0x0;
      local_180 = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      local_168 = (FSoftObjectPath *)0x0;
      local_160 = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_138._0_8_ = 0;
      local_138._8_8_ = 0;
      local_138._32_8_ = 0;
      local_138._40_4_ = 0;
      local_138._44_4_ = 0x80;
      local_138._48_4_ = 0xffffffff;
      local_138._52_4_ = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_e8._32_8_ = 0;
      local_e8._40_4_ = 0;
      local_e8._44_4_ = 0x80;
      local_e8._48_4_ = 0xffffffff;
      local_e8._52_4_ = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_98._32_8_ = 0;
      local_98._40_4_ = 0;
      local_98._44_4_ = 0x80;
      local_98._48_4_ = 0xffffffff;
      local_98._52_4_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_48 = 0;
      local_44 = 0;
      local_46 = 1;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_18c = 1;
      local_1a8 = 0;
      (**(code **)((longlong)*pIVar11 + 0xf0))
                (pIVar11,*(undefined8 *)(*plVar6 + (longlong)TStack_2a0.CurrentBitIndex * 0x10),
                 &local_188,1);
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      local_350 = (FAssetData *)0x0;
      local_348 = 0;
      (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,&local_188,&local_350,1);
      pFVar19 = local_350;
      iVar18 = (int)local_348;
      lVar15 = (longlong)(int)local_348;
      if (((int)local_348 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
      uVar23 = uVar21 + iVar18;
      if (uVar21 < uVar23) {
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
        }
        TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)param_1,uVar23);
        if (uVar23 < 4) {
          iVar18 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_30c = (undefined4)lVar4;
          iVar18 = 1 << ((byte)lVar4 & 0x1f);
        }
        if ((param_1->HashSize == 0) || (param_1->HashSize < iVar18)) {
          param_1->HashSize = iVar18;
          TSet<FAssetData,DefaultKeyFuncs<FAssetData,0>,FDefaultSetAllocator>::Rehash(param_1);
        }
      }
      pFVar25 = pFVar19 + lVar15;
      pFVar20 = local_350;
      for (; local_350 = pFVar20, pFVar19 != pFVar25; pFVar19 = pFVar19 + 1) {
        TSet<FAssetData,DefaultKeyFuncs<FAssetData,0>,FDefaultSetAllocator>::
        Emplace<FAssetData_const_&>(param_1,(FAssetData *)local_308,(bool *)pFVar19);
        pFVar20 = local_350;
      }
      iVar18 = (int)local_348;
      pFVar19 = pFVar20 + (int)local_348;
      while( true ) {
        if ((int)local_348 != iVar18) {
          local_356[0] = 0;
          `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_356);
        }
        if (pFVar20 == pFVar19) break;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&local_1f8,(FName *)(local_308 + 4),(bool *)pFVar20);
        pFVar20 = pFVar20 + 1;
      }
      DestructItems<FAssetData,int>(local_350,(int)local_348);
      if (local_350 != (FAssetData *)0x0) {
        FMemory::Free(local_350);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98);
      local_a0 = 0;
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8);
      local_f0 = 0;
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138);
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      DestructItems<FSoftObjectPath,int>(local_168,(int)local_160);
      if (local_168 != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_178 != (void *)0x0) {
        FMemory::Free(local_178);
      }
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
      TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
    }
    if (local_248._8_4_ != local_214) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_248);
      bVar7 = (longlong)local_248._8_8_ < 0;
      local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
      if (bVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
      }
      local_218 = -1;
      local_214 = 0;
      local_220 = 0;
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_248,&local_1f8);
    if (local_1f8.Elements._8_4_ != local_1f8.Elements._52_4_) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&local_1f8);
      bVar7 = (longlong)local_1f8.Elements._8_8_ < 0;
      local_1f8.Elements._8_8_ = local_1f8.Elements._8_8_ & 0xffffffff00000000;
      if (bVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)&local_1f8,0,(int *)&local_1f8.Elements.field_0xc);
      }
      local_1f8.Elements._48_4_ = 0xffffffff;
      local_1f8.Elements._52_4_ = 0;
      local_1f8.Elements._40_4_ = 0;
    }
    iVar28 = iVar28 + 1;
    if (local_354 <= iVar28) goto LAB_1475ce2f0;
    uVar16 = (ulonglong)local_220;
  } while( true );
}

// GetAssetBundleEntries @ 1475d12b0

bool __thiscall
UAssetManager::GetAssetBundleEntries
          (UAssetManager *this,FPrimaryAssetId *param_1,
          TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TSharedPtr<FAssetBundleData,1> *pTVar7;
  
  pTVar7 = TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
           ::Find((TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
                   *)&this->CachedAssetBundles,param_1);
  if (pTVar7 == (TSharedPtr<FAssetBundleData,1> *)0x0) {
    return false;
  }
  if (pTVar7->Object == (FAssetBundleData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pTVar2 = &pTVar7->Object->Bundles;
  if (param_2 == pTVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = pTVar2->ArrayNum;
  if (iVar1 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    ConstructItems<FAssetBundleEntry,FAssetBundleEntry,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18,
               (FAssetBundleEntry *)
               (((TArray<FAssetBundleEntry,TSizedDefaultAllocator<32>_> *)&pTVar2->AllocatorInstance
                )->AllocatorInstance).Data,iVar1);
  }
  if (pTVar7->Object == (FAssetBundleData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return 0 < (pTVar7->Object->Bundles).ArrayNum;
}

// GetAssetBundleEntry @ 1475d13e0

FAssetBundleEntry * __thiscall
UAssetManager::GetAssetBundleEntry
          (UAssetManager *this,FAssetBundleEntry *__return_storage_ptr__,FPrimaryAssetId *param_1,
          FName param_2)

{
  int iVar1;
  FAssetBundleData *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FAssetBundleData,1> *pTVar5;
  FAssetBundleEntry *pFVar6;
  FAssetBundleEntry *pFVar7;
  undefined1 local_res8 [8];
  
  pTVar5 = TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
           ::Find((TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
                   *)&this->CachedAssetBundles,param_1);
  if (pTVar5 == (TSharedPtr<FAssetBundleData,1> *)0x0) {
LAB_1475d148d:
    (__return_storage_ptr__->BundleName).ComparisonIndex = 0;
    (__return_storage_ptr__->BundleName).Number = 0;
    (__return_storage_ptr__->AssetPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AssetPaths).ArrayNum = 0;
    (__return_storage_ptr__->AssetPaths).ArrayMax = 0;
  }
  else {
    if (pTVar5->Object == (FAssetBundleData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAssetBundleEntry *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar2 = pTVar5->Object;
    iVar1 = (pFVar2->Bundles).ArrayNum;
    pFVar7 = (FAssetBundleEntry *)(pFVar2->Bundles).AllocatorInstance.Data;
    pFVar6 = pFVar7 + iVar1;
    while( true ) {
      if ((pFVar2->Bundles).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar6) goto LAB_1475d148d;
      if (pFVar7->BundleName == param_2) break;
      pFVar7 = pFVar7 + 1;
    }
    FAssetBundleEntry::FAssetBundleEntry(__return_storage_ptr__,pFVar7);
  }
  return __return_storage_ptr__;
}

// GetAssetDataForPath @ 1475d14c0

bool __thiscall
UAssetManager::GetAssetDataForPath(UAssetManager *this,FSoftObjectPath *param_1,FAssetData *param_2)

{
  IAssetRegistry *pIVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    return false;
  }
  pIVar1 = GetAssetRegistry(this);
  FSoftObjectPath::ToString(param_1,&local_48);
  (**(code **)(this->_padding_ + 0x4a8))(this,&local_28,param_1);
  if (local_28.AssetPath.PackageName != (FName)0x0) {
    pFVar2 = FSoftObjectPath::ToString(&local_28,&local_38);
    if (&local_48 != pFVar2) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x540))(this,pIVar1,&local_48,param_2);
  if ((param_2->PackageName == (FName)0x0) || (param_2->AssetName == (FName)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetAssetDataForPathInternal @ 1475d15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAssetManager::GetAssetDataForPathInternal
          (UAssetManager *this,IAssetRegistry *param_1,FString *param_2,FAssetData *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAssetData *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined1 auStackY_128 [32];
  TStringView<wchar_t> local_f8;
  FSoftObjectPath local_e8;
  FString local_c8;
  undefined1 local_b8 [56];
  FAssetDataTagMapSharedView local_80 [2];
  TReferenceControllerBase<1> *local_70;
  void *local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar3 = ::FString::EndsWith(param_2,L"_C",2,CaseSensitive);
  if ((bVar3) && (iVar4 = ::FString::Find(param_2,L"_C.",3,CaseSensitive,FromStart,-1), iVar4 == -1)
     ) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    pcVar2 = *(code **)((longlong)*param_1 + 0x78);
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    bVar3 = this->bIncludeOnlyOnDiskAssets;
    if (iVar4 + -2 < iVar4) {
      iVar4 = iVar4 + -2;
    }
    iVar7 = 0;
    if (0 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar1 == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_c8,pwVar6,iVar7);
    local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_e8.AssetPath.PackageName.Number = 0;
    local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_e8.AssetPath.AssetName.Number = 0;
    local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.SubPathString.Data.ArrayNum = 0;
    local_e8.SubPathString.Data.ArrayMax = 0;
    local_f8.Size = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      local_f8.Size = 0;
    }
    local_f8.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_e8,&local_f8);
    pFVar5 = (FAssetData *)(*pcVar2)(param_1,local_b8,&local_e8,bVar3);
    FAssetData::operator=(param_3,pFVar5);
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_80);
    if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if ((param_3->PackageName != (FName)0x0) && (param_3->AssetName != (FName)0x0)) {
      return;
    }
  }
  bVar3 = this->bIncludeOnlyOnDiskAssets;
  local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_e8.AssetPath.PackageName.Number = 0;
  local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_e8.AssetPath.AssetName.Number = 0;
  pcVar2 = *(code **)((longlong)*param_1 + 0x78);
  local_f8.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar4 = (param_2->Data).ArrayNum;
  local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.SubPathString.Data.ArrayNum = 0;
  local_e8.SubPathString.Data.ArrayMax = 0;
  local_f8.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_f8.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_e8,&local_f8);
  pFVar5 = (FAssetData *)(*pcVar2)(param_1,local_b8,&local_e8,bVar3);
  FAssetData::operator=(param_3,pFVar5);
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_80);
  if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAssetPathForData @ 1475d1860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSoftObjectPath * __thiscall
UAssetManager::GetAssetPathForData
          (UAssetManager *this,FSoftObjectPath *__return_storage_ptr__,FAssetData *param_1)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FSoftObjectPath *pFVar4;
  undefined1 auStack_2c8 [32];
  FSoftObjectPath local_2a8;
  FSoftObjectPath local_288;
  undefined8 local_258 [2];
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  pFVar1 = &__return_storage_ptr__->SubPathString;
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  if ((param_1->PackageName == (FName)0x0) || (param_1->AssetName == (FName)0x0)) {
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    if (pFVar1 != (FUtf8String *)local_258) {
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
      (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
    }
  }
  else {
    bVar3 = EndsWithBlueprint(&param_1->AssetClassPath);
    if (bVar3) {
      local_248.Base = local_228;
      local_248.bIsDynamic = false;
      local_248.bIsExternal = false;
      local_248.CurPos = local_228;
      local_248.End = (wchar_t *)local_28;
      FAssetData::GetSoftObjectPath(param_1,&local_288);
      FSoftObjectPath::ToString(&local_288,&local_248);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_248,L"_C",2);
      if (local_288.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.SubPathString.Data.AllocatorInstance.Data);
      }
      local_288.AssetPath.AssetName.ComparisonIndex.Value =
           (uint)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
      local_288.AssetPath.PackageName = (FName)local_248.Base;
      local_2a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_2a8.AssetPath.PackageName.Number = 0;
      local_2a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_2a8.AssetPath.AssetName.Number = 0;
      local_2a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.SubPathString.Data.ArrayNum = 0;
      local_2a8.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_2a8,(TStringView<wchar_t> *)&local_288);
      (__return_storage_ptr__->AssetPath).PackageName = local_2a8.AssetPath.PackageName;
      (__return_storage_ptr__->AssetPath).AssetName = local_2a8.AssetPath.AssetName;
      if (pFVar1 != &local_2a8.SubPathString) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_2a8.SubPathString.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->SubPathString).Data.ArrayNum =
             local_2a8.SubPathString.Data.ArrayNum;
        (__return_storage_ptr__->SubPathString).Data.ArrayMax =
             local_2a8.SubPathString.Data.ArrayMax;
        local_2a8.SubPathString.Data.ArrayNum = 0;
        local_2a8.SubPathString.Data.ArrayMax = 0;
        local_2a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_2a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.SubPathString.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
    }
    else {
      pFVar4 = FAssetData::GetSoftObjectPath(param_1,&local_288);
      FSoftObjectPath::operator=(__return_storage_ptr__,pFVar4);
      if (local_288.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetAssetRegistry @ 1475d1a50

IAssetRegistry * __thiscall UAssetManager::GetAssetRegistry(UAssetManager *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  IAssetRegistry *pIVar4;
  FName local_res8;
  
  pIVar4 = this->CachedAssetRegistry;
  if (pIVar4 == (IAssetRegistry *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,L"AssetRegistry");
    FVar1 = *pFVar2;
    this_00 = FModuleManager::Get();
    pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    pIVar4 = (IAssetRegistry *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
    this->CachedAssetRegistry = pIVar4;
  }
  return pIVar4;
}

// GetAssetSearchRoots @ 1475d1b90

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UAssetManager::GetAssetSearchRoots(UAssetManager *this,bool param_1)

{
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)(&this->WarningInvalidAssets + 1) +
         ((ulonglong)param_1 ^ 1) + 1;
}

// GetCachedPrimaryAssetEncryptionKeyGuid @ 1475d2f70

void __thiscall
UAssetManager::GetCachedPrimaryAssetEncryptionKeyGuid
          (UAssetManager *this,FPrimaryAssetId *param_1,FGuid *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  param_2->C = 0;
  param_2->D = 0;
  param_2->A = 0;
  param_2->B = 0;
  uVar4 = ::GetTypeHash(param_1);
  if (*(int *)&(this->PrimaryAssetEncryptionKeyCache).field_0x8 !=
      *(int *)&(this->PrimaryAssetEncryptionKeyCache).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PrimaryAssetEncryptionKeyCache).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PrimaryAssetEncryptionKeyCache).field_0x38;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->PrimaryAssetEncryptionKeyCache).field_0x48 - 1U &
                              uVar4) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->PrimaryAssetEncryptionKeyCache + (longlong)iVar7 * 0x28;
        if ((*(FName *)(*(longlong *)&this->PrimaryAssetEncryptionKeyCache + (longlong)iVar7 * 0x28)
             == (param_1->PrimaryAssetType).Name) &&
           (*(FName *)(lVar1 + 8) == param_1->PrimaryAssetName)) {
          if (iVar7 == -1) {
            return;
          }
          puVar5 = (undefined8 *)(lVar1 + 0x10);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 == (undefined8 *)0x0) {
            return;
          }
          uVar2 = *puVar5;
          uVar3 = puVar5[1];
          param_2->A = (int)uVar2;
          param_2->B = (int)((ulonglong)uVar2 >> 0x20);
          param_2->C = (int)uVar3;
          param_2->D = (int)((ulonglong)uVar3 >> 0x20);
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  return;
}

// GetContentRootPathFromPackageName @ 1475d3580

bool __cdecl UAssetManager::GetContentRootPathFromPackageName(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FString local_18;
  
  bVar2 = ::FString::StartsWith(param_1,L"/",1,CaseSensitive);
  if (bVar2) {
    iVar3 = ::FString::Find(param_1,L"/",1,CaseSensitive,FromStart,1);
    if (iVar3 != -1) {
      pFVar4 = ::FString::Mid(param_1,&local_18,0,iVar3 + 1);
      if (param_2 != pFVar4) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayNum = (pFVar4->Data).ArrayNum;
        (param_2->Data).ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// GetEncryptionKeyAssetTagName @ 1475d4900

FName __cdecl UAssetManager::GetEncryptionKeyAssetTagName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_EncryptionKey,L"EncryptionKey");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = NAME_EncryptionKey;
  return in_RCX;
}

// GetIfInitialized @ 1475d4b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAssetManager * __cdecl UAssetManager::GetIfInitialized(void)

{
  UAssetManager *pUVar1;
  
  if (GEngine != (UEngine *)0x0) {
    pUVar1 = (GEngine->AssetManager).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UAssetManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UAssetManager *)0x0;
}

// GetIfValid @ 1475d4b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAssetManager * __cdecl UAssetManager::GetIfValid(void)

{
  UAssetManager *pUVar1;
  
  if (GEngine != (UEngine *)0x0) {
    pUVar1 = (GEngine->AssetManager).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UAssetManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UAssetManager *)0x0;
}

// GetManagedPackageList @ 1475d4e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UAssetManager::GetManagedPackageList
          (UAssetManager *this,FPrimaryAssetId *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  IAssetRegistry *pIVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [8];
  FScriptContainerElement *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FName local_78;
  FName local_70;
  undefined8 local_68;
  FName local_60;
  undefined2 local_58 [8];
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pIVar10 = this->CachedAssetRegistry;
  bVar13 = false;
  local_90 = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if (pIVar10 == (IAssetRegistry *)0x0) {
    pFVar8 = ::FName::FName(&local_60,L"AssetRegistry");
    FVar1 = *pFVar8;
    this_00 = FModuleManager::Get();
    pIVar9 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    pIVar10 = (IAssetRegistry *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
    this->CachedAssetRegistry = pIVar10;
  }
  local_78 = (param_1->PrimaryAssetType).Name;
  local_c8 = (FScriptContainerElement *)local_58;
  local_70 = param_1->PrimaryAssetName;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 1;
  local_58[0] = 0;
  local_80 = 0;
  local_68 = 0;
  (**(code **)((longlong)*pIVar10 + 0xd8))(pIVar10,&local_80,&local_90,2);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  iVar4 = (int)local_88;
  pFVar12 = local_90 + (longlong)(int)local_88 * 0x20;
  pFVar11 = local_90;
  while( true ) {
    if ((int)local_88 != iVar4) {
      local_98[0] = 0;
      `TCheckedPointerIterator<FAssetIdentifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if (pFVar11 == pFVar12) break;
    if (*(longlong *)pFVar11 != 0) {
      pFVar2 = (param_2->AllocatorInstance).Data;
      bVar13 = true;
      if ((pFVar2 <= pFVar11) && (pFVar11 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
        local_b0 = (longlong)param_2->ArrayNum;
        local_a8 = 8;
        local_c8 = pFVar11;
        local_c0 = pFVar2;
        local_b8 = (longlong)param_2->ArrayMax;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = *(longlong *)pFVar11;
    }
    pFVar11 = pFVar11 + 0x20;
  }
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_90 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90);
  }
  return bVar13;
}

// GetNameData @ 1475d5d40

FPrimaryAssetData * __thiscall
UAssetManager::GetNameData(UAssetManager *this,FPrimaryAssetId *param_1,bool param_2)

{
  FPrimaryAssetData *pFVar1;
  
  pFVar1 = GetNameData(this,param_1,true);
  return pFVar1;
}

// GetNameData @ 1475d5d50

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetData * __thiscall
UAssetManager::GetNameData(UAssetManager *this,FPrimaryAssetId *param_1,bool param_2)

{
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar1;
  FPrimaryAssetData *pFVar2;
  FPrimaryAssetId local_18;
  
  pTVar1 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                   *)&this->AssetTypeMap,(param_1->PrimaryAssetType).Name);
  if ((pTVar1 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) &&
     (pFVar2 = TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
               ::Find((TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
                       *)&pTVar1->Object->AssetMap,param_1->PrimaryAssetName),
     pFVar2 != (FPrimaryAssetData *)0x0)) {
    return pFVar2;
  }
  if (((param_2) &&
      ((**(code **)(this->_padding_ + 0x490))(this,&local_18),
      local_18.PrimaryAssetType.Name != (FName)0x0)) && (local_18.PrimaryAssetName != (FName)0x0)) {
    pFVar2 = GetNameData(this,&local_18,false);
    return pFVar2;
  }
  return (FPrimaryAssetData *)0x0;
}

// GetNormalizedPackagePath @ 1475d60e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
UAssetManager::GetNormalizedPackagePath
          (FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  ::FString::ReplaceInline(&local_18,L"//",L"/",CaseSensitive);
  bVar1 = ::FString::EndsWith(&local_18,L"/",1,CaseSensitive);
  if (param_2) {
    if (!bVar1) {
      ::FString::AppendChars(&local_18,L"/",1);
    }
  }
  else if (bVar1) {
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    if (iVar2 + -1 < iVar2) {
      iVar2 = iVar2 + -1;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    ::FString::RemoveAt(&local_18,iVar4,1,Default);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetPackageCookRuleManagers @ 1475d6850

bool __thiscall
UAssetManager::GetPackageCookRuleManagers
          (UAssetManager *this,FName param_1,bool param_2,
          TMap<FPrimaryAssetId,UE::AssetRegistry::EDependencyProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UE::AssetRegistry::EDependencyProperty,0>_>
          *param_3)

{
  bool bVar1;
  
  bVar1 = GetPackageManagersInternal(this,param_1,true,param_2,param_3);
  return bVar1;
}

// GetPackageManagers @ 1475d6870

bool __thiscall
UAssetManager::GetPackageManagers
          (UAssetManager *this,FName param_1,bool param_2,
          TMap<FPrimaryAssetId,UE::AssetRegistry::EDependencyProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UE::AssetRegistry::EDependencyProperty,0>_>
          *param_3)

{
  bool bVar1;
  
  bVar1 = GetPackageManagersInternal(this,param_1,false,param_2,param_3);
  return bVar1;
}

// GetPackageManagers @ 1475d6890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UAssetManager::GetPackageManagers
          (UAssetManager *this,FName param_1,bool param_2,
          TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator> *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined7 in_register_00000081;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  ForAnyElementType *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined1 local_cc [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar10 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  uVar4 = (**(code **)(this->_padding_ + 0x468))
                    (this,param_1,CONCAT71(in_register_00000081,param_2),&local_98);
  uVar9 = local_88.NumBits;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = 0;
  if (local_88.NumBits != 0) {
    FVar11 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_88.AllocatorInstance.SecondaryData;
    }
    uVar12 = *(uint *)FVar11;
    local_e0 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar10;
      local_e0 = local_e0 + 0x20;
      iVar10 = iVar10 + 1;
      uStack_e4 = local_88.NumBits;
      if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar10) goto LAB_1475d696f;
      uVar12 = *(uint *)((uchar *)((longlong)FVar11 + 4) + lVar7 * 4);
    }
    uStack_f4 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_f4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_d0 = (int)lVar7;
    uStack_e4 = local_d0 + -1 + local_e0;
    if (local_88.NumBits < (int)uStack_e4) {
      uStack_e4 = local_88.NumBits;
    }
  }
LAB_1475d696f:
  local_100 = &local_98;
  local_f0 = &local_88;
  uVar12 = local_88.NumBits & 0xffffffe0;
  iStack_d8 = (int)local_90 - local_64;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,iVar10);
  iVar8 = local_88.NumBits >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar6 = (byte)local_88.NumBits;
  iStack_f8 = iVar10;
  uStack_dc = uStack_e4;
  local_cc._4_8_ = local_100;
  TStack_c0.Array = local_f0;
  if ((local_88.NumBits < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (uVar9 != local_88.NumBits) {
    FVar11 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_88.AllocatorInstance.SecondaryData;
    }
    uVar9 = -1 << (bVar6 & 0x1f) & *(uint *)((longlong)FVar11 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = local_88.NumBits;
      if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar8) goto LAB_1475d6a7c;
      uVar9 = *(uint *)((uchar *)((longlong)FVar11 + 4) + lVar7 * 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if (local_88.NumBits < (int)uVar9) {
      uVar9 = local_88.NumBits;
    }
  }
LAB_1475d6a7c:
  while( true ) {
    uVar3 = local_cc._4_8_;
    if (*(int *)&((ForAnyElementType *)(local_cc._4_8_ + 8))->Data -
        *(int *)((longlong)&((ForAnyElementType *)(local_cc._4_8_ + 0x30))->Data + 4) !=
        (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_c0.CurrentBitIndex == uVar9) && (TStack_c0.Array == &local_88)) &&
       ((ForAnyElementType *)uVar3 == &local_98)) break;
    TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>::
    Emplace<FPrimaryAssetId_const_&>
              (param_3,(FPrimaryAssetId *)local_cc,
               (bool *)(*(FScriptContainerElement **)uVar3 +
                       (longlong)TStack_c0.CurrentBitIndex * 0x1c));
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar1 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return (bool)uVar4;
}

// GetPackageManagersInternal @ 1475d6ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetManager::GetPackageManagersInternal
          (UAssetManager *this,FName param_1,bool param_2,bool param_3,
          TMap<FPrimaryAssetId,UE::AssetRegistry::EDependencyProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UE::AssetRegistry::EDependencyProperty,0>_>
          *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  FName FVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FModuleManager *this_00;
  IModuleInterface *pIVar14;
  IAssetRegistry *pIVar15;
  EDependencyProperty *pEVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  FPrimaryAssetId *pFVar19;
  FPrimaryAssetId *pFVar20;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 auStackY_148 [32];
  bool local_118;
  undefined1 local_117;
  char local_116;
  undefined1 local_115;
  EDependencyProperty local_114 [4];
  ForAnyElementType local_110;
  undefined8 local_108;
  uint local_100;
  FPrimaryAssetId local_f8;
  int local_e8 [6];
  longlong local_d0;
  longlong *local_c8;
  FName local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FName FStack_98;
  FName local_90;
  undefined8 uStack_88;
  FPrimaryAssetId *local_80;
  undefined1 *local_78;
  FName local_70;
  char local_68;
  undefined1 local_67;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pIVar15 = this->CachedAssetRegistry;
  local_116 = param_3;
  if (pIVar15 == (IAssetRegistry *)0x0) {
    pFVar13 = ::FName::FName(&local_70,L"AssetRegistry");
    FVar5 = *pFVar13;
    this_00 = FModuleManager::Get();
    pIVar14 = FModuleManager::LoadModuleChecked(this_00,FVar5);
    pIVar15 = (IAssetRegistry *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
    this->CachedAssetRegistry = pIVar15;
  }
  lVar22 = 0x118;
  if (!param_2) {
    lVar22 = 200;
  }
  plVar23 = (longlong *)((longlong)&this->_padding_ + lVar22);
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  local_118 = false;
  local_c8 = plVar23;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x24,4,0x80,&local_110,0,(int *)((longlong)&local_108 + 4));
  local_68 = param_2 << 4;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_b0 = 0;
  local_4c = 1;
  local_67 = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_c0 = param_1;
  (**(code **)((longlong)*pIVar15 + 0xf8))(pIVar15,&local_c0,&local_110,2);
  local_100 = 0;
  bVar8 = false;
  if (0 < (int)local_108) {
    local_d0 = 0;
    iVar12 = (int)local_108;
    do {
      lVar22 = local_d0;
      uVar11 = local_100;
      uVar10 = 0;
      if ((int)local_100 < iVar12) {
        uVar10 = ~local_100 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        iVar12 = (int)local_108;
      }
      FVar7.Data = local_110.Data;
      local_f8.PrimaryAssetType.Name = *(FName *)(local_110.Data + lVar22 + 8);
      if (local_f8.PrimaryAssetType.Name == (FName)0x0) {
        local_f8.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
        local_f8.PrimaryAssetType.Name.Number = 0;
        local_f8.PrimaryAssetName.ComparisonIndex.Value = 0;
        local_f8.PrimaryAssetName.Number = 0;
      }
      else {
        local_f8.PrimaryAssetName = *(FName *)(local_110.Data + lVar22 + 0x10);
      }
      local_e8[3] = 0;
      local_e8[4] = 0;
      if ((local_f8.PrimaryAssetType.Name != (FName)0x0) &&
         (local_f8.PrimaryAssetName != (FName)0x0)) {
        local_118 = true;
        local_117 = 0;
        uVar10 = ::GetTypeHash(&local_f8);
        if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
          puVar17 = &param_4->field_0x38;
          if (*(undefined1 **)&param_4->field_0x40 != (undefined1 *)0x0) {
            puVar17 = *(undefined1 **)&param_4->field_0x40;
          }
          uVar21 = *(uint *)(puVar17 + (ulonglong)(*(int *)&param_4->field_0x48 - 1U & uVar10) * 4);
          if (uVar21 != 0xffffffff) {
            do {
              pFVar13 = (FName *)((longlong)(int)uVar21 * 0x1c + *(longlong *)param_4);
              if ((*pFVar13 == local_f8.PrimaryAssetType.Name) &&
                 (pFVar13[1] == local_f8.PrimaryAssetName)) {
                if ((uVar21 != 0xffffffff) && (pFVar13 != (FName *)0x0)) goto LAB_1475d6e54;
                break;
              }
              uVar21 = pFVar13[2].Number;
            } while (uVar21 != 0xffffffff);
          }
        }
        local_80 = &local_f8;
        local_78 = &local_117;
        TSet<TTuple<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<FPrimaryAssetId_const_&,enum_UE::AssetRegistry::EDependencyProperty_&&>_>
                  (param_4,(uint)local_e8,
                   (TPairInitializer<FPrimaryAssetId_const_&,UE::AssetRegistry::EDependencyProperty_&&>
                    *)(ulonglong)uVar10,(bool *)&local_80);
        pFVar13 = (FName *)((longlong)local_e8[0] * 0x1c + *(longlong *)param_4);
LAB_1475d6e54:
        *(byte *)&pFVar13[2].ComparisonIndex.Value =
             (byte)pFVar13[2].ComparisonIndex.Value | (byte)FVar7.Data[lVar22 + 0x21];
        if ((local_116 != '\0') &&
           (uVar10 = ::GetTypeHash(&local_f8), (int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)
           )) {
          plVar18 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar18 = (longlong *)plVar23[8];
          }
          iVar12 = *(int *)((longlong)plVar18 + (ulonglong)((int)plVar23[9] - 1U & uVar10) * 4);
          if (iVar12 != -1) {
            do {
              lVar1 = *plVar23 + (longlong)iVar12 * 0x28;
              if ((*(FName *)(*plVar23 + (longlong)iVar12 * 0x28) == local_f8.PrimaryAssetType.Name)
                 && (*(FName *)(lVar1 + 8) == local_f8.PrimaryAssetName)) {
                if (iVar12 != -1) {
                  plVar18 = (longlong *)(lVar1 + 0x10);
                  if (lVar1 == 0) {
                    plVar18 = (longlong *)0x0;
                  }
                  uVar11 = local_100;
                  if (plVar18 != (longlong *)0x0) {
                    FVar3 = FVar7.Data[lVar22 + 0x21];
                    lVar1 = plVar18[1];
                    FVar4 = FVar7.Data[lVar22 + 0x20];
                    pFVar19 = (FPrimaryAssetId *)*plVar18;
                    pFVar20 = pFVar19 + (int)lVar1;
                    while( true ) {
                      if ((int)plVar18[1] != (int)lVar1) {
                        local_115 = 0;
                        `TCheckedPointerIterator<FPrimaryAssetId_const_,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(&local_115);
                      }
                      lVar22 = local_d0;
                      plVar23 = local_c8;
                      uVar11 = local_100;
                      if (pFVar19 == pFVar20) break;
                      local_114[0] = ~None;
                      uVar11 = ::GetTypeHash(pFVar19);
                      pEVar16 = TMapBase<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,enum_UE::AssetRegistry::EDependencyProperty,0>_>
                                ::
                                FindOrAddImpl<FPrimaryAssetId_const_&,enum_UE::AssetRegistry::EDependencyProperty>
                                          (param_4,uVar11,pFVar19,local_114);
                      if (*pEVar16 == ~None) {
                        *pEVar16 = None;
                        iVar12 = (int)local_108;
                        if ((int)local_108 == local_108._4_4_) {
                          iVar12 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x424,&local_110,(int *)((longlong)&local_108 + 4));
                        }
                        local_108 = CONCAT44(local_108._4_4_,iVar12 + 1);
                        pFVar2 = local_110.Data + (longlong)iVar12 * 0x24;
                        *(undefined4 *)(pFVar2 + 0x20) = 0;
                        *(undefined8 *)pFVar2 = 0;
                        *(undefined8 *)(pFVar2 + 8) = 0;
                        *(undefined8 *)(pFVar2 + 0x10) = 0;
                        *(undefined8 *)(pFVar2 + 0x18) = 0;
                        FStack_98 = (pFVar19->PrimaryAssetType).Name;
                        local_90 = pFVar19->PrimaryAssetName;
                        local_a0 = 0;
                        uStack_88 = 0;
                        pFVar2[0x20] = FVar4;
                        *(undefined8 *)pFVar2 = 0;
                        *(FName *)(pFVar2 + 8) = FStack_98;
                        pFVar2[0x21] = (FScriptContainerElement)((byte)FVar3 & 0xf7);
                        *(FName *)(pFVar2 + 0x10) = local_90;
                        *(undefined8 *)(pFVar2 + 0x18) = 0;
                      }
                      pFVar19 = pFVar19 + 1;
                    }
                  }
                }
                break;
              }
              iVar12 = *(int *)(lVar1 + 0x20);
            } while (iVar12 != -1);
          }
        }
        iVar12 = (int)local_108;
      }
      local_100 = uVar11 + 1;
      local_d0 = lVar22 + 0x24;
      bVar8 = local_118;
    } while ((int)local_100 < iVar12);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return bVar8;
}

// GetPakChunkIdToStringMapping @ 1475d7070

void __thiscall
UAssetManager::GetPakChunkIdToStringMapping
          (UAssetManager *this,
          TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
          *param_1)

{
  return;
}

// GetPakChunkIdToStringMapping @ 1475d7080

void __thiscall
UAssetManager::GetPakChunkIdToStringMapping
          (UAssetManager *this,FString *param_1,
          TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
          *param_2)

{
  return;
}

// GetPakStringToChunkIdMapping @ 1475d7090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAssetManager::GetPakStringToChunkIdMapping
          (UAssetManager *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  undefined1 local_dc [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar9 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  (**(code **)(this->_padding_ + 0x538))();
  uVar8 = local_70;
  uStack_104 = 1;
  local_f0 = 0;
  uStack_f4 = uVar9;
  if (local_70 != 0) {
    puVar10 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar10 = local_78;
    }
    uVar11 = *puVar10;
    local_f0 = 0;
    uVar9 = 0;
    while (uVar11 == 0) {
      lVar6 = (longlong)(int)uVar9;
      local_f0 = local_f0 + 0x20;
      uVar9 = uVar9 + 1;
      uStack_f4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar9)
      goto LAB_1475d7172;
      uVar11 = (puVar10 + 1)[lVar6];
    }
    uStack_104 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_104 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_e0 = (int)lVar6;
    uStack_f4 = local_e0 + -1 + local_f0;
    if ((int)local_70 < (int)uStack_f4) {
      uStack_f4 = local_70;
    }
  }
LAB_1475d7172:
  local_110 = (longlong *)local_98;
  local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar11 = local_70 & 0xffffffe0;
  iStack_e8 = local_98._8_4_ - local_64;
  uStack_f8 = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_f4;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_104,uVar9);
  iVar7 = (int)local_70 >> 5;
  TStack_d0._28_4_ = uStack_f4;
  TStack_d0.BaseBitIndex = local_f0;
  uStack_b0 = CONCAT44(uStack_e4,iStack_e8);
  bVar5 = (byte)local_70;
  uStack_108 = uVar9;
  uStack_ec = uStack_f4;
  local_dc._4_8_ = local_110;
  TStack_d0.Array = local_100;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar8 != local_70) {
    puVar10 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar10 = local_78;
    }
    uVar9 = -1 << (bVar5 & 0x1f) & puVar10[iVar7];
    while (uVar9 == 0) {
      lVar6 = (longlong)iVar7;
      uVar11 = uVar11 + 0x20;
      iVar7 = iVar7 + 1;
      uVar8 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_1475d727c;
      uVar9 = (puVar10 + 1)[lVar6];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar11;
    if ((int)local_70 < (int)uVar8) {
      uVar8 = local_70;
    }
  }
LAB_1475d727c:
  while( true ) {
    uVar3 = local_dc._4_8_;
    if ((int)*(longlong *)(local_dc._4_8_ + 8) - *(int *)(local_dc._4_8_ + 0x34) != (int)uStack_b0)
    {
      `TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_d0.CurrentBitIndex == uVar8) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       ((undefined1 *)uVar3 == local_98)) break;
    local_a0 = (longlong)TStack_d0.CurrentBitIndex * 0x20 + *(longlong *)uVar3;
    local_a8 = local_a0 + 8;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<FString_const_&,int_const_&> *)local_dc,
               (bool *)&local_a8);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar7 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (uint *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// GetPreviousPrimaryAssetIds @ 1475d7fe0

void __thiscall
UAssetManager::GetPreviousPrimaryAssetIds
          (UAssetManager *this,FPrimaryAssetId *param_1,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  code *pcVar7;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar8
  ;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar9
  ;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res20 [8];
  undefined1 local_188 [8];
  ulonglong local_180;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_138;
  FString local_130;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FPrimaryAssetId local_90;
  FPrimaryAssetId local_80 [2];
  undefined4 local_54;
  
  FPrimaryAssetId::ToString(param_1,&local_130);
  iVar17 = 0;
  puVar5 = &(this->PrimaryAssetIdRedirects).field_0x10;
  iVar12 = *(int *)&(this->PrimaryAssetIdRedirects).field_0x28;
  local_178 = &this->PrimaryAssetIdRedirects;
  local_180 = 1;
  iStack_170 = 0;
  local_158 = 0;
  uStack_16c = 1;
  iStack_15c = 0;
  if (iVar12 != 0) {
    puVar19 = *(uint **)&(this->PrimaryAssetIdRedirects).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar5;
    }
    uStack_16c = *puVar19;
    local_158 = 0;
    while (uStack_16c == 0) {
      lVar13 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      uStack_16c = 1;
      iStack_15c = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_1475d80ae;
      uStack_16c = puVar19[lVar13 + 1];
    }
    uStack_16c = -uStack_16c & uStack_16c;
    uVar4 = (ulonglong)uStack_16c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_148 = (int)lVar13;
    iStack_15c = local_158 + -1 + local_148;
    if (iVar12 < iStack_15c) {
      iStack_15c = iVar12;
    }
  }
LAB_1475d80ae:
  uStack_154 = local_54;
  iStack_150 = *(int *)&(this->PrimaryAssetIdRedirects).field_0x8 -
               *(int *)&(this->PrimaryAssetIdRedirects).field_0x34;
  uVar16 = *(uint *)&(this->PrimaryAssetIdRedirects).field_0x28;
  uVar20 = uVar16 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uStack_16c,iStack_170);
  uStack_160 = 0xffffffff;
  TStack_e8.CurrentBitIndex = iStack_15c;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_e8._28_4_ = local_54;
  TStack_e8.BaseBitIndex = local_158;
  uStack_c8 = CONCAT44(uStack_14c,iStack_150);
  local_168 = puVar5;
  local_138 = local_178;
  local_f0 = local_178;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
  if ((((int)uVar16 < 0) || (iVar12 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_138;
  uVar6 = *(uint *)&(this->PrimaryAssetIdRedirects).field_0x28;
  if (uVar16 != uVar6) {
    puVar18 = *(undefined1 **)&(this->PrimaryAssetIdRedirects).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar5;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1475d81e0;
      uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_144 = (int)lVar13;
    uVar16 = local_144 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_1475d81e0:
  do {
    pTVar9 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_e8.CurrentBitIndex == uVar16) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar5)) && (pTVar9 == pTVar8))
    break;
    puVar2 = (undefined8 *)(*(longlong *)pTVar9 + (longlong)TStack_e8.CurrentBitIndex * 0x28);
    iVar12 = *(int *)(puVar2 + 3);
    if (iVar12 == local_130.Data.ArrayNum) {
      if (1 < iVar12) {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)puVar2[2],(wchar_t *)local_130.Data.AllocatorInstance.Data);
        bVar11 = iVar12 == 0;
        goto LAB_1475d8248;
      }
LAB_1475d824f:
      uVar20 = *(int *)(puVar2 + 1) - 1;
      if (*(int *)(puVar2 + 1) == 0) {
        uVar20 = 0;
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar2;
      }
      FPrimaryAssetId::ParseTypeAndName(local_80,pwVar14,uVar20);
      TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPrimaryAssetId>
                (param_2,local_80);
    }
    else {
      bVar11 = iVar12 + local_130.Data.ArrayNum == 1;
LAB_1475d8248:
      if (bVar11) goto LAB_1475d824f;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  } while( true );
  local_100 = 0;
  puVar5 = &(this->PrimaryAssetTypeRedirects).field_0x10;
  iVar12 = *(int *)&(this->PrimaryAssetTypeRedirects).field_0x28;
  pTVar1 = &this->PrimaryAssetTypeRedirects;
  iStack_104 = 0;
  if (iVar12 != 0) {
    puVar19 = *(uint **)&(this->PrimaryAssetTypeRedirects).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar5;
    }
    uVar16 = *puVar19;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      local_100 = local_100 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_104 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1475d8321;
      uVar16 = puVar19[lVar13 + 1];
    }
    local_180 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = local_180 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_140 = (int)lVar13;
    iStack_104 = local_100 + -1 + local_140;
    if (iVar12 < iStack_104) {
      iStack_104 = iVar12;
    }
  }
LAB_1475d8321:
  uStack_114 = (undefined4)local_180;
  iStack_fc = iStack_15c;
  iStack_f8 = *(int *)&(this->PrimaryAssetTypeRedirects).field_0x8 -
              *(int *)&(this->PrimaryAssetTypeRedirects).field_0x34;
  uVar16 = *(uint *)&(this->PrimaryAssetTypeRedirects).field_0x28;
  uStack_108 = 0xffffffff;
  uVar20 = uVar16 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_114,iVar17);
  TStack_b8.CurrentBitIndex = iStack_104;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_b8._28_4_ = iStack_15c;
  TStack_b8.BaseBitIndex = local_100;
  uStack_98 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = pTVar1;
  iStack_118 = iVar17;
  local_110 = puVar5;
  local_c0 = pTVar1;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
  if ((((int)uVar16 < 0) || (iVar12 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = *(uint *)&(this->PrimaryAssetTypeRedirects).field_0x28;
  if (uVar16 != uVar6) {
    puVar18 = *(undefined1 **)&(this->PrimaryAssetTypeRedirects).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar5;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1475d8420;
      uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_1475d8420:
  while( true ) {
    pTVar10 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_b8.CurrentBitIndex == uVar16) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar5)) && (pTVar10 == pTVar1))
    break;
    pFVar3 = (FName *)(*(longlong *)pTVar10 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    if (pFVar3[1] == (param_1->PrimaryAssetType).Name) {
      local_90.PrimaryAssetType.Name = *pFVar3;
      local_90.PrimaryAssetName = param_1->PrimaryAssetName;
      TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPrimaryAssetId>
                (param_2,&local_90);
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrimaryAssetBundleStateMap @ 1475d84d0

void __thiscall
UAssetManager::GetPrimaryAssetBundleStateMap
          (UAssetManager *this,
          TMap<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,bool param_2)

{
  undefined1 *puVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FStreamableHandle *pFVar8;
  code *pcVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  TSharedPtr<FStreamableHandle,1> *pTVar12;
  TSharedPtr<FStreamableHandle,1> *pTVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  void *_Src;
  undefined1 *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  uint *puVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar26;
  undefined1 local_res8 [8];
  TSet<TTuple<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_res10;
  char local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_1a0;
  uint local_198;
  int local_194;
  int local_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  undefined8 local_140;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  TPairInitializer<FPrimaryAssetId_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_&&> local_f8;
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ForAnyElementType *local_70;
  undefined4 local_4c;
  
  local_res10 = (TSet<TTuple<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)param_1;
  local_res18 = param_2;
  TSet<TTuple<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)param_1);
  puVar1 = &(this->AssetTypeMap).field_0x10;
  iStack_130 = 0;
  iVar5 = *(int *)&(this->AssetTypeMap).field_0x28;
  pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->AssetTypeMap;
  local_118 = 0;
  uStack_12c = 1;
  iStack_11c = 0;
  if (iVar5 != 0) {
    puVar23 = *(uint **)&(this->AssetTypeMap).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar6 = *puVar23;
    while (uVar6 == 0) {
      lVar15 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_1475d858d;
      uVar6 = puVar23[lVar15 + 1];
    }
    uStack_12c = -uVar6 & uVar6;
    uVar4 = (ulonglong)uStack_12c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_108 = (int)lVar15;
    iStack_11c = local_118 + -1 + local_108;
    if (iVar5 < iStack_11c) {
      iStack_11c = iVar5;
    }
  }
LAB_1475d858d:
  uStack_114 = local_4c;
  iStack_110 = *(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34;
  uVar6 = *(uint *)&(this->AssetTypeMap).field_0x28;
  bVar14 = (byte)uVar6 & 0x1f;
  iVar24 = (int)uVar6 >> 5;
  uStack_18c = 1 << bVar14;
  uVar20 = uVar6 & 0xffffffe0;
  uVar19 = -1 << bVar14;
  uStack_120 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_b0.CurrentBitIndex = iStack_11c;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = local_118;
  uStack_90 = CONCAT44(uStack_10c,iStack_110);
  local_190 = iVar24;
  pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_180 = uVar19;
  uStack_17c = uVar6;
  uStack_178 = uVar20;
  local_138 = (TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
               *)pTVar26;
  local_128 = puVar1;
  local_f8.Value = pTVar26;
  local_b8 = pTVar26;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar6 < 0) || (iVar5 < (int)uVar6)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar7 = *(uint *)&(this->AssetTypeMap).field_0x28;
  if (uVar6 != uVar7) {
    puVar21 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar19 = uVar19 & *(uint *)(puVar21 + (longlong)iVar24 * 4);
    while (uVar19 == 0) {
      uStack_178 = uVar20 + 0x20;
      local_190 = iVar24 + 1;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_190)
      goto LAB_1475d86d0;
      uVar19 = *(uint *)(puVar21 + (longlong)iVar24 * 4 + 4);
      local_180 = 0xffffffff;
      iVar24 = local_190;
      uVar20 = uStack_178;
    }
    uStack_18c = -uVar19 & uVar19;
    uVar4 = (ulonglong)uStack_18c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_104 = (int)lVar15;
    uStack_17c = local_104 + -1 + uVar20;
    if ((int)uVar7 < (int)uStack_17c) {
LAB_1475d86d0:
      uStack_17c = uVar7;
    }
  }
  uVar6 = uStack_17c;
  local_160._padding_ = CONCAT44(uStack_18c,local_190);
  local_160.CurrentBitIndex = uStack_17c;
  local_160.UnvisitedBitMask = local_180;
  local_160._28_4_ = uStack_174;
  local_160.BaseBitIndex = uStack_178;
  local_160.Array = pTStack_188;
  local_170 = pTStack_188;
LAB_1475d8700:
  pTVar10 = local_b8;
  if (local_b8->ArrayNum - *(int *)((longlong)&local_b8[3].AllocatorInstance.Data + 4) !=
      (int)uStack_90) {
    local_res8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((TStack_b0.CurrentBitIndex == uVar6) && (TStack_b0.Array == local_170)) &&
     (pTVar10 == pTVar26)) {
    return;
  }
  iStack_e0 = 0;
  local_c8 = 0;
  pFVar25 = (pTVar10->AllocatorInstance).Data + (longlong)TStack_b0.CurrentBitIndex * 0x20;
  uStack_dc = 1;
  lVar15 = *(longlong *)(pFVar25 + 8);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x188);
  iVar5 = *(int *)(lVar15 + 0x1a0);
  plVar3 = (longlong *)(lVar15 + 0x178);
  iStack_cc = 0;
  if (iVar5 != 0) {
    pTVar22 = pTVar2;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x198) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x198);
    }
    uVar19 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    while (uVar19 == 0) {
      lVar16 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_1475d87dd;
      uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uStack_dc = -uVar19 & uVar19;
    uVar4 = (ulonglong)uStack_dc * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_100 = (int)lVar16;
    iStack_cc = local_c8 + -1 + local_100;
    if (iVar5 < iStack_cc) {
      iStack_cc = iVar5;
    }
  }
LAB_1475d87dd:
  uVar19 = *(uint *)(lVar15 + 0x1a0);
  iStack_c4 = iStack_11c;
  iStack_c0 = *(int *)(lVar15 + 0x180) - *(int *)(lVar15 + 0x1ac);
  uVar20 = uVar19 & 0xffffffe0;
  local_160._padding_ = CONCAT44(uStack_dc,iStack_e0);
  uStack_d0 = 0xffffffff;
  local_160.CurrentBitIndex = iStack_cc;
  local_160.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar19 >> 5;
  local_160._28_4_ = iStack_11c;
  local_160.BaseBitIndex = local_c8;
  local_140 = CONCAT44(uStack_bc,iStack_c0);
  local_168 = plVar3;
  local_160.Array = pTVar2;
  local_e8 = plVar3;
  local_d8 = pTVar2;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar7 = *(uint *)(lVar15 + 0x1a0);
  if (uVar19 != uVar7) {
    pTVar22 = pTVar2;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x198) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x198);
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) &
             *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar24 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar24;
      uVar20 = uVar20 + 0x20;
      iVar24 = iVar24 + 1;
      uVar19 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_1475d88f0;
      uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_fc = (int)lVar15;
    uVar19 = local_fc + -1 + uVar20;
    if ((int)uVar7 < (int)uVar19) {
      uVar19 = uVar7;
    }
  }
LAB_1475d88f0:
  do {
    plVar17 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)local_140) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((local_160.CurrentBitIndex == uVar19) && (local_160.Array == pTVar2)) &&
       (plVar17 == plVar3)) break;
    puVar18 = (undefined8 *)((longlong)local_160.CurrentBitIndex * 0x78 + *plVar17);
    if (local_res18 == '\0') {
      pTVar13 = (TSharedPtr<FStreamableHandle,1> *)puVar18[0xc];
      plVar17 = puVar18 + 0xc;
      pTVar12 = &FPrimaryAssetLoadState::InvalidHandle;
      if (pTVar13 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
        pTVar12 = pTVar13;
      }
      pFVar8 = pTVar12->Object;
      if (((pFVar8 == (FStreamableHandle *)0x0) || (pFVar8->bCanceled != false)) ||
         (pFVar8->bReleased != false)) goto LAB_1475d896c;
    }
    else {
LAB_1475d896c:
      pTVar13 = (TSharedPtr<FStreamableHandle,1> *)puVar18[10];
      plVar17 = puVar18 + 10;
    }
    if (pTVar13 == (TSharedPtr<FStreamableHandle,1> *)0x0) {
      pTVar13 = &FPrimaryAssetLoadState::InvalidHandle;
    }
    else {
      pTVar13 = (TSharedPtr<FStreamableHandle,1> *)*plVar17;
    }
    pFVar8 = pTVar13->Object;
    if (((pFVar8 != (FStreamableHandle *)0x0) && (pFVar8->bCanceled == false)) &&
       (pFVar8->bReleased == false)) {
      local_88 = *(undefined8 *)pFVar25;
      local_80 = *puVar18;
      if (*plVar17 == 0) {
        uVar20 = 0;
        _Src = (void *)0x0;
      }
      else {
        uVar20 = (uint)*(ushort *)(plVar17 + 1);
        _Src = (void *)(*plVar17 + 0x10);
      }
      local_1a0.Data = (FScriptContainerElement *)0x0;
      local_198 = uVar20;
      if (uVar20 == 0) {
        local_194 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar20,0,&local_1a0,uVar20,&local_194);
        memcpy(local_1a0.Data,_Src,(longlong)(int)uVar20 << 3);
      }
      local_78 = &local_88;
      local_70 = &local_1a0;
      TSet<TTuple<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FPrimaryAssetId_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_&&>_>
                (local_res10,&local_f8,(bool *)&local_78);
      if (local_1a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
    }
    local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
  } while( true );
  TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  pTVar26 = local_f8.Value;
  goto LAB_1475d8700;
}

// GetPrimaryAssetData @ 1475d8ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UAssetManager::GetPrimaryAssetData(UAssetManager *this,FPrimaryAssetId *param_1,FAssetData *param_2)

{
  FPrimaryAssetData *pFVar1;
  IAssetRegistry *pIVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar1 = GetNameData(this,param_1,true);
  if (pFVar1 != (FPrimaryAssetData *)0x0) {
    pIVar2 = GetAssetRegistry(this);
    local_98 = 1;
    (**(code **)((longlong)*pIVar2 + 0x78))
              (pIVar2,&local_88,&pFVar1->ARLookupPath,this->bIncludeOnlyOnDiskAssets);
    if ((local_88.PackageName != (FName)0x0) && (local_88.AssetName != (FName)0x0)) {
      FAssetData::operator=(param_2,&local_88);
      if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
      return true;
    }
    if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  }
  return false;
}

// GetPrimaryAssetDataList @ 1475d8bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::GetPrimaryAssetDataList
          (UAssetManager *this,FPrimaryAssetType param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FName FVar4;
  FPrimaryAssetTypeData *pFVar5;
  FAssetData *pFVar6;
  code *pcVar7;
  UAssetManager *pUVar8;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *pTVar9;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FName *pFVar14;
  FModuleManager *this_00;
  IModuleInterface *pIVar15;
  IAssetRegistry *pIVar16;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 auStack_188 [32];
  FAssetData *local_168;
  FAssetData *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138;
  undefined1 local_137 [7];
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  UAssetManager *local_f8;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_f0;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FName local_b8;
  FAssetData local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  pIVar16 = this->CachedAssetRegistry;
  local_f8 = this;
  if (pIVar16 == (IAssetRegistry *)0x0) {
    pFVar14 = ::FName::FName(&local_b8,L"AssetRegistry");
    FVar4 = *pFVar14;
    this_00 = FModuleManager::Get();
    pIVar15 = FModuleManager::LoadModuleChecked(this_00,FVar4);
    pIVar16 = (IAssetRegistry *)(**(code **)((longlong)*pIVar15 + 0x40))(pIVar15);
    this->CachedAssetRegistry = pIVar16;
  }
  local_138 = 0;
  pTVar17 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                    *)&this->AssetTypeMap,param_1.Name);
  uVar12 = 0;
  if (pTVar17 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    iStack_128 = 0;
    uStack_124 = 1;
    pFVar5 = pTVar17->Object;
    local_110 = 0;
    puVar1 = &(pFVar5->AssetMap).field_0x10;
    iVar13 = *(int *)&(pFVar5->AssetMap).field_0x28;
    local_130 = &pFVar5->AssetMap;
    iStack_114 = 0;
    if (iVar13 != 0) {
      puVar22 = *(uint **)&(pFVar5->AssetMap).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar20 = *puVar22;
      while (uVar20 == 0) {
        lVar18 = (longlong)iStack_128;
        local_110 = local_110 + 0x20;
        iStack_128 = iStack_128 + 1;
        iStack_114 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128)
        goto LAB_1475d8cee;
        uVar20 = puVar22[lVar18 + 1];
      }
      uStack_124 = -uVar20 & uVar20;
      uVar2 = (ulonglong)uStack_124 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_100 = (int)lVar18;
      iStack_114 = local_110 + -1 + local_100;
      if (iVar13 < iStack_114) {
        iStack_114 = iVar13;
      }
    }
LAB_1475d8cee:
    iStack_108 = *(int *)&(pFVar5->AssetMap).field_0x8 - *(int *)&(pFVar5->AssetMap).field_0x34;
    uVar20 = *(uint *)&(pFVar5->AssetMap).field_0x28;
    TStack_e0._padding_ = CONCAT44(uStack_124,iStack_128);
    uStack_118 = 0xffffffff;
    uVar23 = uVar20 & 0xffffffe0;
    TStack_e0.CurrentBitIndex = iStack_114;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar20 >> 5;
    TStack_e0._28_4_ = iStack_114;
    TStack_e0.BaseBitIndex = local_110;
    uStack_c0 = CONCAT44(uStack_104,iStack_108);
    local_120 = puVar1;
    iStack_10c = iStack_114;
    local_f0 = local_130;
    local_e8 = local_130;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar20 < 0) || (iVar13 < (int)uVar20)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    pTVar9 = local_f0;
    pUVar8 = local_f8;
    uVar3 = *(uint *)&(pFVar5->AssetMap).field_0x28;
    if (uVar20 != uVar3) {
      puVar21 = *(undefined1 **)&(pFVar5->AssetMap).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar19 * 4);
      while (uVar20 == 0) {
        lVar18 = (longlong)iVar19;
        uVar23 = uVar23 + 0x20;
        iVar19 = iVar19 + 1;
        uVar20 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_1475d8e10;
        uVar20 = *(uint *)(puVar21 + lVar18 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_fc = (int)lVar18;
      uVar20 = local_fc + -1 + uVar23;
      if ((int)uVar3 < (int)uVar20) {
        uVar20 = uVar3;
      }
    }
LAB_1475d8e10:
    while( true ) {
      pTVar10 = local_e8;
      if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
        local_137[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_137);
      }
      if (((TStack_e0.CurrentBitIndex == uVar20) &&
          (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (uVar12 = local_138, pTVar10 == pTVar9)) break;
      local_168 = (FAssetData *)CONCAT71(local_168._1_7_,1);
      (**(code **)((longlong)*pIVar16 + 0x78))
                (pIVar16,&local_b0,
                 *(longlong *)pTVar10 + (longlong)TStack_e0.CurrentBitIndex * 0x78 + 0x30,
                 pUVar8->bIncludeOnlyOnDiskAssets);
      if ((local_b0.PackageName != (FName)0x0) && (local_b0.AssetName != (FName)0x0)) {
        pFVar6 = (FAssetData *)(param_2->AllocatorInstance).Data;
        local_138 = 1;
        if ((pFVar6 <= &local_b0) && (&local_b0 < pFVar6 + param_2->ArrayMax)) {
          local_150 = (longlong)param_2->ArrayNum;
          local_148 = 0x68;
          local_168 = &local_b0;
          local_160 = pFVar6;
          local_158 = (longlong)param_2->ArrayMax;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x868,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar13 + 1;
        FAssetData::FAssetData
                  ((FAssetData *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x68),
                   &local_b0);
      }
      if (local_b0.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_b0.ChunkIDs.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_b0.TagsAndValues);
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
  }
  return (bool)uVar12;
}

// GetPrimaryAssetHandle @ 1475d8fa0

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::GetPrimaryAssetHandle
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FPrimaryAssetId *param_1,bool param_2,TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  FStreamableHandle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  FPrimaryAssetData *pFVar4;
  TSharedPtr<FStreamableHandle,1> *pTVar5;
  uchar *_Src;
  FPrimaryAssetLoadState *pFVar6;
  TSharedPtr<FStreamableHandle,1> *pTVar7;
  
  pFVar4 = GetNameData(this,param_1,true);
  if (pFVar4 == (FPrimaryAssetData *)0x0) {
    __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (!param_2) {
    pTVar7 = (TSharedPtr<FStreamableHandle,1> *)(pFVar4->PendingState).Storage;
    pFVar6 = &pFVar4->PendingState;
    pTVar5 = &FPrimaryAssetLoadState::InvalidHandle;
    if (pTVar7 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
      pTVar5 = pTVar7;
    }
    pFVar1 = pTVar5->Object;
    if (((pFVar1 != (FStreamableHandle *)0x0) && (pFVar1->bCanceled == false)) &&
       (pFVar1->bReleased == false)) goto LAB_1475d9020;
  }
  pFVar6 = &pFVar4->CurrentState;
LAB_1475d9020:
  if (param_3 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    _Src = (uchar *)0x0;
    uVar3 = 0;
    if (pFVar6->Storage != (uchar *)0x0) {
      uVar3 = (uint)pFVar6->NumBundleNames;
      _Src = pFVar6->Storage + 0x10;
    }
    param_3->ArrayNum = uVar3;
    if ((uVar3 == 0) && (param_3->ArrayMax == 0)) {
      param_3->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,param_3->ArrayMax,&param_3->AllocatorInstance,uVar3,&param_3->ArrayMax);
      if (uVar3 != 0) {
        memcpy((param_3->AllocatorInstance).Data,_Src,(longlong)(int)uVar3 << 3);
      }
    }
  }
  pTVar7 = &FPrimaryAssetLoadState::InvalidHandle;
  if ((TSharedPtr<FStreamableHandle,1> *)pFVar6->Storage != (TSharedPtr<FStreamableHandle,1> *)0x0)
  {
    pTVar7 = (TSharedPtr<FStreamableHandle,1> *)pFVar6->Storage;
  }
  __return_storage_ptr__->Object = pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrimaryAssetIdForData @ 1475d90e0

FPrimaryAssetId * __thiscall
UAssetManager::GetPrimaryAssetIdForData
          (UAssetManager *this,FPrimaryAssetId *__return_storage_ptr__,FAssetData *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  void *local_18;
  
  lVar1 = this->_padding_;
  uVar2 = (**(code **)(lVar1 + 0x488))(this,local_28);
  (**(code **)(lVar1 + 0x340))(this,__return_storage_ptr__,uVar2);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetPrimaryAssetIdForObject @ 1475d9140

FPrimaryAssetId * __thiscall
UAssetManager::GetPrimaryAssetIdForObject
          (UAssetManager *this,FPrimaryAssetId *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  FSoftObjectPath local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0x340);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_1);
  (*pcVar1)(this,__return_storage_ptr__,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrimaryAssetIdForPackage @ 1475d91c0

FPrimaryAssetId * __thiscall
UAssetManager::GetPrimaryAssetIdForPackage
          (UAssetManager *this,FPrimaryAssetId *__return_storage_ptr__,FName param_1)

{
  FName FVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res18;
  FString local_98;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FSoftObjectPath local_58;
  FSoftObjectPath local_38;
  
  local_res18 = param_1;
  ::FName::ToString(&local_res18,&local_98);
  local_78.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  local_78.Data.ArrayNum = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    local_78.Data.ArrayNum = 0;
  }
  local_68._12_4_ = local_78.Data.ArrayMax;
  local_68.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_68.Size = local_78.Data.ArrayNum;
  FPackageName::GetShortName(&local_88,&local_68);
  (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
  (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->PrimaryAssetName).Number = 0;
  ::FString::PrintfImpl(&local_78,L"%s.%s");
  local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58.AssetPath.PackageName.Number = 0;
  local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58.AssetPath.AssetName.Number = 0;
  local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SubPathString.Data.ArrayNum = 0;
  local_58.SubPathString.Data.ArrayMax = 0;
  local_68.Size = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    local_68.Size = 0;
  }
  local_68.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_58,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.AssetPath.PackageName != (FName)0x0) {
    pFVar2 = (FName *)(**(code **)(this->_padding_ + 0x340))(this,&local_68,&local_58);
    FVar1 = pFVar2[1];
    (__return_storage_ptr__->PrimaryAssetType).Name = *pFVar2;
    __return_storage_ptr__->PrimaryAssetName = FVar1;
    if (((__return_storage_ptr__->PrimaryAssetType).Name != (FName)0x0) &&
       (__return_storage_ptr__->PrimaryAssetName != (FName)0x0)) goto LAB_1475d93ae;
  }
  ::FString::PrintfImpl(&local_78,L"%s.%s_C");
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  iVar3 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  local_68.Size = iVar3;
  local_68.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(&local_38,&local_68);
  local_58.AssetPath.PackageName = local_38.AssetPath.PackageName;
  local_58.AssetPath.AssetName = local_38.AssetPath.AssetName;
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  local_58.SubPathString.Data.ArrayNum = local_38.SubPathString.Data.ArrayNum;
  local_58.SubPathString.Data.ArrayMax = local_38.SubPathString.Data.ArrayMax;
  local_58.SubPathString.Data.AllocatorInstance.Data =
       local_38.SubPathString.Data.AllocatorInstance.Data;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.AssetPath.PackageName != (FName)0x0) {
    pFVar2 = (FName *)(**(code **)(this->_padding_ + 0x340))(this,&local_68,&local_58);
    FVar1 = pFVar2[1];
    (__return_storage_ptr__->PrimaryAssetType).Name = *pFVar2;
    __return_storage_ptr__->PrimaryAssetName = FVar1;
  }
LAB_1475d93ae:
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrimaryAssetIdForPath @ 1475d9400

FPrimaryAssetId * __thiscall
UAssetManager::GetPrimaryAssetIdForPath
          (UAssetManager *this,FPrimaryAssetId *__return_storage_ptr__,FSoftObjectPath *param_1)

{
  TMap<FSoftObjectPath,FPrimaryAssetId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>_>
  *this_00;
  FName FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  FName *pFVar9;
  FName *pFVar10;
  FSoftObjectPath local_38;
  
  this_00 = &this->AssetPathMap;
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>
                    ((TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,param_1);
  pFVar10 = (FName *)0x0;
  pFVar6 = pFVar10;
  if (iVar4 != -1) {
    pFVar6 = (FName *)((longlong)iVar4 * 0x38 + *(longlong *)&this_00->field_0x0);
  }
  pFVar9 = pFVar6 + 4;
  if (pFVar6 == (FName *)0x0) {
    pFVar9 = pFVar10;
  }
  if (pFVar9 == (FName *)0x0) {
    (**(code **)(this->_padding_ + 0x4a8))(this,&local_38,param_1);
    if (local_38.AssetPath.PackageName != (FName)0x0) {
      uVar3 = ::GetTypeHash(local_38.AssetPath.AssetName.ComparisonIndex.Value);
      uVar5 = ::GetTypeHash(local_38.AssetPath.PackageName.ComparisonIndex.Value);
      uVar5 = uVar5 + local_38.AssetPath.PackageName.Number;
      uVar5 = uVar5 * 0x40 + uVar3 + local_38.AssetPath.AssetName.Number + -0x61c88647 +
              (uVar5 >> 2) ^ uVar5;
      if (1 < local_38.SubPathString.Data.ArrayNum) {
        iVar4 = local_38.SubPathString.Data.ArrayNum + -1;
        if (local_38.SubPathString.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        uVar3 = FCrc::Strihash_DEPRECATED<char8_t>
                          (iVar4,(uchar *)local_38.SubPathString.Data.AllocatorInstance.Data);
        uVar5 = uVar5 ^ uVar3 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2);
      }
      pFVar6 = pFVar10;
      if (*(int *)&(this->AssetPathMap).field_0x8 != *(int *)&(this->AssetPathMap).field_0x34) {
        puVar7 = *(undefined1 **)&(this->AssetPathMap).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->AssetPathMap).field_0x38;
        }
        iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->AssetPathMap).field_0x48 - 1U & uVar5)
                                  * 4);
        while (iVar4 != -1) {
          lVar8 = (longlong)iVar4 * 0x38;
          bVar2 = FSoftObjectPath::operator==
                            ((FSoftObjectPath *)(*(longlong *)&this_00->field_0x0 + lVar8),&local_38
                            );
          if (bVar2) {
            pFVar6 = (FName *)(*(longlong *)&this_00->field_0x0 + lVar8);
            break;
          }
          iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x30 + lVar8);
        }
      }
      pFVar9 = pFVar6 + 4;
      if (pFVar6 == (FName *)0x0) {
        pFVar9 = pFVar10;
      }
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pFVar9 == (FName *)0x0) {
      (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
      (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
      (__return_storage_ptr__->PrimaryAssetName).Number = 0;
      return __return_storage_ptr__;
    }
  }
  FVar1 = pFVar9[1];
  (__return_storage_ptr__->PrimaryAssetType).Name = *pFVar9;
  __return_storage_ptr__->PrimaryAssetName = FVar1;
  return __return_storage_ptr__;
}

// GetPrimaryAssetIdList @ 1475d95b0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::GetPrimaryAssetIdList
          (UAssetManager *this,FPrimaryAssetType param_1,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_2,EAssetManagerFilter param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *pTVar3;
  uint uVar4;
  FPrimaryAssetTypeData *pFVar5;
  code *pcVar6;
  EAssetManagerFilter EVar7;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar12;
  longlong lVar13;
  FName *pFVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  EAssetManagerFilter local_res20;
  FName local_c0;
  FName FStack_b8;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  local_res20 = param_3;
  pTVar12 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                    *)&this->AssetTypeMap,param_1.Name);
  if (pTVar12 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    iStack_a8 = 0;
    pFVar5 = pTVar12->Object;
    local_90 = 0;
    uStack_a4 = 1;
    puVar2 = &(pFVar5->AssetMap).field_0x10;
    iVar11 = *(int *)&(pFVar5->AssetMap).field_0x28;
    pTVar3 = &pFVar5->AssetMap;
    iStack_94 = 0;
    if (iVar11 != 0) {
      puVar17 = *(uint **)&(pFVar5->AssetMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar2;
      }
      uVar18 = *puVar17;
      while (uVar18 == 0) {
        lVar13 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        iStack_94 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1475d969f;
        uVar18 = puVar17[lVar13 + 1];
      }
      uStack_a4 = -uVar18 & uVar18;
      uVar1 = (ulonglong)uStack_a4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res10 = (int)lVar13;
      iStack_94 = local_90 + -1 + local_res10;
      if (iVar11 < iStack_94) {
        iStack_94 = iVar11;
      }
    }
LAB_1475d969f:
    iStack_88 = *(int *)&(pFVar5->AssetMap).field_0x8 - *(int *)&(pFVar5->AssetMap).field_0x34;
    uVar18 = *(uint *)&(pFVar5->AssetMap).field_0x28;
    TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
    uStack_98 = 0xffffffff;
    uVar19 = uVar18 & 0xffffffe0;
    TStack_78.CurrentBitIndex = iStack_94;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar18 >> 5;
    TStack_78._28_4_ = iStack_94;
    TStack_78.BaseBitIndex = local_90;
    uStack_58 = CONCAT44(uStack_84,iStack_88);
    local_b0 = pTVar3;
    local_a0 = puVar2;
    iStack_8c = iStack_94;
    local_80 = pTVar3;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar18 < 0) || (iVar11 < (int)uVar18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    EVar7 = local_res20;
    uVar4 = *(uint *)&(pFVar5->AssetMap).field_0x28;
    if (uVar18 != uVar4) {
      puVar16 = *(undefined1 **)&(pFVar5->AssetMap).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar2;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar18 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1475d97c0;
        uVar18 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      uVar18 = local_res18 + -1 + uVar19;
      if ((int)uVar4 < (int)uVar18) {
        uVar18 = uVar4;
      }
    }
LAB_1475d97c0:
    while( true ) {
      pTVar8 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_78.CurrentBitIndex == uVar18) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar3)
         ) break;
      pFVar14 = (FName *)((longlong)TStack_78.CurrentBitIndex * 0x78 + *(longlong *)pTVar8);
      if (((EVar7 & UnloadedOnly) == Default) ||
         (((pFVar14[10] == (FName)0x0 || ((short)pFVar14[0xb].ComparisonIndex.Value == 0)) &&
          ((pFVar14[0xc] == (FName)0x0 || ((short)pFVar14[0xd].ComparisonIndex.Value == 0)))))) {
        FStack_b8 = *pFVar14;
        pFVar14 = (FName *)(param_2->AllocatorInstance).Data;
        local_c0 = param_1.Name;
        if (((pFVar14 <= &local_c0) && (&local_c0 < pFVar14 + (longlong)param_2->ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar11 = param_2->ArrayNum;
        if (iVar11 == param_2->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar11 + 1;
        pFVar14 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x10);
        *pFVar14 = local_c0;
        pFVar14[1] = FStack_b8;
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return 0 < param_2->ArrayNum;
}

// GetPrimaryAssetLoadList @ 1475d9930

bool __thiscall
UAssetManager::GetPrimaryAssetLoadList
          (UAssetManager *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          FPrimaryAssetId *param_2,TArray<FName,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          bool param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  FSoftObjectPath *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FName *pFVar15;
  FName *pFVar16;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6 [6];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  FScriptContainerElement *local_d0;
  FSoftObjectPath local_c8;
  FAssetBundleEntry local_a8;
  FSoftObjectPath local_90;
  FPrimaryAssetData *local_70;
  FString local_68;
  FTopLevelAssetPath local_58;
  FTopLevelAssetPath local_48;
  
  local_70 = GetNameData(this,param_2,true);
  if (local_70 == (FPrimaryAssetData *)0x0) {
    pcVar4 = *(code **)(this->_padding_ + 0x518);
    ::FString::FString(&local_68,L"GetPrimaryAssetLoadList failed to find NameData");
    (*pcVar4)(this,param_2,&local_68);
  }
  else {
    puVar1 = &(local_70->AssetPtr).field_0x8;
    if (*(longlong *)&(local_70->AssetPtr).field_0x8 != 0) {
      if (param_5) {
        TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath_const_&>
                  (param_1,(FSoftObjectPath *)puVar1);
      }
      else {
        pFVar13 = (param_1->AllocatorInstance).Data;
        if (((pFVar13 <= puVar1) && (puVar1 < pFVar13 + (longlong)param_1->ArrayMax * 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x20),
                   (FSoftObjectPath *)puVar1);
      }
    }
    pFVar14 = (param_3->AllocatorInstance).Data;
    iVar7 = param_3->ArrayNum;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    pFVar13 = pFVar14 + (longlong)iVar7 * 8;
    local_d0 = pFVar13;
    while( true ) {
      if (param_3->ArrayNum != iVar7) {
        local_e8 = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_e8);
      }
      if (pFVar14 == pFVar13) break;
      (**(code **)(this->_padding_ + 0x3f8))(this,&local_a8,param_2);
      if (local_a8.BundleName != (FName)0x0) {
        if (((local_e0.Data <= &local_a8) &&
            (&local_a8 < (FAssetBundleEntry *)(local_e0.Data + (longlong)local_d8._4_4_ * 0x18))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar8 = (int)local_d8;
        if ((int)local_d8 == local_d8._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_e0,(int *)((longlong)&local_d8 + 4));
        }
        FVar11.Data = local_a8.AssetPaths.AllocatorInstance.Data;
        lVar10 = (longlong)iVar8;
        local_d8 = CONCAT44(local_d8._4_4_,iVar8 + 1);
        *(FName *)&local_e0.Data[lVar10 * 0x18].field_0x0 = local_a8.BundleName;
        lVar2 = lVar10 * 3 + 1;
        *(undefined8 *)(local_e0.Data + lVar2 * 8) = 0;
        pFVar13 = local_e0.Data + lVar2 * 8;
        iVar8 = local_a8.AssetPaths.ArrayNum;
        *(int *)(pFVar13 + 8) = iVar8;
        if (iVar8 == 0) {
          *(int *)(local_e0.Data + lVar10 * 0x18 + 0x14) = 0;
          pFVar13 = local_d0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar8,0,(ForAnyElementType *)pFVar13,iVar8,
                     (int *)(local_e0.Data + lVar10 * 0x18 + 0x14));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar13,FVar11.Data,(longlong)iVar8 << 4);
          pFVar13 = local_d0;
        }
      }
      if (local_a8.AssetPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AssetPaths.AllocatorInstance.Data);
      }
      pFVar14 = pFVar14 + 8;
    }
    if (param_4) {
      (**(code **)(this->_padding_ + 0x2e8))(this,&local_e0);
    }
    iVar7 = (int)local_d8;
    pFVar13 = local_e0.Data + 0x10;
    local_d0 = local_e0.Data + (longlong)(int)local_d8 * 0x18;
    while( true ) {
      pFVar14 = local_d0;
      if ((int)local_d8 != iVar7) {
        local_e7 = 0;
        `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_e7);
      }
      if (pFVar13 + -0x10 == pFVar14) break;
      iVar8 = *(int *)pFVar13;
      pFVar15 = (FName *)(((TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *)(pFVar13 + -8))
                         ->AllocatorInstance).Data;
      pFVar16 = pFVar15 + (longlong)iVar8 * 2;
      while( true ) {
        if (*(int *)pFVar13 != iVar8) {
          local_e6[0] = 0;
          `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_e6);
        }
        if (pFVar15 == pFVar16) break;
        if (param_5) {
          local_90.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_90.AssetPath.PackageName.Number = 0;
          local_90.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_90.AssetPath.AssetName.Number = 0;
          local_90.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.SubPathString.Data.ArrayNum = 0;
          local_90.SubPathString.Data.ArrayMax = 0;
          local_58.PackageName = *pFVar15;
          local_58.AssetName = pFVar15[1];
          FSoftObjectPath::SetPath(&local_90,&local_58);
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath>
                    (param_1,&local_90);
          FVar11.Data = local_90.SubPathString.Data.AllocatorInstance.Data;
        }
        else {
          local_c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_c8.AssetPath.PackageName.Number = 0;
          local_c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_c8.AssetPath.AssetName.Number = 0;
          local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.SubPathString.Data.ArrayNum = 0;
          local_c8.SubPathString.Data.ArrayMax = 0;
          local_48.PackageName = *pFVar15;
          local_48.AssetName = pFVar15[1];
          FSoftObjectPath::SetPath(&local_c8,&local_48);
          pFVar3 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
          if (((pFVar3 <= &local_c8) && (&local_c8 < pFVar3 + param_1->ArrayMax)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = param_1->ArrayNum;
          if (iVar9 == param_1->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar9 + 1;
          pFVar12 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x20);
          *pFVar12 = local_c8.AssetPath.PackageName;
          pFVar12[1] = local_c8.AssetPath.AssetName;
          pFVar12[2].ComparisonIndex = 0;
          pFVar12[2].Number = 0;
          pFVar12[2] = (FName)local_c8.SubPathString.Data.AllocatorInstance.Data;
          local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar12[3].ComparisonIndex.Value = local_c8.SubPathString.Data.ArrayNum;
          pFVar12[3].Number = local_c8.SubPathString.Data.ArrayMax;
          local_c8.SubPathString.Data.ArrayNum = 0;
          local_c8.SubPathString.Data.ArrayMax = 0;
          FVar11.Data = (FScriptContainerElement *)0x0;
        }
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
        pFVar15 = pFVar15 + 2;
      }
      pFVar13 = pFVar13 + 0x18;
    }
    DestructItems<FAssetBundleEntry,int>((FAssetBundleEntry *)local_e0.Data,(int)local_d8);
    local_68.Data.AllocatorInstance.Data = local_e0.Data;
  }
  if ((FAssetBundleEntry *)local_68.Data.AllocatorInstance.Data != (FAssetBundleEntry *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return local_70 != (FPrimaryAssetData *)0x0;
}

// GetPrimaryAssetLoadSet @ 1475d9e40

bool __thiscall
UAssetManager::GetPrimaryAssetLoadSet
          (UAssetManager *this,
          TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *param_1,
          FPrimaryAssetId *param_2,TArray<FName,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  uint uVar11;
  FSoftObjectPath *pFVar12;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar4 = GetPrimaryAssetLoadList(this,&local_28,param_2,param_3,param_4,false);
  FVar9.Data = local_28.AllocatorInstance.Data;
  iVar8 = local_28.ArrayNum;
  lVar10 = (longlong)local_28.ArrayNum;
  if ((local_28.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar7 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar11 = uVar7 + iVar8;
  if (uVar7 < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_1,uVar11);
    if (uVar11 < 4) {
      iVar8 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((param_1->HashSize == 0) || (param_1->HashSize < iVar8)) {
      param_1->HashSize = iVar8;
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Rehash(param_1)
      ;
    }
  }
  pFVar12 = (FSoftObjectPath *)(FVar9.Data + lVar10 * 0x20);
  for (; (FSoftObjectPath *)FVar9.Data != pFVar12; FVar9.Data = FVar9.Data + 0x20) {
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
    Emplace<FSoftObjectPath_const_&>(param_1,(FSoftObjectPath *)&stack0x00000010,(bool *)FVar9.Data)
    ;
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FSoftObjectPath *)local_28.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetPrimaryAssetObject @ 1475d9f80

UObject * __thiscall
UAssetManager::GetPrimaryAssetObject(UAssetManager *this,FPrimaryAssetId *param_1)

{
  FPrimaryAssetData *this_00;
  UObject *pUVar1;
  
  this_00 = GetNameData(this,param_1,true);
  if (this_00 != (FPrimaryAssetData *)0x0) {
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetPrimaryAssetObjectList @ 1475d9fb0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::GetPrimaryAssetObjectList
          (UAssetManager *this,FPrimaryAssetType param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FPrimaryAssetTypeData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *pTVar7;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar13;
  longlong lVar14;
  UObject *pUVar15;
  UObject *pUVar16;
  FUObjectItem *pFVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  int local_res10;
  UObject *local_b8;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_80;
  UObject *local_78;
  TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  bVar11 = false;
  pTVar13 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                    *)&this->AssetTypeMap,param_1.Name);
  if (pTVar13 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    return false;
  }
  iStack_a8 = 0;
  pFVar4 = pTVar13->Object;
  local_90 = 0;
  uStack_a4 = 1;
  puVar1 = &(pFVar4->AssetMap).field_0x10;
  iVar12 = *(int *)&(pFVar4->AssetMap).field_0x28;
  local_b0 = &pFVar4->AssetMap;
  iStack_94 = 0;
  if (iVar12 != 0) {
    puVar21 = *(uint **)&(pFVar4->AssetMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar20 = *puVar21;
    while (uVar20 == 0) {
      lVar14 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar12;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iStack_a8) goto LAB_1475da09f;
      uVar20 = puVar21[lVar14 + 1];
    }
    uStack_a4 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iStack_94 = local_90 + -1 + local_res10;
    if (iVar12 < iStack_94) {
      iStack_94 = iVar12;
    }
  }
LAB_1475da09f:
  iStack_88 = *(int *)&(pFVar4->AssetMap).field_0x8 - *(int *)&(pFVar4->AssetMap).field_0x34;
  uVar20 = *(uint *)&(pFVar4->AssetMap).field_0x28;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uVar22 = uVar20 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar20 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = local_b0;
  local_70 = local_b0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar12 < (int)uVar20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar7 = local_80;
  uVar3 = *(uint *)&(pFVar4->AssetMap).field_0x28;
  if (uVar20 != uVar3) {
    puVar18 = *(undefined1 **)&(pFVar4->AssetMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar19 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      uVar20 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar19) goto LAB_1475da1b0;
      uVar20 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = (int)lVar14 + -1 + uVar22;
    if ((int)uVar3 < (int)uVar20) {
      uVar20 = uVar3;
    }
  }
LAB_1475da1b0:
  do {
    pTVar8 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar20) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    {
      return bVar11;
    }
    lVar14 = (longlong)TStack_68.CurrentBitIndex * 0x78 + *(longlong *)pTVar8;
    pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar14 + 8));
    if ((pUVar15 == (UObject *)0x0) && (*(longlong *)(lVar14 + 0x10) != 0)) {
      pUVar16 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar14 + 0x10));
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar16);
      }
      bVar9 = (*IsInAsyncLoadingThread)();
      if (((bVar9) && (pUVar16 != (UObject *)0x0)) &&
         (pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar16->field_0xc),
         ((pFVar17->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1475da282:
        if ((*(uint *)&pUVar16->field_0x8 >> 0x1e & 1) != 0) goto LAB_1475da292;
        bVar9 = true;
      }
      else {
        local_78 = pUVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar16);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar14 + 8),(FObjectPtr)&local_78);
        if (pUVar16 != (UObject *)0x0) goto LAB_1475da282;
LAB_1475da292:
        bVar9 = false;
      }
      pUVar15 = (UObject *)0x0;
      if (bVar9) {
        pUVar15 = pUVar16;
      }
    }
    local_b8 = pUVar15;
    if (pUVar15 != (UObject *)0x0) {
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      bVar11 = true;
      param_2->ArrayNum = iVar12 + 1;
      *(UObject **)(pFVar5 + (longlong)iVar12 * 8) = local_b8;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetPrimaryAssetPath @ 1475da3a0

FSoftObjectPath * __thiscall
UAssetManager::GetPrimaryAssetPath
          (UAssetManager *this,FSoftObjectPath *__return_storage_ptr__,FPrimaryAssetId *param_1)

{
  FPrimaryAssetData *pFVar1;
  
  pFVar1 = GetNameData(this,param_1,true);
  if (pFVar1 != (FPrimaryAssetData *)0x0) {
    FSoftObjectPath::FSoftObjectPath
              (__return_storage_ptr__,(FSoftObjectPath *)&(pFVar1->AssetPtr).field_0x8);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrimaryAssetPathList @ 1475da3f0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::GetPrimaryAssetPathList
          (UAssetManager *this,FPrimaryAssetType param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FPrimaryAssetTypeData *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar10;
  longlong lVar11;
  FSoftObjectPath *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar10 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                    *)&this->AssetTypeMap,param_1.Name);
  if (pTVar10 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    iVar15 = 0;
    iVar17 = 0;
    uVar8 = 1;
    pFVar4 = pTVar10->Object;
    puVar1 = &(pFVar4->AssetMap).field_0x10;
    iVar3 = *(int *)&(pFVar4->AssetMap).field_0x28;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar18 = *(uint **)&(pFVar4->AssetMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar14 = *puVar18;
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1475da4dd;
        uVar14 = puVar18[lVar11 + 1];
      }
      uVar8 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11;
      iVar9 = iVar17 + -1 + local_res10;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_1475da4dd:
    uVar14 = *(uint *)&(pFVar4->AssetMap).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar8,iVar15);
    TStack_60.CurrentBitIndex = iVar9;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_60._28_4_ = iVar9;
    TStack_60.BaseBitIndex = iVar17;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(pFVar4->AssetMap).field_0x8 -
                         *(int *)&(pFVar4->AssetMap).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar8 = *(uint *)&(pFVar4->AssetMap).field_0x28;
    if (uVar14 != uVar8) {
      puVar16 = *(undefined1 **)&(pFVar4->AssetMap).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1475da5f0;
        uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar14 = (int)lVar11 + -1 + uVar13;
      if ((int)uVar8 < (int)uVar14) {
        uVar14 = uVar8;
      }
    }
LAB_1475da5f0:
    while( true ) {
      if (*(int *)&(pFVar4->AssetMap).field_0x8 - *(int *)&(pFVar4->AssetMap).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar14) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pFVar12 = (FSoftObjectPath *)
                (*(longlong *)&pFVar4->AssetMap + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x78)
      ;
      if ((pFVar12->AssetPath).PackageName != (FName)0x0) {
        TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoftObjectPath_const_&>
                  (param_2,pFVar12);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return 0 < param_2->ArrayNum;
}

// GetPrimaryAssetRules @ 1475da690

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

FPrimaryAssetRules * __thiscall
UAssetManager::GetPrimaryAssetRules
          (UAssetManager *this,FPrimaryAssetRules *__return_storage_ptr__,FPrimaryAssetId *param_1)

{
  undefined1 *puVar1;
  FPrimaryAssetTypeData *pFVar2;
  int iVar3;
  bool bVar4;
  EPrimaryAssetCookRule EVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar10;
  FPrimaryAssetRulesExplicitOverride *pFVar11;
  
  __return_storage_ptr__->Priority = -1;
  __return_storage_ptr__->ChunkId = -1;
  __return_storage_ptr__->bApplyRecursively = true;
  __return_storage_ptr__->CookRule = Unknown;
  pTVar10 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                    *)&this->AssetTypeMap,(param_1->PrimaryAssetType).Name);
  if (pTVar10 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    pFVar2 = pTVar10->Object;
    iVar3 = (pFVar2->Info).Rules.ChunkId;
    bVar4 = (pFVar2->Info).Rules.bApplyRecursively;
    EVar5 = (pFVar2->Info).Rules.CookRule;
    uVar6 = *(undefined2 *)&(pFVar2->Info).Rules.field_0xa;
    __return_storage_ptr__->Priority = (pFVar2->Info).Rules.Priority;
    __return_storage_ptr__->ChunkId = iVar3;
    __return_storage_ptr__->bApplyRecursively = bVar4;
    __return_storage_ptr__->CookRule = EVar5;
    *(undefined2 *)&__return_storage_ptr__->field_0xa = uVar6;
    pFVar11 = TMapBase<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>_>
              ::Find((TMapBase<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>_>
                      *)&this->AssetRuleOverrides,param_1);
    if (pFVar11 != (FPrimaryAssetRulesExplicitOverride *)0x0) {
      if (pFVar11->bOverridePriority != 0) {
        __return_storage_ptr__->Priority = (pFVar11->Rules).Priority;
      }
      if (pFVar11->bOverrideApplyRecursively != '\0') {
        __return_storage_ptr__->bApplyRecursively = (pFVar11->Rules).bApplyRecursively;
      }
      if (pFVar11->bOverrideChunkId != '\0') {
        __return_storage_ptr__->ChunkId = (pFVar11->Rules).ChunkId;
      }
      if (pFVar11->bOverrideCookRule != '\0') {
        __return_storage_ptr__->CookRule = (pFVar11->Rules).CookRule;
      }
    }
    if (__return_storage_ptr__->Priority < 0) {
      __return_storage_ptr__->Priority = 1;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrimaryAssetTypeInfo @ 1475da760

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::GetPrimaryAssetTypeInfo
          (UAssetManager *this,FPrimaryAssetType param_1,FPrimaryAssetTypeInfo *param_2)

{
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar1;
  
  pTVar1 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                   *)&this->AssetTypeMap,param_1.Name);
  if (pTVar1 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    FPrimaryAssetTypeInfo::operator=(param_2,&pTVar1->Object->Info);
    return true;
  }
  return false;
}

// GetPrimaryAssetTypeInfoList @ 1475da7a0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
UAssetManager::GetPrimaryAssetTypeInfoList
          (UAssetManager *this,TArray<FPrimaryAssetTypeInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FPrimaryAssetTypeInfo *pFVar3;
  FPrimaryAssetTypeInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->AssetTypeMap).field_0x10;
  iVar9 = *(int *)&(this->AssetTypeMap).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->AssetTypeMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1475da84e;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar14;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_1475da84e:
  uVar11 = *(uint *)&(this->AssetTypeMap).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AssetTypeMap).field_0x8 -
                       *(int *)&(this->AssetTypeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->AssetTypeMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1475da950;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1475da950:
  while( true ) {
    if (*(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar3 = *(FPrimaryAssetTypeInfo **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->AssetTypeMap);
    pFVar4 = (FPrimaryAssetTypeInfo *)(param_1->AllocatorInstance).Data;
    if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + param_1->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo
              ((FPrimaryAssetTypeInfo *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x88)
               ,pFVar3);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetPrimaryAssetsWithBundleState @ 1475daa60

bool __thiscall
UAssetManager::GetPrimaryAssetsWithBundleState
          (UAssetManager *this,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPrimaryAssetType,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  FStreamableHandle *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *pTVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  TSharedPtr<FStreamableHandle,1> *pTVar16;
  TSharedPtr<FStreamableHandle,1> *pTVar17;
  byte bVar18;
  undefined1 *puVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  uint uVar24;
  uint *puVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  int iVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  longlong *plVar29;
  bool local_res8;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  int local_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  uint uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a8;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  undefined4 uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  longlong local_188;
  longlong lStack_180;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 local_150;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_108;
  longlong *local_100;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
  *local_c8;
  longlong lStack_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined8 uStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_4c;
  
  puVar1 = &(this->AssetTypeMap).field_0x10;
  iVar13 = *(int *)&(this->AssetTypeMap).field_0x28;
  local_148 = &this->AssetTypeMap;
  iStack_140 = 0;
  local_res8 = false;
  local_128 = 0;
  uStack_13c = 1;
  iStack_12c = 0;
  if (iVar13 != 0) {
    puVar25 = *(uint **)&(this->AssetTypeMap).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar1;
    }
    uVar12 = *puVar25;
    while (uVar12 == 0) {
      lVar14 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      iStack_12c = iVar13;
      if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iStack_140) goto LAB_1475dab1d;
      uVar12 = puVar25[lVar14 + 1];
    }
    uStack_13c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_13c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_118 = (int)lVar14;
    iStack_12c = local_128 + -1 + local_118;
    if (iVar13 < iStack_12c) {
      iStack_12c = iVar13;
    }
  }
LAB_1475dab1d:
  uVar12 = *(uint *)&(this->AssetTypeMap).field_0x28;
  bVar18 = (byte)uVar12 & 0x1f;
  iStack_120 = *(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34;
  uVar24 = uVar12 & 0xffffffe0;
  iVar27 = (int)uVar12 >> 5;
  uStack_1ac = 1 << bVar18;
  uVar22 = -1 << bVar18;
  uStack_130 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_13c,iStack_140);
  TStack_f0.CurrentBitIndex = iStack_12c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_4c;
  TStack_f0.BaseBitIndex = local_128;
  uStack_d0 = CONCAT44(uStack_11c,iStack_120);
  local_1b0 = iVar27;
  pTStack_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_1a0 = uVar22;
  uStack_19c = uVar12;
  uStack_198 = uVar24;
  local_138 = puVar1;
  local_f8 = local_148;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar13 < (int)uVar12)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  uVar4 = *(uint *)&(this->AssetTypeMap).field_0x28;
  if (uVar12 != uVar4) {
    puVar19 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar22 = uVar22 & *(uint *)(puVar19 + (longlong)iVar27 * 4);
    while (uVar22 == 0) {
      uStack_198 = uVar24 + 0x20;
      local_1b0 = iVar27 + 1;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < local_1b0)
      goto LAB_1475dac57;
      uVar22 = *(uint *)(puVar19 + (longlong)iVar27 * 4 + 4);
      local_1a0 = 0xffffffff;
      uVar24 = uStack_198;
      iVar27 = local_1b0;
    }
    uStack_1ac = -uVar22 & uVar22;
    uVar3 = (ulonglong)uStack_1ac * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_114 = (int)lVar14;
    uStack_19c = local_114 + -1 + uVar24;
    if ((int)uVar4 < (int)uStack_19c) {
LAB_1475dac57:
      uStack_19c = uVar4;
    }
  }
  TStack_170._padding_ = CONCAT44(uStack_1ac,local_1b0);
  local_178 = &this->AssetTypeMap;
  TStack_170.CurrentBitIndex = uStack_19c;
  TStack_170.UnvisitedBitMask = local_1a0;
  TStack_170._28_4_ = uStack_194;
  TStack_170.BaseBitIndex = uStack_198;
  TStack_170.Array = pTStack_1a8;
  local_150 = CONCAT44(local_150._4_4_,
                       *(int *)&(this->AssetTypeMap).field_0x8 -
                       *(int *)&(this->AssetTypeMap).field_0x34);
  local_b8 = pTStack_1a8;
  uStack_a0 = local_150;
  local_c8 = local_178;
  lStack_c0 = TStack_170._padding_;
  uStack_b0 = TStack_170._16_8_;
  local_a8 = TStack_170._24_8_;
  do {
    pTVar8 = local_f8;
    if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      local_1e8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e8);
    }
    if (((TStack_f0.CurrentBitIndex == iStack_ac) && (TStack_f0.Array == local_b8)) &&
       (pTVar8 == local_c8)) {
      return local_res8;
    }
    local_100 = (longlong *)((longlong)TStack_f0.CurrentBitIndex * 0x20 + *(longlong *)pTVar8);
    if (param_2->ArrayNum < 1) {
LAB_1475dad44:
      lVar14 = local_100[1];
      iVar27 = 0;
      local_1c0 = 0;
      uVar12 = 1;
      pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x188);
      iVar13 = *(int *)(lVar14 + 0x1a0);
      local_178 = (TMap<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                   *)(lVar14 + 0x178);
      iStack_1c4 = 0;
      if (iVar13 != 0) {
        pTVar26 = pTVar28;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x198) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar26 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x198);
        }
        uVar22 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
        while (uVar22 == 0) {
          lVar15 = (longlong)iVar27;
          local_1c0 = local_1c0 + 0x20;
          iVar27 = iVar27 + 1;
          iStack_1c4 = iVar13;
          if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iVar27) goto LAB_1475daddd;
          uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + lVar15 * 4 + 4);
        }
        uVar12 = -uVar22 & uVar22;
        uVar3 = (ulonglong)uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_110 = (int)lVar15;
        iStack_1c4 = local_1c0 + -1 + local_110;
        if (iVar13 < iStack_1c4) {
          iStack_1c4 = iVar13;
        }
      }
LAB_1475daddd:
      iStack_1bc = iStack_12c;
      iStack_1b8 = *(int *)(lVar14 + 0x180) - *(int *)(lVar14 + 0x1ac);
      uVar22 = *(uint *)(lVar14 + 0x1a0);
      bVar18 = (byte)uVar22 & 0x1f;
      uStack_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar12,iVar27);
      uVar24 = uVar22 & 0xffffffe0;
      TStack_170.CurrentBitIndex = iStack_1c4;
      TStack_170.UnvisitedBitMask = 0xffffffff;
      iVar27 = (int)uVar22 >> 5;
      uVar12 = -1 << bVar18;
      local_1e0 = CONCAT44(1 << bVar18,iVar27);
      local_1d0 = CONCAT44(uVar22,uVar12);
      TStack_170._padding_ = (longlong)uStack_1d8;
      TStack_170._28_4_ = iStack_12c;
      TStack_170.BaseBitIndex = local_1c0;
      local_150 = CONCAT44(uStack_1b4,iStack_1b8);
      uStack_1d8 = pTVar28;
      uStack_1c8 = uVar24;
      TStack_170.Array = pTVar28;
      local_108 = local_178;
      if ((((int)uVar22 < 0) || (iVar13 < (int)uVar22)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      uVar4 = *(uint *)(lVar14 + 0x1a0);
      if (uVar22 != uVar4) {
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x198) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x198);
        }
        uVar12 = uVar12 & *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
        while (uVar12 == 0) {
          uStack_1c8 = uVar24 + 0x20;
          lVar14 = (longlong)iVar27;
          iVar27 = iVar27 + 1;
          uVar3 = (ulonglong)local_1e0 >> 0x20;
          local_1e0 = CONCAT44((int)uVar3,iVar27);
          if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar27)
          goto LAB_1475daf2d;
          uVar12 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar14 * 4 + 4);
          local_1d0 = 0xffffffff;
          uVar24 = uStack_1c8;
        }
        local_1e0 = CONCAT44(-uVar12 & uVar12,(undefined4)local_1e0);
        uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_10c = (int)lVar14;
        iVar13 = local_10c + -1 + uVar24;
        local_1d0 = CONCAT44(iVar13,(undefined4)local_1d0);
        if ((int)uVar4 < iVar13) {
LAB_1475daf2d:
          local_1d0 = CONCAT44(uVar4,(undefined4)local_1d0);
        }
      }
      uStack_78 = CONCAT44(iStack_1c4,uStack_1c8);
      local_90 = local_1e0;
      pTStack_88 = uStack_1d8;
      local_80 = local_1d0;
      uVar9 = local_80;
      local_80._4_4_ = (int)((ulonglong)local_1d0 >> 0x20);
      local_190 = uStack_1d8;
      local_1e4 = local_80._4_4_;
      iVar13 = local_80._4_4_;
      local_80 = uVar9;
      while( true ) {
        pTVar8 = local_178;
        if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)local_150) {
          local_1e7 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e7);
        }
        if (((TStack_170.CurrentBitIndex == iVar13) && (TStack_170.Array == local_190)) &&
           (pTVar8 == local_108)) break;
        plVar29 = (longlong *)((longlong)TStack_170.CurrentBitIndex * 0x78 + *(longlong *)pTVar8);
        if (param_5) {
LAB_1475dafda:
          pTVar17 = (TSharedPtr<FStreamableHandle,1> *)plVar29[10];
          plVar23 = plVar29 + 10;
        }
        else {
          pTVar17 = (TSharedPtr<FStreamableHandle,1> *)plVar29[0xc];
          plVar23 = plVar29 + 0xc;
          pTVar16 = &FPrimaryAssetLoadState::InvalidHandle;
          if (pTVar17 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
            pTVar16 = pTVar17;
          }
          pFVar5 = pTVar16->Object;
          if (((pFVar5 == (FStreamableHandle *)0x0) || (pFVar5->bCanceled != false)) ||
             (pFVar5->bReleased != false)) goto LAB_1475dafda;
        }
        if (pTVar17 == (TSharedPtr<FStreamableHandle,1> *)0x0) {
          pTVar17 = &FPrimaryAssetLoadState::InvalidHandle;
        }
        else {
          pTVar17 = (TSharedPtr<FStreamableHandle,1> *)*plVar23;
        }
        pFVar5 = pTVar17->Object;
        if (((pFVar5 != (FStreamableHandle *)0x0) && (pFVar5->bCanceled == false)) &&
           (pFVar5->bReleased == false)) {
          bVar10 = false;
          pFVar20 = (param_3->AllocatorInstance).Data;
          iVar13 = param_3->ArrayNum;
          pFVar6 = pFVar20 + (longlong)iVar13 * 8;
          while( true ) {
            if (param_3->ArrayNum != iVar13) {
              local_1e6 = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1e6);
            }
            if (pFVar20 == pFVar6) goto LAB_1475db081;
            if (*plVar23 == 0) {
              uVar12 = 0;
              plVar21 = (longlong *)0x0;
            }
            else {
              uVar12 = (uint)*(ushort *)(plVar23 + 1);
              plVar21 = (longlong *)(*plVar23 + 0x10);
            }
            plVar2 = plVar21 + (int)uVar12;
            if (plVar21 == plVar2) break;
            while (*plVar21 != *(longlong *)pFVar20) {
              plVar21 = plVar21 + 1;
              if (plVar21 == plVar2) goto LAB_1475db07e;
            }
            pFVar20 = pFVar20 + 8;
          }
LAB_1475db07e:
          bVar10 = true;
LAB_1475db081:
          pFVar20 = (param_4->AllocatorInstance).Data;
          iVar27 = param_4->ArrayNum;
          pFVar6 = pFVar20 + (longlong)iVar27 * 8;
          while( true ) {
            if (param_4->ArrayNum != iVar27) {
              local_1e5 = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1e5);
            }
            iVar13 = local_1e4;
            if (pFVar20 == pFVar6) break;
            if (*plVar23 == 0) {
              uVar12 = 0;
              plVar21 = (longlong *)0x0;
            }
            else {
              uVar12 = (uint)*(ushort *)(plVar23 + 1);
              plVar21 = (longlong *)(*plVar23 + 0x10);
            }
            plVar2 = plVar21 + (int)uVar12;
            if (plVar21 != plVar2) {
              do {
                if (*plVar21 == *(longlong *)pFVar20) goto LAB_1475db1c5;
                plVar21 = plVar21 + 1;
              } while (plVar21 != plVar2);
            }
            pFVar20 = pFVar20 + 8;
          }
          if (!bVar10) {
            local_188 = *local_100;
            pFVar6 = (param_1->AllocatorInstance).Data;
            lStack_180 = *plVar29;
            if (((pFVar6 <= (FScriptContainerElement *)&local_188) &&
                ((FScriptContainerElement *)&local_188 < pFVar6 + (longlong)param_1->ArrayMax * 0x10
                )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            iVar13 = param_1->ArrayNum;
            if (iVar13 == param_1->ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            local_res8 = true;
            param_1->ArrayNum = iVar13 + 1;
            pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
            *(longlong *)pFVar6 = local_188;
            *(longlong *)(pFVar6 + 8) = lStack_180;
            iVar13 = local_1e4;
          }
        }
LAB_1475db1c5:
        TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
      }
    }
    else {
      pFVar20 = (param_2->AllocatorInstance).Data;
      pFVar6 = pFVar20 + (longlong)param_2->ArrayNum * 8;
      if (pFVar20 != pFVar6) {
        do {
          if (*(longlong *)pFVar20 == *local_100) goto LAB_1475dad44;
          pFVar20 = pFVar20 + 8;
        } while (pFVar20 != pFVar6);
      }
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
}

// GetPrivateStaticClass @ 1475db440

UClass * __cdecl UAssetManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetManager",
               &Z_Registration_Info_UClass_UAssetManager.InnerSingleton,
               StaticRegisterNativesUAssetManager,0x528,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetManager>,InternalVTableHelperCtorCaller<UAssetManager>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetManager.InnerSingleton;
}

// GetRedirectedAssetPath @ 1475dc720

FSoftObjectPath * __thiscall
UAssetManager::GetRedirectedAssetPath
          (UAssetManager *this,FSoftObjectPath *__return_storage_ptr__,FSoftObjectPath *param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FName *pFVar5;
  int iVar6;
  FName FVar7;
  undefined1 *puVar8;
  FName FVar9;
  FName FVar10;
  int iVar11;
  FNameEntryId FVar12;
  FTopLevelAssetPath local_78;
  FSoftObjectPath local_68;
  FTopLevelAssetPath local_48;
  FName local_38 [2];
  FName local_28 [2];
  
  local_78.PackageName = (param_1->AssetPath).PackageName;
  local_78.AssetName = (param_1->AssetPath).AssetName;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_68.AssetPath.PackageName.Number = 0;
  local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_68.AssetPath.AssetName.Number = 0;
  local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SubPathString.Data.ArrayNum = 0;
  local_68.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_68,&local_78);
  FVar10 = local_68.AssetPath.AssetName;
  uVar3 = ::GetTypeHash(local_68.AssetPath.AssetName.ComparisonIndex.Value);
  FVar7 = local_68.AssetPath.PackageName;
  uVar4 = ::GetTypeHash(local_68.AssetPath.PackageName.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar7.Number;
  uVar4 = uVar4 * 0x40 + uVar3 + FVar10.Number + -0x61c88647 + (uVar4 >> 2) ^ uVar4;
  if (1 < local_68.SubPathString.Data.ArrayNum) {
    iVar6 = local_68.SubPathString.Data.ArrayNum + -1;
    if (local_68.SubPathString.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<char8_t>
                      (iVar6,(uchar *)local_68.SubPathString.Data.AllocatorInstance.Data);
    uVar4 = uVar4 ^ uVar3 + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2);
  }
  FVar7 = FVar9;
  if (*(int *)&(this->AssetPathRedirects).field_0x8 !=
      *(int *)&(this->AssetPathRedirects).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AssetPathRedirects).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AssetPathRedirects).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AssetPathRedirects).field_0x48 - 1U & uVar4) * 4);
    while (iVar6 != -1) {
      lVar1 = (longlong)iVar6 * 0x48;
      bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this->AssetPathRedirects + lVar1),
                         &local_68);
      if (bVar2) {
        FVar7 = (FName)(*(longlong *)&this->AssetPathRedirects + lVar1);
        break;
      }
      iVar6 = *(int *)(*(longlong *)&this->AssetPathRedirects + 0x40 + lVar1);
    }
  }
  FVar10 = (FName)((longlong)FVar7 + 0x20);
  if (FVar7 == (FName)0x0) {
    FVar10 = FVar9;
  }
  if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FVar10 == (FName)0x0) {
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  }
  else {
    iVar6 = (param_1->SubPathString).Data.ArrayNum;
    iVar11 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar11 = 0;
    }
    pFVar5 = (FName *)::FString::ConstructFromPtrSize
                                ((FString *)&local_78,
                                 (uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,
                                 iVar11);
    FVar12.Value = 0;
    FVar7 = FVar9;
    uVar3 = FVar12.Value;
    if (local_38 != pFVar5) {
      FVar7 = *pFVar5;
      pFVar5->ComparisonIndex = 0;
      pFVar5->Number = 0;
      uVar3 = pFVar5[1].ComparisonIndex.Value;
      pFVar5[1].ComparisonIndex = 0;
      pFVar5[1].Number = 0;
    }
    if (local_78.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_78.PackageName);
    }
    local_48.PackageName = *(FName *)FVar10;
    local_48.AssetName = *(FName *)((longlong)FVar10 + 8);
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    iVar6 = uVar3 - 1;
    if (uVar3 == 0) {
      iVar6 = 0;
    }
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
    pFVar5 = (FName *)FUtf8String::ConstructFromPtrSize
                                ((FUtf8String *)&local_68,(wchar_t *)FVar7,iVar6);
    uVar3 = FVar12.Value;
    if (local_28 != pFVar5) {
      FVar9 = *pFVar5;
      pFVar5->ComparisonIndex = 0;
      pFVar5->Number = 0;
      FVar12.Value = pFVar5[1].ComparisonIndex.Value;
      uVar3 = pFVar5[1].Number;
      pFVar5[1].ComparisonIndex = 0;
      pFVar5[1].Number = 0;
    }
    if (local_68.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_68.AssetPath.PackageName);
    }
    local_78.AssetName.Number = uVar3;
    local_78.AssetName.ComparisonIndex.Value = FVar12.Value;
    local_78.PackageName = FVar9;
    FSoftObjectPath::SetPath
              (__return_storage_ptr__,&local_48,(TStringOverload<FUtf8String> *)&local_78);
    if (FVar7 != (FName)0x0) {
      FMemory::Free((void *)FVar7);
    }
  }
  return __return_storage_ptr__;
}

// GetRedirectedPrimaryAssetId @ 1475dc990

FPrimaryAssetId * __thiscall
UAssetManager::GetRedirectedPrimaryAssetId
          (UAssetManager *this,FPrimaryAssetId *__return_storage_ptr__,FPrimaryAssetId *param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  uint uVar6;
  undefined8 *puVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FString local_28;
  
  FPrimaryAssetId::ToString(param_1,&local_28);
  pwVar9 = L"";
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar8.Data = local_28.Data.AllocatorInstance.Data;
  }
  uVar6 = 0;
  uVar3 = local_28.Data.ArrayNum - 1;
  if (local_28.Data.ArrayNum == 0) {
    uVar3 = uVar6;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar3,(wchar_t *)FVar8.Data);
  iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->PrimaryAssetIdRedirects,uVar3,&local_28);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&this->PrimaryAssetIdRedirects + (longlong)iVar4 * 0x28;
    puVar7 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      if (*(int *)(puVar7 + 1) != 0) {
        pwVar9 = (wchar_t *)*puVar7;
        uVar6 = *(int *)(puVar7 + 1) - 1;
      }
      FPrimaryAssetId::ParseTypeAndName(__return_storage_ptr__,pwVar9,uVar6);
      goto LAB_1475dca69;
    }
  }
  pFVar5 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->PrimaryAssetTypeRedirects,(param_1->PrimaryAssetType).Name);
  if (pFVar5 == (FName *)0x0) {
    (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
    (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
    (__return_storage_ptr__->PrimaryAssetName).Number = 0;
  }
  else {
    FVar2 = param_1->PrimaryAssetName;
    (__return_storage_ptr__->PrimaryAssetType).Name = *pFVar5;
    __return_storage_ptr__->PrimaryAssetName = FVar2;
  }
LAB_1475dca69:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetResourceAcquireProgress @ 1475dd110

bool __thiscall
UAssetManager::GetResourceAcquireProgress(UAssetManager *this,int *param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  *param_2 = 0;
  *param_1 = 0;
  iVar2 = (this->PendingChunkInstalls).ArrayNum;
  pFVar3 = (this->PendingChunkInstalls).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->PendingChunkInstalls).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UAssetManager::FPendingChunkInstall_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *param_2 = *param_2 + *(int *)(pFVar3 + 8);
    *param_1 = *param_1 + (*(int *)(pFVar3 + 8) - *(int *)(pFVar3 + 0x18));
    pFVar3 = pFVar3 + 0x48;
  }
  return 0 < (this->PendingChunkInstalls).ArrayNum;
}

// GetSettings @ 1475ddaf0

UAssetManagerSettings * __thiscall UAssetManager::GetSettings(UAssetManager *this)

{
  UClass *this_00;
  UAssetManagerSettings *pUVar1;
  
  pUVar1 = this->CachedSettings;
  if (pUVar1 == (UAssetManagerSettings *)0x0) {
    this_00 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (UAssetManagerSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    this->CachedSettings = pUVar1;
  }
  return pUVar1;
}

// GetTimerManager @ 1475deb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerManager * __thiscall UAssetManager::GetTimerManager(UAssetManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  pFVar5 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar2) break;
    if ((**(char **)pFVar5 == '\x01') &&
       (lVar4 = *(longlong *)(*(char **)pFVar5 + 0x208), lVar4 != 0)) {
      return *(FTimerManager **)(lVar4 + 0x120);
    }
    pFVar5 = pFVar5 + 8;
  }
  return (FTimerManager *)0x0;
}

// HasInitialScanCompleted @ 1475dfea0

bool __thiscall UAssetManager::HasInitialScanCompleted(UAssetManager *this)

{
  return this->bHasCompletedInitialScan;
}

// InternalAddAssetScanPath @ 1475e1a40

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
UAssetManager::InternalAddAssetScanPath
          (UAssetManager *this,FPrimaryAssetTypeData *param_1,FString *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&(param_1->Info).AssetScanPaths,param_2);
  if (this->bScanningFromInitialConfig == false) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&param_1->AdditionalAssetScanPaths,(FString *)&stack0x00000008,(bool *)param_2);
  }
  return;
}

// InvalidatePrimaryAssetDirectory @ 1475e1aa0

void __thiscall UAssetManager::InvalidatePrimaryAssetDirectory(UAssetManager *this)

{
  this->bIsPrimaryAssetDirectoryCurrent = false;
  return;
}

// IsAssetDataBlueprintOfClassSet @ 1475e1ab0

bool __thiscall
UAssetManager::IsAssetDataBlueprintOfClassSet
          (UAssetManager *this,FAssetData *param_1,
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
          *param_2)

{
  bool bVar1;
  
  bVar1 = UAssetRegistryHelpers::IsAssetDataBlueprintOfClassSet(param_1,param_2);
  return bVar1;
}

// IsInitialized @ 1475e22b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UAssetManager::IsInitialized(void)

{
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->AssetManager).field0_0x0.DebugPtr != (UAssetManager *)0x0)) {
    return true;
  }
  return false;
}

// IsPathExcludedFromScan @ 1475e2800

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UAssetManager::IsPathExcludedFromScan(UAssetManager *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  UClass *this_00;
  size_t sVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  UAssetManagerSettings *pUVar6;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  pUVar6 = this->CachedSettings;
  if (pUVar6 == (UAssetManagerSettings *)0x0) {
    this_00 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar6 = (UAssetManagerSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    this->CachedSettings = pUVar6;
  }
  iVar1 = (pUVar6->DirectoriesToExclude).ArrayNum;
  pFVar4 = (pUVar6->DirectoriesToExclude).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  do {
    if ((pUVar6->DirectoriesToExclude).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDirectoryPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      return false;
    }
    if (*(int *)(pFVar4 + 8) == 0) {
      _Str = L"";
LAB_1475e2891:
      sVar3 = wcslen(_Str);
      iVar2 = ::FString::Find(param_1,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
      if (iVar2 != -1) {
        return true;
      }
    }
    else {
      _Str = *(wchar_t **)pFVar4;
      if (_Str != (wchar_t *)0x0) goto LAB_1475e2891;
    }
    pFVar4 = pFVar4 + 0x10;
  } while( true );
}

// IsScanningFromInitialConfig @ 1475e2b90

bool __thiscall UAssetManager::IsScanningFromInitialConfig(UAssetManager *this)

{
  return this->bScanningFromInitialConfig;
}

// IsValid @ 1475e2cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UAssetManager::IsValid(void)

{
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->AssetManager).field0_0x0.DebugPtr != (UAssetManager *)0x0)) {
    return true;
  }
  return false;
}

// LoadAssetList @ 1475e3440

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadAssetList
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          FAssetManagerLoadParams *param_2,FString *param_3,FSourceLocation *param_4)

{
  longlong lVar1;
  TSharedPtr<FStreamableHandle,1> *pTVar2;
  FSharedReferencer<1> FVar3;
  FStreamableHandle *pFVar4;
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  ulonglong local_138;
  TSharedPtr<FStreamableHandle,1> local_128;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  TSharedPtr<FStreamableHandle,1> local_108;
  void *local_f8;
  undefined8 local_f0;
  FSoftObjectPath *local_e8;
  int local_e0;
  int iStack_dc;
  bool local_d8;
  source_location local_c8;
  FStreamableAsyncLoadParams local_a8;
  
  local_110 = 0;
  local_118 = (void *)0x0;
  local_10c = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  if (this->bShouldAcquireMissingChunksOnLoad != false) {
    (**(code **)(this->_padding_ + 0x408))(this,param_1,&local_118);
    if (0 < (int)local_f0) {
      if (1 < (byte)LogAssetManager._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      }
      __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_1475e3857;
    }
  }
  local_108.Object = (FStreamableHandle *)0x0;
  local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((((param_2->DownloadParams).bIsSet == false) && (this->bShouldUseSynchronousLoad != false)) &&
     (local_110 == 0)) {
    local_c8._Line = (param_4->Impl)._Line;
    local_c8._Column = (param_4->Impl)._Column;
    local_c8._File = (param_4->Impl)._File;
    local_c8._Function = (param_4->Impl)._Function;
    local_148 = (undefined1  [8])(param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Data = *(FScriptContainerElement **)&(param_3->Data).ArrayNum;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
    local_e8 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_e0 = param_1->ArrayNum;
    iStack_dc = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    FStreamableManager::RequestSyncLoadInternal
              (&this->StreamableManager,&local_128,
               (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)&local_e8,false,
               (FString *)local_148,(FSourceLocation *)&local_c8);
    DestructItems<FSoftObjectPath,int>(local_e8,local_e0);
    if (local_e8 != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_e8);
    }
    if ((atomic<unsigned___int64>)local_148 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_148);
    }
    local_108.Object = local_128.Object;
    local_128.Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_108.SharedReferenceCount,&local_128.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    FVar3.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
    local_128.Object = local_108.Object;
    local_128.SharedReferenceCount.ReferenceController =
         local_108.SharedReferenceCount.ReferenceController;
    local_138 = 0;
    local_148 = (undefined1  [8])0x0;
    local_140.Data = (FScriptContainerElement *)0x0;
    if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FStreamableHandle::ExecuteDelegate
              (&param_2->OnComplete,&local_128,
               (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                *)local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_e8);
    if (((int)local_138 != 0) &&
       ((TReferenceControllerBase<1> *)local_140.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_140.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_140,0,0,0x10);
      local_138 = local_138 & 0xffffffff00000000;
    }
    if (local_d8 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(iStack_dc,local_e0),
                 (FDestructionSentinel *)&local_e8);
    }
    if ((TReferenceControllerBase<1> *)local_140.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_140.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_148);
    pFVar4 = local_108.Object;
  }
  else {
    UE::AssetManager::Private::GetStreamableAsyncLoadParams(&local_a8,param_2);
    if (&local_a8 != (FStreamableAsyncLoadParams *)param_1) {
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data,
                 local_a8.TargetsToStream.ArrayNum);
      if ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data !=
          (FSoftObjectPath *)0x0) {
        FMemory::Free(local_a8.TargetsToStream.AllocatorInstance.Data);
      }
      local_a8.TargetsToStream.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.TargetsToStream.ArrayNum = param_1->ArrayNum;
      local_a8.TargetsToStream.ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
    }
    local_a8.bManageActiveHandle = false;
    local_a8.bStartStalled = 0 < local_110;
    local_c8._Line = (param_4->Impl)._Line;
    local_c8._Column = (param_4->Impl)._Column;
    local_c8._File = (param_4->Impl)._File;
    local_c8._Function = (param_4->Impl)._Function;
    local_128.Object = (FStreamableHandle *)(param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(param_3->Data).ArrayNum;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
    pTVar2 = FStreamableManager::RequestAsyncLoad
                       (&this->StreamableManager,(TSharedPtr<FStreamableHandle,1> *)local_148,
                        &local_a8,(FString *)&local_128,(FSourceLocation *)&local_c8);
    pFVar4 = (FStreamableHandle *)0x0;
    FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&local_108 != pTVar2) {
      local_108.Object = pTVar2->Object;
      pTVar2->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_108.SharedReferenceCount,&pTVar2->SharedReferenceCount);
      pFVar4 = local_108.Object;
      FVar3.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_140.Data);
    if ((0 < local_110) && (pFVar4 != (FStreamableHandle *)0x0)) {
      lVar1 = this->_padding_;
      if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar3.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_138 = 0;
      local_148 = (undefined1  [8])0x0;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_128.Object = pFVar4;
      local_128.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
      (**(code **)(lVar1 + 0x5a0))(this,&local_118,local_148,0,&local_128);
    }
    if (local_a8.DownloadParams.bIsSet != false) {
      FStreamableDownloadCachePin::~FStreamableDownloadCachePin
                ((FStreamableDownloadCachePin *)&local_a8.DownloadParams);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8.OnUpdate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8.OnCancel);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8.OnComplete);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data,
               local_a8.TargetsToStream.ArrayNum);
    if ((FSoftObjectPath *)local_a8.TargetsToStream.AllocatorInstance.Data != (FSoftObjectPath *)0x0
       ) {
      FMemory::Free(local_a8.TargetsToStream.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = pFVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_1475e3857:
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  return __return_storage_ptr__;
}

// LoadAssetListInternal @ 1475e38a0

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadAssetListInternal
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
          *param_2,int param_3,FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FStreamableHandle,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\AssetManager.h"
                     ,0x41a,L"Deprecated");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar1)();
    return pTVar3;
  }
  __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// LoadPrimaryAsset @ 1475e38f0

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadPrimaryAsset
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FPrimaryAssetId *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          FAssetManagerLoadParams *param_3,FSourceLocation *param_4)

{
  code *pcVar1;
  ForAnyElementType local_48;
  undefined4 local_40;
  int local_3c;
  FName local_38;
  FName FStack_30;
  char *local_28;
  
  local_38 = (param_1->PrimaryAssetType).Name;
  FStack_30 = param_1->PrimaryAssetName;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  pcVar1 = *(code **)(this->_padding_ + 0x370);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_48,1,&local_3c);
  *(FName *)local_48.Data = local_38;
  *(FName *)(local_48.Data + 8) = FStack_30;
  local_38.ComparisonIndex.Value = (param_4->Impl)._Line;
  local_38.Number = (param_4->Impl)._Column;
  FStack_30 = (FName)(param_4->Impl)._File;
  local_28 = (param_4->Impl)._Function;
  (*pcVar1)(this,__return_storage_ptr__,&local_48,param_2,param_3,&local_38);
  if ((FName *)local_48.Data != (FName *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// LoadPrimaryAsset @ 1475e39f0

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadPrimaryAsset
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FPrimaryAssetId *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,int param_4,
          FSourceLocation *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_b8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  int local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_40,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_b8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_90.Data = pFVar2;
  local_88 = iVar1;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)local_b8);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  local_50 = param_4;
  local_b8._0_4_ = (param_5->Impl)._Line;
  local_b8._4_4_ = (param_5->Impl)._Column;
  local_b8._8_4_ = *(undefined4 *)&(param_5->Impl)._File;
  local_b8._12_4_ = *(undefined4 *)((longlong)&(param_5->Impl)._File + 4);
  local_b8._16_8_ = (param_5->Impl)._Function;
  (**(code **)(this->_padding_ + 0x380))
            (this,__return_storage_ptr__,param_1,param_2,&local_98,local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)local_b8);
  if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_b8);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return __return_storage_ptr__;
}

// LoadPrimaryAssets @ 1475e3d00

/* WARNING: Removing unreachable block (ram,0x0001475e3d68) */

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,FAssetManagerLoadParams *param_3,
          FSourceLocation *param_4)

{
  (**(code **)(this->_padding_ + 0x3b8))();
  return __return_storage_ptr__;
}

// LoadPrimaryAssets @ 1475e3d80

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,int param_4,
          FSourceLocation *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_b8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  int local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_40,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_b8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_90.Data = pFVar2;
  local_88 = iVar1;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)local_b8);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  local_50 = param_4;
  local_b8._0_4_ = (param_5->Impl)._Line;
  local_b8._4_4_ = (param_5->Impl)._Column;
  local_b8._8_4_ = *(undefined4 *)&(param_5->Impl)._File;
  local_b8._12_4_ = *(undefined4 *)((longlong)&(param_5->Impl)._File + 4);
  local_b8._16_8_ = (param_5->Impl)._Function;
  (**(code **)(this->_padding_ + 0x370))
            (this,__return_storage_ptr__,param_1,param_2,&local_98,local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)local_b8);
  if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_b8);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return __return_storage_ptr__;
}

// LoadPrimaryAssetsWithType @ 1475e4090

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadPrimaryAssetsWithType
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FPrimaryAssetType param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          FAssetManagerLoadParams *param_3,FSourceLocation *param_4)

{
  void *local_38;
  undefined8 local_30;
  uint local_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char *local_18;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  (**(code **)(this->_padding_ + 0x358))(this,param_1.Name,&local_38,0);
  local_28 = (param_4->Impl)._Line;
  uStack_24 = (param_4->Impl)._Column;
  uStack_20 = *(undefined4 *)&(param_4->Impl)._File;
  uStack_1c = *(undefined4 *)((longlong)&(param_4->Impl)._File + 4);
  local_18 = (param_4->Impl)._Function;
  (**(code **)(this->_padding_ + 0x370))
            (this,__return_storage_ptr__,&local_38,param_2,param_3,&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// LoadPrimaryAssetsWithType @ 1475e4150

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::LoadPrimaryAssetsWithType
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          FPrimaryAssetType param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,int param_4,
          FSourceLocation *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_b8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  int local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_40,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_b8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_90.Data = pFVar2;
  local_88 = iVar1;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)local_b8);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  local_50 = param_4;
  local_b8._0_4_ = (param_5->Impl)._Line;
  local_b8._4_4_ = (param_5->Impl)._Column;
  local_b8._8_4_ = *(undefined4 *)&(param_5->Impl)._File;
  local_b8._12_4_ = *(undefined4 *)((longlong)&(param_5->Impl)._File + 4);
  local_b8._16_8_ = (param_5->Impl)._Function;
  (**(code **)(this->_padding_ + 0x390))
            (this,__return_storage_ptr__,param_1.Name,param_2,&local_98,local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)local_b8);
  if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_b8);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return __return_storage_ptr__;
}

// LoadRedirectorMaps @ 1475e4470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAssetManager::LoadRedirectorMaps(UAssetManager *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  FName FVar3;
  code *pcVar4;
  FName FVar5;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *this_00;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this_01;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *pTVar6;
  void *pvVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UAssetManagerSettings *pUVar11;
  FName *pFVar12;
  FName *pFVar13;
  size_t sVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  ulonglong uVar16;
  longlong lVar17;
  FSoftObjectPath *pFVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  wchar_t *pwVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  FUtf8String *pFVar26;
  FSoftObjectPath *pFVar27;
  ulonglong uVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5 [5];
  FSoftObjectPath local_2b0;
  FSoftObjectPath local_290;
  FSoftObjectPath local_270;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  int local_220;
  undefined4 uStack_21c;
  FSoftObjectPath local_218;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *local_1f8;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  FSoftObjectPath local_1a8;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FSparseArrayAllocationInfo local_148;
  FSparseArrayAllocationInfo local_138;
  FName local_128;
  FName local_120;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  FString local_e8;
  TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
  *local_d8;
  longlong lStack_d0;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  undefined8 uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_1f8 = &this->AssetPathRedirects;
  TSet<TTuple<FSoftObjectPath,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FSoftObjectPath,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>,FDefaultSetAllocator>
           *)local_1f8);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&this->PrimaryAssetIdRedirects);
  local_1f0 = &this->PrimaryAssetTypeRedirects;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_1f0);
  pUVar11 = GetSettings(this);
  this_01 = local_1f0;
  iVar29 = (pUVar11->PrimaryAssetTypeRedirects).ArrayNum;
  pFVar25 = (pUVar11->PrimaryAssetTypeRedirects).AllocatorInstance.Data;
  pFVar30 = pFVar25 + (longlong)iVar29 * 0x20;
  while( true ) {
    if ((pUVar11->PrimaryAssetTypeRedirects).ArrayNum != iVar29) {
      local_2b8 = 0;
      `TCheckedPointerIterator<FAssetManagerRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2b8);
    }
    this_00 = local_1f8;
    if (pFVar25 == pFVar30) break;
    if (*(int *)(pFVar25 + 0x18) == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = *(wchar_t **)(pFVar25 + 0x10);
    }
    pFVar12 = ::FName::FName(&local_128,pwVar21);
    if (*(int *)(pFVar25 + 8) == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = *(wchar_t **)pFVar25;
    }
    pFVar13 = ::FName::FName(&local_120,pwVar21);
    TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
    Emplace<FName,FName>
              ((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                *)this_01,pFVar13,pFVar12);
    pFVar25 = pFVar25 + 0x20;
  }
  iVar29 = (pUVar11->PrimaryAssetIdRedirects).ArrayNum;
  pFVar25 = (pUVar11->PrimaryAssetIdRedirects).AllocatorInstance.Data;
  pFVar30 = pFVar25 + (longlong)iVar29 * 0x20;
  while( true ) {
    if ((pUVar11->PrimaryAssetIdRedirects).ArrayNum != iVar29) {
      local_2b7 = 0;
      `TCheckedPointerIterator<FAssetManagerRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2b7);
    }
    if (pFVar25 == pFVar30) break;
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString_const_&,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&this->PrimaryAssetIdRedirects,(FString *)pFVar25,(FString *)(pFVar25 + 0x10));
    pFVar25 = pFVar25 + 0x20;
  }
  iVar29 = (pUVar11->AssetPathRedirects).ArrayNum;
  pFVar25 = (pUVar11->AssetPathRedirects).AllocatorInstance.Data;
  pFVar30 = pFVar25 + (longlong)iVar29 * 0x20;
  while( true ) {
    if ((pUVar11->AssetPathRedirects).ArrayNum != iVar29) {
      local_2b6 = 0;
      `TCheckedPointerIterator<FAssetManagerRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2b6);
    }
    if (pFVar25 == pFVar30) break;
    local_270.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_270.AssetPath.PackageName.Number = 0;
    local_270.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_270.AssetPath.AssetName.Number = 0;
    local_270.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.SubPathString.Data.ArrayNum = 0;
    local_270.SubPathString.Data.ArrayMax = 0;
    if (*(int *)(pFVar25 + 0x18) == 0) {
      local_1a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
LAB_1475e4635:
      sVar14 = wcslen((wchar_t *)local_1a8.SubPathString.Data.AllocatorInstance.Data);
      iVar10 = (int)sVar14;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      local_1a8.SubPathString.Data.AllocatorInstance.Data = pFVar25[0x10];
      iVar10 = 0;
      if (local_1a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1475e4635;
    }
    local_118._12_4_ = local_1a8.SubPathString.Data.ArrayMax;
    local_118.Size = iVar10;
    local_118.DataPtr = (wchar_t *)local_1a8.SubPathString.Data.AllocatorInstance.Data;
    local_1a8.SubPathString.Data.ArrayNum = iVar10;
    FSoftObjectPath::SetPath(&local_270,&local_118);
    local_290.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_290.AssetPath.PackageName.Number = 0;
    local_290.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_290.AssetPath.AssetName.Number = 0;
    local_290.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.SubPathString.Data.ArrayNum = 0;
    local_290.SubPathString.Data.ArrayMax = 0;
    if (*(int *)(pFVar25 + 8) == 0) {
      local_188 = L"";
LAB_1475e468e:
      sVar14 = wcslen(local_188);
      iVar10 = (int)sVar14;
    }
    else {
      local_188 = *(wchar_t **)pFVar25;
      iVar10 = 0;
      if (local_188 != (wchar_t *)0x0) goto LAB_1475e468e;
    }
    local_108._12_4_ = uStack_17c;
    local_108.Size = iVar10;
    local_108.DataPtr = local_188;
    iStack_180 = iVar10;
    FSoftObjectPath::SetPath(&local_290,&local_108);
    TMapBase<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
    ::Emplace<FSoftObjectPath,FSoftObjectPath>
              ((TMapBase<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
                *)this_00,&local_290,&local_270);
    if (local_290.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_270.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar25 = pFVar25 + 0x20;
  }
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(&this_00->field_0x0 + 0x10);
  local_1c8._padding_._0_4_ = 0;
  local_1c8._padding_._4_4_ = 1;
  local_1c8.UnvisitedBitMask = 0xffffffff;
  local_1c8.CurrentBitIndex = 0;
  local_1c8.BaseBitIndex = 0;
  local_1c8.Array = pTVar1;
  if (*(int *)(&this_00->field_0x0 + 0x28) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
  }
  TStack_240._padding_ = CONCAT44(local_1c8._padding_._4_4_,(undefined4)local_1c8._padding_);
  TStack_240.CurrentBitIndex = local_1c8.CurrentBitIndex;
  TStack_240.UnvisitedBitMask = local_1c8.UnvisitedBitMask;
  TStack_240._28_4_ = local_1c8._28_4_;
  TStack_240.BaseBitIndex = local_1c8.BaseBitIndex;
  local_220 = *(int *)(&this_00->field_0x0 + 8) - *(int *)(&this_00->field_0x0 + 0x34);
  TStack_240.Array = local_1c8.Array;
  local_248 = this_00;
  local_178 = this_00;
  uStack_150 = CONCAT44(uStack_21c,local_220);
  TStack_170.Array = local_1c8.Array;
  TStack_170._padding_ = TStack_240._padding_;
  TStack_170._16_8_ = TStack_240._16_8_;
  TStack_170._24_8_ = TStack_240._24_8_;
  pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_a8,pTVar1,*(int *)(&this_00->field_0x0 + 0x28));
  local_248 = this_00;
  TStack_240._padding_ = pTVar15->_padding_;
  TStack_240.Array = pTVar15->Array;
  TStack_240.UnvisitedBitMask = pTVar15->UnvisitedBitMask;
  TStack_240.CurrentBitIndex = pTVar15->CurrentBitIndex;
  TStack_240.BaseBitIndex = pTVar15->BaseBitIndex;
  TStack_240._28_4_ = *(undefined4 *)&pTVar15->field_0x1c;
  local_220 = *(int *)(&this_00->field_0x0 + 8) - *(int *)(&this_00->field_0x0 + 0x34);
  local_d8 = this_00;
  uStack_b0 = CONCAT44(uStack_21c,local_220);
  lStack_d0 = TStack_240._padding_;
  local_c8 = TStack_240.Array;
  uStack_c0 = TStack_240._16_8_;
  local_b8 = TStack_240._24_8_;
LAB_1475e47b0:
  pTVar6 = local_178;
  pFVar27 = (FSoftObjectPath *)0x0;
  if (*(int *)(&local_178->field_0x0 + 8) - *(int *)(&local_178->field_0x0 + 0x34) !=
      (int)uStack_150) {
    local_2b5[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2b5);
  }
  if (((TStack_170.CurrentBitIndex == iStack_bc) && (TStack_170.Array == local_c8)) &&
     (pTVar6 == local_d8)) {
    return;
  }
  lVar17 = *(longlong *)&pTVar6->field_0x0;
  local_218.SubPathString.Data.ArrayNum =
       *(int *)(lVar17 + 0x18 + (longlong)TStack_170.CurrentBitIndex * 0x48);
  sVar14 = (size_t)local_218.SubPathString.Data.ArrayNum;
  pFVar12 = (FName *)(lVar17 + (longlong)TStack_170.CurrentBitIndex * 0x48);
  FVar3 = pFVar12[2];
  local_218.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.AssetPath.PackageName = *pFVar12;
  local_218.AssetPath.AssetName = pFVar12[1];
  if (local_218.SubPathString.Data.ArrayNum == 0) {
    local_218.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_218.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_218.SubPathString,local_218.SubPathString.Data.ArrayNum,
               &local_218.SubPathString.Data.ArrayMax);
    memcpy(local_218.SubPathString.Data.AllocatorInstance.Data,(void *)FVar3,sVar14);
  }
  local_2b0.SubPathString.Data.ArrayNum = pFVar12[7].ComparisonIndex.Value;
  sVar14 = (size_t)local_2b0.SubPathString.Data.ArrayNum;
  local_2b0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.AssetPath.PackageName = pFVar12[4];
  local_2b0.AssetPath.AssetName = pFVar12[5];
  FVar3 = pFVar12[6];
  if (local_2b0.SubPathString.Data.ArrayNum == 0) {
    local_2b0.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_2b0.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_2b0.SubPathString,local_2b0.SubPathString.Data.ArrayNum,
               &local_2b0.SubPathString.Data.ArrayMax);
    memcpy(local_2b0.SubPathString.Data.AllocatorInstance.Data,(void *)FVar3,sVar14);
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
  Emplace<FSoftObjectPath_const_&>
            ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
             local_88,&local_1a8,(bool *)&local_218);
  if (local_54 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                        (int *)(local_88 + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),false);
    iVar29 = local_58;
  }
  else {
    local_54 = local_54 + -1;
    iVar29 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x28 + 4);
    iVar10 = local_58;
    if (local_54 != 0) {
      *(undefined4 *)(local_88._0_8_ + (longlong)iVar29 * 0x28) = 0xffffffff;
    }
  }
  local_58 = iVar29;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_88,&local_148,iVar10);
  pvVar7 = local_148.Pointer;
  FVar19.Data = local_2b0.SubPathString.Data.AllocatorInstance.Data;
  if (local_148.Pointer != (FSoftObjectPath *)0x0) {
    pFVar26 = (FUtf8String *)((longlong)local_148.Pointer + 0x10);
    piVar2 = &(((FUtf8String *)((longlong)local_148.Pointer + 0x10))->Data).ArrayMax;
    (local_148.Pointer)->PackageName = local_2b0.AssetPath.PackageName;
    (local_148.Pointer)->AssetName = local_2b0.AssetPath.AssetName;
    (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    sVar14 = (size_t)local_2b0.SubPathString.Data.ArrayNum;
    (((FUtf8String *)((longlong)local_148.Pointer + 0x10))->Data).ArrayNum =
         local_2b0.SubPathString.Data.ArrayNum;
    pFVar27 = pvVar7;
    if (local_2b0.SubPathString.Data.ArrayNum == 0) {
      *piVar2 = 0;
      (((FSoftObjectPath *)((longlong)local_148.Pointer + 0x20))->AssetPath).PackageName.
      ComparisonIndex.Value = 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_2b0.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar26,
                 local_2b0.SubPathString.Data.ArrayNum,piVar2);
      memcpy((pFVar26->Data).AllocatorInstance.Data,FVar19.Data,sVar14);
      (((FSoftObjectPath *)((longlong)pvVar7 + 0x20))->AssetPath).PackageName.ComparisonIndex.Value
           = 0xffffffff;
    }
  }
  iVar29 = local_148.Index;
  uVar9 = ::GetTypeHash(pFVar27);
  if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
    FVar19.Data = (FScriptContainerElement *)local_50;
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      FVar19.Data = local_48.Data;
    }
    for (iVar10 = *(int *)((longlong)FVar19.Data + (ulonglong)(local_40 - 1 & uVar9) * 4);
        iVar10 != -1; iVar10 = *(int *)(local_88._0_8_ + (longlong)iVar10 * 0x28 + 0x20)) {
      bVar8 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(local_88._0_8_ + (longlong)iVar10 * 0x28),pFVar27);
      if (bVar8) {
        if (iVar10 != -1) {
          pFVar25 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar10 * 0x28);
          if (*(void **)(local_88._0_8_ + (longlong)iVar10 * 0x28 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(local_88._0_8_ + (longlong)iVar10 * 0x28 + 0x10));
          }
          memmove(pFVar25,pFVar27,0x20);
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_88,iVar29,1);
          iVar29 = iVar10;
        }
        if (iVar10 != -1) goto LAB_1475e4d40;
        break;
      }
    }
  }
  uVar24 = 1;
  uVar20 = local_88._8_4_ - local_54;
  if (3 < uVar20) {
    uVar22 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1f8 = (TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
                 *)CONCAT44(local_1f8._4_4_,(int)lVar17);
    uVar24 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar20 < 1) || ((int)uVar24 <= (int)local_40)) {
    uVar9 = local_40 - 1 & uVar9;
    pFVar27[1].AssetPath.PackageName.Number = uVar9;
    FVar19.Data = (FScriptContainerElement *)local_50;
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      FVar19.Data = local_48.Data;
    }
    uVar22 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar9;
    pFVar27[1].AssetPath.PackageName.ComparisonIndex.Value =
         *(uint *)((longlong)FVar19.Data + uVar22 * 4);
    goto LAB_1475e4d34;
  }
  local_40 = uVar24;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar24 == 0) goto LAB_1475e4bfd;
  uVar9 = uVar24;
  if (uVar24 < 2) {
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      uVar9 = 0;
      goto LAB_1475e4bb1;
    }
  }
  else {
LAB_1475e4bb1:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar9,4);
  }
  if (0 < (int)uVar24) {
    uVar22 = 0;
    uVar28 = (ulonglong)uVar24;
    do {
      FVar19.Data = (FScriptContainerElement *)local_50;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FVar19.Data = local_48.Data;
      }
      uVar16 = (longlong)(int)uVar24 - 1U & uVar22;
      uVar22 = uVar22 + 1;
      *(undefined4 *)((longlong)FVar19.Data + uVar16 * 4) = 0xffffffff;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
LAB_1475e4bfd:
  if (local_40 != 0) {
    local_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_1e8._padding_._0_4_ = 0;
    local_1e8._padding_._4_4_ = 1;
    local_1e8.UnvisitedBitMask = 0xffffffff;
    local_1e8.CurrentBitIndex = 0;
    local_1e8.BaseBitIndex = 0;
    if (local_60 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
    }
    local_248 = (TMap<FSoftObjectPath,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FSoftObjectPath,0>_>
                 *)local_88;
    TStack_240._padding_ = CONCAT44(local_1e8._padding_._4_4_,(undefined4)local_1e8._padding_);
    TStack_240.Array = local_1e8.Array;
    TStack_240.CurrentBitIndex = local_1e8.CurrentBitIndex;
    TStack_240.UnvisitedBitMask = local_1e8.UnvisitedBitMask;
    TStack_240._28_4_ = local_1e8._28_4_;
    TStack_240.BaseBitIndex = local_1e8.BaseBitIndex;
    iVar29 = local_1e8.CurrentBitIndex;
    if (local_1e8.CurrentBitIndex < (local_1e8.Array)->NumBits) {
      do {
        pFVar27 = (FSoftObjectPath *)(*(longlong *)&local_248->field_0x0 + (longlong)iVar29 * 0x28);
        uVar9 = ::GetTypeHash(pFVar27);
        uVar9 = local_40 - 1 & uVar9;
        pFVar27[1].AssetPath.PackageName.Number = uVar9;
        FVar19.Data = (FScriptContainerElement *)local_50;
        if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
          FVar19.Data = local_48.Data;
        }
        uVar22 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar9;
        pFVar27[1].AssetPath.PackageName.ComparisonIndex.Value =
             *(uint *)((longlong)FVar19.Data + uVar22 * 4);
        *(int *)((longlong)FVar19.Data + uVar22 * 4) = iVar29;
        TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
        iVar29 = TStack_240.CurrentBitIndex;
      } while (TStack_240.CurrentBitIndex < (TStack_240.Array)->NumBits);
    }
  }
LAB_1475e4d40:
  do {
    FVar5 = local_2b0.AssetPath.AssetName;
    uVar9 = ::GetTypeHash(local_2b0.AssetPath.AssetName.ComparisonIndex.Value);
    FVar3 = local_2b0.AssetPath.PackageName;
    uVar20 = ::GetTypeHash(local_2b0.AssetPath.PackageName.ComparisonIndex.Value);
    uVar20 = uVar20 + FVar3.Number;
    uVar20 = uVar20 * 0x40 + -0x61c88647 + uVar9 + FVar5.Number + (uVar20 >> 2) ^ uVar20;
    if (1 < local_2b0.SubPathString.Data.ArrayNum) {
      iVar29 = local_2b0.SubPathString.Data.ArrayNum - 1;
      if (local_2b0.SubPathString.Data.ArrayNum == 0) {
        iVar29 = 0;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<char8_t>
                        (iVar29,(uchar *)local_2b0.SubPathString.Data.AllocatorInstance.Data);
      uVar20 = uVar20 ^ uVar9 + 0x9e3779b9 + uVar20 * 0x40 + (uVar20 >> 2);
    }
    pFVar27 = (FSoftObjectPath *)0x0;
    if (*(int *)(&this_00->field_0x0 + 8) == *(int *)(&this_00->field_0x0 + 0x34)) break;
    puVar23 = &this_00->field_0x38;
    if (*(undefined1 **)(&this_00->field_0x38 + 8) != (undefined1 *)0x0) {
      puVar23 = *(undefined1 **)(&this_00->field_0x38 + 8);
    }
    iVar29 = *(int *)(puVar23 + (ulonglong)(*(int *)&this_00->field_0x48 - 1U & uVar20) * 4);
    while( true ) {
      if (iVar29 == -1) goto LAB_1475e52bc;
      lVar17 = (longlong)iVar29 * 0x48;
      bVar8 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this_00->field_0x0 + lVar17),&local_2b0);
      if (bVar8) break;
      iVar29 = *(int *)(lVar17 + 0x40 + *(longlong *)&this_00->field_0x0);
    }
    lVar17 = *(longlong *)&this_00->field_0x0 + lVar17;
    pFVar18 = (FSoftObjectPath *)(lVar17 + 0x20);
    if (lVar17 == 0) {
      pFVar18 = pFVar27;
    }
    if (pFVar18 == (FSoftObjectPath *)0x0) break;
    local_2b0.AssetPath.PackageName = (pFVar18->AssetPath).PackageName;
    local_2b0.AssetPath.AssetName = (pFVar18->AssetPath).AssetName;
    if (&local_2b0.SubPathString != &pFVar18->SubPathString) {
      uVar9 = (pFVar18->SubPathString).Data.ArrayNum;
      pFVar25 = (pFVar18->SubPathString).Data.AllocatorInstance.Data;
      local_2b0.SubPathString.Data.ArrayNum = uVar9;
      if ((uVar9 == 0) && (local_2b0.SubPathString.Data.ArrayMax == 0)) {
        local_2b0.SubPathString.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar9,local_2b0.SubPathString.Data.ArrayMax,
                   (ForAnyElementType *)&local_2b0.SubPathString,uVar9,
                   &local_2b0.SubPathString.Data.ArrayMax);
        if (uVar9 != 0) {
          memcpy(local_2b0.SubPathString.Data.AllocatorInstance.Data,pFVar25,(longlong)(int)uVar9);
        }
      }
    }
    FVar5 = local_2b0.AssetPath.AssetName;
    uVar9 = ::GetTypeHash(local_2b0.AssetPath.AssetName.ComparisonIndex.Value);
    FVar3 = local_2b0.AssetPath.PackageName;
    uVar20 = ::GetTypeHash(local_2b0.AssetPath.PackageName.ComparisonIndex.Value);
    uVar20 = uVar20 + FVar3.Number;
    uVar20 = uVar20 * 0x40 + -0x61c88647 + uVar9 + FVar5.Number + (uVar20 >> 2) ^ uVar20;
    if (1 < local_2b0.SubPathString.Data.ArrayNum) {
      iVar29 = local_2b0.SubPathString.Data.ArrayNum - 1;
      if (local_2b0.SubPathString.Data.ArrayNum == 0) {
        iVar29 = 0;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<char8_t>
                        (iVar29,(uchar *)local_2b0.SubPathString.Data.AllocatorInstance.Data);
      uVar20 = uVar20 ^ uVar9 + uVar20 * 0x40 + -0x61c88647 + (uVar20 >> 2);
    }
    if (local_88._8_4_ != local_54) {
      FVar19.Data = (FScriptContainerElement *)local_50;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FVar19.Data = local_48.Data;
      }
      for (iVar29 = *(int *)((longlong)FVar19.Data + (ulonglong)(local_40 - 1 & uVar20) * 4);
          iVar29 != -1; iVar29 = *(int *)(local_88._0_8_ + (longlong)iVar29 * 0x28 + 0x20)) {
        bVar8 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(local_88._0_8_ + (longlong)iVar29 * 0x28),&local_2b0)
        ;
        if (bVar8) {
          if (1 < (byte)LogAssetManager._0_1_) {
            FSoftObjectPath::ToString(&local_2b0,&local_e8);
            FSoftObjectPath::ToString(&local_218,&local_f8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_1475e52bc;
        }
      }
    }
    if (local_54 == 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                          (int *)(local_88 + 0xc));
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),false);
      iVar29 = local_58;
    }
    else {
      local_54 = local_54 + -1;
      iVar29 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x28 + 4);
      iVar10 = local_58;
      if (local_54 != 0) {
        *(undefined4 *)(local_88._0_8_ + (longlong)iVar29 * 0x28) = 0xffffffff;
      }
    }
    local_58 = iVar29;
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,&local_138,iVar10);
    pvVar7 = local_138.Pointer;
    FVar19.Data = local_2b0.SubPathString.Data.AllocatorInstance.Data;
    if (local_138.Pointer != (FSoftObjectPath *)0x0) {
      pFVar26 = (FUtf8String *)((longlong)local_138.Pointer + 0x10);
      piVar2 = &(((FUtf8String *)((longlong)local_138.Pointer + 0x10))->Data).ArrayMax;
      (local_138.Pointer)->PackageName = local_2b0.AssetPath.PackageName;
      (local_138.Pointer)->AssetName = local_2b0.AssetPath.AssetName;
      (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      sVar14 = (size_t)local_2b0.SubPathString.Data.ArrayNum;
      (((FUtf8String *)((longlong)local_138.Pointer + 0x10))->Data).ArrayNum =
           local_2b0.SubPathString.Data.ArrayNum;
      pFVar27 = pvVar7;
      if (local_2b0.SubPathString.Data.ArrayNum == 0) {
        *piVar2 = 0;
        (((FSoftObjectPath *)((longlong)local_138.Pointer + 0x20))->AssetPath).PackageName.
        ComparisonIndex.Value = 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_2b0.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar26,
                   local_2b0.SubPathString.Data.ArrayNum,piVar2);
        memcpy((pFVar26->Data).AllocatorInstance.Data,FVar19.Data,sVar14);
        (((FSoftObjectPath *)((longlong)pvVar7 + 0x20))->AssetPath).PackageName.ComparisonIndex.
        Value = 0xffffffff;
      }
    }
    iVar29 = local_138.Index;
    uVar9 = ::GetTypeHash(pFVar27);
    if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
      FVar19.Data = (FScriptContainerElement *)local_50;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FVar19.Data = local_48.Data;
      }
      for (iVar10 = *(int *)((longlong)FVar19.Data + (ulonglong)(local_40 - 1 & uVar9) * 4);
          iVar10 != -1; iVar10 = *(int *)(local_88._0_8_ + (longlong)iVar10 * 0x28 + 0x20)) {
        bVar8 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(local_88._0_8_ + (longlong)iVar10 * 0x28),pFVar27);
        if (bVar8) {
          if (iVar10 != -1) {
            pFVar25 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar10 * 0x28);
            if (*(void **)(local_88._0_8_ + (longlong)iVar10 * 0x28 + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)(local_88._0_8_ + (longlong)iVar10 * 0x28 + 0x10));
            }
            memmove(pFVar25,pFVar27,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_88,iVar29,1);
            iVar29 = iVar10;
          }
          if (iVar10 != -1) goto LAB_1475e4d40;
          break;
        }
      }
    }
    uVar20 = local_88._8_4_ - local_54;
    if (uVar20 < 4) {
      uVar24 = 1;
    }
    else {
      uVar22 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_1f0 = (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   *)CONCAT44(local_1f0._4_4_,(int)lVar17);
      uVar24 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar20 < 1) || ((int)uVar24 <= (int)local_40)) {
      uVar9 = local_40 - 1 & uVar9;
      pFVar27[1].AssetPath.PackageName.Number = uVar9;
      FVar19.Data = (FScriptContainerElement *)local_50;
      if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
        FVar19.Data = local_48.Data;
      }
      uVar22 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar9;
      pFVar27[1].AssetPath.PackageName.ComparisonIndex.Value =
           *(uint *)((longlong)FVar19.Data + uVar22 * 4);
LAB_1475e4d34:
      *(int *)((longlong)FVar19.Data + uVar22 * 4) = iVar29;
    }
    else {
      local_40 = uVar24;
      TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
                 local_88);
    }
  } while( true );
LAB_1475e52bc:
  FVar5 = local_218.AssetPath.AssetName;
  uVar9 = ::GetTypeHash(local_218.AssetPath.AssetName.ComparisonIndex.Value);
  FVar3 = local_218.AssetPath.PackageName;
  uVar20 = ::GetTypeHash(local_218.AssetPath.PackageName.ComparisonIndex.Value);
  uVar20 = uVar20 + FVar3.Number;
  uVar20 = uVar20 * 0x40 + -0x61c88647 + uVar9 + FVar5.Number + (uVar20 >> 2) ^ uVar20;
  if (1 < local_218.SubPathString.Data.ArrayNum) {
    iVar29 = local_218.SubPathString.Data.ArrayNum + -1;
    if (local_218.SubPathString.Data.ArrayNum == 0) {
      iVar29 = 0;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<char8_t>
                      (iVar29,(uchar *)local_218.SubPathString.Data.AllocatorInstance.Data);
    uVar20 = uVar20 ^ uVar9 + uVar20 * 0x40 + -0x61c88647 + (uVar20 >> 2);
  }
  if (*(int *)(&this_00->field_0x0 + 8) != *(int *)(&this_00->field_0x0 + 0x34)) {
    puVar23 = &this_00->field_0x38;
    if (*(undefined1 **)(&this_00->field_0x38 + 8) != (undefined1 *)0x0) {
      puVar23 = *(undefined1 **)(&this_00->field_0x38 + 8);
    }
    iVar29 = *(int *)(puVar23 + (ulonglong)(*(int *)&this_00->field_0x48 - 1U & uVar20) * 4);
    while (iVar29 != -1) {
      lVar17 = (longlong)iVar29 * 0x48;
      bVar8 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this_00->field_0x0 + lVar17),&local_218);
      if (bVar8) {
        pFVar27 = (FSoftObjectPath *)(*(longlong *)&this_00->field_0x0 + lVar17);
        if (pFVar27 != (FSoftObjectPath *)0x0) goto LAB_1475e53a8;
        break;
      }
      iVar29 = *(int *)(lVar17 + 0x40 + *(longlong *)&this_00->field_0x0);
    }
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1475e53a8:
  iVar29 = local_2b0.SubPathString.Data.ArrayNum;
  FVar19.Data = local_2b0.SubPathString.Data.AllocatorInstance.Data;
  pFVar27[1].AssetPath.PackageName = local_2b0.AssetPath.PackageName;
  pFVar27[1].AssetPath.AssetName = local_2b0.AssetPath.AssetName;
  pFVar26 = &pFVar27[1].SubPathString;
  if (pFVar26 != &local_2b0.SubPathString) {
    sVar14 = (size_t)local_2b0.SubPathString.Data.ArrayNum;
    piVar2 = &pFVar27[1].SubPathString.Data.ArrayMax;
    iVar10 = *piVar2;
    pFVar27[1].SubPathString.Data.ArrayNum = local_2b0.SubPathString.Data.ArrayNum;
    if ((local_2b0.SubPathString.Data.ArrayNum == 0) && (iVar10 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_2b0.SubPathString.Data.ArrayNum,iVar10,(ForAnyElementType *)pFVar26,
                 local_2b0.SubPathString.Data.ArrayNum,piVar2);
      if (iVar29 != 0) {
        memcpy((pFVar26->Data).AllocatorInstance.Data,FVar19.Data,sVar14);
      }
    }
  }
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_2b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_218.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.SubPathString.Data.AllocatorInstance.Data);
  }
  TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  goto LAB_1475e47b0;
}

// NormalizePackagePath @ 1475e64d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl UAssetManager::NormalizePackagePath(FString *param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  ::FString::ReplaceInline(param_1,L"//",L"/",CaseSensitive);
  bVar1 = ::FString::EndsWith(param_1,L"/",1,CaseSensitive);
  if (param_2) {
    if (!bVar1) {
      ::FString::AppendChars(param_1,L"/",1);
      return;
    }
  }
  else if (bVar1) {
    iVar3 = (param_1->Data).ArrayNum;
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    if (iVar2 + -1 < iVar2) {
      iVar2 = iVar2 + -1;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    ::FString::RemoveAt(param_1,iVar3,1,Default);
  }
  return;
}

// NotifyOnAssetStateChangeCompleted @ 1475e66d0

void __thiscall
UAssetManager::NotifyOnAssetStateChangeCompleted(UAssetManager *this,FPrimaryAssetId *param_1)

{
  return;
}

// OnAssetRegistryAvailableAfterInitialization @ 1475e6880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::OnAssetRegistryAvailableAfterInitialization
          (UAssetManager *this,FName param_1,FAssetRegistryState *param_2)

{
  TMap<FPrimaryAssetId,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FGuid,0>_>
  *this_00;
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  FPrimaryAssetTypeData *pFVar4;
  uint *puVar5;
  FAssetDataTagMap *pFVar6;
  undefined1 *puVar7;
  FKeyForward FVar8;
  undefined8 uVar9;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  undefined1 uVar15;
  FName *pFVar16;
  FModuleManager *this_01;
  IModuleInterface *pIVar17;
  IAssetRegistry *pIVar18;
  FString *pFVar19;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar20;
  FPackageLocalizationManager *this_02;
  UClass *this_03;
  UAssetManagerSettings *pUVar21;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar22;
  FValueId *pFVar23;
  ulonglong uVar24;
  longlong lVar25;
  FAssetTagValueRef_u_0 FVar26;
  ForAnyElementType FVar27;
  wchar_t *pwVar28;
  undefined1 *puVar29;
  longlong lVar30;
  int iVar31;
  FString *pFVar32;
  int iVar33;
  undefined1 *puVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  FAssetData *pFVar38;
  FName local_res10 [2];
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  char local_398;
  FKeyForward local_397 [3];
  uint local_394;
  undefined1 local_390;
  undefined1 local_38f [3];
  uint local_38c;
  int local_388;
  FString local_380;
  FPrimaryAssetId local_370;
  FString *local_360;
  undefined8 local_358;
  FAssetRegistryLoadOptions local_350;
  UAssetManager *local_348;
  FAssetData *local_340;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> local_338;
  uint local_328;
  FAssetTagValueRef_u_0 local_320;
  FAssetData *local_318;
  undefined8 local_310;
  FGuid local_308;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_2f8;
  FString local_2e8;
  int local_2d8;
  int local_2d4;
  TPairInitializer<FPrimaryAssetId_const_&,FGuid_const_&> local_2d0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_2c0;
  LARGE_INTEGER local_2b8;
  FName local_2b0;
  FString **local_2a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2a0;
  FString local_290;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_280;
  int iStack_278;
  uint uStack_274;
  undefined1 *local_270;
  undefined4 uStack_268;
  int iStack_264;
  int local_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  code *local_220;
  FString ***local_218;
  FPrimaryAssetId *local_210;
  FGuid *local_208;
  FName local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FArchiveState local_188;
  undefined8 local_f8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_f0;
  undefined8 local_e8;
  undefined4 local_bc;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  bVar13 = false;
  local_38c = 0;
  local_398 = '\0';
  local_res10[0] = param_1;
  local_348 = this;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_2d0.Value);
  pIVar18 = this->CachedAssetRegistry;
  if (pIVar18 == (IAssetRegistry *)0x0) {
    pFVar16 = ::FName::FName(&local_200,L"AssetRegistry");
    FVar2 = *pFVar16;
    this_01 = FModuleManager::Get();
    pIVar17 = FModuleManager::LoadModuleChecked(this_01,FVar2);
    pIVar18 = (IAssetRegistry *)(**(code **)((longlong)*pIVar17 + 0x40))(pIVar17);
    this->CachedAssetRegistry = pIVar18;
  }
  local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.ArrayNum = 0;
  local_2f8.ArrayMax = 0;
  pFVar19 = ::FName::ToString(local_res10,&local_1e8);
  ::FString::ConcatCF(&local_290,L"AssetRegistry",pFVar19);
  pTVar20 = &FPaths::ProjectDir(&local_1f8)->Data;
  iVar33 = local_290.Data.ArrayNum + -1;
  if (local_290.Data.ArrayNum == 0) {
    iVar33 = 0;
  }
  if ((pTVar20->ArrayNum != 0) || (iVar31 = 2, iVar33 == -1)) {
    iVar31 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_2a0,pTVar20,iVar31 + iVar33);
  ::FString::PathAppend
            ((FString *)&local_2a0,(wchar_t *)local_290.Data.AllocatorInstance.Data,iVar33);
  ::FString::ConcatFC(&local_2e8,(FString *)&local_2a0,L".bin");
  if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  bVar12 = FPaths::FileExists(&local_2e8);
  if (bVar12) {
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_2e8.Data.ArrayNum != 0) {
      FVar27.Data = local_2e8.Data.AllocatorInstance.Data;
    }
    bVar12 = FFileHelper::LoadFileToArray(&local_2f8,(wchar_t *)FVar27.Data,0);
    if (bVar12) {
      bVar13 = true;
      local_398 = '\x01';
      local_188._padding_ = 0;
      local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_188._40_8_ = 0;
      local_188.ArSerializingDefaults = 0;
      local_188.ArPortFlags = 0;
      local_188.ArMaxSerializeSize = 0;
      local_188.ArUEVer.FileVersionUE4 = 0;
      local_188.ArUEVer.FileVersionUE5 = 0;
      local_188.ArLicenseeUEVer = 0;
      local_188.ArEngineVer.Major = 0;
      local_188.ArEngineVer.Minor = 0;
      local_188.ArEngineVer.Patch = 0;
      local_188.ArEngineVer._6_2_ = 0;
      local_188.ArEngineVer.Changelist = 0;
      local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_188.SerializedProperty = (FProperty *)0x0;
      local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_188.bCustomVersionsAreReset = false;
      local_188._129_7_ = 0;
      local_188.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_188);
      local_f8 = 0;
      local_188._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_f0 = &local_2f8;
      local_e8 = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading(&local_188,true);
      (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
      local_350.bLoadDependencies = true;
      local_350.bLoadPackageData = true;
      local_350._2_2_ = 0;
      local_350.ParallelWorkers = 0;
      FAssetRegistryState::Load(param_2,(FArchive *)&local_188,&local_350,(Type *)0x0);
      FArchive::~FArchive((FArchive *)&local_188);
    }
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AllocatorInstance.Data);
  }
  cVar14 = '\0';
  if (bVar13) {
    (**(code **)((longlong)*pIVar18 + 0x3c0))(pIVar18,param_2,2);
    local_2a8 = &local_360;
    local_360 = (FString *)0x0;
    local_218 = &local_2a8;
    local_358 = 0;
    local_220 = UE::Core::Private::Function::
                TFunctionRefCaller<`UAssetManager::OnAssetRegistryAvailableAfterInitialization'::__l11::<lambda_1>,void,FName>
                ::Call;
    FAssetRegistryState::EnumerateAllPaths(param_2,(TFunctionRef<void___cdecl(FName)> *)&local_220);
    uVar9 = local_358;
    iVar33 = (int)local_358;
    pFVar32 = local_360 + (int)local_358;
    pFVar19 = local_360;
    while( true ) {
      if ((int)local_358 != iVar33) {
        local_390 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_390);
      }
      if (pFVar19 == pFVar32) break;
      this_02 = FPackageLocalizationManager::Get();
      FPackageLocalizationManager::InvalidateRootSourcePath(this_02,pFVar19);
      pFVar19 = pFVar19 + 1;
    }
    DestructItems<FString,int>(local_360,(int)local_358);
    if (local_360 != (FString *)0x0) {
      FMemory::Free(local_360);
    }
    local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar37 = (int)(int3)((ulonglong)uVar9 >> 8) << 8;
    local_b8.Elements._16_8_ = 0;
    local_b8.Elements._24_8_ = 0;
    local_338.ArrayNum = 0;
    local_338.ArrayMax = 0;
    local_b8.Hash.InlineData[0] = '\0';
    local_b8.Hash.InlineData[1] = '\0';
    local_b8.Hash.InlineData[2] = '\0';
    local_b8.Hash.InlineData[3] = '\0';
    local_b8.Hash._padding_ = 0;
    local_b8._72_8_ = 0;
    local_b8.Elements._0_8_ = 0;
    local_b8.Elements._8_8_ = 0;
    local_b8.Elements._32_8_ = 0;
    local_b8.Elements._40_4_ = 0;
    local_b8.Elements._44_4_ = 0x80;
    local_b8.Elements._48_4_ = 0xffffffff;
    local_b8.Elements._52_4_ = 0;
    local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_394 = uVar37;
    bVar13 = FAssetRegistryState::GetAllAssets(param_2,&local_b8,&local_338,false);
    local_b8._72_8_ = local_b8._72_8_ & 0xffffffff00000000;
    if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_b8.Elements);
    if (bVar13) {
      pUVar21 = this->CachedSettings;
      if (pUVar21 == (UAssetManagerSettings *)0x0) {
        this_03 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
        if ((this_03->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_03);
        }
        pUVar21 = (UAssetManagerSettings *)(this_03->ClassDefaultObject).field0_0x0.DebugPtr;
        this->CachedSettings = pUVar21;
      }
      FVar8 = local_397[0];
      uVar24 = (ulonglong)local_338.ArrayNum;
      local_388 = (pUVar21->DirectoriesToExclude).ArrayNum;
      local_318 = (FAssetData *)(local_338.AllocatorInstance.Data + uVar24 * 0x68);
      local_328 = local_338.ArrayNum;
      pFVar38 = local_318;
      FVar27.Data = local_338.AllocatorInstance.Data;
      uVar36 = 0;
LAB_1475e6d08:
      while( true ) {
        local_340 = (FAssetData *)FVar27.Data;
        if (local_338.ArrayNum != (int)uVar24) {
          local_38f[0] = 0;
          `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_38f);
        }
        if ((FAssetData *)FVar27.Data == pFVar38) break;
        if (local_388 < 1) {
LAB_1475e6d65:
          bVar13 = true;
        }
        else {
          uVar36 = uVar36 | 1;
          pcVar3 = *(code **)(this->_padding_ + 0x590);
          local_38c = uVar36;
          pFVar19 = ::FName::ToString((FName *)FVar27.Data,&local_1d8);
          cVar14 = (*pcVar3)(this,pFVar19);
          if (cVar14 == '\0') goto LAB_1475e6d65;
          bVar13 = false;
        }
        if (((uVar36 & 1) != 0) &&
           (uVar36 = uVar36 & 0xfffffffe, local_38c = uVar36,
           local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (bVar13) {
          FAssetData::GetPrimaryAssetId((FAssetData *)FVar27.Data,&local_370);
          local_310 = 0;
          if ((((local_370.PrimaryAssetType.Name != (FName)0x0) &&
               (local_370.PrimaryAssetName != (FName)0x0)) &&
              (bVar13 = FAssetData::IsTopLevelAsset((FAssetData *)FVar27.Data), bVar13)) &&
             (pTVar22 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                        ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                                *)&this->AssetTypeMap,local_370.PrimaryAssetType.Name),
             pTVar22 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0)) {
            pFVar4 = pTVar22->Object;
            cVar14 = (**(code **)(this->_padding_ + 0x4c8))(this,pFVar4);
            if (cVar14 != '\0') {
              puVar7 = &(pFVar4->RealAssetScanPaths).Elements.field_0x10;
              iVar33 = *(int *)&(pFVar4->RealAssetScanPaths).Elements.field_0x28;
              local_2c0 = &pFVar4->RealAssetScanPaths;
              iStack_278 = 0;
              uStack_274 = 1;
              local_260 = 0;
              iStack_264 = 0;
              if (iVar33 != 0) {
                puVar5 = *(uint **)&(pFVar4->RealAssetScanPaths).Elements.field_0x20;
                puVar35 = (uint *)puVar7;
                if (puVar5 != (uint *)0x0) {
                  puVar35 = puVar5;
                }
                uVar37 = *puVar35;
                local_260 = 0;
                while (uVar37 == 0) {
                  lVar25 = (longlong)iStack_278;
                  local_260 = local_260 + 0x20;
                  iStack_278 = iStack_278 + 1;
                  iStack_264 = iVar33;
                  if ((int)(iVar33 + -1 + (iVar33 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_278)
                  goto LAB_1475e6e92;
                  uVar37 = puVar35[lVar25 + 1];
                }
                uStack_274 = ~(uVar37 - 1) & uVar37;
                uVar24 = (ulonglong)uStack_274 * 2 + 1;
                lVar25 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                  }
                }
                local_2d8 = (int)lVar25;
                iStack_264 = local_260 + -1 + local_2d8;
                if (iVar33 < iStack_264) {
                  iStack_264 = iVar33;
                }
              }
LAB_1475e6e92:
              uStack_25c = local_bc;
              iStack_258 = *(int *)&(pFVar4->RealAssetScanPaths).Elements.field_0x8 -
                           *(int *)&(pFVar4->RealAssetScanPaths).Elements.field_0x34;
              uVar37 = *(uint *)&(pFVar4->RealAssetScanPaths).Elements.field_0x28;
              TStack_248._padding_ = CONCAT44(uStack_274,iStack_278);
              uVar36 = uVar37 & 0xffffffe0;
              uStack_268 = 0xffffffff;
              TStack_248.CurrentBitIndex = iStack_264;
              TStack_248.UnvisitedBitMask = 0xffffffff;
              iVar31 = (int)uVar37 >> 5;
              TStack_248._28_4_ = local_bc;
              TStack_248.BaseBitIndex = local_260;
              uStack_228 = CONCAT44(uStack_254,iStack_258);
              local_280 = local_2c0;
              local_270 = puVar7;
              local_250 = local_2c0;
              TStack_248.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
              if ((((int)uVar37 < 0) || (iVar33 < (int)uVar37)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar13)) {
                pcVar3 = (code *)swi(3);
                uVar15 = (*pcVar3)();
                return (bool)uVar15;
              }
              pTVar10 = local_2c0;
              uVar1 = *(uint *)&(pFVar4->RealAssetScanPaths).Elements.field_0x28;
              if (uVar37 != uVar1) {
                puVar29 = *(undefined1 **)&(pFVar4->RealAssetScanPaths).Elements.field_0x20;
                puVar34 = puVar7;
                if (puVar29 != (undefined1 *)0x0) {
                  puVar34 = puVar29;
                }
                uVar37 = -1 << ((byte)uVar37 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar31 * 4);
                while (uVar37 == 0) {
                  lVar25 = (longlong)iVar31;
                  uVar36 = uVar36 + 0x20;
                  iVar31 = iVar31 + 1;
                  uVar37 = uVar1;
                  if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
                  goto LAB_1475e6fc0;
                  uVar37 = *(uint *)(puVar34 + lVar25 * 4 + 4);
                }
                uVar24 = (ulonglong)(~(uVar37 - 1) & uVar37) * 2 + 1;
                lVar25 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                  }
                }
                local_2d4 = (int)lVar25;
                uVar37 = local_2d4 + -1 + uVar36;
                if ((int)uVar1 < (int)uVar37) {
                  uVar37 = uVar1;
                }
              }
LAB_1475e6fc0:
              do {
                pTVar11 = local_250;
                if (*(int *)&(local_250->Elements).field_0x8 -
                    *(int *)&(local_250->Elements).field_0x34 != (int)uStack_228) {
                  local_397[0] = (FKeyForward)0x0;
                  `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_397);
                }
                lVar25 = (longlong)TStack_248.CurrentBitIndex;
                if (((TStack_248.CurrentBitIndex == uVar37) &&
                    (TStack_248.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) &&
                   (this = local_348, pFVar38 = local_318,
                   FVar27.Data = (FScriptContainerElement *)local_340, uVar36 = local_38c,
                   pTVar11 == pTVar10)) break;
                lVar30 = *(longlong *)&pTVar11->Elements;
                pFVar19 = ::FName::ToString(&local_340->PackageName,&local_1c8);
                iVar31 = *(int *)(lVar30 + 8 + lVar25 * 0x18);
                iVar33 = iVar31 + -1;
                if (iVar31 == 0) {
                  iVar33 = 0;
                  pwVar28 = L"";
                }
                else {
                  pwVar28 = *(wchar_t **)(lVar30 + lVar25 * 0x18);
                }
                bVar13 = ::FString::StartsWith(pFVar19,pwVar28,iVar33,IgnoreCase);
                if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                }
                if (bVar13) goto LAB_1475e707f;
                TStack_248.UnvisitedBitMask =
                     TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
              } while( true );
            }
          }
        }
        FVar27.Data = FVar27.Data + 0x68;
        uVar24 = (ulonglong)local_328;
        uVar37 = local_394;
      }
      if ((char)uVar37 != '\0') {
        (**(code **)(this->_padding_ + 0x550))(this);
      }
    }
    DestructItems<FAssetData,int>((FAssetData *)local_338.AllocatorInstance.Data,local_338.ArrayNum)
    ;
    cVar14 = local_398;
    if ((FAssetData *)local_338.AllocatorInstance.Data != (FAssetData *)0x0) {
      FMemory::Free(local_338.AllocatorInstance.Data);
      cVar14 = local_398;
    }
  }
  QueryPerformanceCounter(&local_2b8);
  if ((4 < (byte)LogAssetManager._0_1_) && (cVar14 != '\0')) {
    ::FName::ToString(local_res10,&local_198);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  return (bool)cVar14;
LAB_1475e707f:
  FVar26.Loose = (FString *)0x0;
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Data.ArrayNum = 0;
  local_380.Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_EncryptionKey,L"EncryptionKey");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar38 = local_340;
  if ((*(byte *)&(local_340->TagsAndValues).field0_0x0 & 1) == 0) {
    pFVar6 = (local_340->TagsAndValues).field0_0x0.Loose;
    if (pFVar6 == (FAssetDataTagMap *)0x0) {
      local_320.Loose = (FString *)0x0;
      this = local_348;
      goto LAB_1475e7349;
    }
    local_2b0 = NAME_EncryptionKey;
    uVar37 = Algo::
             BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                       ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)pFVar6,
                        &local_2b0,FVar8,(FNameFastLess)FVar8);
    if (uVar37 != 0xffffffff) {
      iVar33 = (int)pFVar6->_padding_;
      uVar36 = 0;
      if ((int)uVar37 < iVar33) {
        uVar36 = ~uVar37 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (local_3a8 = (longlong)(int)uVar37, local_3a0 = (longlong)iVar33,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar15 = (*pcVar3)();
        return (bool)uVar15;
      }
      FVar26.Loose = (FString *)
                     (((ForAnyElementType *)&pFVar6->_padding_)->Data +
                     ((longlong)(int)uVar37 * 3 + 1) * 8);
    }
  }
  else {
    pFVar23 = FixedTagPrivate::FMapHandle::FindValue
                        ((FMapHandle *)&local_340->TagsAndValues,NAME_EncryptionKey);
    if (pFVar23 != (FValueId *)0x0) {
      FVar26.Bits = ((ulonglong)*(ushort *)&(pFVar38->TagsAndValues).field0_0x0 & 0xfffffffffffffffc
                    | 0xfffffffe00000000) << 0x1e | (ulonglong)(uint)*pFVar23;
    }
  }
  this = local_348;
  local_320 = FVar26;
  if ((FScriptContainerElement *)FVar26.Loose != (FScriptContainerElement *)0x0) {
    pFVar19 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_320.Fixed,&local_1b8);
    if (&local_380 != pFVar19) {
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
      local_380.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
      (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.Data.ArrayNum = (pFVar19->Data).ArrayNum;
      local_380.Data.ArrayMax = (pFVar19->Data).ArrayMax;
      (pFVar19->Data).ArrayNum = 0;
      (pFVar19->Data).ArrayMax = 0;
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    local_308.A = 0;
    local_308.B = 0;
    local_308.C = 0;
    local_308.D = 0;
    FGuid::Parse(&local_380,&local_308);
    this = local_348;
    this_00 = &local_348->PrimaryAssetEncryptionKeyCache;
    uVar37 = ::GetTypeHash(&local_370);
    if (*(int *)&(this->PrimaryAssetEncryptionKeyCache).field_0x8 !=
        *(int *)&(this->PrimaryAssetEncryptionKeyCache).field_0x34) {
      puVar7 = *(undefined1 **)&(this->PrimaryAssetEncryptionKeyCache).field_0x40;
      puVar29 = &(this->PrimaryAssetEncryptionKeyCache).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar29 = puVar7;
      }
      iVar33 = *(int *)(puVar29 +
                       (ulonglong)
                       (*(int *)&(this->PrimaryAssetEncryptionKeyCache).field_0x48 - 1U & uVar37) *
                       4);
      if (iVar33 != -1) {
        lVar25 = *(longlong *)&this_00->field_0x0;
        do {
          lVar30 = (longlong)iVar33;
          if ((*(FName *)(lVar25 + lVar30 * 0x28) == local_370.PrimaryAssetType.Name) &&
             (*(FName *)(lVar25 + 8 + lVar30 * 0x28) == local_370.PrimaryAssetName)) {
            if ((iVar33 != -1) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!PrimaryAssetEncryptionKeyCache.Contains(PrimaryAssetId)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                                    ,0xc22,L""), bVar13)) {
              pcVar3 = (code *)swi(3);
              uVar15 = (*pcVar3)();
              return (bool)uVar15;
            }
            break;
          }
          iVar33 = *(int *)(lVar25 + 0x20 + lVar30 * 0x28);
        } while (iVar33 != -1);
      }
    }
    local_210 = &local_370;
    local_208 = &local_308;
    TSet<TTuple<FPrimaryAssetId,FGuid>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FGuid,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPrimaryAssetId_const_&,FGuid_const_&>_>
              ((TSet<TTuple<FPrimaryAssetId,FGuid>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FGuid,0>,FDefaultSetAllocator>
                *)this_00,&local_2d0,(bool *)&local_210);
    if (5 < (byte)LogAssetManager._0_1_) {
      ::FName::ToString(&local_370.PrimaryAssetName,&local_1a8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1475e7349:
  cVar14 = (**(code **)(this->_padding_ + 0x548))(this,&local_370,pFVar38,0);
  uVar37 = local_394 & 0xff;
  if (cVar14 != '\0') {
    uVar37 = 1;
  }
  local_394 = uVar37;
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  FVar27.Data = (FScriptContainerElement *)(pFVar38 + 1);
  uVar24 = (ulonglong)local_328;
  pFVar38 = local_318;
  uVar36 = local_38c;
  goto LAB_1475e6d08;
}

// OnAssetStateChangeCompleted @ 1475e74f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAssetManager::OnAssetStateChangeCompleted
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *param_1,FPrimaryAssetId *param_2)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  FStreamableHandle **ppFVar2;
  code *pcVar3;
  bool bVar4;
  FPrimaryAssetData *pFVar5;
  FStreamableHandle *pFVar6;
  TSharedPtr<FStreamableHandle,1> *pTVar7;
  FStreamableManagerAdditionalContext *pFVar8;
  FText *pFVar9;
  uchar *puVar10;
  FSharedReferencer<1> FVar11;
  TSharedPtr<FStreamableHandle,1> *pTVar12;
  FPrimaryAssetId *local_res8;
  FStreamableHandle *local_b8;
  FSharedReferencer<1> local_b0;
  FString local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar5 = GetNameData(this,param_2,true);
  if (pFVar5 == (FPrimaryAssetData *)0x0) {
    if ((byte)LogAssetManager._0_1_ < 2) goto LAB_1475e7a63;
    FPrimaryAssetId::ToString(param_2,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    local_a8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
LAB_1475e7a59:
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    goto LAB_1475e7a63;
  }
  if ((param_1->Object != (FStreamableHandle *)0x0) ||
     (local_res8 = param_2,
     bVar4 = `UAssetManager::OnAssetStateChangeCompleted'::__l6::<lambda_1>::operator()(&local_res8)
     , bVar4)) {
    pTVar1 = (TSharedPtr<FStreamableHandle,1> *)(pFVar5->PendingState).Storage;
    pTVar7 = pTVar1;
    if (pTVar1 == (TSharedPtr<FStreamableHandle,1> *)0x0) {
      pTVar7 = &FPrimaryAssetLoadState::InvalidHandle;
    }
    if (pTVar7->Object != (FStreamableHandle *)0x0) {
      pTVar7 = pTVar1;
      pTVar12 = pTVar1;
      if (pTVar1 == (TSharedPtr<FStreamableHandle,1> *)0x0) {
        pTVar7 = &FPrimaryAssetLoadState::InvalidHandle;
        pTVar12 = (TSharedPtr<FStreamableHandle,1> *)0x0;
      }
      if (pTVar7->Object != param_1->Object) {
        pTVar7 = &FPrimaryAssetLoadState::InvalidHandle;
        if (pTVar12 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
          pTVar7 = pTVar1;
        }
        if ((pTVar7->Object == (FStreamableHandle *)0x0) || ((byte)LogAssetManager._0_1_ < 6))
        goto LAB_1475e7a63;
        FPrimaryAssetId::ToString(param_2,&local_a8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        goto LAB_1475e7a59;
      }
    }
    if ((param_1->Object == (FStreamableHandle *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->Object->Error).bIsSet == false) {
      pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(param_1);
      if (pFVar6->bCanceled == false) {
        FVar11.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
        pFVar6 = param_1->Object;
        if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar11.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8 = pFVar6;
        local_b0.ReferenceController = FVar11.ReferenceController;
        if ((pFVar5->CurrentState).Storage != (uchar *)0x0) {
          FPrimaryAssetLoadState::DestroyStoredItems(&pFVar5->CurrentState);
          FMemory::Free((pFVar5->CurrentState).Storage);
        }
        (pFVar5->CurrentState).Storage = (pFVar5->PendingState).Storage;
        (pFVar5->CurrentState).NumBundleNames = (pFVar5->PendingState).NumBundleNames;
        (pFVar5->CurrentState).bWithDownloadParams = (pFVar5->PendingState).bWithDownloadParams;
        (pFVar5->PendingState).Storage = (uchar *)0x0;
        (pFVar5->PendingState).NumBundleNames = 0;
        (pFVar5->PendingState).bWithDownloadParams = false;
        ppFVar2 = (FStreamableHandle **)(pFVar5->CurrentState).Storage;
        if ((ppFVar2 != (FStreamableHandle **)0x0) && (ppFVar2 != &local_b8)) {
          *ppFVar2 = pFVar6;
          local_b8 = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(ppFVar2 + 1),&local_b0);
          FVar11.ReferenceController = local_b0.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
        (**(code **)(this->_padding_ + 0x568))(this,param_2);
      }
      else if (5 < (byte)LogAssetManager._0_1_) {
        FPrimaryAssetId::ToString(param_2,&local_58);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(param_1);
      if (((pFVar6->Error).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = UE::UnifiedError::FError::
               GetErrorContext<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
                         (&(pFVar6->Error).TypedValue);
      if (pFVar8 == (FStreamableManagerAdditionalContext *)0x0) {
        if (2 < (byte)LogAssetManager._0_1_) {
          FPrimaryAssetId::ToString(param_2,&local_68);
          pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(param_1);
          if (((pFVar6->Error).bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = UE::UnifiedError::FError::GetErrorMessage
                             (&(pFVar6->Error).TypedValue,&local_78,true);
          FText::ToString(pFVar9);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (2 < (byte)LogAssetManager._0_1_) {
        FPrimaryAssetId::ToString(param_2,&local_88);
        pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(param_1);
        if (((pFVar6->Error).bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = UE::UnifiedError::FError::GetErrorMessage
                           (&(pFVar6->Error).TypedValue,&local_98,true);
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((pFVar5->PendingState).Storage != (uchar *)0x0) {
      FPrimaryAssetLoadState::DestroyStoredItems(&pFVar5->PendingState);
LAB_1475e79f9:
      puVar10 = (pFVar5->PendingState).Storage;
      goto LAB_1475e79fd;
    }
  }
  else {
    pTVar1 = (TSharedPtr<FStreamableHandle,1> *)(pFVar5->PendingState).Storage;
    pTVar7 = &FPrimaryAssetLoadState::InvalidHandle;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
      pTVar7 = pTVar1;
    }
    pFVar6 = pTVar7->Object;
    if (((pFVar6 != (FStreamableHandle *)0x0) && (pFVar6->bCanceled == false)) &&
       (pFVar6->bReleased == false)) {
      pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(pTVar7);
      FStreamableHandle::CancelHandle(pFVar6);
    }
    if ((pFVar5->PendingState).Storage != (uchar *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((pFVar5->PendingState).Storage + 8));
      if (((pFVar5->PendingState).Storage == (uchar *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Storage",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                             ,0x85,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar10 = (pFVar5->PendingState).Storage;
      if ((pFVar5->PendingState).bWithDownloadParams != false) {
        if ((puVar10 == (uchar *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Storage",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                               ,0x93,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_1475e79f9;
      }
LAB_1475e79fd:
      FMemory::Free(puVar10);
      (pFVar5->PendingState).Storage = (uchar *)0x0;
    }
  }
  (pFVar5->PendingState).NumBundleNames = 0;
  (pFVar5->PendingState).bWithDownloadParams = false;
LAB_1475e7a63:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnAssetStateChangeCompleted @ 1475e7a90

void __thiscall
UAssetManager::OnAssetStateChangeCompleted
          (UAssetManager *this,FPrimaryAssetId *param_1,TSharedPtr<FStreamableHandle,1> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\AssetManager.h"
                     ,0x3f3,L"Deprecated");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// OnChunkDownloaded @ 1475e7af0

void __thiscall UAssetManager::OnChunkDownloaded(UAssetManager *this,uint param_1,bool param_2)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  IPlatformChunkInstall *pIVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FString *pFVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FSoftObjectPath *pFVar19;
  TArray<UAssetManager::FPendingChunkInstall,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  uint local_res20 [2];
  undefined1 local_158 [4];
  uint local_154;
  uint local_150 [2];
  longlong local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  uint local_130;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_128;
  TArray<UAssetManager::FPendingChunkInstall,TSizedDefaultAllocator<32>_> *local_118;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  ForAnyElementType local_100;
  uint local_f8;
  int local_f4;
  FStreamableHandle *local_f0;
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [16];
  int local_d0;
  FName local_c8;
  IPlatformChunkInstall *local_c0;
  longlong local_b8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FName local_58;
  FName FStack_50;
  
  bVar5 = false;
  bVar4 = false;
  local_res20[0] = 0;
  local_c0 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  local_154 = 0;
  if ((this->PendingChunkInstalls).ArrayNum < 1) {
    return;
  }
  pTVar20 = &this->PendingChunkInstalls;
  local_148 = 0;
  local_118 = pTVar20;
LAB_1475e7b80:
  lVar18 = local_148;
  local_130 = ~local_154;
  uVar21 = local_130 >> 0x1f;
  uVar11 = 0;
  if ((int)local_154 < pTVar20->ArrayNum) {
    uVar11 = uVar21;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_110.Data = (FScriptContainerElement *)0x0;
  local_b8 = lVar18 * 0x48;
  pFVar17 = (pTVar20->AllocatorInstance).Data + local_b8;
  local_108 = *(int *)(pFVar17 + 8);
  lVar18 = (longlong)local_108;
  pvVar2 = *(void **)pFVar17;
  if (local_108 == 0) {
    local_104 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_108,0,&local_110,local_108,&local_104);
    memcpy(local_110.Data,pvVar2,lVar18 << 2);
  }
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = *(uint *)(pFVar17 + 0x18);
  lVar18 = (longlong)(int)local_f8;
  pvVar2 = *(void **)(pFVar17 + 0x10);
  if (local_f8 == 0) {
    local_f4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f8,0,&local_100,local_f8,&local_f4);
    memcpy(local_100.Data,pvVar2,lVar18 << 2);
  }
  local_f0 = *(FStreamableHandle **)(pFVar17 + 0x20);
  local_e8 = *(TReferenceControllerBase<1> **)(pFVar17 + 0x28);
  if (local_e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_e8->SharedReferenceCount = (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_e0,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(pFVar17 + 0x30));
  pIVar7 = local_c0;
  uVar11 = local_f8;
  uVar15 = (ulonglong)(int)local_f8;
  pFVar17 = local_100.Data + uVar15 * 4;
  for (FVar14.Data = local_100.Data; FVar14.Data != pFVar17; FVar14.Data = FVar14.Data + 4) {
    if (*(uint *)FVar14.Data == param_1) {
      bVar9 = !param_2;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      FVar14.Data = local_100.Data;
      goto LAB_1475e7d10;
    }
  }
  goto LAB_1475e82c3;
LAB_1475e7d10:
  if ((uint)uVar15 != uVar11) {
    local_res20[0] = local_res20[0] & 0xffffff00;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
  }
  lVar8 = local_b8;
  pTVar20 = local_118;
  lVar18 = local_148;
  uVar6 = local_154;
  if (FVar14.Data != pFVar17) {
    local_150[0] = *(uint *)FVar14.Data;
    iVar12 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7);
    if (iVar12 == 0) {
      bVar9 = true;
LAB_1475e7e09:
      uVar15 = (ulonglong)local_f8;
      FVar14.Data = FVar14.Data + 4;
    }
    else {
      if (iVar12 != 1) goto LAB_1475e7e09;
      if (((local_140.Data <= (FScriptContainerElement *)local_150) &&
          ((FScriptContainerElement *)local_150 < local_140.Data + (longlong)local_138._4_4_ * 4))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar12 = (int)local_138;
      if ((int)local_138 == local_138._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_140,(int *)((longlong)&local_138 + 4));
      }
      FVar14.Data = FVar14.Data + 4;
      local_138 = CONCAT44(local_138._4_4_,iVar12 + 1);
      *(uint *)(local_140.Data + (longlong)iVar12 * 4) = local_150[0];
      uVar15 = (ulonglong)local_f8;
    }
    goto LAB_1475e7d10;
  }
  iVar12 = local_118->ArrayNum;
  if (bVar9) {
    uVar11 = 0;
    if ((int)local_154 < iVar12) {
      uVar11 = uVar21;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = (pTVar20->AllocatorInstance).Data + lVar8;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar17 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar17 + 0x28));
    if (*(void **)(pFVar17 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar17 + 0x10));
    }
    if (*(void **)pFVar17 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar17);
    }
    iVar12 = local_130 + pTVar20->ArrayNum;
    if (iVar12 != 0) {
      memmove(pFVar17,pFVar17 + 0x48,(longlong)iVar12 * 0x48);
    }
    pTVar20->ArrayNum = pTVar20->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,&pTVar20->AllocatorInstance,pTVar20->ArrayNum,&pTVar20->ArrayMax);
    local_154 = uVar6 - 1;
    local_148 = lVar18 + -1;
    if (local_f0 != (FStreamableHandle *)0x0) {
      if ((local_f0 == (FStreamableHandle *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStreamableHandle::CancelHandle(local_f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,&local_88);
    if ((local_d0 != 0) && ((longlong *)local_e0._8_8_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)local_e0._8_8_ + 0x68))(local_e0._8_8_,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else if ((int)local_138 == 0) {
    uVar11 = 0;
    if ((int)local_154 < iVar12) {
      uVar11 = uVar21;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = (pTVar20->AllocatorInstance).Data + lVar8;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar17 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar17 + 0x28));
    if (*(void **)(pFVar17 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar17 + 0x10));
    }
    if (*(void **)pFVar17 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar17);
    }
    iVar12 = local_130 + pTVar20->ArrayNum;
    if (iVar12 != 0) {
      memmove(pFVar17,pFVar17 + 0x48,(longlong)iVar12 * 0x48);
    }
    pTVar20->ArrayNum = pTVar20->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,&pTVar20->AllocatorInstance,pTVar20->ArrayNum,&pTVar20->ArrayMax);
    local_154 = uVar6 - 1;
    local_148 = lVar18 + -1;
    if (local_f0 != (FStreamableHandle *)0x0) {
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      if ((local_f0 == (FStreamableHandle *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStreamableHandle::GetRequestedAssets(local_f0,&local_128,true);
      iVar12 = local_128.ArrayNum;
      uVar15 = (ulonglong)local_128.ArrayNum;
      pFVar19 = (FSoftObjectPath *)(local_128.AllocatorInstance.Data + uVar15 * 0x20);
      FVar14.Data = local_128.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar15 != iVar12) {
          local_158[0] = 0;
          `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_158);
        }
        if ((FSoftObjectPath *)FVar14.Data == pFVar19) break;
        local_b0 = (((FSoftObjectPath *)FVar14.Data)->AssetPath).PackageName;
        local_58 = local_b0;
        FStack_50 = (((FSoftObjectPath *)FVar14.Data)->AssetPath).AssetName;
        if (local_b0 == (FName)0x0) {
          bVar5 = true;
          local_a8.Data.ArrayNum = 0;
          pFVar13 = &local_a8;
          pFVar17 = (FScriptContainerElement *)0x0;
        }
        else {
          bVar4 = true;
          pFVar13 = ::FName::ToString(&local_b0,&local_98);
          pFVar17 = (pFVar13->Data).AllocatorInstance.Data;
        }
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar1 = (pFVar13->Data).ArrayNum;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
        if ((bVar4) &&
           (bVar4 = false, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if ((bVar5) &&
           (bVar5 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        pFVar16 = (FScriptContainerElement *)L"";
        if (iVar1 != 0) {
          pFVar16 = pFVar17;
        }
        ::FName::FName(&local_c8,(wchar_t *)pFVar16);
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        bVar9 = FLinkerLoad::IsKnownMissingPackage(local_c8);
        if (bVar9) {
          FLinkerLoad::RemoveKnownMissingPackage(local_c8);
        }
        uVar15 = local_128._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 0x20;
      }
      if ((local_f0 == (FStreamableHandle *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStreamableHandle::StartStalledHandle(local_f0);
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
      pTVar20 = local_118;
      if ((FSoftObjectPath *)local_128.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
        pTVar20 = local_118;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,&local_70);
    if ((local_d0 != 0) && ((longlong *)local_e0._8_8_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)local_e0._8_8_ + 0x68))(local_e0._8_8_,1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    uVar11 = 0;
    if ((int)local_154 < iVar12) {
      uVar11 = uVar21;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar14.Data = local_140.Data;
    pFVar17 = (pTVar20->AllocatorInstance).Data + lVar8 + 0x10;
    if (pFVar17 != (FScriptContainerElement *)&local_140) {
      iVar1 = (int)local_138;
      lVar18 = (longlong)(int)local_138;
      pFVar16 = pFVar17 + 0xc;
      iVar12 = *(int *)pFVar16;
      *(int *)&pFVar17[8].field_0x0 = (int)local_138;
      if (((int)local_138 == 0) && (iVar12 == 0)) {
        *(int *)pFVar16 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_138,iVar12,(ForAnyElementType *)pFVar17,(int)local_138,
                   (int *)pFVar16);
        if (iVar1 != 0) {
          memcpy(*(void **)&pFVar17->field_0x0,FVar14.Data,lVar18 << 2);
        }
      }
    }
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
LAB_1475e82c3:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  local_154 = local_154 + 1;
  local_148 = local_148 + 1;
  if ((this->PendingChunkInstalls).ArrayNum <= (int)local_154) {
    return;
  }
  goto LAB_1475e7b80;
}

// OnObjectReferenceListInvalidated @ 1475e8740

void __thiscall UAssetManager::OnObjectReferenceListInvalidated(UAssetManager *this)

{
  this->bIsManagementDatabaseCurrent = false;
  this->bObjectReferenceListDirty = true;
  return;
}

// PopBulkScanning @ 1475e9410

void __thiscall UAssetManager::PopBulkScanning(UAssetManager *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->NumBulkScanRequests < 1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1539323056344791640>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x5a8,"NumBulkScanRequests > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &this->NumBulkScanRequests;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475e9463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2d8))(this);
    return;
  }
  return;
}

// PostInitProperties @ 1475e9490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001475e974a) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAssetManager::PostInitProperties(UAssetManager *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  UClass *this_00;
  FPlatformFileManager *pFVar7;
  IPlatformFile *pIVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  ulonglong uVar11;
  FPakPlatformFile *this_02;
  byte bVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  UAssetManagerSettings *pUVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  undefined1 auStack_2e8 [32];
  FString *local_2c8;
  FScriptContainerElement *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined1 local_298 [8];
  FString local_290;
  uint local_280;
  uint uStack_27c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_278;
  undefined4 local_270;
  uint uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  int local_25c;
  int local_258;
  undefined1 local_254 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_240;
  longlong *local_220;
  uint uStack_218;
  uint uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  undefined4 uStack_208;
  uint uStack_204;
  uint local_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  longlong *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  longlong local_1c0;
  longlong local_1b8;
  FDestructionSentinel local_1b0;
  undefined8 local_198;
  FDestructionSentinel local_190;
  undefined8 local_178;
  undefined1 local_170 [24];
  FString local_158 [3];
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  void *local_98;
  undefined4 local_90;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  pUVar19 = this->CachedSettings;
  if (pUVar19 == (UAssetManagerSettings *)0x0) {
    this_00 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar19 = (UAssetManagerSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    this->CachedSettings = pUVar19;
  }
  this->bShouldGuessTypeAndName = false;
  pFVar7 = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::FindPlatformFile(pFVar7,L"PakFile");
  uVar21 = 0;
  this->bIsLoadingFromPakFiles = pIVar8 != (IPlatformFile *)0x0;
  this->bShouldAcquireMissingChunksOnLoad = pUVar19->bShouldAcquireMissingChunksOnLoad;
  this->bShouldUseSynchronousLoad = PRIVATE_GIsRunningCommandlet;
  if (pUVar19->bShouldManagerDetermineTypeAndName != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreUObjectDelegates::GetPrimaryAssetIdForObject,(FWriteAccessScope *)&local_1b0);
    local_198 = 0x155020250;
    puVar9 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)
                             &FCoreUObjectDelegates::GetPrimaryAssetIdForObject.field_0x8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AUFPrimaryAssetId__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__00__CBVUAssetManager____A6A_AUFPrimaryAssetId__PEBVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_254._4_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)((longlong)local_254 + 4));
      puVar9[4] = _vcall__1184__flat______;
    }
    if (local_1b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
    }
  }
  (**(code **)(this->_padding_ + 0x500))(this);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,local_158,(UObject *)0x0);
  ::FString::PrintfImpl((FString *)(local_170 + 8),L"%s.StreamableManager");
  FStreamableManager::SetManagerName(&this->StreamableManager,(FString *)(local_170 + 8));
  if (local_158[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158[0].Data.AllocatorInstance.Data);
  }
  pTVar2 = &this->AllAssetSearchRoots;
  ::FString::FString(&local_290,L"/Game");
  pFVar15 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar15 <= (FScriptContainerElement *)&local_290) &&
     (lVar14 = (longlong)(this->AllAssetSearchRoots).ArrayMax,
     (FScriptContainerElement *)&local_290 < pFVar15 + lVar14 * 0x10)) {
    local_2b0 = (longlong)(this->AllAssetSearchRoots).ArrayNum;
    local_2a8 = 0x10;
    local_2c8 = &local_290;
    local_2c0 = pFVar15;
    local_2b8 = lVar14;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->AllAssetSearchRoots).ArrayNum;
  piVar1 = &(this->AllAssetSearchRoots).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AllAssetSearchRoots).ArrayNum = iVar6 + 1;
  pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar15 = 0;
  *(FScriptContainerElement **)pFVar15 = local_290.Data.AllocatorInstance.Data;
  local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar15 + 8) = local_290.Data.ArrayNum;
  *(int *)(pFVar15 + 0xc) = local_290.Data.ArrayMax;
  local_290.Data.ArrayNum = 0;
  local_290.Data.ArrayMax = 0;
  this_01 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UAssetManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_01,(UAssetManager *)local_170,(pmf_5b92e564)this);
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (ForElementType<unsigned_int>)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = -1;
  local_f4 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8._0_4_ = 0xffffffff;
  local_a8._4_4_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  (**(code **)(this->_padding_ + 0x538))(this,local_d8);
  uVar17 = local_d8._8_4_ - local_a8._4_4_;
  if (uVar17 <= (uint)(local_128._8_4_ - local_f4)) goto LAB_1475e9a90;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_128,uVar17);
  uVar18 = 1;
  if (3 < uVar17) {
    uVar20 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_260 = (undefined4)lVar14;
    uVar18 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_e0 != 0) && ((int)uVar18 <= (int)local_e0)) goto LAB_1475e9a90;
  local_e0 = uVar18;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
  }
  if (uVar18 != 0) {
    uVar17 = uVar18;
    if (uVar18 < 2) {
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_1475e98c3;
      }
    }
    else {
LAB_1475e98c3:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,uVar17,4);
    }
    if (0 < (int)uVar18) {
      uVar23 = (ulonglong)uVar18;
      uVar20 = uVar21;
      do {
        FVar13.Data = local_f0;
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_e8.Data;
        }
        uVar11 = uVar20 & (longlong)(int)uVar18 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar13.Data + uVar11 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_e0 != 0) {
    pTStack_278 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
    local_280 = 0;
    uStack_27c = 1;
    uStack_26c = 0;
    uStack_268 = 0;
    uVar20 = uVar21;
    if (local_100 != 0) {
      FVar24 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
      if (local_108 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_108;
      }
      uVar17 = *(uint *)FVar24;
      uVar23 = uVar21;
      while (uVar17 == 0) {
        uStack_268 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_268;
        iVar6 = (int)uVar20;
        local_280 = iVar6 + 1;
        uVar20 = (ulonglong)local_280;
        if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_280)
        goto LAB_1475e99cc;
        uVar17 = ((uint *)((longlong)FVar24 + 4))[iVar6];
      }
      uStack_27c = -uVar17 & uVar17;
      uVar20 = (ulonglong)uStack_27c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_25c = (int)lVar14;
      uStack_26c = (uStack_268 - 1) + local_25c;
      uVar20 = (ulonglong)uStack_26c;
      if ((int)local_100 < (int)uStack_26c) {
LAB_1475e99cc:
        uVar20 = (ulonglong)local_100;
        uStack_26c = local_100;
      }
    }
    local_270 = 0xffffffff;
    local_254._12_8_ = local_128;
    local_240._padding_ = CONCAT44(uStack_27c,local_280);
    local_240.CurrentBitIndex = uStack_26c;
    local_240.UnvisitedBitMask = 0xffffffff;
    local_240._28_4_ = uStack_264;
    local_240.BaseBitIndex = uStack_268;
    local_240.Array = pTStack_278;
    if ((int)uVar20 < (int)local_100) {
      do {
        puVar9 = (undefined8 *)((longlong)(int)uVar20 * 0x20 + *(longlong *)local_254._12_8_);
        if (*(int *)(puVar9 + 1) == 0) {
          pwVar16 = L"";
          iVar6 = 0;
        }
        else {
          pwVar16 = (wchar_t *)*puVar9;
          iVar6 = *(int *)(puVar9 + 1) + -1;
        }
        uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar16);
        uVar17 = local_e0 - 1 & uVar17;
        *(uint *)((longlong)puVar9 + 0x1c) = uVar17;
        FVar13.Data = local_f0;
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_e8.Data;
        }
        uVar23 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(FVar13.Data + uVar23 * 4);
        *(int *)(FVar13.Data + uVar23 * 4) = (int)uVar20;
        local_240.UnvisitedBitMask = local_240.UnvisitedBitMask & ~local_240._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_240);
        uVar20 = (ulonglong)(uint)local_240.CurrentBitIndex;
      } while (local_240.CurrentBitIndex < (local_240.Array)->NumBits);
    }
  }
LAB_1475e9a90:
  uVar17 = local_b0;
  uStack_218 = 0;
  uStack_204 = uStack_218;
  local_200 = uStack_218;
  uStack_214 = 1;
  if (local_b0 != 0) {
    puVar22 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar22 = local_b8;
    }
    uVar18 = *puVar22;
    uVar20 = uVar21;
    local_200 = 0;
    uStack_218 = 0;
    while (uVar18 == 0) {
      iVar6 = (int)uVar21;
      local_200 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_200;
      uStack_218 = iVar6 + 1;
      uVar21 = (ulonglong)uStack_218;
      uStack_204 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_218)
      goto LAB_1475e9b21;
      uVar18 = (puVar22 + 1)[iVar6];
    }
    uStack_214 = -uVar18 & uVar18;
    uVar21 = (ulonglong)uStack_214 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_258 = (int)lVar14;
    uStack_204 = (local_200 - 1) + local_258;
    if ((int)local_b0 < (int)uStack_204) {
      uStack_204 = local_b0;
    }
  }
LAB_1475e9b21:
  local_220 = (longlong *)local_d8;
  uStack_1fc = local_158[2].Data.ArrayMax;
  local_210 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  iStack_1f8 = local_d8._8_4_ - local_a8._4_4_;
  uVar18 = local_b0 & 0xffffffe0;
  uStack_208 = 0xffffffff;
  TStack_1e8.CurrentBitIndex = uStack_204;
  TStack_1e8.UnvisitedBitMask = 0xffffffff;
  TStack_1e8._padding_ = CONCAT44(uStack_214,uStack_218);
  iVar6 = (int)local_b0 >> 5;
  TStack_1e8._28_4_ = local_158[2].Data.ArrayMax;
  TStack_1e8.BaseBitIndex = local_200;
  uStack_1c8 = CONCAT44(uStack_1f4,iStack_1f8);
  bVar12 = (byte)local_b0;
  local_1f0 = local_220;
  TStack_1e8.Array = local_210;
  if (((int)local_b0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar17 != local_b0) {
    puVar22 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar22 = local_b8;
    }
    uVar17 = -1 << (bVar12 & 0x1f) & puVar22[iVar6];
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar6;
      uVar18 = uVar18 + 0x20;
      iVar6 = iVar6 + 1;
      uVar17 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_1475e9c50;
      uVar17 = (puVar22 + 1)[lVar14];
    }
    uVar21 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (int)lVar14 + -1 + uVar18;
    if ((int)local_b0 < (int)uVar17) {
      uVar17 = local_b0;
    }
  }
LAB_1475e9c50:
  while( true ) {
    plVar4 = local_1f0;
    if ((int)local_1f0[1] - *(int *)((longlong)local_1f0 + 0x34) != (int)uStack_1c8) {
      `TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_298);
    }
    if (((TStack_1e8.CurrentBitIndex == uVar17) &&
        (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar4 == (longlong *)local_d8)) break;
    local_1b8 = (longlong)TStack_1e8.CurrentBitIndex * 0x20 + *plVar4;
    local_1c0 = local_1b8 + 8;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)local_128,(TPairInitializer<FString_const_&,int_const_&> *)local_254,
               (bool *)&local_1c0);
    TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  if (local_128._8_4_ != local_f4) {
    if (3 < (byte)LogAssetManager._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    }
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              (&local_88,
               (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)local_128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::PakChunkIdOverrideDelegate,(FWriteAccessScope *)&local_190);
    local_178 = 0x154f068e0;
    puVar9 = UE::Core::Private::DelegateAllocate
                       (0x68,(FDelegateAllocation *)
                             &FCoreDelegates::PakChunkIdOverrideDelegate.field_0x8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AHAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`UAssetManager::PostInitProperties'::`16'::<lambda_1>_>
                 ::_vftable_;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)(puVar9 + 3),&local_88);
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    pFVar7 = FPlatformFileManager::Get();
    this_02 = (FPakPlatformFile *)FPlatformFileManager::FindPlatformFile(pFVar7,L"PakFile");
    if (this_02 != (FPakPlatformFile *)0x0) {
      FPakPlatformFile::RefreshPakChunkIndicies(this_02);
    }
  }
  local_e0 = 0;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  return;
}

// PostInitialAssetScan @ 1475e9ea0

void __thiscall UAssetManager::PostInitialAssetScan(UAssetManager *this)

{
  (**(code **)(this->_padding_ + 0x578))();
  this->bIsPrimaryAssetDirectoryCurrent = true;
  if (this->bHasCompletedInitialScan == false) {
    this->bHasCompletedInitialScan = true;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&OnCompletedInitialScanDelegate);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnCompletedInitialScanDelegate
              );
    return;
  }
  return;
}

// PreGarbageCollect @ 1475ea330

void __thiscall UAssetManager::PreGarbageCollect(UAssetManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  TObjectPtr<UObject>_u_0 local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bObjectReferenceListDirty != false) {
    iVar11 = 0;
    this->bObjectReferenceListDirty = false;
    piVar1 = &(this->ObjectReferenceList).ArrayMax;
    (this->ObjectReferenceList).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ObjectReferenceList).AllocatorInstance,0,piVar1);
    }
    puVar2 = &(this->AssetTypeMap).field_0x10;
    uVar8 = 1;
    iVar4 = *(int *)&(this->AssetTypeMap).field_0x28;
    iVar13 = 0;
    iVar9 = 0;
    if (iVar4 != 0) {
      puVar15 = *(uint **)&(this->AssetTypeMap).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar2;
      }
      uVar12 = *puVar15;
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar9 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475ea42d;
        uVar12 = puVar15[lVar10 + 1];
      }
      uVar8 = -uVar12 & uVar12;
      uVar3 = (ulonglong)uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10;
      iVar9 = local_res10 + -1 + iVar13;
      if (iVar4 < iVar9) {
        iVar9 = iVar4;
      }
    }
LAB_1475ea42d:
    uVar12 = *(uint *)&(this->AssetTypeMap).field_0x28;
    TStack_60._padding_ = CONCAT44(uVar8,iVar11);
    uVar8 = uVar12 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar9;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar12 >> 5;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = iVar13;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->AssetTypeMap).field_0x8 -
                         *(int *)&(this->AssetTypeMap).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(this->AssetTypeMap).field_0x28;
    if (uVar12 != uVar5) {
      puVar14 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar2;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar11;
        uVar8 = uVar8 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1475ea540;
        uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar12 = (int)lVar10 + -1 + uVar8;
      if ((int)uVar5 < (int)uVar12) {
        uVar12 = uVar5;
      }
    }
LAB_1475ea540:
    while( true ) {
      if (*(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar12) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
      lVar10 = *(longlong *)
                ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->AssetTypeMap);
      if (*(char *)(lVar10 + 0x80) == '\0') {
        local_res18 = (TObjectPtr<UObject>_u_0)
                      ((TObjectPtr<UObject>_u_0 *)(lVar10 + 0x30))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res18.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_res18.DebugPtr);
        }
        TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
                  (&this->ObjectReferenceList,(TObjectPtr<UObject> *)&local_res18.ObjectPtr);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// PredownloadPrimaryAssets @ 1475ea620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::PredownloadPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FAssetManagerLoadParams *param_4,FSourceLocation *param_5)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TSharedPtr<FStreamableHandle,1> *pTVar4;
  undefined1 auStackY_5b8 [32];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_578;
  TStringBuilderBase<wchar_t> *local_568;
  FString local_560;
  TSharedPtr<FStreamableHandle,1> local_550;
  FStreamableAsyncLoadParams local_540;
  FString local_4c0;
  source_location local_4a8;
  TStringBuilderBase<wchar_t> local_488;
  wchar_t local_468 [256];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  local_488.Base = local_468;
  local_488.CurPos = local_468;
  local_488.bIsDynamic = false;
  local_488.bIsExternal = false;
  local_488.End = (wchar_t *)&local_268;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  UE::AssetManager::Private::GetPreloadPrimaryAssetsLoadList
            (&local_578,this,param_1,param_2,param_3,&local_488,&local_268);
  if (local_488.End < (TStringBuilderBase<wchar_t> *)(local_488.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,1);
  }
  *local_488.CurPos = L'\0';
  pFVar3 = ::FString::FString(&local_4c0,local_488.Base);
  if ((param_4->DownloadParams).bIsSet == false) {
    if (1 < (byte)LogAssetManager._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    }
    local_550.Object = (FStreamableHandle *)0x0;
    local_550.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    UE::AssetManager::Private::GetStreamableAsyncLoadParams(&local_540,param_4);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_540.TargetsToStream.AllocatorInstance.Data,
               local_540.TargetsToStream.ArrayNum);
    if ((FSoftObjectPath *)local_540.TargetsToStream.AllocatorInstance.Data !=
        (FSoftObjectPath *)0x0) {
      FMemory::Free(local_540.TargetsToStream.AllocatorInstance.Data);
    }
    local_540.TargetsToStream.AllocatorInstance.Data = local_578.AllocatorInstance.Data;
    local_540.TargetsToStream.ArrayNum = local_578.ArrayNum;
    local_540.TargetsToStream.ArrayMax = local_578.ArrayMax;
    local_578.ArrayNum = 0;
    local_578.ArrayMax = 0;
    local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_540.bManageActiveHandle = false;
    if ((local_540.DownloadParams.bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_560.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    local_4a8._Line = (param_5->Impl)._Line;
    local_4a8._Column = (param_5->Impl)._Column;
    local_4a8._File = (param_5->Impl)._File;
    local_4a8._Function = (param_5->Impl)._Function;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_560.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_560.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    local_540.DownloadParams.TypedValue.bDownloadOnly = true;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    FStreamableManager::RequestAsyncLoad
              (&this->StreamableManager,&local_550,&local_540,&local_560,
               (FSourceLocation *)&local_4a8);
    if (local_540.DownloadParams.bIsSet != false) {
      FStreamableDownloadCachePin::~FStreamableDownloadCachePin
                ((FStreamableDownloadCachePin *)&local_540.DownloadParams);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_540.OnUpdate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_540.OnCancel);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_540.OnComplete);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_540.TargetsToStream.AllocatorInstance.Data,
               local_540.TargetsToStream.ArrayNum);
    if ((FSoftObjectPath *)local_540.TargetsToStream.AllocatorInstance.Data !=
        (FSoftObjectPath *)0x0) {
      FMemory::Free(local_540.TargetsToStream.AllocatorInstance.Data);
    }
  }
  if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
  }
  if (local_550.Object == (FStreamableHandle *)0x0) {
    local_568 = &local_268;
    `UAssetManager::PredownloadPrimaryAssets'::__l2::<lambda_1>::operator()(&local_568);
  }
  __return_storage_ptr__->Object = (FStreamableHandle *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_550.SharedReferenceCount.ReferenceController);
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_578.AllocatorInstance.Data,local_578.ArrayNum);
  if ((FSoftObjectPath *)local_578.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_578.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  return __return_storage_ptr__;
}

// PreloadPrimaryAssets @ 1475ea910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::PreloadPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FAssetManagerLoadParams *param_4,FSourceLocation *param_5)

{
  code *pcVar1;
  undefined1 auStackY_4e8 [32];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_4a8;
  FString local_498;
  TStringBuilderBase<wchar_t> local_488;
  wchar_t local_468 [256];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [3];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_488.Base = local_468;
  local_488.CurPos = local_468;
  local_488.bIsDynamic = false;
  local_488.bIsExternal = false;
  local_488.End = (wchar_t *)&local_268;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  UE::AssetManager::Private::GetPreloadPrimaryAssetsLoadList
            (&local_4a8,this,param_1,param_2,param_3,&local_488,&local_268);
  pcVar1 = *(code **)(this->_padding_ + 0x3f0);
  if (local_488.End < (TStringBuilderBase<wchar_t> *)(local_488.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,1);
  }
  *local_488.CurPos = L'\0';
  ::FString::FString(&local_498,local_488.Base);
  (*pcVar1)(this,__return_storage_ptr__,&local_4a8,param_4);
  if ((TStringBuilderBase<wchar_t> *)local_498.Data.AllocatorInstance.Data !=
      (TStringBuilderBase<wchar_t> *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FStreamableHandle *)0x0) {
    local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_268;
    `UAssetManager::PreloadPrimaryAssets'::__l2::<lambda_1>::operator()(&local_498);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_4a8.AllocatorInstance.Data,local_4a8.ArrayNum);
  if ((FSoftObjectPath *)local_4a8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_4a8.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  return __return_storage_ptr__;
}

// PreloadPrimaryAssets @ 1475eaac0

TSharedPtr<FStreamableHandle,1> * __thiscall
UAssetManager::PreloadPrimaryAssets
          (UAssetManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4,int param_5,
          FSourceLocation *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy> *this_00;
  undefined1 local_b8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  int local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  this_00 = UE::StreamableManager::Private::WrapDelegate
                      ((TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                        *)local_40,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)local_b8);
  pFVar2 = *(FScriptContainerElement **)&this_00->field_0x8;
  *(undefined8 *)&this_00->field_0x8 = 0;
  iVar1 = *(int *)&this_00->field_0x10;
  *(undefined4 *)&this_00->field_0x10 = 0;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_90.Data = pFVar2;
  local_88 = iVar1;
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)local_b8);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  local_50 = param_5;
  local_b8._0_4_ = (param_6->Impl)._Line;
  local_b8._4_4_ = (param_6->Impl)._Column;
  local_b8._8_4_ = *(undefined4 *)&(param_6->Impl)._File;
  local_b8._12_4_ = *(undefined4 *)((longlong)&(param_6->Impl)._File + 4);
  local_b8._16_8_ = (param_6->Impl)._Function;
  (**(code **)(this->_padding_ + 0x3d8))
            (this,__return_storage_ptr__,param_1,param_2,param_3,&local_98,local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)local_b8);
  if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_b8);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)local_b8);
  if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
    local_88 = 0;
  }
  if (local_b8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_b8._12_4_,local_b8._8_4_),
               (FDestructionSentinel *)local_b8);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return __return_storage_ptr__;
}

// PushBulkScanning @ 1475eb0a0

void __thiscall UAssetManager::PushBulkScanning(UAssetManager *this)

{
  this->NumBulkScanRequests = this->NumBulkScanRequests + 1;
  if (this->NumBulkScanRequests == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475eb0b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2d0))();
    return;
  }
  return;
}

// RecursivelyExpandBundleData @ 1475ece50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAssetManager::RecursivelyExpandBundleData(UAssetManager *this,FAssetBundleData *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FAssetBundleEntry *pFVar3;
  int iVar4;
  code *pcVar5;
  FAssetBundleEntry *pFVar6;
  FAssetBundleData *this_00;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  FTopLevelAssetPath *pFVar13;
  FTopLevelAssetPath *pFVar14;
  UAssetManager *pUVar15;
  FScriptContainerElement *pFVar16;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  uint local_124;
  FAssetBundleEntry *local_120;
  undefined8 local_118;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> local_110;
  undefined8 local_100;
  FAssetBundleData *local_f8;
  UAssetManager *local_f0;
  longlong local_e8;
  FSoftObjectPath local_e0;
  FName local_c0;
  longlong local_b8;
  longlong local_b0;
  FTopLevelAssetPath local_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar19 = (param_1->Bundles).AllocatorInstance.Data;
  iVar4 = (param_1->Bundles).ArrayNum;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar16 = pFVar19 + 0x10;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  pFVar2 = pFVar19 + (longlong)iVar4 * 0x18;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_f8 = param_1;
  local_f0 = this;
  while( true ) {
    if ((local_f8->Bundles).ArrayNum != iVar4) {
      local_128 = 0;
      `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_128);
    }
    if (pFVar19 == pFVar2) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&local_98,&local_c0,(bool *)pFVar19);
    iVar11 = *(int *)pFVar16;
    pFVar13 = *(FTopLevelAssetPath **)(pFVar16 + -8);
    pFVar14 = pFVar13 + iVar11;
    while( true ) {
      if (*(int *)pFVar16 != iVar11) {
        local_127 = 0;
        `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_127);
      }
      if (pFVar13 == pFVar14) break;
      TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FTopLevelAssetPath_const_&>(&local_110,pFVar13);
      pFVar13 = pFVar13 + 1;
    }
    pFVar19 = pFVar19 + 0x18;
    pFVar16 = pFVar16 + 0x18;
  }
  local_124 = 0;
  if (0 < local_110.ArrayNum) {
    local_e8 = 0;
    pUVar15 = local_f0;
    do {
      lVar18 = local_e8;
      uVar10 = local_124;
      pcVar5 = *(code **)(pUVar15->_padding_ + 0x340);
      uVar9 = 0;
      if ((int)local_124 < local_110.ArrayNum) {
        uVar9 = ~local_124 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_130 = (longlong)local_110.ArrayNum;
        local_138 = (longlong)(int)local_124;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_a8.PackageName = *(FName *)(local_110.AllocatorInstance.Data + lVar18);
      local_a8.AssetName = ((FName *)(local_110.AllocatorInstance.Data + lVar18))[1];
      local_e0.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_e0.AssetPath.PackageName.Number = 0;
      local_e0.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_e0.AssetPath.AssetName.Number = 0;
      local_e0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.SubPathString.Data.ArrayNum = 0;
      local_e0.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_e0,&local_a8);
      (*pcVar5)(pUVar15,&local_b8,&local_e0);
      if (local_e0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.SubPathString.Data.AllocatorInstance.Data);
      }
      local_100 = 0;
      local_120 = (FAssetBundleEntry *)0x0;
      local_118 = 0;
      if (((local_b8 != 0) && (local_b0 != 0)) &&
         (cVar8 = (**(code **)(pUVar15->_padding_ + 0x400))(pUVar15,&local_b8,&local_120),
         this_00 = local_f8, cVar8 != '\0')) {
        iVar4 = (int)local_118;
        pFVar3 = local_120 + (int)local_118;
        pFVar6 = local_120;
        while( true ) {
          pTVar17 = &pFVar6->AssetPaths;
          if ((int)local_118 != iVar4) {
            local_126 = 0;
            `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_126);
          }
          lVar1 = (longlong)(pTVar17 + -1) + 8;
          pUVar15 = local_f0;
          lVar18 = local_e8;
          uVar10 = local_124;
          if ((FAssetBundleEntry *)lVar1 == pFVar3) break;
          lVar18 = *(longlong *)lVar1;
          uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar18);
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar12 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar12 = local_98.Hash.SecondaryData;
            }
            iVar11 = *(int *)((longlong)FVar12 +
                             (ulonglong)
                             (local_98.HashSize - 1U & (int)((ulonglong)lVar18 >> 0x20) + uVar10) *
                             4);
            if (iVar11 != -1) {
LAB_1475ed0f0:
              if (*(longlong *)(local_98.Elements._0_8_ + (longlong)iVar11 * 0x10) != lVar18)
              goto code_r0x0001475ed0fb;
              FAssetBundleData::AddBundleAssets(this_00,*(FName *)lVar1,pTVar17);
              iVar11 = pTVar17->ArrayNum;
              pFVar13 = (FTopLevelAssetPath *)(pTVar17->AllocatorInstance).Data;
              pFVar14 = pFVar13 + iVar11;
              while( true ) {
                if (pTVar17->ArrayNum != iVar11) {
                  local_125 = 0;
                  `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_125);
                }
                if (pFVar13 == pFVar14) break;
                TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FTopLevelAssetPath_const_&>(&local_110,pFVar13);
                pFVar13 = pFVar13 + 1;
              }
            }
          }
LAB_1475ed104:
          pFVar6 = (FAssetBundleEntry *)(pTVar17 + 1);
        }
      }
      DestructItems<FAssetBundleEntry,int>(local_120,(int)local_118);
      if (local_120 != (FAssetBundleEntry *)0x0) {
        FMemory::Free(local_120);
      }
      local_124 = uVar10 + 1;
      local_e8 = lVar18 + 0x10;
    } while ((int)local_124 < local_110.ArrayNum);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return;
code_r0x0001475ed0fb:
  iVar11 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar11 * 0x10);
  if (iVar11 == -1) goto LAB_1475ed104;
  goto LAB_1475ed0f0;
}

// RefreshPrimaryAssetDirectory @ 1475ed470

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall UAssetManager::RefreshPrimaryAssetDirectory(UAssetManager *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  FPrimaryAssetTypeData *this_00;
  FName FVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FModuleManager *this_01;
  IModuleInterface *pIVar13;
  IAssetRegistry *pIVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined1 local_res8 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FName local_68 [4];
  undefined4 local_44;
  
  iVar16 = 0;
  if (*(int *)&(this->WarningInvalidAssets).Elements.field_0x8 !=
      *(int *)&(this->WarningInvalidAssets).Elements.field_0x34) {
    TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>::UnhashElements
              (&this->WarningInvalidAssets);
    iVar5 = *(int *)&(this->WarningInvalidAssets).Elements.field_0xc;
    *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x8 = 0;
    if (iVar5 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)&this->WarningInvalidAssets,0,
                 (int *)&(this->WarningInvalidAssets).Elements.field_0xc);
    }
    *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->WarningInvalidAssets).Elements.field_0x28 = 0;
  }
  cVar8 = (**(code **)(this->_padding_ + 0x2f0))(this);
  if ((cVar8 != '\0') && ((param_1 || (this->bIsPrimaryAssetDirectoryCurrent == false)))) {
    this->NumBulkScanRequests = this->NumBulkScanRequests + 1;
    if (this->NumBulkScanRequests == 1) {
      (**(code **)(this->_padding_ + 0x2d0))(this);
    }
    bVar4 = this->bScanningFromInitialConfig;
    puVar1 = &(this->AssetTypeMap).field_0x10;
    this->bScanningFromInitialConfig = true;
    iVar5 = *(int *)&(this->AssetTypeMap).field_0x28;
    uVar10 = 1;
    iVar18 = 0;
    iVar11 = 0;
    if (iVar5 != 0) {
      puVar20 = *(uint **)&(this->AssetTypeMap).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar17 = *puVar20;
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar16;
        iVar18 = iVar18 + 0x20;
        iVar16 = iVar16 + 1;
        iVar11 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1475ed5cd;
        uVar17 = puVar20[lVar15 + 1];
      }
      uVar10 = -uVar17 & uVar17;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = iVar18 + -1 + (int)lVar15;
      if (iVar5 < iVar11) {
        iVar11 = iVar5;
      }
    }
LAB_1475ed5cd:
    uVar17 = *(uint *)&(this->AssetTypeMap).field_0x28;
    uVar21 = uVar17 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uVar10,iVar16);
    TStack_90.CurrentBitIndex = iVar11;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar17 >> 5;
    TStack_90._28_4_ = local_44;
    TStack_90.BaseBitIndex = iVar18;
    uStack_70 = CONCAT44(uStack_9c,
                         *(int *)&(this->AssetTypeMap).field_0x8 -
                         *(int *)&(this->AssetTypeMap).field_0x34);
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(this->AssetTypeMap).field_0x28;
    if (uVar17 != uVar10) {
      puVar19 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar16;
        uVar21 = uVar21 + 0x20;
        iVar16 = iVar16 + 1;
        uVar17 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_1475ed6d0;
        uVar17 = *(uint *)(puVar19 + lVar15 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar17 = (int)lVar15 + -1 + uVar21;
      if ((int)uVar10 < (int)uVar17) {
        uVar17 = uVar10;
      }
    }
LAB_1475ed6d0:
    while( true ) {
      if (*(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34 !=
          (int)uStack_70) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_90.CurrentBitIndex == uVar17) &&
         (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      puVar22 = (undefined8 *)
                ((longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)&this->AssetTypeMap);
      this_00 = (FPrimaryAssetTypeData *)puVar22[1];
      FPrimaryAssetTypeInfo::FillRuntimeData
                ((FPrimaryAssetTypeInfo *)this_00,local_res20,local_res18);
      if (local_res18[0] != false) {
        pIVar14 = this->CachedAssetRegistry;
        if (pIVar14 == (IAssetRegistry *)0x0) {
          pFVar12 = ::FName::FName(local_68,L"AssetRegistry");
          FVar6 = *pFVar12;
          this_01 = FModuleManager::Get();
          pIVar13 = FModuleManager::LoadModuleChecked(this_01,FVar6);
          pIVar14 = (IAssetRegistry *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13);
          this->CachedAssetRegistry = pIVar14;
        }
        (**(code **)((longlong)*pIVar14 + 0x1b8))();
      }
      if ((local_res20[0] != false) && ((this_00->Info).AssetScanPaths.ArrayNum != 0)) {
        FPrimaryAssetTypeData::ResetAssets(this_00,&this->AssetPathMap);
        (**(code **)(this->_padding_ + 0x2b0))
                  (this,*puVar22,&(this_00->Info).AssetScanPaths,
                   (this_00->Info).AssetBaseClassLoaded.field0_0x0.DebugPtr,
                   (this_00->Info).bHasBlueprintClasses,(this_00->Info).bIsEditorOnly,0);
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    if ((this->NumBulkScanRequests < 1) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1539323056344791640>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x5a8,"NumBulkScanRequests > 0"), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar2 = &this->NumBulkScanRequests;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)(this->_padding_ + 0x2d8))(this);
    }
    (**(code **)(this->_padding_ + 0x588))(this);
    this->bScanningFromInitialConfig = bVar4;
  }
  return;
}

// RegisterSpecificPrimaryAsset @ 1475edcd0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::RegisterSpecificPrimaryAsset
          (UAssetManager *this,FPrimaryAssetId *param_1,FAssetData *param_2)

{
  FPrimaryAssetTypeData *pFVar1;
  char cVar2;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar3;
  FSoftObjectPath *this_00;
  FString *pFVar4;
  FString local_38;
  FSoftObjectPath local_28;
  
  if ((((param_1->PrimaryAssetType).Name != (FName)0x0) && (param_1->PrimaryAssetName != (FName)0x0)
      ) && (pTVar3 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                     ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                             *)&this->AssetTypeMap,(param_1->PrimaryAssetType).Name),
           pTVar3 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0)) {
    pFVar1 = pTVar3->Object;
    cVar2 = (**(code **)(this->_padding_ + 0x548))(this,param_1,param_2,0);
    if (cVar2 != '\0') {
      this_00 = FAssetData::GetSoftObjectPath(param_2,&local_28);
      pFVar4 = FSoftObjectPath::ToString(this_00,&local_38);
      InternalAddAssetScanPath(this,pFVar1,pFVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->_padding_ + 0x550))(this);
      return true;
    }
  }
  return false;
}

// Register_OnAddedAssetSearchRoot @ 1475eddb0

FDelegateHandle __thiscall
UAssetManager::Register_OnAddedAssetSearchRoot
          (UAssetManager *this,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnAddedAssetSearchRootDelegate,(FWriteAccessScope *)&local_38);
  uVar6 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnAddedAssetSearchRootDelegate,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar2 = *(longlong **)&in_R8->field_0x8, plVar2 != (longlong *)0x0)) {
        puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res8);
        uVar6 = *puVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar4 = *(int *)&(this->OnAddedAssetSearchRootDelegate).field_0x10;
      puVar1 = &(this->OnAddedAssetSearchRootDelegate).field_0x14;
      *(undefined8 *)param_1 = uVar6;
      if (iVar4 == *(int *)puVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)
                                 &(this->OnAddedAssetSearchRootDelegate).field_0x8,(int *)puVar1);
      }
      *(int *)&(this->OnAddedAssetSearchRootDelegate).field_0x10 = iVar4 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar4 * 0x10 +
                 *(longlong *)&(this->OnAddedAssetSearchRootDelegate).field_0x8),in_R8);
      goto LAB_1475ede99;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_1475ede99:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// RemovePrimaryAssetType @ 1475f43f0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall UAssetManager::RemovePrimaryAssetType(UAssetManager *this,FPrimaryAssetType param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FPrimaryAssetTypeData *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar5;
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_1.Name;
  pTVar5 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                   *)&this->AssetTypeMap,param_1.Name);
  if (pTVar5 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    this_00 = pTVar5->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8 = param_1.Name;
    if (*(int *)&(this->AssetTypeMap).field_0x8 != *(int *)&(this->AssetTypeMap).field_0x34) {
      uVar4 = ::GetTypeHash(param_1.Name.ComparisonIndex.Value);
      TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
                           *)&this->AssetTypeMap,local_res10.Number + uVar4,&local_res8);
    }
    if (this_00 == (FPrimaryAssetTypeData *)0x0) {
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
    FPrimaryAssetTypeData::ResetAssets(this_00,&this->AssetPathMap);
    this->bObjectReferenceListDirty = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// RemoveScanPathsForPrimaryAssets @ 1475f44c0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
UAssetManager::RemoveScanPathsForPrimaryAssets
          (UAssetManager *this,FPrimaryAssetType param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,UClass *param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  FPrimaryAssetTypeData *pFVar2;
  UClass *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_58 [8];
  FPrimaryAssetTypeData *local_50;
  <lambda_1> local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  if (!param_5) {
    pTVar9 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                     *)&this->AssetTypeMap,param_1.Name);
    if ((param_3 == (UClass *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x5b8,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pTVar9 != (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
      pFVar2 = pTVar9->Object;
      pUVar3 = (pFVar2->Info).AssetBaseClassLoaded.field0_0x0.DebugPtr;
      if (pUVar3 == (UClass *)0x0) {
        bVar6 = param_3 == (UClass *)0x0;
      }
      else {
        bVar6 = pUVar3 == param_3;
      }
      if ((((bVar6) && ((pFVar2->Info).bHasBlueprintClasses == param_4)) &&
          ((pFVar2->Info).bIsEditorOnly == false)) ||
         (local_50 = pFVar2,
         bVar6 = `UAssetManager::RemoveScanPathsForPrimaryAssets'::__l16::<lambda_1>::operator()
                           (&local_50), bVar6)) {
        uVar8 = param_2->ArrayNum;
        local_40.Data = (FScriptContainerElement *)0x0;
        local_38 = 0;
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if (0 < (int)uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar8,&local_40,0,(int *)((longlong)&local_38 + 4));
        }
        iVar1 = param_2->ArrayNum;
        pFVar11 = (param_2->AllocatorInstance).Data;
        pFVar13 = pFVar11 + (longlong)iVar1 * 0x10;
        while( true ) {
          if (param_2->ArrayNum != iVar1) {
            param_5 = false;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&param_5);
          }
          if (pFVar11 == pFVar13) break;
          pFVar4 = (pFVar2->Info).AssetScanPaths.AllocatorInstance.Data;
          if (((pFVar4 <= pFVar11) &&
              (pFVar11 < pFVar4 + (longlong)(pFVar2->Info).AssetScanPaths.ArrayMax * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_48.Item = (FString *)pFVar11;
          iVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::
                  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                            (&(pFVar2->Info).AssetScanPaths,&local_48);
          if (iVar7 != 0) {
            if (((local_40.Data <= pFVar11) &&
                (pFVar11 < local_40.Data + (longlong)local_38._4_4_ * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = (int)local_38;
            if ((int)local_38 == local_38._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_40,(int *)((longlong)&local_38 + 4));
            }
            local_38 = CONCAT44(local_38._4_4_,iVar7 + 1);
            ::FString::FString((FString *)(local_40.Data + (longlong)iVar7 * 0x10),
                               (FString *)pFVar11);
          }
          if (*(int *)&(pFVar2->DeferredAssetScanPaths).Elements.field_0x8 !=
              *(int *)&(pFVar2->DeferredAssetScanPaths).Elements.field_0x34) {
            iVar7 = *(int *)(pFVar11 + 8) + -1;
            if (*(int *)(pFVar11 + 8) == 0) {
              pwVar10 = L"";
              iVar7 = 0;
            }
            else {
              pwVar10 = *(wchar_t **)pFVar11;
            }
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      (&pFVar2->DeferredAssetScanPaths,uVar8,(FString *)pFVar11);
          }
          if (*(int *)&(pFVar2->AdditionalAssetScanPaths).Elements.field_0x8 !=
              *(int *)&(pFVar2->AdditionalAssetScanPaths).Elements.field_0x34) {
            iVar7 = *(int *)(pFVar11 + 8) + -1;
            if (*(int *)(pFVar11 + 8) == 0) {
              pwVar10 = L"";
              iVar7 = 0;
            }
            else {
              pwVar10 = *(wchar_t **)pFVar11;
            }
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      (&pFVar2->AdditionalAssetScanPaths,uVar8,(FString *)pFVar11);
          }
          pFVar11 = pFVar11 + 0x10;
        }
        (**(code **)(this->_padding_ + 0x2f8))(this,&local_40);
        iVar1 = (int)local_38;
        pFVar11 = local_40.Data + (longlong)(int)local_38 * 0x10;
        FVar12.Data = local_40.Data;
        while( true ) {
          if ((int)local_38 != iVar1) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_58);
          }
          if (FVar12.Data == pFVar11) break;
          if (*(int *)&(pFVar2->RealAssetScanPaths).Elements.field_0x8 !=
              *(int *)&(pFVar2->RealAssetScanPaths).Elements.field_0x34) {
            iVar7 = *(int *)(FVar12.Data + 8) + -1;
            if (*(int *)(FVar12.Data + 8) == 0) {
              pwVar10 = L"";
              iVar7 = 0;
            }
            else {
              pwVar10 = *(wchar_t **)FVar12.Data;
            }
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      (&pFVar2->RealAssetScanPaths,uVar8,(FString *)FVar12.Data);
          }
          FVar12.Data = FVar12.Data + 0x10;
        }
        DestructItems<FString,int>((FString *)local_40.Data,(int)local_38);
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
      }
    }
  }
  return;
}

// ScanPathForPrimaryAssets @ 1475f7000

int __thiscall
UAssetManager::ScanPathForPrimaryAssets
          (UAssetManager *this,FPrimaryAssetType param_1,FString *param_2,UClass *param_3,
          bool param_4,bool param_5,bool param_6)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  local_28.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar3 = (longlong)local_28.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar1 = *(code **)(this->_padding_ + 0x2b0);
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_38,1,&local_2c);
  ConstructItems<FString,FString,int>(local_38.Data,&local_28,1);
  iVar2 = (*pcVar1)(this,param_1.Name,&local_38,param_3,param_4,param_5,param_6);
  DestructItems<FString,int>((FString *)local_38.Data,local_30);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return iVar2;
}

// ScanPathsForPrimaryAssets @ 1475f7170

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UAssetManager::ScanPathsForPrimaryAssets
          (UAssetManager *this,FPrimaryAssetType param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,UClass *param_3,bool param_4,
          bool param_5,bool param_6)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar10;
  FPrimaryAssetTypeData *pFVar11;
  FPrimaryAssetTypeData *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  ForAnyElementType FVar16;
  FAssetData *pFVar17;
  undefined1 auVar18 [8];
  int iVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
  *this_00;
  FAssetData *this_01;
  bool bVar22;
  FName local_res10;
  undefined1 local_200 [16];
  undefined1 local_1f0 [8];
  FAssetData *local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1c0;
  FString *local_1b0;
  undefined8 local_1a8;
  FString *local_1a0;
  undefined8 local_198;
  UClass *local_190;
  undefined4 local_188;
  TDelegateBase<FNotThreadSafeDelegateMode> local_180;
  FName local_168;
  longlong local_160;
  TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
  *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [4];
  FName local_13c;
  TRawPtrProxy<FPrimaryAssetTypeData> local_130;
  FMemScope local_128;
  FString local_120;
  TSharedPtr<FPrimaryAssetTypeData,1> local_108;
  FPrimaryAssetTypeData *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FName *local_a8;
  FPrimaryAssetTypeData **local_a0;
  FName local_98;
  FName local_90;
  FPrimaryAssetTypeData *local_88;
  FPrimaryAssetTypeData **local_80;
  FPrimaryAssetTypeData *local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_70;
  UClass *local_68;
  bool local_60;
  undefined1 local_5f;
  FString local_58;
  FString local_48;
  
  local_res10 = param_1.Name;
  FLLMScope::FLLMScope
            ((FLLMScope *)(local_200 + 0xc),LLMTagDeclaration_AssetManager.UniqueName,false,None,
             Default,true);
  local_13c = LLMTagDeclaration_AssetManager.UniqueName;
  FMemScope::FMemScope(&local_128,&local_13c,true);
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1282,"UAssetManager::ScanPathsForPrimaryAssets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
               ,0x502);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1282);
  }
  if (param_5 == false) {
    this_00 = (TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
               *)&this->AssetTypeMap;
    local_158 = this_00;
    pTVar10 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
              ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                      *)this_00,local_res10);
    if ((param_3 == (UClass *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x50b,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    if (pTVar10 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
      if (6 < (byte)LogAssetManager._0_1_) {
        iVar7 = param_2->ArrayNum;
        pFVar20 = (param_2->AllocatorInstance).Data;
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        iVar19 = 3;
        if (param_2->ArrayNum < 3) {
          iVar19 = param_2->ArrayNum;
        }
        if (iVar19 < iVar7) {
          iVar7 = iVar19;
        }
        iVar19 = 0;
        if (0 < iVar7) {
          iVar19 = iVar7;
        }
        if ((iVar19 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        pFVar21 = pFVar20 + (longlong)iVar19 * 0x10;
        local_1d8._8_8_ = (TSharedRef<FPrimaryAssetTypeData,1> *)0x0;
        local_1c8 = 0;
        bVar6 = true;
        for (; pFVar20 != pFVar21; pFVar20 = pFVar20 + 0x10) {
          if (bVar6) {
            bVar6 = false;
          }
          else {
            ::FString::AppendChars((FString *)(local_1d8 + 8),L", ",2);
          }
          iVar7 = *(int *)(pFVar20 + 8) + -1;
          if (*(int *)(pFVar20 + 8) == 0) {
            iVar7 = 0;
          }
          ::FString::AppendChars((FString *)(local_1d8 + 8),*(wchar_t **)pFVar20,iVar7);
        }
        ::FName::ToString(&local_res10,&local_120);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        this_00 = local_158;
        if ((TSharedRef<FPrimaryAssetTypeData,1> *)local_1d8._8_8_ !=
            (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
          FMemory::Free((void *)local_1d8._8_8_);
          this_00 = local_158;
        }
      }
      pFVar12 = (FPrimaryAssetTypeData *)0x0;
      pFVar11 = ::operator_new(0x1c8);
      if (pFVar11 != (FPrimaryAssetTypeData *)0x0) {
        pFVar12 = FPrimaryAssetTypeData::FPrimaryAssetTypeData
                            (pFVar11,local_res10,param_3,param_4,false);
      }
      local_130.Object = pFVar12;
      TSharedPtr<FPrimaryAssetTypeData,1>::
      TSharedPtr<FPrimaryAssetTypeData,1><FPrimaryAssetTypeData>(&local_108,&local_130);
      if ((local_108.Object == (FPrimaryAssetTypeData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      local_f8 = local_108.Object;
      pTStack_f0 = local_108.SharedReferenceCount.ReferenceController;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_108.Object == (FPrimaryAssetTypeData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      local_a8 = &local_res10;
      local_a0 = &local_f8;
      TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FPrimaryAssetTypeData,1>_&&>_>
                (this_00,(TPairInitializer<FName_const_&,TSharedRef<FPrimaryAssetTypeData,1>_&&> *)
                         local_1d8,(bool *)&local_a8);
      pTVar10 = (TSharedRef<FPrimaryAssetTypeData,1> *)
                (*(longlong *)&this_00->Elements + (longlong)(int)local_1d8._0_4_ * 0x20 + 8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      if ((pTVar10 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FoundType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                             ,0x51a,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    pFVar11 = pTVar10->Object;
    pUVar2 = (pFVar11->Info).AssetBaseClassLoaded.field0_0x0.DebugPtr;
    if (pUVar2 == (UClass *)0x0) {
      bVar6 = param_3 == (UClass *)0x0;
    }
    else {
      bVar6 = pUVar2 == param_3;
    }
    if (((bVar6) && ((pFVar11->Info).bHasBlueprintClasses == param_4)) &&
       ((pFVar11->Info).bIsEditorOnly == false)) {
      iVar7 = param_2->ArrayNum;
      pFVar20 = (param_2->AllocatorInstance).Data;
      pFVar21 = pFVar20 + (longlong)iVar7 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar7) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&param_5);
        }
        if (pFVar20 == pFVar21) break;
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                  (&(pFVar11->Info).AssetScanPaths,(FString *)pFVar20);
        if (this->bScanningFromInitialConfig == false) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (&pFVar11->AdditionalAssetScanPaths,(FString *)local_1f0,(bool *)pFVar20);
        }
        pFVar20 = pFVar20 + 0x10;
      }
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = 0;
      local_188 = 0;
      local_1c0.ArrayMax = 0;
      local_1b0 = (FString *)0x0;
      local_1a8 = 0;
      local_1a0 = (FString *)0x0;
      local_198 = 0;
      local_180._0_8_ = 0;
      local_180._8_8_ = 0;
      local_180._16_4_ = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      local_190 = param_3;
      if (&local_1c0 != param_2) {
        DestructItems<FString,int>((FString *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
        uVar8 = param_2->ArrayNum;
        pFVar20 = (param_2->AllocatorInstance).Data;
        local_1c0.ArrayNum = uVar8;
        if ((uVar8 == 0) && (local_1c0.ArrayMax == 0)) {
          local_1c0.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar8,local_1c0.ArrayMax,&local_1c0.AllocatorInstance,uVar8,
                     &local_1c0.ArrayMax);
          ConstructItems<FString,FString,int>
                    (local_1c0.AllocatorInstance.Data,(FString *)pFVar20,uVar8);
        }
      }
      local_188._0_2_ = CONCAT11(param_6,param_4);
      (**(code **)(this->_padding_ + 0x2f8))(this,&local_1c0);
      iVar7 = local_1c0.ArrayNum;
      uVar13 = (ulonglong)local_1c0.ArrayNum;
      pFVar20 = local_1c0.AllocatorInstance.Data + uVar13 * 0x10;
      local_188._0_3_ = CONCAT12(1,(undefined2)local_188);
      FVar16.Data = local_1c0.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar13 != iVar7) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_200 + 8);
        }
        if (FVar16.Data == pFVar20) break;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&pFVar11->RealAssetScanPaths,(FString *)local_200,(bool *)FVar16.Data);
        uVar13 = (ulonglong)(uint)local_1c0.ArrayNum;
        FVar16.Data = FVar16.Data + 0x10;
      }
      iVar19 = 0;
      local_1e8 = (FAssetData *)0x0;
      local_1e0 = 0;
      (**(code **)(this->_padding_ + 0x4b8))(this,&local_1e8,&local_1c0);
      iVar7 = (int)local_1e0;
      uVar13 = (ulonglong)(int)local_1e0;
      auVar18 = (undefined1  [8])((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_200._0_8_ = local_1e8 + uVar13;
      pFVar17 = (FAssetData *)local_200._0_8_;
      this_01 = local_1e8;
      local_1f0 = auVar18;
LAB_1475f7790:
      if ((int)uVar13 != iVar7) {
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_200 + 9);
      }
      if (this_01 == pFVar17) goto LAB_1475f7ae7;
      bVar6 = FAssetData::IsTopLevelAsset(this_01);
      if (bVar6) {
        (**(code **)(this->_padding_ + 0x470))(this,&local_168,this_01,local_res10);
        local_150 = 0;
        pFVar17 = (FAssetData *)local_200._0_8_;
        if ((local_168 != (FName)0x0) && (local_160 != 0)) {
          if (local_168 == SuppressionType.Name) goto LAB_1475f7a39;
          if (local_168 != local_res10) goto LAB_1475f7832;
          iVar19 = iVar19 + 1;
          (**(code **)(this->_padding_ + 0x548))(this,&local_168,this_01,0);
          uVar13 = local_1e0 & 0xffffffff;
          this_01 = this_01 + 1;
          pFVar17 = (FAssetData *)local_200._0_8_;
          goto LAB_1475f7790;
        }
LAB_1475f7832:
        if (local_168 == SuppressionType.Name) goto LAB_1475f7a39;
        local_148 = 0;
        if ((local_168 == (FName)0x0) || (local_160 == 0)) {
          if (2 < (byte)LogAssetManager._0_1_) {
            ::FName::ToString(&local_res10,&local_b8);
            FAssetData::GetObjectPathString(this_01,&local_48);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            pFVar17 = (FAssetData *)local_200._0_8_;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              uVar13 = local_1e0 & 0xffffffff;
              this_01 = this_01 + 1;
              pFVar17 = (FAssetData *)local_200._0_8_;
              goto LAB_1475f7790;
            }
          }
        }
        else {
          if ((*(int *)(*(longlong *)auVar18 + 0x9d4c) < ::_TSS3) &&
             (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
            atexit(`UAssetManager::ScanPathsForPrimaryAssets'::__l88::
                   _dynamic_atexit_destructor_for__IssuedWarnings__);
            _Init_thread_footer(&::_TSS3);
          }
          FVar5 = local_168;
          FVar4 = local_res10;
          local_98 = local_res10;
          local_90 = local_168;
          uVar8 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
          uVar8 = FVar4.Number + uVar8;
          uVar9 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
          if (IssuedWarnings.Elements._8_4_ != IssuedWarnings.Elements._52_4_) {
            FVar15 = (ForElementType<FSetElementId>)0x154c26f98;
            if (IssuedWarnings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar15 = IssuedWarnings.Hash.SecondaryData;
            }
            iVar1 = *(int *)((longlong)FVar15 +
                            (ulonglong)
                            (IssuedWarnings.HashSize - 1U &
                            (FVar5.Number + uVar8 * 0x40 + (uVar8 >> 2) + uVar9 + 0x9e3779b9 ^ uVar8
                            )) * 4);
            while (iVar1 != -1) {
              lVar14 = (longlong)iVar1;
              if ((*(FName *)(IssuedWarnings.Elements._0_8_ + lVar14 * 0x18) == FVar4) &&
                 (*(FName *)(IssuedWarnings.Elements._0_8_ + 8 + lVar14 * 0x18) == FVar5)) {
                pFVar17 = (FAssetData *)local_200._0_8_;
                auVar18 = local_1f0;
                if (iVar1 != -1) goto LAB_1475f7a39;
                break;
              }
              iVar1 = *(int *)(IssuedWarnings.Elements._0_8_ + 0x10 + lVar14 * 0x18);
            }
          }
          ::FName::ToString(&this_01->AssetName,&local_58);
          ::FName::ToString(&local_168,&local_d8);
          ::FName::ToString(&local_res10,&local_e8);
          ::FString::PrintfImpl
                    (&local_c8,L"Ignoring PrimaryAssetType %s - Conflicts with %s - Asset: %s");
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogAssetManager._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
          }
          TSet<TTuple<FPrimaryAssetType,FPrimaryAssetType>,DefaultKeyFuncs<TTuple<FPrimaryAssetType,FPrimaryAssetType>,0>,FDefaultSetAllocator>
          ::Emplace<TTuple<FPrimaryAssetType,FPrimaryAssetType>_const_&>
                    (&IssuedWarnings,(TTuple<FPrimaryAssetType,FPrimaryAssetType> *)local_140,
                     (bool *)&local_98);
          pFVar17 = (FAssetData *)local_200._0_8_;
          auVar18 = local_1f0;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            pFVar17 = (FAssetData *)local_200._0_8_;
            auVar18 = local_1f0;
          }
        }
      }
LAB_1475f7a39:
      uVar13 = local_1e0 & 0xffffffff;
      this_01 = this_01 + 1;
      goto LAB_1475f7790;
    }
    local_80 = &local_78;
    local_60 = param_4;
    local_5f = 0;
    local_88 = pFVar11;
    local_78 = pFVar11;
    local_70 = param_2;
    local_68 = param_3;
    `UAssetManager::ScanPathsForPrimaryAssets'::__l43::<lambda_2>::operator()(&local_88);
  }
  iVar19 = 0;
LAB_1475f7bb9:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_128);
  FLLMScope::~FLLMScope((FLLMScope *)(local_200 + 0xc));
  return iVar19;
LAB_1475f7ae7:
  (**(code **)(this->_padding_ + 0x550))(this);
  DestructItems<FAssetData,int>(local_1e8,(int)local_1e0);
  if (local_1e8 != (FAssetData *)0x0) {
    FMemory::Free(local_1e8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_180);
  DestructItems<FString,int>(local_1a0,(int)local_198);
  if (local_1a0 != (FString *)0x0) {
    FMemory::Free(local_1a0);
  }
  DestructItems<FString,int>(local_1b0,(int)local_1a8);
  if (local_1b0 != (FString *)0x0) {
    FMemory::Free(local_1b0);
  }
  DestructItems<FString,int>((FString *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
  if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  goto LAB_1475f7bb9;
}

// ScanPathsSynchronous @ 1475f7c50

void __thiscall
UAssetManager::ScanPathsSynchronous
          (UAssetManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  short *psVar2;
  void *_Src;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  FString *pFVar12;
  FName *pFVar13;
  FModuleManager *pFVar14;
  IModuleInterface *pIVar15;
  IAssetRegistry *pIVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar22;
  FScriptContainerElement *pFVar23;
  int *piVar24;
  FScriptContainerElement *pFVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  FString local_f8;
  FScriptContainerElement *local_e8;
  FString local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  uint local_c0;
  FString local_b8;
  FString local_a8;
  FScriptContainerElement *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FName local_60;
  FName local_58 [3];
  
  pFVar23 = (param_1->AllocatorInstance).Data;
  bVar28 = false;
  bVar7 = false;
  local_c0 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_c0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98 = pFVar23 + uVar17 * 0x10;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  bVar26 = false;
  bVar27 = false;
LAB_1475f7cad:
  pFVar19 = local_98;
  local_e8 = pFVar23;
  if (param_1->ArrayNum != (int)uVar17) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (pFVar23 == pFVar19) {
    if (0 < local_d0.ArrayNum) {
      pIVar16 = this->CachedAssetRegistry;
      if (pIVar16 == (IAssetRegistry *)0x0) {
        pFVar13 = ::FName::FName(&local_60,L"AssetRegistry");
        FVar3 = *pFVar13;
        pFVar14 = FModuleManager::Get();
        pIVar15 = FModuleManager::LoadModuleChecked(pFVar14,FVar3);
        pIVar16 = (IAssetRegistry *)(**(code **)((longlong)*pIVar15 + 0x40))(pIVar15);
        this->CachedAssetRegistry = pIVar16;
      }
      (**(code **)((longlong)*pIVar16 + 0x218))(pIVar16,&local_d0,0,0);
    }
    if (0 < (int)local_108) {
      pIVar16 = this->CachedAssetRegistry;
      if (pIVar16 == (IAssetRegistry *)0x0) {
        pFVar13 = ::FName::FName(local_58,L"AssetRegistry");
        FVar3 = *pFVar13;
        pFVar14 = FModuleManager::Get();
        pIVar15 = FModuleManager::LoadModuleChecked(pFVar14,FVar3);
        pIVar16 = (IAssetRegistry *)(**(code **)((longlong)*pIVar15 + 0x40))(pIVar15);
        this->CachedAssetRegistry = pIVar16;
      }
      (**(code **)((longlong)*pIVar16 + 0x220))(pIVar16,&local_110,0);
    }
    DestructItems<FString,int>((FString *)local_110.Data,(int)local_108);
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    return;
  }
  psVar2 = *(short **)&pFVar23->field_0x0;
  for (psVar11 = psVar2; psVar11 != psVar2 + *(int *)(pFVar23 + 8); psVar11 = psVar11 + 1) {
    if (*psVar11 == 0x2e) {
      piVar24 = &(this->AlreadyScannedDirectories).ArrayNum;
      if ((int)((longlong)psVar11 - (longlong)psVar2 >> 1) != -1) {
        FPackageName::ObjectPathToPackageName(&local_b8,(FString *)pFVar23);
        pFVar23 = (this->AlreadyScannedDirectories).AllocatorInstance.Data;
        iVar9 = *piVar24;
        pFVar19 = pFVar23 + (longlong)iVar9 * 0x10;
        goto LAB_1475f7d85;
      }
      break;
    }
  }
  piVar24 = &(this->AlreadyScannedDirectories).ArrayNum;
  pTVar22 = &this->AlreadyScannedDirectories;
  iVar9 = *piVar24;
  pFVar19 = (pTVar22->AllocatorInstance).Data;
  pFVar25 = pFVar19 + (longlong)iVar9 * 0x10;
  while( true ) {
    if (*piVar24 != iVar9) {
      local_100[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_100);
    }
    bVar29 = bVar27;
    if (pFVar19 == pFVar25) break;
    iVar8 = *(int *)(pFVar23 + 8);
    if (iVar8 == *(int *)(pFVar19 + 8)) {
      if (1 < iVar8) {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)&pFVar23->field_0x0,*(wchar_t **)&pFVar19->field_0x0);
        bVar28 = iVar8 == 0;
        goto LAB_1475f81c3;
      }
LAB_1475f8218:
      bVar26 = true;
    }
    else {
      bVar28 = iVar8 + *(int *)(pFVar19 + 8) == 1;
LAB_1475f81c3:
      if (bVar28) goto LAB_1475f8218;
      bVar7 = true;
      ::FString::ConcatFC(&local_80,(FString *)pFVar19,L"/");
      iVar8 = local_80.Data.ArrayNum;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (iVar8 != 0) {
        FVar18.Data = local_80.Data.AllocatorInstance.Data;
      }
      iVar5 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar5 = 0;
      }
      bVar28 = ::FString::StartsWith((FString *)pFVar23,(wchar_t *)FVar18.Data,iVar5,IgnoreCase);
      if (bVar28) goto LAB_1475f8218;
      bVar26 = false;
    }
    if ((bVar7) &&
       (bVar7 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pFVar23 = local_e8;
    bVar28 = bVar7;
    if (bVar26) goto LAB_1475f8199;
    pFVar19 = pFVar19 + 0x10;
  }
  pFVar19 = (pTVar22->AllocatorInstance).Data;
  if (((pFVar19 <= pFVar23) &&
      (pFVar23 < pFVar19 + (longlong)(this->AlreadyScannedDirectories).ArrayMax * 0x10)) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar28)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *piVar24;
  piVar1 = &(this->AlreadyScannedDirectories).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar22->AllocatorInstance,piVar1);
    *piVar24 = iVar9;
  }
  *piVar24 = iVar9 + 1;
  ::FString::FString((FString *)((pTVar22->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                     (FString *)pFVar23);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  ::FString::FString(&local_70,L"");
  local_e0.Data.ArrayNum = *(int *)(pFVar23 + 8);
  lVar21 = (longlong)local_e0.Data.ArrayNum;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_e0.Data.ArrayNum == 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,0,(ForAnyElementType *)&local_e0,0,&local_e0.Data.ArrayMax);
  }
  else {
    _Src = *(void **)&pFVar23->field_0x0;
    uVar10 = local_e0.Data.ArrayNum + 1;
    if ((int)uVar10 < local_e0.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,(ForAnyElementType *)&local_e0,local_e0.Data.ArrayNum,
               &local_e0.Data.ArrayMax);
    memcpy(local_e0.Data.AllocatorInstance.Data,_Src,lVar21 * 2);
    pFVar23 = local_e8;
  }
  ::FString::PathAppend(&local_e0,L"",0);
  bVar28 = FPackageName::TryConvertLongPackageNameToFilename(&local_e0,&local_a8,&local_70);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar28) {
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&local_d0,(FString *)pFVar23);
  }
  bVar28 = bVar7;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  goto LAB_1475f8199;
LAB_1475f7d85:
  if (*piVar24 != iVar9) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
  }
  if (pFVar23 == pFVar19) {
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    pFVar12 = FPackageName::GetAssetPackageExtension();
    bVar29 = FPackageName::TryConvertLongPackageNameToFilename(&local_b8,&local_f8,pFVar12);
    FVar18.Data = local_110.Data;
    if (!bVar29) goto LAB_1475f7fec;
    pFVar23 = local_110.Data + (longlong)(int)local_108 * 0x10;
    if (local_110.Data == pFVar23) goto LAB_1475f7ef5;
    FVar20.Data = local_110.Data;
    iVar9 = local_f8.Data.ArrayNum;
    goto LAB_1475f7ea4;
  }
  if (local_b8.Data.ArrayNum == *(int *)(pFVar23 + 8)) {
    if (1 < local_b8.Data.ArrayNum) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                         *(wchar_t **)&pFVar23->field_0x0);
      bVar29 = iVar8 == 0;
      goto LAB_1475f7dcd;
    }
LAB_1475f7e27:
    bVar6 = true;
  }
  else {
    bVar29 = *(int *)(pFVar23 + 8) + local_b8.Data.ArrayNum == 1;
LAB_1475f7dcd:
    if (bVar29) goto LAB_1475f7e27;
    bVar26 = true;
    ::FString::ConcatFC(&local_90,(FString *)pFVar23,L"/");
    iVar8 = local_90.Data.ArrayNum;
    FVar18.Data = (FScriptContainerElement *)L"";
    if (iVar8 != 0) {
      FVar18.Data = local_90.Data.AllocatorInstance.Data;
    }
    iVar5 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar5 = 0;
    }
    bVar29 = ::FString::StartsWith(&local_b8,(wchar_t *)FVar18.Data,iVar5,IgnoreCase);
    bVar7 = bVar28;
    bVar27 = bVar26;
    if (bVar29) goto LAB_1475f7e27;
    bVar6 = false;
  }
  if ((bVar26) &&
     (bVar26 = false, bVar7 = bVar28, bVar27 = bVar26,
     local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  bVar29 = bVar27;
  if (bVar6) goto LAB_1475f8187;
  pFVar23 = pFVar23 + 0x10;
  goto LAB_1475f7d85;
LAB_1475f7ea4:
  do {
    iVar8 = *(int *)(FVar20.Data + 8);
    if (iVar8 == iVar9) {
      if (1 < iVar8) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar20.Data,(wchar_t *)local_f8.Data.AllocatorInstance.Data)
        ;
        bVar29 = iVar9 == 0;
        iVar9 = local_f8.Data.ArrayNum;
        goto LAB_1475f7eca;
      }
LAB_1475f7edc:
      if ((int)((longlong)FVar20.Data - (longlong)FVar18.Data >> 4) != -1) goto LAB_1475f7fec;
      break;
    }
    bVar29 = iVar8 + iVar9 == 1;
LAB_1475f7eca:
    if (bVar29) goto LAB_1475f7edc;
    FVar20.Data = FVar20.Data + 0x10;
  } while (FVar20.Data != pFVar23);
LAB_1475f7ef5:
  iVar9 = (int)local_108;
  if ((local_110.Data <= (FScriptContainerElement *)&local_f8) &&
     ((FScriptContainerElement *)&local_f8 < local_110.Data + (longlong)local_108._4_4_ * 0x10)) {
    bVar29 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar29) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (int)local_108;
  }
  if (iVar9 == local_108._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_110,(int *)((longlong)&local_108 + 4));
  }
  FVar18.Data = local_f8.Data.AllocatorInstance.Data;
  pFVar23 = local_110.Data + (longlong)iVar9 * 0x10;
  local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
  *(FScriptContainerElement **)pFVar23 = (FScriptContainerElement *)0x0;
  lVar21 = (longlong)local_f8.Data.ArrayNum;
  *(int *)(pFVar23 + 8) = local_f8.Data.ArrayNum;
  if (local_f8.Data.ArrayNum == 0) {
    *(int *)(pFVar23 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar23,local_f8.Data.ArrayNum,
               (int *)(pFVar23 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar23,FVar18.Data,lVar21 * 2);
  }
LAB_1475f7fec:
  pFVar12 = FPackageName::GetMapPackageExtension();
  bVar29 = FPackageName::TryConvertLongPackageNameToFilename(&local_b8,&local_f8,pFVar12);
  FVar18.Data = local_110.Data;
  if (bVar29) {
    pFVar23 = local_110.Data + (longlong)(int)local_108 * 0x10;
    if (local_110.Data != pFVar23) {
      FVar20.Data = local_110.Data;
      iVar9 = local_f8.Data.ArrayNum;
      do {
        iVar8 = *(int *)(FVar20.Data + 8);
        if (iVar8 == iVar9) {
          if (1 < iVar8) {
            iVar9 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar20.Data,
                               (wchar_t *)local_f8.Data.AllocatorInstance.Data);
            bVar29 = iVar9 == 0;
            iVar9 = local_f8.Data.ArrayNum;
            goto LAB_1475f8056;
          }
LAB_1475f8068:
          if ((int)((longlong)FVar20.Data - (longlong)FVar18.Data >> 4) != -1) goto LAB_1475f8178;
          break;
        }
        bVar29 = iVar8 + iVar9 == 1;
LAB_1475f8056:
        if (bVar29) goto LAB_1475f8068;
        FVar20.Data = FVar20.Data + 0x10;
      } while (FVar20.Data != pFVar23);
    }
    iVar9 = (int)local_108;
    if ((local_110.Data <= (FScriptContainerElement *)&local_f8) &&
       ((FScriptContainerElement *)&local_f8 < local_110.Data + (longlong)local_108._4_4_ * 0x10)) {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar29) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (int)local_108;
    }
    if (iVar9 == local_108._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_110,(int *)((longlong)&local_108 + 4));
    }
    FVar18.Data = local_f8.Data.AllocatorInstance.Data;
    pFVar23 = local_110.Data + (longlong)iVar9 * 0x10;
    local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
    *(FScriptContainerElement **)pFVar23 = (FScriptContainerElement *)0x0;
    lVar21 = (longlong)local_f8.Data.ArrayNum;
    *(int *)(pFVar23 + 8) = local_f8.Data.ArrayNum;
    if (local_f8.Data.ArrayNum == 0) {
      *(int *)(pFVar23 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar23,local_f8.Data.ArrayNum,
                 (int *)(pFVar23 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar23,FVar18.Data,lVar21 * 2);
    }
  }
LAB_1475f8178:
  bVar29 = bVar27;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_1475f8187:
  pFVar23 = local_e8;
  bVar27 = bVar26;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    pFVar23 = local_e8;
  }
LAB_1475f8199:
  pFVar23 = pFVar23 + 0x10;
  uVar17 = (ulonglong)local_c0;
  bVar26 = bVar27;
  bVar27 = bVar29;
  goto LAB_1475f7cad;
}

// ScanPrimaryAssetRulesFromConfig @ 1475f8510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAssetManager::ScanPrimaryAssetRulesFromConfig(UAssetManager *this)

{
  int iVar1;
  UClass *this_00;
  void *pvVar2;
  FName *this_01;
  FScriptContainerElement *pFVar3;
  UAssetManagerSettings *pUVar4;
  FScriptContainerElement *pFVar5;
  FName *pFVar6;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [4];
  undefined8 local_284;
  FString local_278;
  uint local_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pUVar4 = this->CachedSettings;
  if (pUVar4 == (UAssetManagerSettings *)0x0) {
    this_00 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (UAssetManagerSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    this->CachedSettings = pUVar4;
  }
  iVar1 = (pUVar4->PrimaryAssetRules).ArrayNum;
  this_01 = (FName *)(pUVar4->PrimaryAssetRules).AllocatorInstance.Data;
  pFVar6 = (FName *)((longlong)this_01 + (longlong)iVar1 * 0x1c);
  do {
    while( true ) {
      if ((pUVar4->PrimaryAssetRules).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPrimaryAssetRulesOverride_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_288);
      }
      if (this_01 == pFVar6) {
        iVar1 = (pUVar4->CustomPrimaryAssetRules).ArrayNum;
        pFVar3 = (pUVar4->CustomPrimaryAssetRules).AllocatorInstance.Data;
        pFVar5 = pFVar3 + (longlong)iVar1 * 0x38;
        while( true ) {
          if ((pUVar4->CustomPrimaryAssetRules).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FPrimaryAssetRulesCustomOverride_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_288);
          }
          if (pFVar3 == pFVar5) break;
          (**(code **)(this->_padding_ + 0x528))(this,pFVar3);
          pFVar3 = pFVar3 + 0x38;
        }
        return;
      }
      if (*this_01 == PrimaryAssetLabelType.Name) break;
      local_268 = (this_01->ComparisonIndex).Value;
      uStack_264 = this_01->Number;
      uStack_260 = this_01[1].ComparisonIndex.Value;
      uStack_25c = this_01[1].Number;
      (**(code **)(this->_padding_ + 0x438))(this,&local_268,this_01 + 2);
LAB_1475f86d5:
      this_01 = (FName *)&this_01[3].Number;
    }
    if ((byte)LogAssetManager._0_1_ < 2) goto LAB_1475f86d5;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    local_258.Base = local_238;
    local_258.CurPos = local_238;
    local_258.End = (wchar_t *)local_38;
    local_284 = 0;
    if ((*this_01 != (FName)0x0) && (this_01[1] != (FName)0x0)) {
      ::FName::AppendString(this_01,&local_258);
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      pvVar2 = FGenericPlatformString::Memcpy(local_258.CurPos,L":",2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
      ::FName::AppendString(this_01 + 1,&local_258);
    }
    ::FString::ConstructFromPtrSize
              (&local_278,local_258.Base,
               (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
    if (local_278.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1475f86d5;
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
    this_01 = (FName *)&this_01[3].Number;
  } while( true );
}

// ScanPrimaryAssetTypesFromConfig @ 1475f8750

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAssetManager::ScanPrimaryAssetTypesFromConfig(UAssetManager *this)

{
  int *piVar1;
  FNameEntryId FVar2;
  FName FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FModuleManager *this_00;
  IModuleInterface *pIVar13;
  IAssetRegistry *pIVar14;
  UClass *this_01;
  FName *pFVar15;
  ulonglong uVar16;
  FName *pFVar17;
  undefined1 *puVar18;
  FName *pFVar19;
  FName *pFVar20;
  UAssetManagerSettings *pUVar21;
  bool bVar22;
  undefined1 local_res10 [8];
  bool local_res18;
  uint local_res20;
  int *in_stack_fffffffffffffe98;
  FName local_158;
  FName local_150;
  FSoftObjectPath local_148;
  FName local_128;
  undefined1 local_120;
  FScriptContainerElement local_11f;
  ForAnyElementType local_118;
  uint local_110;
  int local_10c;
  ForAnyElementType local_108;
  uint local_100;
  int local_fc;
  FName local_f8;
  uint local_f0;
  ForAnyElementType local_e8;
  uint local_e0;
  int local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FName local_b0;
  FString local_a8;
  FScopedBootTiming local_98 [3];
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3804,"UAssetManager::ScanPrimaryAssetTypesFromConfig",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
               ,0xedc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3804);
  }
  FScopedBootTiming::FScopedBootTiming(local_98,"UAssetManager::ScanPrimaryAssetTypesFromConfig");
  if (this->CachedAssetRegistry == (IAssetRegistry *)0x0) {
    pFVar12 = ::FName::FName(&local_b0,L"AssetRegistry");
    FVar3 = *pFVar12;
    this_00 = FModuleManager::Get();
    pIVar13 = FModuleManager::LoadModuleChecked(this_00,FVar3);
    pIVar14 = (IAssetRegistry *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13);
    this->CachedAssetRegistry = pIVar14;
  }
  pUVar21 = this->CachedSettings;
  if (pUVar21 == (UAssetManagerSettings *)0x0) {
    this_01 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    pUVar21 = (UAssetManagerSettings *)(this_01->ClassDefaultObject).field0_0x0.DebugPtr;
    this->CachedSettings = pUVar21;
  }
  this->NumBulkScanRequests = this->NumBulkScanRequests + 1;
  if (this->NumBulkScanRequests == 1) {
    (**(code **)(this->_padding_ + 0x2d0))(this);
  }
  local_res18 = this->bScanningFromInitialConfig;
  this->bScanningFromInitialConfig = true;
  QueryPerformanceCounter(&local_c8);
  dVar8 = __real_3fa0e56040000000;
  dVar7 = __real_4170000000000000;
  local_res20 = (pUVar21->PrimaryAssetTypesToScan).ArrayNum;
  uVar16 = (ulonglong)(int)local_res20;
  pFVar20 = (FName *)(pUVar21->PrimaryAssetTypesToScan).AllocatorInstance.Data;
  pFVar12 = pFVar20 + 0xb;
  dVar6 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  pFVar19 = pFVar20 + uVar16 * 0x11;
  do {
    if ((pUVar21->PrimaryAssetTypesToScan).ArrayNum != (int)uVar16) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPrimaryAssetTypeInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar20 == pFVar19) {
      if ((this->NumBulkScanRequests < 1) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1539323056344791640>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                              ,0x5a8,"NumBulkScanRequests > 0"), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar1 = &this->NumBulkScanRequests;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(this->_padding_ + 0x2d8))(this);
      }
      this->bScanningFromInitialConfig = local_res18;
      FScopedBootTiming::~FScopedBootTiming(local_98);
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_158 = *pFVar20;
    local_150 = pFVar12[0xfffffffffffffff6];
    FSoftObjectPath::FSoftObjectPath(&local_148,(FSoftObjectPath *)(pFVar12 + 0xfffffffffffffff7));
    local_128 = pFVar12[0xfffffffffffffffb];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_128);
    }
    local_120 = *(undefined1 *)&pFVar12[0xfffffffffffffffc].ComparisonIndex.Value;
    FVar2.Value = pFVar12[0xfffffffffffffffe].ComparisonIndex.Value;
    FVar3 = pFVar12[0xfffffffffffffffd];
    local_11f = *(FScriptContainerElement *)((longlong)(pFVar12 + 0xfffffffffffffffc) + 1);
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = FVar2.Value;
    if (FVar2.Value == 0) {
      local_10c = 0;
    }
    else {
      in_stack_fffffffffffffe98 = &local_10c;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,FVar2.Value,0,&local_118,FVar2.Value,in_stack_fffffffffffffe98);
      ConstructItems<FDirectoryPath,FDirectoryPath,int>
                (local_118.Data,(FDirectoryPath *)FVar3,FVar2.Value);
    }
    FVar2.Value = (pFVar12->ComparisonIndex).Value;
    FVar3 = pFVar12[0xffffffffffffffff];
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = FVar2.Value;
    if (FVar2.Value == 0) {
      local_fc = 0;
    }
    else {
      in_stack_fffffffffffffe98 = &local_fc;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,FVar2.Value,0,&local_108,FVar2.Value,in_stack_fffffffffffffe98);
      ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                (local_108.Data,(FSoftObjectPath *)FVar3,FVar2.Value);
    }
    FVar2.Value = pFVar12[4].ComparisonIndex.Value;
    local_f8 = pFVar12[1];
    local_f0 = pFVar12[2].ComparisonIndex.Value;
    FVar3 = pFVar12[3];
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = FVar2.Value;
    if (FVar2.Value == 0) {
      local_dc = 0;
    }
    else {
      in_stack_fffffffffffffe98 = &local_dc;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,FVar2.Value,0,&local_e8,FVar2.Value,in_stack_fffffffffffffe98);
      ConstructItems<FString,FString,int>(local_e8.Data,(FString *)FVar3,FVar2.Value);
    }
    local_d8 = *(undefined1 *)&pFVar12[5].ComparisonIndex.Value;
    local_d4 = *(undefined4 *)((longlong)(pFVar12 + 5) + 4);
    cVar9 = (**(code **)(this->_padding_ + 0x4c8))(this,&local_158);
    FVar3 = local_158;
    if (cVar9 != '\0') {
      if (1 < (byte)LogAssetManager._0_1_) {
        uVar11 = ::GetTypeHash(local_158.ComparisonIndex.Value);
        if (*(int *)&(this->AssetTypeMap).field_0x8 != *(int *)&(this->AssetTypeMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->AssetTypeMap).field_0x40;
          puVar18 = &(this->AssetTypeMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar18 = puVar4;
          }
          uVar11 = *(uint *)(puVar18 +
                            (ulonglong)
                            (*(int *)&(this->AssetTypeMap).field_0x48 - 1U & FVar3.Number + uVar11)
                            * 4);
          if (uVar11 != 0xffffffff) {
            do {
              pFVar17 = (FName *)((longlong)(int)uVar11 * 0x20 + *(longlong *)&this->AssetTypeMap);
              if (*pFVar17 == FVar3) {
                pFVar15 = pFVar17 + 1;
                if (pFVar17 == (FName *)0x0) {
                  pFVar15 = (FName *)0x0;
                }
                if (pFVar15 != (FName *)0x0) {
                  ::FName::ToString(&local_158,&local_a8);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                  }
                }
                break;
              }
              uVar11 = pFVar17[3].ComparisonIndex.Value;
            } while (uVar11 != 0xffffffff);
          }
        }
      }
      in_stack_fffffffffffffe98 = (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffffffffff00)
      ;
      (**(code **)(this->_padding_ + 0x2b0))
                (this,local_158,&local_e8,local_128,local_120,local_11f,in_stack_fffffffffffffe98);
      (**(code **)(this->_padding_ + 0x430))(this,local_158,&local_f8);
      QueryPerformanceCounter(&local_c0);
      if (dVar6 + dVar8 < (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7)
      {
        bVar10 = IsInGameThread();
        FWindowsPlatformApplicationMisc::PumpMessages(bVar10);
        QueryPerformanceCounter(&local_b8);
        dVar6 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
      }
    }
    DestructItems<FString,int>((FString *)local_e8.Data,local_e0);
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_108.Data,local_100);
    if ((FSoftObjectPath *)local_108.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_108.Data);
    }
    DestructItems<FDirectoryPath,int>((FDirectoryPath *)local_118.Data,local_110);
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if (local_148.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.SubPathString.Data.AllocatorInstance.Data);
    }
    uVar16 = (ulonglong)local_res20;
    pFVar20 = pFVar20 + 0x11;
    pFVar12 = pFVar12 + 0x11;
  } while( true );
}

// SearchAssetRegistryPaths @ 1475f8d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UAssetManager::SearchAssetRegistryPaths
          (UAssetManager *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          FAssetManagerSearchRules *param_2)

{
  short *psVar1;
  FName FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar5;
  FAssetManagerSearchRules *pFVar6;
  UAssetManager *this_00;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  FName *pFVar12;
  FModuleManager *this_01;
  IModuleInterface *pIVar13;
  IAssetRegistry *pIVar14;
  UClass *this_02;
  IAssetRegistry *pIVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  short *psVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  bool bVar24;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5 [5];
  ForAnyElementType local_3a0;
  undefined8 local_398;
  FString local_390;
  ForAnyElementType local_380;
  int local_378;
  int local_374;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_370;
  TArray<FString,TSizedDefaultAllocator<32>_> local_368;
  FAssetManagerSearchRules *local_358;
  UAssetManager *local_350;
  FTopLevelAssetPath local_348;
  UAssetManager *local_338;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_330;
  undefined1 *local_328;
  code *local_320;
  UAssetManager **local_318;
  code *local_310;
  UAssetManager **local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FString local_2e0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_2c8;
  undefined8 local_290;
  void *local_288;
  ulonglong local_280;
  FARFilter local_278;
  undefined1 local_128 [88];
  ForAnyElementType local_d0;
  int local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  if (((param_2->AssetBaseClass).field0_0x0.DebugPtr == (UClass *)0x0) ||
     (iVar9 = (param_2->AssetScanPaths).ArrayNum, iVar9 == 0)) {
    iVar9 = 0;
  }
  else {
    pFVar23 = (param_2->AssetScanPaths).AllocatorInstance.Data;
    local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.ArrayNum = 0;
    local_368.ArrayMax = 0;
    local_3a0.Data = (FScriptContainerElement *)0x0;
    local_398 = 0;
    local_380.Data = (FScriptContainerElement *)0x0;
    local_378 = iVar9;
    local_370 = param_1;
    local_358 = param_2;
    local_350 = this;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&local_380,iVar9,&local_374);
    ConstructItems<FString,FString,int>(local_380.Data,(FString *)pFVar23,iVar9);
    if (param_2->bSkipVirtualPathExpansion == false) {
      (**(code **)(this->_padding_ + 0x2f8))(this,&local_380);
    }
    iVar9 = local_378;
    pFVar23 = local_380.Data + (longlong)local_378 * 0x10;
    FVar22.Data = local_380.Data;
LAB_1475f8e40:
    if (local_378 != iVar9) {
      local_3a8 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3a8)
      ;
    }
    pFVar6 = local_358;
    if (FVar22.Data != pFVar23) {
      psVar1 = *(short **)FVar22.Data;
      iVar10 = *(int *)(FVar22.Data + 8);
      for (psVar21 = psVar1; psVar21 != psVar1 + iVar10; psVar21 = psVar21 + 1) {
        if (*psVar21 == 0x2e) {
          iVar8 = (int)((longlong)psVar21 - (longlong)psVar1 >> 1);
          if (iVar8 != -1) {
            ::FString::Mid((FString *)FVar22.Data,&local_390,0,iVar8);
            FVar4.Data = local_3a0.Data;
            pFVar20 = local_3a0.Data + (longlong)(int)local_398 * 0x10;
            if (local_3a0.Data == pFVar20) goto LAB_1475f8f51;
            FVar19.Data = local_3a0.Data;
            iVar10 = local_390.Data.ArrayNum;
            goto LAB_1475f8f00;
          }
          break;
        }
      }
      iVar8 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        pFVar11 = GetNormalizedPackagePath(&local_2e0,(FString *)FVar22.Data,false);
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(&local_368,pFVar11);
        FVar17.Data = local_2e0.Data.AllocatorInstance.Data;
        goto LAB_1475f8ead;
      }
      goto LAB_1475f8eb7;
    }
    FCompiledAssetManagerSearchRules::FCompiledAssetManagerSearchRules
              ((FCompiledAssetManagerSearchRules *)local_128,local_358);
    local_358 = (FAssetManagerSearchRules *)CONCAT44(local_358._4_4_,local_370->ArrayNum);
    FARFilter::FARFilter(&local_278);
    this_00 = local_350;
    pIVar14 = local_350->CachedAssetRegistry;
    if (pIVar14 == (IAssetRegistry *)0x0) {
      pFVar12 = ::FName::FName(&local_300,L"AssetRegistry");
      FVar2 = *pFVar12;
      this_01 = FModuleManager::Get();
      pIVar13 = FModuleManager::LoadModuleChecked(this_01,FVar2);
      pIVar14 = (IAssetRegistry *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13);
      this_00->CachedAssetRegistry = pIVar14;
    }
    FVar22.Data = local_b0.Data;
    if ((pFVar6->AssetBaseClass).field0_0x0.DebugPtr != (UClass *)0x0) {
      if (pFVar6->bHasBlueprintClasses == false) {
        local_278.ClassPaths.ArrayNum = local_a8;
        if ((local_a8 == 0) && (local_278.ClassPaths.ArrayMax == 0)) {
          local_278.bRecursiveClasses = true;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,local_a8,local_278.ClassPaths.ArrayMax,
                     &local_278.ClassPaths.AllocatorInstance,local_a8,&local_278.ClassPaths.ArrayMax
                    );
          if (local_a8 != 0) {
            memcpy(local_278.ClassPaths.AllocatorInstance.Data,FVar22.Data,(longlong)local_a8 << 4);
          }
          local_278.bRecursiveClasses = true;
        }
      }
      else {
        this_02 = Z_Construct_UClass_UBlueprintCore_NoRegister();
        UStruct::GetStructPathName((UStruct *)this_02,&local_348);
        if (((local_278.ClassPaths.AllocatorInstance.Data <= &local_348) &&
            (&local_348 <
             (FTopLevelAssetPath *)
             (local_278.ClassPaths.AllocatorInstance.Data +
             (longlong)local_278.ClassPaths.ArrayMax * 0x10))) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
        if (local_278.ClassPaths.ArrayNum == local_278.ClassPaths.ArrayMax) {
          local_278.ClassPaths.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&local_278.ClassPaths.AllocatorInstance,
                          &local_278.ClassPaths.ArrayMax);
        }
        ((FTopLevelAssetPath *)
        ((longlong)local_278.ClassPaths.AllocatorInstance.Data +
        (longlong)local_278.ClassPaths.ArrayNum * 0x10))->PackageName = local_348.PackageName;
        ((FTopLevelAssetPath *)
        ((longlong)local_278.ClassPaths.AllocatorInstance.Data +
        (longlong)local_278.ClassPaths.ArrayNum * 0x10))->AssetName = local_348.AssetName;
        local_278.bRecursiveClasses = true;
        local_278.ClassPaths.ArrayNum = local_278.ClassPaths.ArrayNum + 1;
        pIVar15 = GetAssetRegistry(this_00);
        local_2c8._16_8_ = 0;
        local_2c8._24_8_ = 0;
        local_290 = 0;
        local_280 = 0;
        local_2c8._0_8_ = 0;
        local_2c8._8_8_ = 0;
        local_2c8._32_8_ = 0;
        local_2c8._40_4_ = 0;
        local_2c8._44_4_ = 0x80;
        local_2c8._48_4_ = 0xffffffff;
        local_2c8._52_4_ = 0;
        local_288 = (void *)0x0;
        (**(code **)((longlong)*pIVar15 + 0x140))(pIVar15,&local_b0,&local_2c8,&local_a0);
        local_280 = local_280 & 0xffffffff00000000;
        if (local_288 != (void *)0x0) {
          FMemory::Free(local_288);
        }
        TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_2c8);
      }
    }
    iVar9 = local_368.ArrayNum;
    uVar16 = (ulonglong)local_368.ArrayNum;
    if ((local_368.ArrayNum < 1) || ((int)local_398 < 1)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    pFVar23 = local_368.AllocatorInstance.Data + uVar16 * 0x10;
    FVar22.Data = local_368.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar16 != iVar9) {
        local_3a7 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3a7);
      }
      if (FVar22.Data == pFVar23) break;
      if (*(int *)(FVar22.Data + 8) == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *(wchar_t **)FVar22.Data;
      }
      pFVar12 = ::FName::FName(&local_2f8,pwVar18);
      if (((local_278.PackagePaths.AllocatorInstance.Data <= pFVar12) &&
          (pFVar12 < (FName *)(local_278.PackagePaths.AllocatorInstance.Data +
                              (longlong)local_278.PackagePaths.ArrayMax * 8))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      if (local_278.PackagePaths.ArrayNum == local_278.PackagePaths.ArrayMax) {
        local_278.PackagePaths.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_278.PackagePaths.AllocatorInstance,
                        &local_278.PackagePaths.ArrayMax);
      }
      FVar22.Data = FVar22.Data + 0x10;
      *(FName *)(local_278.PackagePaths.AllocatorInstance.Data +
                (longlong)local_278.PackagePaths.ArrayNum * 8) = *pFVar12;
      uVar16 = local_368._8_8_ & 0xffffffff;
      local_278.PackagePaths.ArrayNum = local_278.PackagePaths.ArrayNum + 1;
    }
    if (!bVar24) {
      iVar9 = (int)local_398;
      uVar16 = (ulonglong)(int)local_398;
      pFVar23 = local_3a0.Data + uVar16 * 0x10;
      FVar22.Data = local_3a0.Data;
      while( true ) {
        if ((int)uVar16 != iVar9) {
          local_3a6 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_3a6);
        }
        if (FVar22.Data == pFVar23) break;
        if (*(int *)(FVar22.Data + 8) == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *(wchar_t **)FVar22.Data;
        }
        pFVar12 = ::FName::FName(&local_2f0,pwVar18);
        if (((local_278.PackageNames.AllocatorInstance.Data <= pFVar12) &&
            (pFVar12 < (FName *)(local_278.PackageNames.AllocatorInstance.Data +
                                (longlong)local_278.PackageNames.ArrayMax * 8))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
        if (local_278.PackageNames.ArrayNum == local_278.PackageNames.ArrayMax) {
          local_278.PackageNames.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,(ForAnyElementType *)&local_278,&local_278.PackageNames.ArrayMax);
        }
        FVar22.Data = FVar22.Data + 0x10;
        *(FName *)(local_278.PackageNames.AllocatorInstance.Data +
                  (longlong)local_278.PackageNames.ArrayNum * 8) = *pFVar12;
        uVar16 = local_398 & 0xffffffff;
        local_278.PackageNames.ArrayNum = local_278.PackageNames.ArrayNum + 1;
      }
    }
    local_338 = local_350;
    local_328 = local_128;
    local_278.bRecursivePaths = true;
    local_278.bIncludeOnlyOnDiskAssets = true;
    local_330 = local_370;
    if (bVar24) {
      local_318 = &local_338;
      local_320 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAssetManager::SearchAssetRegistryPaths'::__l2::<lambda_1>,bool,FAssetData_const_&>
                  ::Call;
      (**(code **)((longlong)*pIVar14 + 0x70))(pIVar14,&local_278,&local_320,0);
      iVar9 = (int)local_398;
      uVar16 = (ulonglong)(int)local_398;
      pFVar23 = local_3a0.Data + uVar16 * 0x10;
      FVar22.Data = local_3a0.Data;
      while( true ) {
        if ((int)uVar16 != iVar9) {
          local_3a5[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_3a5);
        }
        if (FVar22.Data == pFVar23) break;
        if (*(int *)(FVar22.Data + 8) == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *(wchar_t **)FVar22.Data;
        }
        pFVar12 = ::FName::FName(&local_2e8,pwVar18);
        if (((local_278.PackageNames.AllocatorInstance.Data <= pFVar12) &&
            (pFVar12 < (FName *)(local_278.PackageNames.AllocatorInstance.Data +
                                (longlong)local_278.PackageNames.ArrayMax * 8))) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
        if (local_278.PackageNames.ArrayNum == local_278.PackageNames.ArrayMax) {
          local_278.PackageNames.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,(ForAnyElementType *)&local_278,&local_278.PackageNames.ArrayMax);
        }
        FVar22.Data = FVar22.Data + 0x10;
        *(FName *)(local_278.PackageNames.AllocatorInstance.Data +
                  (longlong)local_278.PackageNames.ArrayNum * 8) = *pFVar12;
        uVar16 = local_398 & 0xffffffff;
        local_278.PackageNames.ArrayNum = local_278.PackageNames.ArrayNum + 1;
      }
      local_278.PackagePaths.ArrayNum = 0;
      if (local_278.PackagePaths.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&local_278.PackagePaths.AllocatorInstance,0,
                   &local_278.PackagePaths.ArrayMax);
      }
    }
    pTVar5 = local_370;
    local_308 = &local_338;
    local_310 = UE::Core::Private::Function::
                TFunctionRefCaller<`UAssetManager::SearchAssetRegistryPaths'::__l2::<lambda_1>,bool,FAssetData_const_&>
                ::Call;
    (**(code **)((longlong)*pIVar14 + 0x70))(pIVar14,&local_278,&local_310,0);
    iVar9 = pTVar5->ArrayNum - (int)local_358;
    FARFilter::~FARFilter(&local_278);
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a0);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    DestructItems<FString,int>((FString *)local_c0.Data,local_b8);
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    DestructItems<FString,int>((FString *)local_d0.Data,local_c8);
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_128 + 0x40));
    DestructItems<FString,int>((FString *)local_128._32_8_,local_128._40_4_);
    if ((FString *)local_128._32_8_ != (FString *)0x0) {
      FMemory::Free((void *)local_128._32_8_);
    }
    DestructItems<FString,int>((FString *)local_128._16_8_,local_128._24_4_);
    if ((FString *)local_128._16_8_ != (FString *)0x0) {
      FMemory::Free((void *)local_128._16_8_);
    }
    DestructItems<FString,int>((FString *)local_128._0_8_,local_128._8_4_);
    if ((FString *)local_128._0_8_ != (FString *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
    DestructItems<FString,int>((FString *)local_380.Data,local_378);
    if (local_380.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data);
    }
    DestructItems<FString,int>((FString *)local_3a0.Data,(int)local_398);
    if (local_3a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data);
    }
    DestructItems<FString,int>((FString *)local_368.AllocatorInstance.Data,local_368.ArrayNum);
    if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.AllocatorInstance.Data);
    }
  }
  return iVar9;
LAB_1475f8f00:
  do {
    iVar8 = *(int *)(FVar19.Data + 8);
    if (iVar8 == iVar10) {
      if (1 < iVar8) {
        iVar10 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)FVar19.Data,
                            (wchar_t *)local_390.Data.AllocatorInstance.Data);
        bVar24 = iVar10 == 0;
        iVar10 = local_390.Data.ArrayNum;
        goto LAB_1475f8f26;
      }
LAB_1475f8f38:
      FVar17.Data = local_390.Data.AllocatorInstance.Data;
      if ((int)((longlong)FVar19.Data - (longlong)FVar4.Data >> 4) != -1) goto LAB_1475f8ead;
      break;
    }
    bVar24 = iVar8 + iVar10 == 1;
LAB_1475f8f26:
    if (bVar24) goto LAB_1475f8f38;
    FVar19.Data = FVar19.Data + 0x10;
  } while (FVar19.Data != pFVar20);
LAB_1475f8f51:
  iVar10 = (int)local_398;
  if ((local_3a0.Data <= (FScriptContainerElement *)&local_390) &&
     ((FScriptContainerElement *)&local_390 < local_3a0.Data + (longlong)local_398._4_4_ * 0x10)) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar24) {
      pcVar3 = (code *)swi(3);
      iVar9 = (*pcVar3)();
      return iVar9;
    }
    iVar10 = (int)local_398;
  }
  if (iVar10 == local_398._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_3a0,(int *)((longlong)&local_398 + 4));
  }
  local_398 = CONCAT44(local_398._4_4_,iVar10 + 1);
  pFVar20 = local_3a0.Data + (longlong)iVar10 * 0x10;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_390.Data.AllocatorInstance.Data;
  local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar20 + 8) = local_390.Data.ArrayNum;
  *(int *)(pFVar20 + 0xc) = local_390.Data.ArrayMax;
  local_390.Data.ArrayNum = 0;
  local_390.Data.ArrayMax = 0;
  FVar17.Data = local_390.Data.AllocatorInstance.Data;
LAB_1475f8ead:
  if (FVar17.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar17.Data);
  }
LAB_1475f8eb7:
  FVar22.Data = FVar22.Data + 0x10;
  goto LAB_1475f8e40;
}

// SetPrimaryAssetRules @ 1475fd460

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
UAssetManager::SetPrimaryAssetRules
          (UAssetManager *this,FPrimaryAssetId *param_1,FPrimaryAssetRules *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  undefined8 local_38;
  undefined4 local_30;
  byte local_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_AssetManager.UniqueName,false,None,Default,true)
  ;
  local_res10 = LLMTagDeclaration_AssetManager.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  local_30._0_1_ = param_2->bApplyRecursively;
  local_30._1_1_ = param_2->CookRule;
  local_30._2_2_ = *(undefined2 *)&param_2->field_0xa;
  local_38._0_4_ = param_2->Priority;
  local_38._4_4_ = param_2->ChunkId;
  bVar1 = 0;
  if (param_2->CookRule != DefaultRules.CookRule) {
    bVar1 = 8;
  }
  local_28 = (param_1->PrimaryAssetType).Name.ComparisonIndex.Value;
  uStack_24 = (param_1->PrimaryAssetType).Name.Number;
  uStack_20 = (param_1->PrimaryAssetName).ComparisonIndex.Value;
  uStack_1c = (param_1->PrimaryAssetName).Number;
  bVar3 = 0;
  if (param_2->ChunkId != DefaultRules.ChunkId) {
    bVar3 = 4;
  }
  bVar2 = 0;
  if (param_2->bApplyRecursively != DefaultRules.bApplyRecursively) {
    bVar2 = 2;
  }
  local_2c = bVar1 | bVar3 | bVar2 | param_2->Priority != DefaultRules.Priority | local_2c & 0xf0;
  (**(code **)(this->_padding_ + 0x440))(this,&local_28,&local_38);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetPrimaryAssetRulesExplicitly @ 1475fd570

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAssetManager::SetPrimaryAssetRulesExplicitly
          (UAssetManager *this,FPrimaryAssetId *param_1,FPrimaryAssetRulesExplicitOverride *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FPrimaryAssetRulesExplicitOverride *pFVar3;
  undefined1 local_18 [16];
  
  if (param_2->bOverridePriority == '\0' &&
      (param_2->bOverrideApplyRecursively == '\0' &&
      (param_2->bOverrideChunkId == '\0' && param_2->bOverrideCookRule == '\0'))) {
    if (*(int *)&(this->AssetRuleOverrides).field_0x8 ==
        *(int *)&(this->AssetRuleOverrides).field_0x34) {
      this->bIsManagementDatabaseCurrent = false;
      return;
    }
    uVar2 = ::GetTypeHash(param_1);
    TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>,FDefaultSetAllocator>
    ::RemoveImpl<FPrimaryAssetId>
              ((TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>,FDefaultSetAllocator>
                *)&this->AssetRuleOverrides,uVar2,param_1);
  }
  else {
    pFVar3 = TMapBase<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>_>
             ::Find((TMapBase<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>_>
                     *)&this->AssetRuleOverrides,param_1);
    if ((pFVar3 != (FPrimaryAssetRulesExplicitOverride *)0x0) && (1 < (byte)LogAssetManager._0_1_))
    {
      FPrimaryAssetId::ToString(param_1,(FString *)local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_18._0_8_);
      }
    }
    local_18._0_8_ = param_1;
    local_18._8_8_ = param_2;
    TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPrimaryAssetId_const_&,FPrimaryAssetRulesExplicitOverride_const_&>_>
              ((TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRulesExplicitOverride,0>,FDefaultSetAllocator>
                *)&this->AssetRuleOverrides,
               (TPairInitializer<FPrimaryAssetId_const_&,FPrimaryAssetRulesExplicitOverride_const_&>
                *)&stack0x00000008,(bool *)local_18);
  }
  this->bIsManagementDatabaseCurrent = false;
  return;
}

// SetPrimaryAssetTypeRules @ 1475fd660

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
UAssetManager::SetPrimaryAssetTypeRules
          (UAssetManager *this,FPrimaryAssetType param_1,FPrimaryAssetRules *param_2)

{
  FPrimaryAssetTypeData *pFVar1;
  code *pcVar2;
  int iVar3;
  EPrimaryAssetCookRule EVar4;
  undefined2 uVar5;
  bool bVar6;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar7;
  
  pTVar7 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                   *)&this->AssetTypeMap,param_1.Name);
  if (pTVar7 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1539323056344791288>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x708,"FoundType");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar1 = pTVar7->Object;
    iVar3 = param_2->ChunkId;
    bVar6 = param_2->bApplyRecursively;
    EVar4 = param_2->CookRule;
    uVar5 = *(undefined2 *)&param_2->field_0xa;
    (pFVar1->Info).Rules.Priority = param_2->Priority;
    (pFVar1->Info).Rules.ChunkId = iVar3;
    (pFVar1->Info).Rules.bApplyRecursively = bVar6;
    (pFVar1->Info).Rules.CookRule = EVar4;
    *(undefined2 *)&(pFVar1->Info).Rules.field_0xa = uVar5;
  }
  return;
}

// ShouldIncludeInAssetSearch @ 1475fde30

bool __thiscall
UAssetManager::ShouldIncludeInAssetSearch
          (UAssetManager *this,FAssetData *param_1,FAssetManagerSearchRules *param_2)

{
  code *pcVar1;
  char cVar2;
  UClass *this_00;
  UAssetManagerSettings *pUVar3;
  FString *pFVar4;
  FString local_18;
  
  pUVar3 = this->CachedSettings;
  if (pUVar3 == (UAssetManagerSettings *)0x0) {
    this_00 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar3 = (UAssetManagerSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    this->CachedSettings = pUVar3;
  }
  if (0 < (pUVar3->DirectoriesToExclude).ArrayNum) {
    pcVar1 = *(code **)(this->_padding_ + 0x590);
    pFVar4 = ::FName::ToString(&param_1->PackageName,&local_18);
    cVar2 = (*pcVar1)(this,pFVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return cVar2 == '\0';
  }
  return true;
}

// ShouldScanPrimaryAssetType @ 1475fdee0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall
UAssetManager::ShouldScanPrimaryAssetType(UAssetManager *this,FPrimaryAssetTypeInfo *param_1)

{
  bool bVar1;
  IAssetRegistry *pIVar2;
  FPrimaryAssetTypeInfo *local_res10;
  bool local_res18 [16];
  
  if ((param_1->PrimaryAssetType == PackageChunkType.Name) &&
     (local_res10 = param_1,
     bVar1 = `UAssetManager::ShouldScanPrimaryAssetType'::__l3::<lambda_1>::operator()(&local_res10)
     , !bVar1)) {
    return false;
  }
  if (param_1->bIsEditorOnly != false) {
    return false;
  }
  FPrimaryAssetTypeInfo::FillRuntimeData(param_1,local_res18,(bool *)&local_res10);
  if ((char)local_res10 != '\0') {
    pIVar2 = GetAssetRegistry(this);
    (**(code **)((longlong)*pIVar2 + 0x1b8))(pIVar2);
  }
  return local_res18[0];
}

// StartBulkScanning @ 1475fe9a0

void __thiscall UAssetManager::StartBulkScanning(UAssetManager *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *pFVar5;
  IModuleInterface *pIVar6;
  IAssetRegistry *pIVar7;
  FName local_res8;
  FName local_res10;
  
  if (this->NumBulkScanRequests < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBulkScanning()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x5f5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar7 = this->CachedAssetRegistry;
  this->NumberOfSpawnedNotifications = 0;
  if (pIVar7 == (IAssetRegistry *)0x0) {
    pFVar4 = ::FName::FName(&local_res8,L"AssetRegistry");
    FVar1 = *pFVar4;
    pFVar5 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
    pIVar7 = (IAssetRegistry *)(**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
    this->CachedAssetRegistry = pIVar7;
  }
  bVar3 = (bool)(**(code **)((longlong)*pIVar7 + 0x1c0))();
  pIVar7 = this->CachedAssetRegistry;
  this->bOldTemporaryCachingMode = bVar3;
  if (pIVar7 == (IAssetRegistry *)0x0) {
    pFVar4 = ::FName::FName(&local_res10,L"AssetRegistry");
    FVar1 = *pFVar4;
    pFVar5 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
    pIVar7 = (IAssetRegistry *)(**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
    this->CachedAssetRegistry = pIVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001475fea91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar7 + 0x1b0))(pIVar7,1);
  return;
}

// StartInitialLoading @ 1475feaa0

void __thiscall UAssetManager::StartInitialLoading(UAssetManager *this)

{
  FName FVar1;
  FInitialBulkScanHelper FVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  IAssetRegistry *pIVar5;
  FName local_res8;
  
  pIVar5 = this->CachedAssetRegistry;
  if (pIVar5 == (IAssetRegistry *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,L"AssetRegistry");
    FVar1 = *pFVar3;
    this_00 = FModuleManager::Get();
    pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    pIVar5 = (IAssetRegistry *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
    this->CachedAssetRegistry = pIVar5;
  }
  (**(code **)((longlong)*pIVar5 + 0x250))();
  FVar2 = GInitialBulkScan;
  if ((GInitialBulkScan.Scanner == (UAssetManager *)0x0) &&
     (this->NumBulkScanRequests = this->NumBulkScanRequests + 1, FVar2.Scanner = this,
     this->NumBulkScanRequests == 1)) {
    (**(code **)(this->_padding_ + 0x2d0))(this);
    FVar2.Scanner = this;
  }
  GInitialBulkScan.Scanner = FVar2.Scanner;
  (**(code **)(this->_padding_ + 0x570))(this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&OnAssetManagerCreatedDelegate);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnAssetManagerCreatedDelegate);
  return;
}

// StaticRegisterNativesUAssetManager @ 1475febe0

void __cdecl UAssetManager::StaticRegisterNativesUAssetManager(void)

{
  return;
}

// StopBulkScanning @ 1475ff270

void __thiscall UAssetManager::StopBulkScanning(UAssetManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  IAssetRegistry *pIVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  int local_res10;
  FName local_res18 [2];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((0 < this->NumBulkScanRequests) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsBulkScanning()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                         ,0x5ff,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar12 = this->CachedAssetRegistry;
  if (pIVar12 == (IAssetRegistry *)0x0) {
    pFVar10 = ::FName::FName(local_res18,L"AssetRegistry");
    FVar3 = *pFVar10;
    this_00 = FModuleManager::Get();
    pIVar11 = FModuleManager::LoadModuleChecked(this_00,FVar3);
    pIVar12 = (IAssetRegistry *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
    this->CachedAssetRegistry = pIVar12;
  }
  (**(code **)((longlong)*pIVar12 + 0x1b0))(pIVar12,this->bOldTemporaryCachingMode);
  (**(code **)(this->_padding_ + 0x550))(this);
  TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FSoftObjectPath,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPrimaryAssetId,0>,FDefaultSetAllocator>
            *)&this->AssetPathMap);
  TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>,FDefaultSetAllocator>
            *)&this->AssetTypeMap);
  iVar16 = 0;
  puVar1 = &(this->AssetTypeMap).field_0x10;
  iVar9 = *(int *)&(this->AssetTypeMap).field_0x28;
  uVar7 = 1;
  iVar18 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&(this->AssetTypeMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1475ff3bd;
      uVar15 = puVar19[lVar13 + 1];
    }
    uVar7 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iVar8 = iVar18 + -1 + local_res10;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_1475ff3bd:
  uVar15 = *(uint *)&(this->AssetTypeMap).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar16);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar18;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AssetTypeMap).field_0x8 -
                       *(int *)&(this->AssetTypeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->AssetTypeMap).field_0x28;
  if (uVar15 != uVar7) {
    puVar17 = *(undefined1 **)&(this->AssetTypeMap).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1475ff4c0;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_1475ff4c0:
  while( true ) {
    if (*(int *)&(this->AssetTypeMap).field_0x8 - *(int *)&(this->AssetTypeMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FPrimaryAssetTypeData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar13 = *(longlong *)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
              *(longlong *)&(this->AssetTypeMap).field_0x0);
    TSet<TTuple<FName,FPrimaryAssetData>,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FName,FPrimaryAssetData>,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>,FDefaultSetAllocator>
              *)(lVar13 + 0x178));
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Shrink((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(lVar13 + 0x128));
    uVar7 = *(int *)(lVar13 + 0x130) - *(int *)(lVar13 + 0x15c);
    if (uVar7 < 4) {
      iVar9 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((0 < (int)uVar7) && (*(int *)(lVar13 + 0x170) < iVar9)) ||
       (iVar9 < *(int *)(lVar13 + 0x170))) {
      *(int *)(lVar13 + 0x170) = iVar9;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar13 + 0x128));
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// TryUpdateCachedAssetData @ 1476003f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAssetManager::TryUpdateCachedAssetData
          (UAssetManager *this,FPrimaryAssetId *param_1,FAssetData *param_2,bool param_3)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar4;
  IAssetRegistry *pIVar5;
  FAssetData *this_00;
  size_t _Size;
  FPrimaryAssetTypeData *this_01;
  undefined1 auStackY_208 [32];
  FPrimaryAssetData *local_1c0;
  FSoftObjectPath local_1b8;
  undefined8 local_198;
  FPrimaryAssetTypeData *local_190;
  undefined8 local_188;
  undefined1 local_180 [16];
  FName FStack_170;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  FString local_158;
  FPrimaryAssetId local_148;
  FPrimaryAssetId local_138;
  FPrimaryAssetId *local_128;
  FPrimaryAssetData **local_120;
  FSoftObjectPath *local_118;
  FSoftObjectPath local_110;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 local_a8 [56];
  FAssetDataTagMapSharedView local_70 [2];
  TReferenceControllerBase<1> *local_60;
  void *local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = 0;
  if ((((param_1->PrimaryAssetType).Name == (FName)0x0) || (param_1->PrimaryAssetName == (FName)0x0)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrimaryAssetId.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                               ,0x633,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar4 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                   *)&this->AssetTypeMap,(param_1->PrimaryAssetType).Name);
  if (pTVar4 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1539323056344791497>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x637,"FoundType");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    this_01 = pTVar4->Object;
    local_190 = this_01;
    local_1c0 = TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
                ::Find((TMapBase<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
                        *)&this_01->AssetMap,param_1->PrimaryAssetName);
    local_1b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1b8.AssetPath.PackageName.Number = 0;
    local_1b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1b8.AssetPath.AssetName.Number = 0;
    local_1b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.SubPathString.Data.ArrayNum = 0;
    local_1b8.SubPathString.Data.ArrayMax = 0;
    bVar2 = TryToSoftObjectPath<1>(param_2,&local_1b8);
    if (bVar2) {
      if (((local_1b8.AssetPath.PackageName == (FName)0x0) ||
          (1 < local_1b8.SubPathString.Data.ArrayNum)) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1539323056344791479>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                             ,0x649,"NewAssetPath.IsAsset()"), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((local_1c0 != (FPrimaryAssetData *)0x0) &&
         (bVar2 = FSoftObjectPath::operator==
                            ((FSoftObjectPath *)&(local_1c0->AssetPtr).field_0x8,&local_1b8), !bVar2
         )) {
        if (2 < (byte)LogAssetManager._0_1_) {
          FSoftObjectPath::ToString(&local_1b8,&local_d0);
          FSoftObjectPath::ToString((FSoftObjectPath *)&(local_1c0->AssetPtr).field_0x8,&local_158);
          FPrimaryAssetId::ToString(param_1,&local_e0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          this_01 = local_190;
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            this_01 = local_190;
          }
        }
        if (((!param_3) && ((this_01->Info).bIsEditorOnly == false)) &&
           (local_1c0 != (FPrimaryAssetData *)0x0)) {
          local_120 = &local_1c0;
          local_118 = &local_1b8;
          local_128 = param_1;
          `UAssetManager::TryUpdateCachedAssetData'::__l59::<lambda_1>::operator()(&local_128);
        }
      }
      FAssetData::GetSoftObjectPath(param_2,&local_110);
      _Src.Data = local_1b8.SubPathString.Data.AllocatorInstance.Data;
      _Size = (size_t)local_1b8.SubPathString.Data.ArrayNum;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_180._0_8_ = 0;
      local_160 = local_1b8.SubPathString.Data.ArrayNum;
      local_180._8_4_ = local_1b8.AssetPath.PackageName.ComparisonIndex.Value;
      local_180._12_4_ = local_1b8.AssetPath.PackageName.Number;
      FStack_170 = local_1b8.AssetPath.AssetName;
      if (local_1b8.SubPathString.Data.ArrayNum == 0) {
        local_15c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1b8.SubPathString.Data.ArrayNum,0,&local_168,
                   local_1b8.SubPathString.Data.ArrayNum,&local_15c);
        memcpy(local_168.Data,_Src.Data,_Size);
      }
      FPrimaryAssetTypeData::FindOrAddAsset
                (this_01,param_1->PrimaryAssetName,(FSoftObjectPtr *)local_180,&local_110,
                 &this->AssetPathMap);
      pIVar5 = GetAssetRegistry(this);
      FAssetData::GetPrimaryAssetId(param_2,&local_148);
      this_00 = (FAssetData *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,local_a8,&local_110,1);
      FAssetData::GetPrimaryAssetId(this_00,&local_138);
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_70);
      if (((local_148.PrimaryAssetType.Name != (param_1->PrimaryAssetType).Name) ||
          (local_148.PrimaryAssetName != param_1->PrimaryAssetName)) ||
         (((local_188 = 0, local_138.PrimaryAssetType.Name != (FName)0x0 &&
           (local_138.PrimaryAssetName != (FName)0x0)) &&
          ((local_148.PrimaryAssetType.Name != local_138.PrimaryAssetType.Name ||
           (local_148.PrimaryAssetName != local_138.PrimaryAssetName)))))) {
        local_b8 = (param_1->PrimaryAssetType).Name.ComparisonIndex.Value;
        uStack_b4 = (param_1->PrimaryAssetType).Name.Number;
        uStack_b0 = (param_1->PrimaryAssetName).ComparisonIndex.Value;
        uStack_ac = (param_1->PrimaryAssetName).Number;
        (**(code **)((longlong)*pIVar5 + 0x448))(pIVar5,&local_110,&local_b8);
      }
      if ((param_2->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) {
        if (local_1c0 != (FPrimaryAssetData *)0x0) {
          TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
          ::Remove((TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
                    *)&this->CachedAssetBundles,param_1);
        }
      }
      else {
        TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
        ::Emplace<FPrimaryAssetId_const_&,TSharedPtr<FAssetBundleData,1>_const_&>
                  ((TMapBase<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TSharedPtr<FAssetBundleData,1>,0>_>
                    *)&this->CachedAssetBundles,param_1,&param_2->TaggedAssetBundles);
      }
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      if (local_110.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (2 < (byte)LogAssetManager._0_1_) {
      FAssetData::GetObjectPathString(param_2,&local_f0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// UnloadPrimaryAsset @ 1476026e0

int __thiscall UAssetManager::UnloadPrimaryAsset(UAssetManager *this,FPrimaryAssetId *param_1)

{
  code *pcVar1;
  int iVar2;
  ForAnyElementType local_38;
  undefined4 local_30;
  int local_2c;
  FName local_28;
  FName FStack_20;
  
  local_28 = (param_1->PrimaryAssetType).Name;
  FStack_20 = param_1->PrimaryAssetName;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 1;
  pcVar1 = *(code **)(this->_padding_ + 0x3a0);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_38,1,&local_2c);
  *(uint *)local_38.Data = local_28.ComparisonIndex.Value;
  *(uint *)(local_38.Data + 4) = local_28.Number;
  *(uint *)(local_38.Data + 8) = FStack_20.ComparisonIndex.Value;
  *(uint *)(local_38.Data + 0xc) = FStack_20.Number;
  iVar2 = (*pcVar1)(this,&local_38);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return iVar2;
}

// UnloadPrimaryAssets @ 147602790

int __thiscall
UAssetManager::UnloadPrimaryAssets
          (UAssetManager *this,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_1)

{
  FPrimaryAssetLoadState *this_00;
  int iVar1;
  code *pcVar2;
  FPrimaryAssetData *pFVar3;
  TSharedPtr<FStreamableHandle,1> *pTVar4;
  TSharedPtr<FStreamableHandle,1> *pTVar5;
  FStreamableHandle *pFVar6;
  TSharedPtr<FStreamableHandle,1> *pTVar7;
  FPrimaryAssetLoadState *this_01;
  FPrimaryAssetId *pFVar8;
  FPrimaryAssetId *pFVar9;
  int iVar10;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar10 = 0;
  iVar1 = param_1->ArrayNum;
  pFVar9 = (FPrimaryAssetId *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar9 + iVar1;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPrimaryAssetId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar9 == pFVar8) {
        return iVar10;
      }
      pFVar3 = GetNameData(this,pFVar9,true);
      if (pFVar3 != (FPrimaryAssetData *)0x0) break;
      pcVar2 = *(code **)(this->_padding_ + 0x518);
      ::FString::FString(&local_38,L"UnloadPrimaryAssets failed to find NameData");
      (*pcVar2)(this,pFVar9,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
LAB_147602964:
      pFVar9 = pFVar9 + 1;
    }
    pTVar7 = (TSharedPtr<FStreamableHandle,1> *)(pFVar3->CurrentState).Storage;
    this_00 = &pFVar3->CurrentState;
    pTVar4 = &FPrimaryAssetLoadState::InvalidHandle;
    if (pTVar7 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
      pTVar4 = pTVar7;
    }
    pFVar6 = pTVar4->Object;
    if (((pFVar6 == (FStreamableHandle *)0x0) || (pFVar6->bCanceled != false)) ||
       (pFVar6->bReleased != false)) {
      pTVar4 = (TSharedPtr<FStreamableHandle,1> *)(pFVar3->PendingState).Storage;
      pTVar5 = &FPrimaryAssetLoadState::InvalidHandle;
      if (pTVar4 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
        pTVar5 = pTVar4;
      }
      pFVar6 = pTVar5->Object;
      if (((pFVar6 == (FStreamableHandle *)0x0) || (pFVar6->bCanceled != false)) ||
         (pFVar6->bReleased != false)) goto LAB_147602964;
    }
    this_01 = &pFVar3->PendingState;
    iVar10 = iVar10 + 1;
    pTVar4 = &FPrimaryAssetLoadState::InvalidHandle;
    if (pTVar7 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
      pTVar4 = pTVar7;
    }
    pFVar6 = pTVar4->Object;
    if (((pFVar6 != (FStreamableHandle *)0x0) && (pFVar6->bCanceled == false)) &&
       (pFVar6->bReleased == false)) {
      pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(pTVar4);
      FStreamableHandle::CancelHandle(pFVar6);
    }
    if (this_00->Storage != (uchar *)0x0) {
      FPrimaryAssetLoadState::DestroyStoredItems(this_00);
      FMemory::Free(this_00->Storage);
      this_00->Storage = (uchar *)0x0;
    }
    (pFVar3->CurrentState).NumBundleNames = 0;
    (pFVar3->CurrentState).bWithDownloadParams = false;
    pTVar7 = &FPrimaryAssetLoadState::InvalidHandle;
    if ((TSharedPtr<FStreamableHandle,1> *)this_01->Storage !=
        (TSharedPtr<FStreamableHandle,1> *)0x0) {
      pTVar7 = (TSharedPtr<FStreamableHandle,1> *)this_01->Storage;
    }
    pFVar6 = pTVar7->Object;
    if (((pFVar6 != (FStreamableHandle *)0x0) && (pFVar6->bCanceled == false)) &&
       (pFVar6->bReleased == false)) {
      pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(pTVar7);
      FStreamableHandle::CancelHandle(pFVar6);
    }
    if (this_01->Storage != (uchar *)0x0) {
      FPrimaryAssetLoadState::DestroyStoredItems(this_01);
      FMemory::Free(this_01->Storage);
      this_01->Storage = (uchar *)0x0;
    }
    (pFVar3->PendingState).NumBundleNames = 0;
    pFVar9 = pFVar9 + 1;
    (pFVar3->PendingState).bWithDownloadParams = false;
  } while( true );
}

// UnloadPrimaryAssetsWithType @ 1476029a0

int __thiscall
UAssetManager::UnloadPrimaryAssetsWithType(UAssetManager *this,FPrimaryAssetType param_1)

{
  int iVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x358))(this,param_1.Name,&local_18,0);
  iVar1 = (**(code **)(this->_padding_ + 0x3a0))(this,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return iVar1;
}

// Unregister_OnAddedAssetSearchRoot @ 147602a60

void __thiscall
UAssetManager::Unregister_OnAddedAssetSearchRoot(UAssetManager *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnAddedAssetSearchRootDelegate,param_1);
    return;
  }
  return;
}

// WarnAboutInvalidPrimaryAsset @ 147603c80

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAssetManager::WarnAboutInvalidPrimaryAsset
          (UAssetManager *this,FPrimaryAssetId *param_1,FString *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  UClass *this_00;
  UAssetManagerSettings *pUVar4;
  TSharedRef<FPrimaryAssetTypeData,1> *pTVar5;
  FStaticBasicLogRecord *pFVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  FString local_18;
  
  uVar2 = ::GetTypeHash(param_1);
  if (*(int *)&(this->WarningInvalidAssets).Elements.field_0x8 !=
      *(int *)&(this->WarningInvalidAssets).Elements.field_0x34) {
    FVar8 = (this->WarningInvalidAssets).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->WarningInvalidAssets).Hash;
    }
    iVar7 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->WarningInvalidAssets).HashSize - 1U & uVar2) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&(this->WarningInvalidAssets).Elements;
      do {
        lVar3 = (longlong)iVar7;
        if ((*(FName *)(lVar1 + lVar3 * 0x18) == (param_1->PrimaryAssetType).Name) &&
           (*(FName *)(lVar1 + 8 + lVar3 * 0x18) == param_1->PrimaryAssetName)) {
          if (iVar7 != -1) {
            return;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
      } while (iVar7 != -1);
    }
  }
  TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>::
  Emplace<FPrimaryAssetId_const_&>
            (&this->WarningInvalidAssets,(FPrimaryAssetId *)&stack0x00000008,(bool *)param_1);
  pUVar4 = this->CachedSettings;
  if (pUVar4 == (UAssetManagerSettings *)0x0) {
    this_00 = Z_Construct_UClass_UAssetManagerSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (UAssetManagerSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    this->CachedSettings = pUVar4;
  }
  if (pUVar4->bShouldWarnAboutInvalidAssets != false) {
    pTVar5 = TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FPrimaryAssetTypeData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FPrimaryAssetTypeData,1>,0>_>
                     *)&this->AssetTypeMap,(param_1->PrimaryAssetType).Name);
    if (pTVar5 == (TSharedRef<FPrimaryAssetTypeData,1> *)0x0) {
      if ((byte)LogAssetManager._0_1_ < 3) {
        return;
      }
      FPrimaryAssetId::ToString(param_1,&local_18);
      pFVar6 = &::LOG_Static;
    }
    else {
      if ((byte)LogAssetManager._0_1_ < 3) {
        return;
      }
      FPrimaryAssetId::ToString(param_1,&local_18);
      pFVar6 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogAssetManager);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WriteCustomReport @ 147604070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UAssetManager::WriteCustomReport
          (UAssetManager *this,FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2
          )

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FString *pFVar6;
  IFileManager *pIVar7;
  longlong *plVar8;
  size_t sVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  wchar_t *_Str;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  longlong local_158;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_150;
  FString *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar3 = false;
  local_150 = param_2;
  local_148 = param_1;
  if (param_2->ArrayNum != 0) {
    pFVar6 = FPaths::ProjectSavedDir();
    ::FString::ConcatFC(&local_110,pFVar6,L"Reports/");
    FPaths::ConvertRelativePathToFull(&local_120,&local_110);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_130,L"%s%s");
    pIVar7 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_130.Data.ArrayNum != 0) {
      FVar13.Data = local_130.Data.AllocatorInstance.Data;
    }
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar13.Data,0);
    bVar3 = false;
    if (plVar8 != (longlong *)0x0) {
      iVar11 = param_2->ArrayNum;
      uVar17 = 0;
      if (0 < iVar11) {
        local_158 = 0;
        do {
          lVar12 = local_158;
          uVar5 = 0;
          if ((int)uVar17 < iVar11) {
            uVar5 = ~uVar17 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_160 = (longlong)iVar11;
            local_168 = (longlong)(int)uVar17;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          ::FString::PrintfImpl(&local_100,L"%s");
          ::FString::ConcatFC(&local_140,&local_100,L"\r\n");
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          iVar11 = local_140.Data.ArrayNum;
          local_68.Data = (FScriptContainerElement *)0x0;
          pcVar2 = *(code **)(*plVar8 + 0x188);
          uVar5 = iVar11 - 1;
          if (iVar11 == 0) {
            uVar5 = 0;
          }
          if (iVar11 == 0) {
            _Str = L"";
LAB_14760425c:
            sVar9 = wcslen(_Str);
            local_58 = (int)sVar9;
            uVar14 = local_58 + 1;
            FVar13.Data = (FScriptContainerElement *)0x0;
            if (0x80 < uVar14) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar14,1);
              FVar13.Data = local_68.Data;
            }
            lVar16 = (longlong)(int)uVar14;
            pFVar15 = local_e8;
            if (FVar13.Data != (FScriptContainerElement *)0x0) {
              pFVar15 = FVar13.Data;
            }
            lVar10 = 0;
            bVar3 = false;
            lVar12 = lVar10;
            local_60 = pFVar15;
            if (0 < (int)uVar14) {
              do {
                uVar1 = *(ushort *)((longlong)_Str + lVar12 * 2);
                pFVar15[lVar12] = SUB21(uVar1,0);
                lVar12 = lVar12 + 1;
                bVar3 = (bool)(bVar3 | 0x7f < uVar1);
              } while (lVar12 < lVar16);
              if (bVar3) {
                do {
                  if (0x7f < *(ushort *)((longlong)_Str + lVar10 * 2)) {
                    pFVar15[lVar10] = (FScriptContainerElement)0x3f;
                  }
                  lVar10 = lVar10 + 1;
                } while (lVar10 < lVar16);
              }
            }
            lVar12 = local_158;
            if ((pFVar15 + lVar16 == (FScriptContainerElement *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), lVar12 = local_158, bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          else {
            _Str = (wchar_t *)local_140.Data.AllocatorInstance.Data;
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_14760425c;
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          (*pcVar2)(plVar8,local_60,(longlong)(int)uVar5);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          local_158 = lVar12 + 0x10;
          uVar17 = uVar17 + 1;
          iVar11 = local_150->ArrayNum;
          param_1 = local_148;
        } while ((int)uVar17 < iVar11);
      }
      (**(code **)(*plVar8 + 0x210))(plVar8);
      (**(code **)*plVar8)(plVar8,1);
      bVar3 = true;
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  return bVar3;
}

// operator() @ 15050cb40

bool __thiscall
`UAssetManager::GetAllReferencersForPackage'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1539323056344789348>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344789348>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050cb80

bool __thiscall `UAssetManager::PredownloadPrimaryAssets'::__l2::<lambda_1>::operator()(void *this)

{
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1539323056344790677>);
  if (bVar2) {
    this_00 = *(TStringBuilderBase<wchar_t> **)this;
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'\0';
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344790677>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15050cbf0

bool __thiscall `UAssetManager::PreloadPrimaryAssets'::__l2::<lambda_1>::operator()(void *this)

{
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1539323056344790691>);
  if (bVar2) {
    this_00 = *(TStringBuilderBase<wchar_t> **)this;
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'\0';
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344790691>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15050cca0

bool __thiscall
`UAssetManager::ShouldScanPrimaryAssetType'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1539323056344789309>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344789309>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050cd07;
    }
  }
  bVar2 = false;
LAB_15050cd07:
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

// operator() @ 15050cde0

bool __thiscall
`UAssetManager::OnAssetStateChangeCompleted'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1539323056344790666>);
  if (bVar2) {
    FPrimaryAssetId::ToString(*(FPrimaryAssetId **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344790666>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050ce47;
    }
  }
  bVar2 = false;
LAB_15050ce47:
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

// operator() @ 15050ce80

bool __thiscall
`UAssetManager::RemoveScanPathsForPrimaryAssets'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1539323056344791614>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344791614>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050cee7;
    }
  }
  bVar2 = false;
LAB_15050cee7:
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

// operator() @ 15050cf20

bool __thiscall `UAssetManager::TryUpdateCachedAssetData'::__l59::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1539323056344791446>);
  if (bVar5) {
    FSoftObjectPath::ToString(*(FSoftObjectPath **)((longlong)this + 0x10),&local_28);
    FSoftObjectPath::ToString
              ((FSoftObjectPath *)(**(longlong **)((longlong)this + 8) + 8),&local_48);
    FPrimaryAssetId::ToString(*(FPrimaryAssetId **)this,&local_38);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344791446>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15050cffa;
    }
  }
  bVar5 = false;
LAB_15050cffa:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15050d070

bool __thiscall
`UAssetManager::ScanPathsForPrimaryAssets'::__l43::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1539323056344791744>);
  if (bVar4) {
    __l43::<lambda_1>::operator()(*(void **)((longlong)this + 8),&local_18);
    ::FName::ToString(*(FName **)this,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1539323056344791744>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050d109;
    }
  }
  bVar4 = false;
LAB_15050d109:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

