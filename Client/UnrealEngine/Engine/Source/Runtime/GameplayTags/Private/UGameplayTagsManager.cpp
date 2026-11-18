// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 84

// StaticClass @ 146ac36d0

UClass * __cdecl UGameplayTagsManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsManager",
               &Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton,
               StaticRegisterNativesUGameplayTagsManager,0x390,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGameplayTagsManager>,
               InternalVTableHelperCtorCaller<UGameplayTagsManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton;
}

// UGameplayTagsManager @ 146accab0

UGameplayTagsManager * __thiscall
UGameplayTagsManager::UGameplayTagsManager(UGameplayTagsManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTagsManager__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnGameplayTagLoadedDelegate,4000)
  ;
  *(undefined8 *)&(this->OnGameplayTagLoadedDelegate).field_0x38 = 2;
  *(undefined8 *)&(this->OnGameplayTagLoadedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnGameplayTagLoadedDelegate).field_0x30 = 0;
  *(undefined8 *)&this->ReplicationCountMap = 0;
  *(undefined8 *)&(this->ReplicationCountMap).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationCountMap).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationCountMap).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x48 = 0;
  *(undefined8 *)&this->ReplicationCountMap_SingleTags = 0;
  *(undefined8 *)&(this->ReplicationCountMap_SingleTags).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_SingleTags).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_SingleTags).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x48 = 0;
  *(undefined8 *)&this->ReplicationCountMap_Containers = 0;
  *(undefined8 *)&(this->ReplicationCountMap_Containers).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_Containers).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_Containers).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x48 = 0;
  *(undefined8 *)&(this->LegacyNativeTags).Elements = 0;
  *(undefined8 *)&(this->LegacyNativeTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LegacyNativeTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x34 = 0;
  (this->LegacyNativeTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LegacyNativeTags).HashSize = 0;
  *(undefined8 *)&this->RegisteredSearchPaths = 0;
  *(undefined8 *)&(this->RegisteredSearchPaths).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredSearchPaths).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredSearchPaths).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x48 = 0;
  (this->GameplayRootTag).Object = (FGameplayTagNode *)0x0;
  (this->GameplayRootTag).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->GameplayTagNodeMap = 0;
  *(undefined8 *)&(this->GameplayTagNodeMap).field_0x8 = 0;
  *(undefined8 *)&(this->GameplayTagNodeMap).field_0x20 = 0;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x28 = 0;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x34 = 0;
  *(undefined8 *)&(this->GameplayTagNodeMap).field_0x40 = 0;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x48 = 0;
  (this->CommonlyReplicatedTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommonlyReplicatedTags).ArrayNum = 0;
  (this->CommonlyReplicatedTags).ArrayMax = 0;
  *(undefined8 *)&this->TagSources = 0;
  *(undefined8 *)&(this->TagSources).field_0x8 = 0;
  *(undefined8 *)&(this->TagSources).field_0x20 = 0;
  *(undefined4 *)&(this->TagSources).field_0x28 = 0;
  *(undefined4 *)&(this->TagSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagSources).field_0x34 = 0;
  *(undefined8 *)&(this->TagSources).field_0x40 = 0;
  *(undefined4 *)&(this->TagSources).field_0x48 = 0;
  *(undefined8 *)&(this->RestrictedGameplayTagSourceNames).Elements = 0;
  *(undefined8 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x34 = 0;
  (this->RestrictedGameplayTagSourceNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RestrictedGameplayTagSourceNames).HashSize = 0;
  this->bIsConstructingGameplayTagTree = false;
  (this->ShouldAllowUnloadingTagsOverride).bIsSet = false;
  (this->ShouldDeferGameplayTagTreeRebuilds).bIsSet = false;
  this->bDeferBroadcastOnGameplayTagTreeChanged = 0;
  this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = false;
  this->bNeedsTreeRebuildOnDoneAddingGameplayTags = false;
  (this->InvalidTagCharacters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidTagCharacters).Data.ArrayNum = 0;
  (this->InvalidTagCharacters).Data.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GameplayTagMapCritical,4000);
  (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetworkGameplayTagNodeIndex).ArrayNum = 0;
  (this->NetworkGameplayTagNodeIndex).ArrayMax = 0;
  (this->GameplayTagTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagTables).ArrayNum = 0;
  (this->GameplayTagTables).ArrayMax = 0;
  this->bNetworkIndexInvalidated = true;
  return this;
}

// UGameplayTagsManager @ 146accda0

UGameplayTagsManager * __thiscall
UGameplayTagsManager::UGameplayTagsManager(UGameplayTagsManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTagsManager__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnGameplayTagLoadedDelegate,4000)
  ;
  *(undefined8 *)&(this->OnGameplayTagLoadedDelegate).field_0x38 = 2;
  *(undefined8 *)&(this->OnGameplayTagLoadedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OnGameplayTagLoadedDelegate).field_0x30 = 0;
  *(undefined8 *)&this->ReplicationCountMap = 0;
  *(undefined8 *)&(this->ReplicationCountMap).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationCountMap).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationCountMap).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationCountMap).field_0x48 = 0;
  *(undefined8 *)&this->ReplicationCountMap_SingleTags = 0;
  *(undefined8 *)&(this->ReplicationCountMap_SingleTags).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_SingleTags).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_SingleTags).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x48 = 0;
  *(undefined8 *)&this->ReplicationCountMap_Containers = 0;
  *(undefined8 *)&(this->ReplicationCountMap_Containers).field_0x8 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_Containers).field_0x20 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x28 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x34 = 0;
  *(undefined8 *)&(this->ReplicationCountMap_Containers).field_0x40 = 0;
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x48 = 0;
  *(undefined8 *)&(this->LegacyNativeTags).Elements = 0;
  *(undefined8 *)&(this->LegacyNativeTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LegacyNativeTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LegacyNativeTags).Elements.field_0x34 = 0;
  (this->LegacyNativeTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LegacyNativeTags).HashSize = 0;
  *(undefined8 *)&this->RegisteredSearchPaths = 0;
  *(undefined8 *)&(this->RegisteredSearchPaths).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredSearchPaths).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredSearchPaths).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x48 = 0;
  (this->GameplayRootTag).Object = (FGameplayTagNode *)0x0;
  (this->GameplayRootTag).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->GameplayTagNodeMap = 0;
  *(undefined8 *)&(this->GameplayTagNodeMap).field_0x8 = 0;
  *(undefined8 *)&(this->GameplayTagNodeMap).field_0x20 = 0;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x28 = 0;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x34 = 0;
  *(undefined8 *)&(this->GameplayTagNodeMap).field_0x40 = 0;
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x48 = 0;
  (this->CommonlyReplicatedTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommonlyReplicatedTags).ArrayNum = 0;
  (this->CommonlyReplicatedTags).ArrayMax = 0;
  *(undefined8 *)&this->TagSources = 0;
  *(undefined8 *)&(this->TagSources).field_0x8 = 0;
  *(undefined8 *)&(this->TagSources).field_0x20 = 0;
  *(undefined4 *)&(this->TagSources).field_0x28 = 0;
  *(undefined4 *)&(this->TagSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagSources).field_0x34 = 0;
  *(undefined8 *)&(this->TagSources).field_0x40 = 0;
  *(undefined4 *)&(this->TagSources).field_0x48 = 0;
  *(undefined8 *)&(this->RestrictedGameplayTagSourceNames).Elements = 0;
  *(undefined8 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x34 = 0;
  (this->RestrictedGameplayTagSourceNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RestrictedGameplayTagSourceNames).HashSize = 0;
  this->bIsConstructingGameplayTagTree = false;
  (this->ShouldAllowUnloadingTagsOverride).bIsSet = false;
  (this->ShouldDeferGameplayTagTreeRebuilds).bIsSet = false;
  this->bDeferBroadcastOnGameplayTagTreeChanged = 0;
  this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = false;
  this->bNeedsTreeRebuildOnDoneAddingGameplayTags = false;
  (this->InvalidTagCharacters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvalidTagCharacters).Data.ArrayNum = 0;
  (this->InvalidTagCharacters).Data.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GameplayTagMapCritical,4000);
  (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetworkGameplayTagNodeIndex).ArrayNum = 0;
  (this->NetworkGameplayTagNodeIndex).ArrayMax = 0;
  (this->GameplayTagTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTagTables).ArrayNum = 0;
  (this->GameplayTagTables).ArrayMax = 0;
  this->bUseFastReplication = false;
  this->bDoneAddingNativeTags = false;
  this->NetworkGameplayTagNodeIndexHash = 0;
  this->bNetworkIndexInvalidated = true;
  this->bShouldWarnOnInvalidTags = true;
  this->bShouldAllowUnloadingTags = false;
  this->NetIndexFirstBitSegment = 0x10;
  this->NetIndexTrueBitNum = 0x10;
  this->NumBitsForContainerSize = 6;
  return this;
}

// ~UGameplayTagsManager @ 146acdc30

void __thiscall UGameplayTagsManager::~UGameplayTagsManager(UGameplayTagsManager *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UGameplayTagsManager__6B_;
  DestroyGameplayTagTree(this);
  SingletonManager = (UGameplayTagsManager *)0x0;
  pFVar1 = (this->GameplayTagTables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
            ((TSharedPtr<FGameplayTagNode,1> *)
             (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data,
             (this->NetworkGameplayTagNodeIndex).ArrayNum);
  pFVar1 = (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GameplayTagMapCritical);
  pFVar1 = (this->InvalidTagCharacters).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RestrictedGameplayTagSourceNames).HashSize = 0;
  FVar2 = (this->RestrictedGameplayTagSourceNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RestrictedGameplayTagSourceNames).Elements);
  *(undefined4 *)&(this->TagSources).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TagSources).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTagSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTagSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTagSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagSources);
  pFVar1 = (this->CommonlyReplicatedTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GameplayTagNodeMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GameplayTagNodeMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GameplayTagNodeMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameplayRootTag).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RegisteredSearchPaths).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredSearchPaths).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredSearchPaths);
  (this->LegacyNativeTags).HashSize = 0;
  FVar2 = (this->LegacyNativeTags).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LegacyNativeTags).Elements);
  *(undefined4 *)&(this->ReplicationCountMap_Containers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ReplicationCountMap_Containers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationCountMap_Containers);
  *(undefined4 *)&(this->ReplicationCountMap_SingleTags).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ReplicationCountMap_SingleTags).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationCountMap_SingleTags);
  *(undefined4 *)&(this->ReplicationCountMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ReplicationCountMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplicationCountMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGameplayTagLoadedDelegate).field_0x28,
             *(int *)&(this->OnGameplayTagLoadedDelegate).field_0x30);
  pvVar3 = *(void **)&(this->OnGameplayTagLoadedDelegate).field_0x28;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnGameplayTagLoadedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146acee80

void __thiscall
`UGameplayTagsManager::GameplayTagsMatchDepth'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_1,
          FGameplayTag *param_2)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FName> FVar5;
  ForElementType<FName> FVar6;
  TSharedPtr<FGameplayTagNode,1> local_28;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  UGameplayTagsManager::FindTagNode(*(UGameplayTagsManager **)this,&local_28,param_2);
  FVar6 = (ForElementType<FName>)local_28.Object;
  if ((ForElementType<FName>)local_28.Object != (ForElementType<FName>)0x0) {
    if (((ForElementType<FName>)local_28.Object == (ForElementType<FName>)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    do {
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      FVar5 = (ForElementType<FName>)param_1;
      if (FVar1 != (ForElementType<FName>)0x0) {
        FVar5 = FVar1;
      }
      if ((ulonglong)FVar5 <= (ulonglong)FVar6) {
        FVar5 = (ForElementType<FName>)param_1;
        if (FVar1 != (ForElementType<FName>)0x0) {
          FVar5 = FVar1;
        }
        if (((ulonglong)FVar6 < (ulonglong)((longlong)FVar5 + (longlong)param_1->ArrayMax * 8)) &&
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
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                          (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar4 + 1;
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      FVar5 = (ForElementType<FName>)param_1;
      if (FVar1 != (ForElementType<FName>)0x0) {
        FVar5 = FVar1;
      }
      *(undefined8 *)((longlong)FVar5 + (longlong)iVar4 * 8) = *(undefined8 *)FVar6;
      if ((FVar6 == (ForElementType<FName>)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_10.ReferenceController = *(TReferenceControllerBase<1> **)((longlong)FVar6 + 0x40);
      local_28.Object = *(FGameplayTagNode **)((longlong)FVar6 + 0x38);
      if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_10.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_28.SharedReferenceCount,&local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_10.ReferenceController);
      FVar6 = (ForElementType<FName>)local_28.Object;
    } while ((ForElementType<FName>)local_28.Object != (ForElementType<FName>)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddChildrenTags @ 146acfb80

void __thiscall
UGameplayTagsManager::AddChildrenTags
          (UGameplayTagsManager *this,FGameplayTagContainer *param_1,
          TSharedPtr<FGameplayTagNode,1> *param_2,bool param_3,bool param_4)

{
  int iVar1;
  FGameplayTagNode *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGameplayTagNode *pFVar4;
  FGameplayTag *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_58 [8];
  TSharedPtr<FGameplayTagNode,1> local_50;
  
  pFVar2 = param_2->Object;
  if (pFVar2 != (FGameplayTagNode *)0x0) {
    pFVar6 = (pFVar2->ChildTags).AllocatorInstance.Data;
    iVar1 = (pFVar2->ChildTags).ArrayNum;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->ChildTags).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FGameplayTagNode,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_58);
      }
      if (pFVar6 == pFVar7) break;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      pFVar4 = *(FGameplayTagNode **)pFVar6;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar4 != (FGameplayTagNode *)0x0) {
        if ((pFVar4->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
          pFVar5 = &FGameplayTag::EmptyTag;
        }
        else {
          pFVar5 = (FGameplayTag *)
                   (pFVar4->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
        }
        FGameplayTagContainer::AddTag(param_1,pFVar5);
        if (param_3) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_50.Object = pFVar4;
          local_50.SharedReferenceCount.ReferenceController = pTVar3;
          AddChildrenTags(this,param_1,&local_50,true,param_4);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar6 = pFVar6 + 0x10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddNativeGameplayTag @ 146acfe70

void __thiscall
UGameplayTagsManager::AddNativeGameplayTag(UGameplayTagsManager *this,FNativeGameplayTag *param_1)

{
  int *piVar1;
  UGameplayTagsList *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGameplayTagSource *pFVar7;
  FGameplayTagTableRow *pFVar8;
  FGameplayTagTableRow *pFVar9;
  FString local_68;
  FGameplayTagTableRow local_58;
  FGameplayTagTableRow local_38;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar7 = FindOrAddTagSource(this,FNativeGameplayTag::NAME_NativeGameplayTag,Native,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pUVar2 = (pFVar7->SourceTagList).field0_0x0.DebugPtr;
  pFVar8 = FNativeGameplayTag::GetGameplayTagTableRow(param_1,&local_58);
  pFVar9 = (FGameplayTagTableRow *)(pUVar2->GameplayTagList).AllocatorInstance.Data;
  if ((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (pUVar2->GameplayTagList).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pUVar2->GameplayTagList).ArrayNum;
  piVar1 = &(pUVar2->GameplayTagList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(pUVar2->GameplayTagList).AllocatorInstance,piVar1);
  }
  (pUVar2->GameplayTagList).ArrayNum = iVar6 + 1;
  pFVar9 = (FGameplayTagTableRow *)
           ((pUVar2->GameplayTagList).AllocatorInstance.Data + (longlong)iVar6 * 0x20);
  pFVar9->_padding_ = (longlong)&___7FGameplayTagTableRow__6B_;
  (pFVar9->Tag).ComparisonIndex = 0;
  (pFVar9->Tag).Number = 0;
  (pFVar9->DevComment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar9->DevComment).Data.ArrayNum = 0;
  (pFVar9->DevComment).Data.ArrayMax = 0;
  if (pFVar9 != pFVar8) {
    pFVar9->Tag = pFVar8->Tag;
    ::FString::operator=(&pFVar9->DevComment,&pFVar8->DevComment);
  }
  if (local_58.DevComment.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DevComment.Data.AllocatorInstance.Data);
  }
  FVar3 = pFVar7->SourceName;
  pFVar9 = FNativeGameplayTag::GetGameplayTagTableRow(param_1,&local_38);
  AddTagTableRow(this,pFVar9,FVar3,false);
  if (local_38.DevComment.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DevComment.Data.AllocatorInstance.Data);
  }
  if ((this->bIsConstructingGameplayTagTree == false) && (this->bDoneAddingNativeTags != false)) {
    if (this->bUseFastReplication != false) {
      this->bNetworkIndexInvalidated = true;
    }
    if (this->bDeferBroadcastOnGameplayTagTreeChanged == 0) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&IGameplayTagsModule::OnGameplayTagTreeChanged);
    }
    else {
      this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
    }
  }
  return;
}

// AddNativeGameplayTag @ 146ad0040

FGameplayTag __thiscall
UGameplayTagsManager::AddNativeGameplayTag
          (UGameplayTagsManager *this,FName param_1,FString *param_2)

{
  longlong lVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FGameplayTag FVar7;
  ForElementType<FSetElementId> FVar8;
  FString *in_R9;
  FString *local_res18 [2];
  FName local_48;
  FGameplayTagTableRow local_40;
  
  if (param_2 == (FString *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_res18[0] = param_2;
    if (this->bDoneAddingNativeTags == false) {
      uVar5 = ::GetTypeHash((FNameEntryId)(uint)param_2);
      if (*(int *)&(this->LegacyNativeTags).Elements.field_0x8 !=
          *(int *)&(this->LegacyNativeTags).Elements.field_0x34) {
        FVar8 = (this->LegacyNativeTags).Hash.SecondaryData;
        if (FVar8 == (ForElementType<FSetElementId>)0x0) {
          FVar8 = (ForElementType<FSetElementId>)&(this->LegacyNativeTags).Hash;
        }
        iVar6 = *(int *)((longlong)FVar8 +
                        (ulonglong)
                        ((this->LegacyNativeTags).HashSize - 1U &
                        (int)((ulonglong)param_2 >> 0x20) + uVar5) * 4);
        if (iVar6 != -1) {
          lVar1 = *(longlong *)&(this->LegacyNativeTags).Elements;
          do {
            if (*(FString **)(lVar1 + (longlong)iVar6 * 0x10) == param_2) goto LAB_146ad012c;
            iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&this->LegacyNativeTags,&local_48,(bool *)local_res18);
LAB_146ad012c:
      FVar3 = NAME_Native;
      local_40._padding_ = (longlong)&___7FGameplayTagTableRow__6B_;
      local_40.Tag = (FName)param_2;
      ::FString::FString(&local_40.DevComment,in_R9);
      AddTagTableRow(this,&local_40,FVar3,false);
      if (local_40.DevComment.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.DevComment.Data.AllocatorInstance.Data);
      }
      *(FString **)param_1 = param_2;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4119478789166069407>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                         ,0x961,"!bDoneAddingNativeTags");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        FVar7.TagName = (FName)(*pcVar2)();
        return (FGameplayTag)FVar7.TagName;
      }
      *(undefined8 *)param_1 = 0;
    }
  }
  return (FGameplayTag)param_1;
}

// AddRestrictedGameplayTagSource @ 146ad0460

void __thiscall
UGameplayTagsManager::AddRestrictedGameplayTagSource(UGameplayTagsManager *this,FString *param_1)

{
  FGameplayTagTableRow *pFVar1;
  longlong lVar2;
  URestrictedGameplayTagsList *pUVar3;
  FName FVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  FGameplayTagSource *pFVar8;
  UClass *pUVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  FGameplayTagTableRow *pFVar12;
  wchar_t *pwVar13;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FString local_38;
  
  pFVar7 = FPaths::GetCleanFilename(&local_38,param_1);
  pwVar13 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,pwVar10);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar4 = local_res20;
  if (local_res20 != (FName)0x0) {
    uVar5 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
    if (*(int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x8 !=
        *(int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x34) {
      FVar11 = (this->RestrictedGameplayTagSourceNames).Hash.SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&(this->RestrictedGameplayTagSourceNames).Hash;
      }
      iVar6 = *(int *)((longlong)FVar11 +
                      (ulonglong)
                      ((this->RestrictedGameplayTagSourceNames).HashSize - 1U & FVar4.Number + uVar5
                      ) * 4);
      if (iVar6 != -1) {
        lVar2 = *(longlong *)&(this->RestrictedGameplayTagSourceNames).Elements;
        do {
          if (*(FName *)(lVar2 + (longlong)iVar6 * 0x10) == FVar4) {
            return;
          }
          iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->RestrictedGameplayTagSourceNames,&local_res18,(bool *)&local_res20);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar8 = FindOrAddTagSource(this,local_res20,RestrictedTagList,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FindOrAddTagSource(this,local_res20,TagList,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((pFVar8 != (FGameplayTagSource *)0x0) &&
       (pUVar3 = (pFVar8->SourceRestrictedTagList).field0_0x0.DebugPtr,
       pUVar3 != (URestrictedGameplayTagsList *)0x0)) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pUVar9 = URestrictedGameplayTagsList::StaticClass();
      UObject::LoadConfig((UObject *)pUVar3,pUVar9,pwVar13,0,(FProperty *)0x0,
                          (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                           *)0x0);
      pUVar3 = (pFVar8->SourceRestrictedTagList).field0_0x0.DebugPtr;
      iVar6 = (pUVar3->RestrictedGameplayTagList).ArrayNum;
      pFVar12 = (FGameplayTagTableRow *)(pUVar3->RestrictedGameplayTagList).AllocatorInstance.Data;
      pFVar1 = (FGameplayTagTableRow *)((longlong)pFVar12 + (longlong)iVar6 * 0x28);
      while( true ) {
        if ((pUVar3->RestrictedGameplayTagList).ArrayNum != iVar6) {
          `TCheckedPointerIterator<FRestrictedGameplayTagTableRow,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (pFVar12 == pFVar1) break;
        AddTagTableRow(this,pFVar12,local_res20,true);
        pFVar12 = (FGameplayTagTableRow *)&pFVar12[1].Tag;
      }
    }
  }
  return;
}

// AddTagIniSearchPath @ 146ad0b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTagsManager::AddTagIniSearchPath
          (UGameplayTagsManager *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  uint uVar1;
  code *pcVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  FGameplayTagSearchPathInfo *pFVar8;
  IFileManager *pIVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  FString *pFVar12;
  byte bVar13;
  int iVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  int iVar18;
  int *piVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FString *pFVar22;
  FRestrictedConfigInfo *pFVar23;
  ForElementType<unsigned_int> FVar24;
  uint *puVar25;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar26;
  FScriptContainerElement *pFVar27;
  FIdentityFunctor local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res20;
  wchar_t *in_stack_fffffffffffffe20;
  int *piVar28;
  undefined1 local_1a8 [4];
  uint local_1a4;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e [6];
  FString *local_198;
  ulonglong local_190;
  FName local_188;
  FName local_180;
  TArray<FRestrictedConfigInfo,TSizedDefaultAllocator<32>_> local_178;
  ForElementType<unsigned_int> local_168;
  FGameplayTagSearchPathInfo *local_160;
  int local_158;
  int local_154;
  LARGE_INTEGER local_150;
  FString local_148;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString local_d8;
  FSimpleScopeSecondsStat local_c8;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  iVar6 = 0;
  local_c8.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_GameplayTags_AddTagIniSearchPath;
  if (StatPtr_STAT_GameplayTags_AddTagIniSearchPath ==
      (FThreadSafeStaticStat<FStat_STAT_GameplayTags_AddTagIniSearchPath>)0x0) {
    pFVar7 = ::FName::FName(&local_a8,"STAT_GameplayTags_AddTagIniSearchPath");
    in_stack_fffffffffffffe20 = L"Gameplay Tags";
    local_c8.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameplayTags_AddTagIniSearchPath,
                    *pFVar7,L"Add Tag *.ini Search Path","STATGROUP_GameplayTags","STATCAT_Advanced"
                    ,L"Gameplay Tags",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_c8._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_150);
  local_c8.StartTime =
       (double)local_150.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  local_c8.Scale = __real_3ff0000000000000;
  pFVar8 = TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
           ::Find((TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
                   *)&this->RegisteredSearchPaths,param_1);
  if (pFVar8 == (FGameplayTagSearchPathInfo *)0x0) {
    iVar14 = (param_1->Data).ArrayNum;
    if (iVar14 == 0) {
      pwVar16 = L"";
      iVar14 = iVar6;
    }
    else {
      pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar14 = iVar14 + -1;
    }
    local_160 = pFVar8;
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar16);
    pFVar8 = TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
                         *)&this->RegisteredSearchPaths,uVar5,param_1);
  }
  local_160 = pFVar8;
  if (pFVar8->bWasSearched == false) {
    piVar28 = &(pFVar8->SourcesInPath).ArrayMax;
    (pFVar8->SourcesInPath).ArrayNum = 0;
    if ((pFVar8->SourcesInPath).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)pFVar8,0,piVar28);
      in_stack_fffffffffffffe20 = (wchar_t *)piVar28;
    }
    piVar28 = &(pFVar8->TagIniList).ArrayMax;
    pFVar27 = (pFVar8->TagIniList).AllocatorInstance.Data;
    iVar14 = (pFVar8->TagIniList).ArrayNum;
    if (*piVar28 < 0) {
      DestructItems<FString,int>((FString *)pFVar27,iVar14);
      (pFVar8->TagIniList).ArrayNum = 0;
      if (*piVar28 != 0) {
        in_stack_fffffffffffffe20 = (wchar_t *)piVar28;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(pFVar8->TagIniList).AllocatorInstance,0,piVar28);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar27,iVar14);
      (pFVar8->TagIniList).ArrayNum = 0;
    }
    pFVar8->bWasSearched = false;
    pFVar8->bWasAddedToTree = false;
    if (param_2 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
      local_198 = (FString *)0x0;
      local_190 = 0;
      pIVar9 = IFileManager::Get();
      if ((param_1->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar9 + 0x88))
                (pIVar9,&local_198,pwVar16,L"*.ini",1,
                 (ulonglong)in_stack_fffffffffffffe20 & 0xffffffffffffff00,1);
      iVar6 = (int)local_190;
      if (0 < (int)local_190) {
        local_res8 = SUB81(this,0);
        AlgoImpl::
        IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                  (local_198,(int)local_190,local_res8,(TLess<void> *)&local_1a0);
        iVar14 = (int)local_190;
        uVar15 = (ulonglong)(int)local_190;
        pFVar12 = local_198 + uVar15;
        pFVar22 = local_198;
        while( true ) {
          piVar19 = &(pFVar8->SourcesInPath).ArrayMax;
          iVar6 = (int)uVar15;
          if ((int)uVar15 != iVar14) {
            local_res20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                          ((ulonglong)local_res20 & 0xffffffffffffff00);
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res20);
            iVar6 = (int)local_190;
          }
          if (pFVar22 == pFVar12) break;
          pFVar10 = FPaths::GetCleanFilename(&local_a0,pFVar22);
          if ((pFVar10->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_188,pwVar16);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          pFVar7 = (FName *)(pFVar8->SourcesInPath).AllocatorInstance.Data;
          if (((pFVar7 <= &local_188) && (&local_188 < pFVar7 + *piVar19)) &&
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
          iVar6 = (pFVar8->SourcesInPath).ArrayNum;
          if (iVar6 == *piVar19) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)pFVar8,piVar19);
          }
          (pFVar8->SourcesInPath).ArrayNum = iVar6 + 1;
          *(FName *)((pFVar8->SourcesInPath).AllocatorInstance.Data + (longlong)iVar6 * 8) =
               local_188;
          pFVar11 = (FScriptContainerElement *)
                    FConfigCacheIni::NormalizeConfigIniPath(&local_90,pFVar22);
          pFVar27 = (pFVar8->TagIniList).AllocatorInstance.Data;
          if (((pFVar27 <= pFVar11) && (pFVar11 < pFVar27 + (longlong)*piVar28 * 0x10)) &&
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
          iVar6 = (pFVar8->TagIniList).ArrayNum;
          if (iVar6 == *piVar28) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(pFVar8->TagIniList).AllocatorInstance,piVar28);
          }
          lVar17 = (longlong)iVar6;
          (pFVar8->TagIniList).ArrayNum = iVar6 + 1;
          pFVar27 = (pFVar8->TagIniList).AllocatorInstance.Data;
          *(undefined8 *)(pFVar27 + lVar17 * 0x10) = 0;
          *(undefined8 *)(pFVar27 + lVar17 * 0x10) = *(undefined8 *)&pFVar11->field_0x0;
          *(undefined8 *)&pFVar11->field_0x0 = 0;
          *(undefined4 *)(pFVar27 + lVar17 * 0x10 + 8) = *(undefined4 *)(pFVar11 + 8);
          *(undefined4 *)(pFVar27 + lVar17 * 0x10 + 0xc) = *(undefined4 *)(pFVar11 + 0xc);
          *(undefined8 *)(pFVar11 + 8) = 0;
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          uVar15 = local_190 & 0xffffffff;
          pFVar22 = pFVar22 + 1;
        }
      }
      DestructItems<FString,int>(local_198,iVar6);
      if (local_198 != (FString *)0x0) {
        FMemory::Free(local_198);
      }
    }
    else {
      iVar14 = *(int *)&(param_2->Elements).field_0x28;
      local_168 = (ForElementType<unsigned_int>)&(param_2->Elements).field_0x10;
      uStack_12c = 1;
      local_118 = 0;
      iStack_11c = 0;
      if (iVar14 != 0) {
        puVar25 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar25 == (uint *)0x0) {
          puVar25 = (uint *)local_168;
        }
        uVar5 = *puVar25;
        iVar6 = 0;
        while (uVar5 == 0) {
          lVar17 = (longlong)iVar6;
          local_118 = local_118 + 0x20;
          iVar6 = iVar6 + 1;
          iStack_11c = iVar14;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_146ad10a4;
          uVar5 = puVar25[lVar17 + 1];
        }
        uStack_12c = -uVar5 & uVar5;
        uVar15 = (ulonglong)uStack_12c * 2 + 1;
        lVar17 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_158 = (int)lVar17;
        iStack_11c = local_158 + -1 + local_118;
        if (iVar14 < iStack_11c) {
          iStack_11c = iVar14;
        }
      }
LAB_146ad10a4:
      local_1a4 = *(uint *)&(param_2->Elements).field_0x28;
      uStack_114 = local_44;
      iStack_110 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uVar5 = local_1a4 & 0xffffffe0;
      uStack_120 = 0xffffffff;
      TStack_100.CurrentBitIndex = iStack_11c;
      TStack_100.UnvisitedBitMask = 0xffffffff;
      TStack_100._padding_ = CONCAT44(uStack_12c,iVar6);
      iVar18 = (int)local_1a4 >> 5;
      TStack_100._28_4_ = local_44;
      TStack_100.BaseBitIndex = local_118;
      uStack_e0 = CONCAT44(uStack_10c,iStack_110);
      bVar13 = (byte)local_1a4;
      local_138 = param_2;
      iStack_130 = iVar6;
      local_128 = (undefined1 *)local_168;
      local_108 = param_2;
      TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_168;
      if ((((int)local_1a4 < 0) || (iVar14 < (int)local_1a4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(int *)((longlong)local_168 + 0x18);
      uVar21 = local_1a4;
      if (local_1a4 != uVar1) {
        FVar24 = *(ForElementType<unsigned_int> *)((longlong)local_168 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_168 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_168;
        }
        uVar21 = -1 << (bVar13 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar18 * 4);
        while (uVar21 == 0) {
          lVar17 = (longlong)iVar18;
          uVar5 = uVar5 + 0x20;
          iVar18 = iVar18 + 1;
          local_1a4 = uVar1;
          uVar21 = uVar1;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_146ad11c0;
          uVar21 = *(uint *)((undefined1 *)((longlong)FVar24 + 4) + lVar17 * 4);
        }
        uVar15 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_154 = (int)lVar17;
        local_1a4 = local_154 + -1 + uVar5;
        uVar21 = local_1a4;
        if ((int)uVar1 < (int)local_1a4) {
          local_1a4 = uVar1;
          uVar21 = uVar1;
        }
      }
LAB_146ad11c0:
      while( true ) {
        pTVar3 = local_108;
        if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
            (int)uStack_e0) {
          local_1a8[0] = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
        }
        if (((TStack_100.CurrentBitIndex == uVar21) &&
            ((ForElementType<unsigned_int>)TStack_100.Array == local_168)) && (pTVar3 == param_2))
        break;
        pFVar22 = (FString *)
                  (*(longlong *)&pTVar3->Elements + (longlong)TStack_100.CurrentBitIndex * 0x18);
        iVar14 = (param_1->Data).ArrayNum;
        iVar6 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar6 = 0;
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar4 = ::FString::StartsWith(pFVar22,pwVar16,iVar6,IgnoreCase);
        if (bVar4) {
          pFVar12 = FPaths::GetCleanFilename(&local_80,pFVar22);
          if ((pFVar12->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_180,pwVar16);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          pFVar7 = (FName *)(pFVar8->SourcesInPath).AllocatorInstance.Data;
          if (((pFVar7 <= &local_180) && (&local_180 < pFVar7 + (pFVar8->SourcesInPath).ArrayMax))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = (pFVar8->SourcesInPath).ArrayNum;
          if (iVar6 == (pFVar8->SourcesInPath).ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)pFVar8,&(pFVar8->SourcesInPath).ArrayMax);
          }
          (pFVar8->SourcesInPath).ArrayNum = iVar6 + 1;
          *(FName *)((pFVar8->SourcesInPath).AllocatorInstance.Data + (longlong)iVar6 * 8) =
               local_180;
          pFVar11 = (FScriptContainerElement *)
                    FConfigCacheIni::NormalizeConfigIniPath(local_70,pFVar22);
          pFVar27 = (pFVar8->TagIniList).AllocatorInstance.Data;
          if (((pFVar27 <= pFVar11) && (pFVar11 < pFVar27 + (longlong)*piVar28 * 0x10)) &&
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
          iVar6 = (pFVar8->TagIniList).ArrayNum;
          if (iVar6 == *piVar28) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(pFVar8->TagIniList).AllocatorInstance,piVar28);
          }
          lVar17 = (longlong)iVar6;
          (pFVar8->TagIniList).ArrayNum = iVar6 + 1;
          pFVar27 = (pFVar8->TagIniList).AllocatorInstance.Data;
          *(undefined8 *)(pFVar27 + lVar17 * 0x10) = 0;
          *(undefined8 *)(pFVar27 + lVar17 * 0x10) = *(undefined8 *)&pFVar11->field_0x0;
          *(undefined8 *)&pFVar11->field_0x0 = 0;
          *(undefined4 *)(pFVar27 + lVar17 * 0x10 + 8) = *(undefined4 *)(pFVar11 + 8);
          *(undefined4 *)(pFVar27 + lVar17 * 0x10 + 0xc) = *(undefined4 *)(pFVar11 + 0xc);
          *(undefined8 *)(pFVar11 + 8) = 0;
          if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
          }
        }
        TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      }
    }
    pFVar8->bWasSearched = true;
  }
  if (pFVar8->bWasAddedToTree == false) {
    pFVar27 = (pFVar8->TagIniList).AllocatorInstance.Data;
    pTVar26 = &pFVar8->TagIniList;
    iVar6 = (pFVar8->TagIniList).ArrayNum;
    pFVar11 = pFVar27 + (longlong)iVar6 * 0x10;
    local_res20 = pTVar26;
    while( true ) {
      if (pTVar26->ArrayNum != iVar6) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_19f);
      }
      if (pFVar27 == pFVar11) break;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      GameplayTagUtil::GetRestrictedConfigsFromIni((FString *)pFVar27,&local_178);
      FPaths::GetPath(&local_148,(FString *)pFVar27);
      iVar14 = local_178.ArrayNum;
      pFVar23 = (FRestrictedConfigInfo *)
                (local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 0x20);
      FVar20.Data = local_178.AllocatorInstance.Data;
      while( true ) {
        if (local_178.ArrayNum != iVar14) {
          `TCheckedPointerIterator<FRestrictedConfigInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_19e);
        }
        pTVar26 = local_res20;
        if ((FRestrictedConfigInfo *)FVar20.Data == pFVar23) break;
        ::FString::PrintfImpl(&local_d8,L"%s/%s");
        AddRestrictedGameplayTagSource(this,&local_d8);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        FVar20.Data = FVar20.Data + 0x20;
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      DestructItems<FRestrictedConfigInfo,int>
                ((FRestrictedConfigInfo *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((FRestrictedConfigInfo *)local_178.AllocatorInstance.Data != (FRestrictedConfigInfo *)0x0)
      {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      pFVar27 = pFVar27 + 0x10;
    }
    AddTagsFromAdditionalLooseIniFiles(this,pTVar26);
    local_160->bWasAddedToTree = true;
    if ((this->bIsConstructingGameplayTagTree == false) && (this->bDoneAddingNativeTags != false)) {
      if (this->bUseFastReplication != false) {
        this->bNetworkIndexInvalidated = true;
      }
      if (this->bDeferBroadcastOnGameplayTagTreeChanged == 0) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&IGameplayTagsModule::OnGameplayTagTreeChanged);
      }
      else {
        this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
      }
    }
  }
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_c8);
  return;
}

// AddTagTableRow @ 146ad1520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGameplayTagsManager::AddTagTableRow
          (UGameplayTagsManager *this,FGameplayTagTableRow *param_1,FName param_2,bool param_3)

{
  void *_Dst;
  undefined4 uVar1;
  FName FVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  int iVar7;
  TSharedPtr<FGameplayTagNode,1> *pTVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  longlong lVar14;
  ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
  FVar15;
  int iVar16;
  FName *pFVar17;
  TSharedPtr<FGameplayTagNode,1> *pTVar18;
  undefined1 *puVar19;
  LPCRITICAL_SECTION p_Var20;
  LPCRITICAL_SECTION lpCriticalSection;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStackY_a88 [32];
  bool local_a38;
  undefined4 local_a20;
  FName local_9f8;
  wchar_t *local_9f0;
  FName local_9e8;
  wchar_t *local_9d8;
  int iStack_9d0;
  wchar_t *local_9c8;
  int iStack_9c0;
  TSharedPtr<FGameplayTagNode,1> local_9b8;
  FName local_9a8;
  FName local_9a0;
  TSharedPtr<FGameplayTagNode,1> local_998 [6];
  TSharedPtr<FGameplayTagNode,1> *local_938;
  int local_930;
  undefined4 local_92c;
  ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
  local_928;
  uint local_8a8;
  uint local_8a4 [3];
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a88;
  FVar21 = (FName)(this->GameplayRootTag).SharedReferenceCount.ReferenceController;
  FVar23 = (FName)(this->GameplayRootTag).Object;
  if (FVar21 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)FVar21 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar21 + 8) + 1);
    UNLOCK();
  }
  p_Var20 = (LPCRITICAL_SECTION)0x0;
  local_92c = 6;
  local_938 = (TSharedPtr<FGameplayTagNode,1> *)0x0;
  local_930 = 0;
  local_a38 = true;
  if ((param_3) && (param_1 != (FGameplayTagTableRow *)0x0)) {
    local_a38 = SUB81(param_1[1]._padding_,0);
  }
  FVar2 = param_1->Tag;
  local_898.Base = local_878;
  local_898.CurPos = local_878;
  local_898.End = local_62;
  local_898.bIsDynamic = false;
  local_898.bIsExternal = false;
  local_9f8 = FVar2;
  local_9e8 = FVar23;
  ::FName::AppendString(&local_9f8,&local_898);
  bVar26 = this->bIsConstructingGameplayTagTree == false;
  local_928.SecondaryData =
       (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
        )0x0;
  local_8a8 = 0;
  lpCriticalSection = p_Var20;
  if (bVar26) {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->GameplayTagMapCritical;
  }
  local_8a4[0] = 6;
  if (bVar26) {
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x3e,L""), bVar26)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    p_Var20 = (LPCRITICAL_SECTION)(ulonglong)local_8a8;
  }
  pwVar9 = local_898.Base;
  iVar16 = (int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1);
  iVar10 = iVar16;
  iStack_9d0 = iVar16;
  local_9d8 = local_898.Base;
  do {
    do {
      iVar7 = iVar10;
      FVar22 = FVar21;
      if (iVar7 == 0) {
LAB_146ad1908:
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
          p_Var20 = (LPCRITICAL_SECTION)(ulonglong)local_8a8;
        }
        uVar11 = (uint)p_Var20;
        if (uVar11 != 0) {
          bVar26 = uVar11 == 0;
          FVar21 = FVar22;
          do {
            uVar12 = (uint)p_Var20;
            if ((bVar26 || (int)uVar11 < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar12 = local_8a8, bVar26)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar14 = (longlong)(int)(uVar12 - 1);
            FVar15 = (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
                      )&local_928;
            if (local_928.SecondaryData !=
                (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
                 )0x0) {
              FVar15 = local_928.SecondaryData;
            }
            pFVar17 = (FName *)((longlong)FVar15 + lVar14 * 0x14);
            FVar2 = *pFVar17;
            FVar22 = pFVar17[1];
            uVar1 = *(undefined4 *)((uchar *)((longlong)FVar15 + 0x10) + lVar14 * 0x14);
            FVar15 = (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
                      )&local_928;
            if (local_928.SecondaryData !=
                (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
                 )0x0) {
              FVar15 = local_928.SecondaryData;
            }
            _Dst = (void *)((longlong)FVar15 + lVar14 * 0x14);
            iVar10 = (uVar12 - (uVar12 - 1)) + -1;
            if (iVar10 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x14),(longlong)iVar10 * 0x14);
              uVar12 = local_8a8;
            }
            local_8a8 = uVar12 - 1;
            UE::Core::Private::
            ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<_UGameplayTagsManager::AddTagTableRow_::__l2::FRequiredTag>_>
                      (0x14,4,&local_928,local_8a8,(int *)local_8a4);
            if (FVar21 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar21 + 8) = *(int *)((longlong)FVar21 + 8) + 1;
              UNLOCK();
            }
            local_9b8.Object = (FGameplayTagNode *)FVar23;
            local_9b8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)FVar21;
            uVar12 = InsertTagIntoNodeArray
                               (this,FVar2,FVar22,&local_9b8,
                                (TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_>
                                 *)((longlong)FVar23 + 0x28),param_2,&param_1->DevComment,
                                SUB41(uVar1,0),param_3,local_a38);
            uVar11 = 0;
            if ((int)uVar12 < *(int *)((longlong)FVar23 + 0x30)) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (((TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)FVar23 + 0x28))->AllocatorInstance).Data;
            FVar22 = *(FName *)(pFVar4 + (longlong)(int)uVar12 * 0x10 + 8);
            FVar23 = *(FName *)(pFVar4 + (longlong)(int)uVar12 * 0x10);
            if (FVar22 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar22 + 8) = *(int *)((longlong)FVar22 + 8) + 1;
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar21);
            p_Var20 = (LPCRITICAL_SECTION)(ulonglong)local_8a8;
            bVar26 = local_8a8 == 0;
            FVar21 = FVar22;
            uVar11 = local_8a8;
          } while (!bVar26);
        }
        if (local_928.SecondaryData !=
            (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
             )0x0) {
          FMemory::Free((void *)local_928.SecondaryData);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
        pTVar8 = local_938;
        pTVar18 = local_998;
        if (local_938 != (TSharedPtr<FGameplayTagNode,1> *)0x0) {
          pTVar18 = local_938;
        }
        DestructItems<TSharedPtr<FGameplayTagNode,1>,int>(pTVar18,local_930);
        if (pTVar8 != (TSharedPtr<FGameplayTagNode,1> *)0x0) {
          FMemory::Free(pTVar8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar22);
        return;
      }
      local_9c8 = pwVar9;
      local_9f0 = pwVar9 + (longlong)iVar7 + -1;
      while ((local_9f0 != pwVar9 + -1 &&
             (((-(ulonglong)((ushort)*local_9f0 < 0x40) & 0x400000000000) >>
               ((byte)*local_9f0 & 0x3f) & 1) == 0))) {
        local_9f0 = local_9f0 + -1;
      }
      local_9f0 = local_9f0 + 1;
      iVar24 = (int)((longlong)pwVar9 + ((longlong)iVar7 * 2 - (longlong)local_9f0) >> 1);
      iVar10 = iVar7;
      if (iVar7 - iVar24 < iVar7) {
        iVar10 = iVar7 - iVar24;
      }
      iVar25 = 0;
      if (0 < iVar10) {
        iVar25 = iVar10;
      }
      pwVar6 = pwVar9 + iVar25;
      do {
        pwVar6 = pwVar6 + -1;
        if (pwVar6 == pwVar9 + -1) break;
      } while (((-(ulonglong)((ushort)*pwVar6 < 0x40) & 0x400000000000) >> ((byte)*pwVar6 & 0x3f) &
               1) != 0);
      iVar10 = iVar25 - (int)((longlong)(pwVar9 + iVar25) + (-2 - (longlong)pwVar6) >> 1);
      if (iVar10 < iVar25) {
        iVar25 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar25) {
        iVar10 = iVar25;
      }
      FVar23 = local_9e8;
      iStack_9c0 = iVar10;
    } while (iVar24 == 0);
    FVar22 = FVar2;
    if (iVar7 != iVar16) {
      pFVar17 = ::FName::FName(&local_9a8,iVar7,pwVar9,FNAME_Add);
      FVar22 = *pFVar17;
      uVar11 = ::GetTypeHash(FVar22.ComparisonIndex.Value);
      if (*(int *)&(this->GameplayTagNodeMap).field_0x8 !=
          *(int *)&(this->GameplayTagNodeMap).field_0x34) {
        puVar3 = *(undefined1 **)&(this->GameplayTagNodeMap).field_0x40;
        puVar19 = &(this->GameplayTagNodeMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar19 = puVar3;
        }
        uVar11 = *(uint *)(puVar19 +
                          (ulonglong)
                          (*(int *)&(this->GameplayTagNodeMap).field_0x48 - 1U &
                          FVar22.Number + uVar11) * 4);
        if (uVar11 != 0xffffffff) {
          do {
            pFVar17 = (FName *)((longlong)(int)uVar11 * 0x20 +
                               *(longlong *)&this->GameplayTagNodeMap);
            if (*pFVar17 == FVar22) {
              pFVar13 = pFVar17 + 1;
              if (pFVar17 == (FName *)0x0) {
                pFVar13 = (FName *)0x0;
              }
              if ((pFVar13 != (FName *)0x0) && (FVar23 = *pFVar13, FVar23 != (FName)0x0)) {
                FVar22 = pFVar13[1];
                if (FVar22 != (FName)0x0) {
                  LOCK();
                  *(atomic<int> *)((longlong)FVar22 + 8) =
                       (atomic<int>)((int)*(atomic<int> *)((longlong)FVar22 + 8) + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)FVar21);
                p_Var20 = (LPCRITICAL_SECTION)(ulonglong)local_8a8;
                goto LAB_146ad1908;
              }
              break;
            }
            uVar11 = pFVar17[3].ComparisonIndex.Value;
          } while (uVar11 != 0xffffffff);
        }
      }
    }
    pFVar17 = ::FName::FName(&local_9a0,iVar24,local_9f0,FNAME_Add);
    FVar23 = *pFVar17;
    uVar11 = (uint)local_a20 >> 8;
    local_a20 = CONCAT31((int3)uVar11,iVar7 == iVar16);
    if (local_8a8 == local_8a4[0]) {
      local_8a8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<_UGameplayTagsManager::AddTagTableRow_::__l2::FRequiredTag>_>
                            (0x414,&local_928,(int *)local_8a4);
    }
    lVar14 = (longlong)(int)local_8a8;
    local_8a8 = local_8a8 + 1;
    FVar15 = (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
              )&local_928;
    if (local_928.SecondaryData !=
        (ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
         )0x0) {
      FVar15 = local_928.SecondaryData;
    }
    pFVar17 = (FName *)((longlong)FVar15 + lVar14 * 0x14);
    *pFVar17 = FVar23;
    pFVar17[1] = FVar22;
    *(undefined4 *)((uchar *)((longlong)FVar15 + 0x10) + lVar14 * 0x14) = local_a20;
    p_Var20 = (LPCRITICAL_SECTION)(ulonglong)local_8a8;
    FVar23 = local_9e8;
  } while( true );
}

// AddTagsFromAdditionalLooseIniFiles @ 146ad1b70

void __thiscall
UGameplayTagsManager::AddTagsFromAdditionalLooseIniFiles
          (UGameplayTagsManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  UGameplayTagsList *pUVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  FGameplayTagSource *pFVar11;
  UClass *pUVar12;
  FGameplayTagRedirectors *this_00;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  wchar_t *pwVar15;
  FGameplayTagTableRow *pFVar16;
  FGameplayTagTableRow *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_60;
  FString local_58;
  FString local_48;
  
  pFVar18 = (param_1->AllocatorInstance).Data;
  uVar1 = param_1->ArrayNum;
  uVar13 = (ulonglong)(int)uVar1;
  pFVar19 = pFVar18 + uVar13 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar18 == pFVar19) {
      return;
    }
    pFVar10 = FPaths::GetCleanFilename(&local_48,(FString *)pFVar18);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_60,pwVar15);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar6 = local_60;
    uVar8 = ::GetTypeHash(local_60.ComparisonIndex.Value);
    if (*(int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x8 !=
        *(int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x34) {
      FVar2 = (this->RestrictedGameplayTagSourceNames).Hash.SecondaryData;
      FVar14 = (ForElementType<FSetElementId>)&(this->RestrictedGameplayTagSourceNames).Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar14 = FVar2;
      }
      iVar9 = *(int *)((longlong)FVar14 +
                      (ulonglong)
                      ((this->RestrictedGameplayTagSourceNames).HashSize - 1U & FVar6.Number + uVar8
                      ) * 4);
      if (iVar9 != -1) {
        lVar3 = *(longlong *)&(this->RestrictedGameplayTagSourceNames).Elements;
        do {
          if (*(FName *)(lVar3 + (longlong)iVar9 * 0x10) == FVar6) goto LAB_146ad1dcc;
          iVar9 = *(int *)(lVar3 + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
    lpCriticalSection = &this->GameplayTagMapCritical;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pFVar11 = FindOrAddTagSource(this,local_60,TagList,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((pFVar11 != (FGameplayTagSource *)0x0) &&
       (pUVar4 = (pFVar11->SourceTagList).field0_0x0.DebugPtr, pUVar4 != (UGameplayTagsList *)0x0))
    {
      ::FString::operator=(&pUVar4->ConfigFileName,(FString *)pFVar18);
      pUVar4 = (pFVar11->SourceTagList).field0_0x0.DebugPtr;
      if (*(int *)(pFVar18 + 8) == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)&pFVar18->field_0x0;
      }
      pUVar12 = UGameplayTagsList::StaticClass();
      UObject::LoadConfig((UObject *)pUVar4,pUVar12,pwVar15,0,(FProperty *)0x0,
                          (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                           *)0x0);
      FConfigCacheIni::Remove(GConfig,(FString *)pFVar18);
      this_00 = FGameplayTagRedirectors::Get();
      pUVar4 = (pFVar11->SourceTagList).field0_0x0.DebugPtr;
      if (pUVar4 != (UGameplayTagsList *)0x0) {
        FGameplayTagRedirectors::AddRedirects(this_00,&pUVar4->GameplayTagRedirects);
      }
      pUVar4 = (pFVar11->SourceTagList).field0_0x0.DebugPtr;
      iVar9 = (pUVar4->GameplayTagList).ArrayNum;
      pFVar17 = (FGameplayTagTableRow *)(pUVar4->GameplayTagList).AllocatorInstance.Data;
      pFVar16 = pFVar17 + iVar9;
      while( true ) {
        if ((pUVar4->GameplayTagList).ArrayNum != iVar9) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FGameplayTagTableRow,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar17 == pFVar16) break;
        AddTagTableRow(this,pFVar17,local_60,false);
        pFVar17 = pFVar17 + 1;
      }
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
LAB_146ad1dcc:
    pFVar18 = pFVar18 + 0x10;
    uVar13 = (ulonglong)uVar1;
  } while( true );
}

// BroadcastOnGameplayTagTreeChanged @ 146ad27e0

void __thiscall UGameplayTagsManager::BroadcastOnGameplayTagTreeChanged(UGameplayTagsManager *this)

{
  if (this->bDeferBroadcastOnGameplayTagTreeChanged != 0) {
    this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
    return;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&IGameplayTagsModule::OnGameplayTagTreeChanged);
  return;
}

// CallOrRegister_OnDoneAddingNativeTagsDelegate @ 146ad2ab0

FDelegateHandle __thiscall
UGameplayTagsManager::CallOrRegister_OnDoneAddingNativeTagsDelegate
          (UGameplayTagsManager *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *in_R8;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (this->bDoneAddingNativeTags != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,
               (FReadAccessScope *)&local_20);
    if (*(int *)&in_R8->field_0x10 == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = *(longlong **)&in_R8->field_0x8;
    }
    (**(code **)(*plVar1 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    *(undefined8 *)param_1 = 0;
    return (FDelegateHandle)(ulong64)param_1;
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)OnDoneAddingNativeTagsDelegate();
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,in_R8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>(this_00,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return (FDelegateHandle)(ulong64)param_1;
}

// ClearShouldDeferGameplayTagTreeRebuilds @ 146ad2c40

/* WARNING: Removing unreachable block (ram,0x000146ad2c77) */
/* WARNING: Removing unreachable block (ram,0x000146ad2c80) */
/* WARNING: Removing unreachable block (ram,0x000146ad2c89) */
/* WARNING: Removing unreachable block (ram,0x000146ad2c90) */
/* WARNING: Removing unreachable block (ram,0x000146ad2c99) */
/* WARNING: Removing unreachable block (ram,0x000146ad2ca6) */

void __thiscall
UGameplayTagsManager::ClearShouldDeferGameplayTagTreeRebuilds
          (UGameplayTagsManager *this,bool param_1)

{
  if ((this->ShouldDeferGameplayTagTreeRebuilds).bIsSet != false) {
    (this->ShouldDeferGameplayTagTreeRebuilds).bIsSet = false;
  }
  if (param_1) {
    if ((this->bIsConstructingGameplayTagTree == false) && (this->bDoneAddingNativeTags != false)) {
      DestroyGameplayTagTree(this);
      ConstructGameplayTagTree(this);
      return;
    }
    this->bNeedsTreeRebuildOnDoneAddingGameplayTags = true;
  }
  return;
}

// ClearShouldUnloadTagsOverride @ 146ad2ce0

void __thiscall UGameplayTagsManager::ClearShouldUnloadTagsOverride(UGameplayTagsManager *this)

{
  if ((this->ShouldAllowUnloadingTagsOverride).bIsSet != false) {
    (this->ShouldAllowUnloadingTagsOverride).bIsSet = false;
  }
  return;
}

// ConstructGameplayTagTree @ 146ad2d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTagsManager::ConstructGameplayTagTree(UGameplayTagsManager *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar3;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  FName FVar7;
  FNativeGameplayTag *this_00;
  UObject *pUVar8;
  code *pcVar9;
  FName FVar10;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *pTVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FGameplayTagNode *pFVar16;
  UGameplayTagsSettings *pUVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
  *pTVar19;
  FGameplayTagSource *pFVar20;
  UGameplayTagsList *pUVar21;
  UClass *pUVar22;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar23;
  FName *pFVar24;
  longlong lVar25;
  FString *pFVar26;
  wchar_t *pwVar27;
  int iVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  FGameplayTagTableRow *pFVar33;
  FName *pFVar34;
  FGameplayTagNode *pFVar35;
  undefined1 *puVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  FGameplayTagTableRow *pFVar40;
  undefined1 local_318;
  undefined1 local_317;
  undefined1 local_316;
  undefined1 local_315;
  undefined1 local_314;
  bool local_313;
  FIdentityFunctor local_312 [2];
  FName *local_310;
  longlong local_308;
  TArray<FString,TSizedDefaultAllocator<32>_> local_300;
  TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
  *local_2f0;
  undefined8 uStack_2e8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  int local_2c8;
  undefined4 uStack_2c4;
  undefined1 local_2c0 [12];
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b0;
  undefined8 uStack_2a8;
  longlong lStack_2a0;
  int local_298;
  undefined4 uStack_294;
  TPairInitializer<FName_const_&,FGameplayTagSource_&&> local_290;
  FString local_280;
  FString local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_240;
  int local_220;
  int local_21c;
  TRawPtrProxy<FGameplayTagNode> local_218;
  FName local_210;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_208;
  undefined1 local_1f8 [12];
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FGameplayTagTableRow local_198;
  FGameplayTagSource **local_178;
  FName *local_170;
  FString local_168;
  FString local_158;
  FGameplayTagTableRow local_148;
  FString local_128;
  FString local_118;
  FName local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  TRangedForIterator local_e8;
  TRangedForIterator local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  undefined4 local_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_48;
  
  if ((&this->GameplayTagMapCritical == (FWindowsRecursiveMutex *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->GameplayTagMapCritical);
  local_313 = this->bIsConstructingGameplayTagTree;
  this->bIsConstructingGameplayTagTree = true;
  if ((this->GameplayRootTag).Object == (FGameplayTagNode *)0x0) {
    pFVar16 = ::operator_new(0x50);
    pFVar35 = (FGameplayTagNode *)0x0;
    uVar37 = 0;
    local_218.Object = pFVar35;
    if (pFVar16 != (FGameplayTagNode *)0x0) {
      (pFVar16->Tag).ComparisonIndex = 0;
      (pFVar16->Tag).Number = 0;
      (pFVar16->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar16->CompleteTagWithParents).GameplayTags.ArrayNum = 0;
      (pFVar16->CompleteTagWithParents).GameplayTags.ArrayMax = 0;
      (pFVar16->CompleteTagWithParents).ParentTags.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar16->CompleteTagWithParents).ParentTags.ArrayNum = 0;
      (pFVar16->CompleteTagWithParents).ParentTags.ArrayMax = 0;
      (pFVar16->ChildTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->ChildTags).ArrayNum = 0;
      (pFVar16->ChildTags).ArrayMax = 0;
      (pFVar16->ParentNode).Object = (FGameplayTagNode *)0x0;
      (pFVar16->ParentNode).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_218.Object = pFVar16;
    }
    TSharedPtr<FGameplayTagNode,1>::operator=<FGameplayTagNode>(&this->GameplayRootTag,&local_218);
    pUVar17 = GetDefault<UGameplayTagsSettings>();
    ::FString::operator=(&this->InvalidTagCharacters,&pUVar17->InvalidTagCharacters);
    ::FString::AppendChars(&this->InvalidTagCharacters,L"\r\n\t",3);
    bVar12 = ShouldImportTagsFromINI(this);
    if (bVar12) {
      local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_300.ArrayNum = 0;
      local_300.ArrayMax = 0;
      GetRestrictedTagConfigFiles(this,&local_300);
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_300.AllocatorInstance.Data,local_300.ArrayNum,local_312[0],
                 (TLess<void> *)local_312);
      iVar28 = local_300.ArrayNum;
      pFVar32 = local_300.AllocatorInstance.Data + (longlong)local_300.ArrayNum * 0x10;
      FVar29.Data = local_300.AllocatorInstance.Data;
      while( true ) {
        if (local_300.ArrayNum != iVar28) {
          local_318 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_318);
        }
        if (FVar29.Data == pFVar32) break;
        AddRestrictedGameplayTagSource(this,(FString *)FVar29.Data);
        FVar29.Data = FVar29.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_300.AllocatorInstance.Data,local_300.ArrayNum);
      if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.AllocatorInstance.Data);
      }
    }
    puVar1 = &(this->LegacyNativeTags).Elements.field_0x10;
    local_310 = (FName *)0x1;
    local_260._padding_._4_4_ = 1;
    pTVar3 = &this->LegacyNativeTags;
    local_260.UnvisitedBitMask = 0xffffffff;
    local_260._padding_._0_4_ = 0;
    local_260.CurrentBitIndex = 0;
    local_260.BaseBitIndex = 0;
    local_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(this->LegacyNativeTags).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
    }
    unique0x10000d31 = CONCAT44(local_260._padding_._4_4_,(undefined4)local_260._padding_);
    uStack_2a8 = CONCAT44(local_260.CurrentBitIndex,local_260.UnvisitedBitMask);
    lStack_2a0 = CONCAT44(local_260._28_4_,local_260.BaseBitIndex);
    local_298 = *(int *)&(this->LegacyNativeTags).Elements.field_0x8 -
                *(int *)&(this->LegacyNativeTags).Elements.field_0x34;
    pTStack_2b0 = local_260.Array;
    local_1e8 = local_260.Array;
    iStack_1d0 = local_298;
    uStack_1cc = uStack_294;
    local_2c0._0_8_ = pTVar3;
    local_1f8._0_8_ = pTVar3;
    unique0x10001a93 = unique0x10000d31;
    uStack_1e0 = uStack_2a8;
    local_1d8 = lStack_2a0;
    pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_48,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(this->LegacyNativeTags).Elements.field_0x28);
    unique0x10000ac1 = pTVar18->_padding_;
    pTStack_2b0 = pTVar18->Array;
    uStack_2a8._0_4_ = pTVar18->UnvisitedBitMask;
    uStack_2a8._4_4_ = pTVar18->CurrentBitIndex;
    lStack_2a0 = *(longlong *)&pTVar18->BaseBitIndex;
    local_e8.InitialNum =
         *(int *)&(this->LegacyNativeTags).Elements.field_0x8 -
         *(int *)&(this->LegacyNativeTags).Elements.field_0x34;
    local_298 = local_e8.InitialNum;
    local_e8._44_4_ = uStack_294;
    local_2c0._0_8_ = pTVar3;
    local_e8._padding_ = (longlong)pTVar3;
    local_e8._padding_ = unique0x10000ac1;
    local_e8._padding_ = (longlong)pTStack_2b0;
    local_e8._padding_ = uStack_2a8;
    local_e8._padding_ = lStack_2a0;
    bVar12 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_1f8,&local_e8);
    pFVar34 = (FName *)1;
    if (bVar12) {
      do {
        FVar10 = NAME_Native;
        FVar7 = *(FName *)(*(longlong *)
                            (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_1f8._0_8_ + (longlong)uStack_1e0._4_4_ * 0x10);
        ::FString::FString(&local_168,L"");
        local_148._padding_ = (longlong)&___7FGameplayTagTableRow__6B_;
        local_148.Tag = FVar7;
        ::FString::FString(&local_148.DevComment,&local_168);
        AddTagTableRow(this,&local_148,FVar10,false);
        if (local_148.DevComment.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.DevComment.Data.AllocatorInstance.Data);
        }
        local_148._padding_ = (longlong)&___7FTableRowBase__6B_;
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0 & ~uStack_1ec);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1f8 + 8));
        bVar12 = TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_1f8,&local_e8);
        pFVar34 = local_310;
      } while (bVar12);
    }
    pTVar19 = FNativeGameplayTag::GetRegisteredNativeTags();
    local_240._padding_._0_4_ = 0;
    local_240._padding_._4_4_ = SUB84(pFVar34,0);
    local_240.UnvisitedBitMask = 0xffffffff;
    puVar1 = &(pTVar19->Elements).field_0x10;
    local_240.CurrentBitIndex = 0;
    local_240.BaseBitIndex = 0;
    local_240.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(pTVar19->Elements).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_240);
    }
    uStack_2e8 = CONCAT44(local_240._padding_._4_4_,(undefined4)local_240._padding_);
    uStack_2d8 = CONCAT44(local_240.CurrentBitIndex,local_240.UnvisitedBitMask);
    uStack_2d0 = CONCAT44(local_240._28_4_,local_240.BaseBitIndex);
    local_2c8 = *(int *)&(pTVar19->Elements).field_0x8 - *(int *)&(pTVar19->Elements).field_0x34;
    pTStack_2e0 = local_240.Array;
    uStack_294 = uStack_2c4;
    local_298 = local_2c8;
    pTStack_2b0 = local_240.Array;
    local_2f0 = pTVar19;
    local_2c0._0_8_ = pTVar19;
    unique0x10001a53 = uStack_2e8;
    uStack_2a8 = uStack_2d8;
    lStack_2a0 = uStack_2d0;
    pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_88,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(pTVar19->Elements).field_0x28);
    uStack_2e8 = pTVar18->_padding_;
    pTStack_2e0 = pTVar18->Array;
    uStack_2d8._0_4_ = pTVar18->UnvisitedBitMask;
    uStack_2d8._4_4_ = pTVar18->CurrentBitIndex;
    uStack_2d0 = *(longlong *)&pTVar18->BaseBitIndex;
    local_2c8 = *(int *)&(pTVar19->Elements).field_0x8 - *(int *)&(pTVar19->Elements).field_0x34;
    local_b8._44_4_ = uStack_2c4;
    local_b8.InitialNum = local_2c8;
    local_2f0 = pTVar19;
    local_b8._padding_ = (longlong)pTVar19;
    local_b8._padding_ = uStack_2e8;
    local_b8._padding_ = (longlong)pTStack_2e0;
    local_b8._padding_ = uStack_2d8;
    local_b8._padding_ = uStack_2d0;
    bVar12 = TSparseArray<TSparseSetElement<FNativeGameplayTag_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_2c0,&local_b8);
    if (bVar12) {
      do {
        local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_280.Data.ArrayNum = 0;
        local_280.Data.ArrayMax = 0;
        this_00 = *(FNativeGameplayTag **)
                   (*(longlong *)
                     (TSparseArray<TSparseSetElement<FNativeGameplayTag_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_2c0._0_8_ + (longlong)uStack_2a8._4_4_ * 0x10);
        FindOrAddTagSource(this,FNativeGameplayTag::NAME_NativeGameplayTag,Native,&local_280);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        FVar7 = FNativeGameplayTag::NAME_NativeGameplayTag;
        FNativeGameplayTag::ValidateTagRegistration(this_00);
        ::FString::FString(&local_158,L"");
        local_198._padding_ = (longlong)&___7FGameplayTagTableRow__6B_;
        local_198.Tag = (this_00->InternalTag).TagName;
        ::FString::FString(&local_198.DevComment,&local_158);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        AddTagTableRow(this,&local_198,FVar7,false);
        if (local_198.DevComment.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.DevComment.Data.AllocatorInstance.Data);
        }
        local_198._padding_ = (longlong)&___7FTableRowBase__6B_;
        uStack_2a8 = CONCAT44(uStack_2a8._4_4_,(uint)uStack_2a8 & ~uStack_2b4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2c0 + 8));
        bVar12 = TSparseArray<TSparseSetElement<FNativeGameplayTag_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_2c0,&local_b8);
      } while (bVar12);
    }
    pFVar30 = (this->GameplayTagTables).AllocatorInstance.Data;
    iVar28 = (this->GameplayTagTables).ArrayNum;
    pFVar32 = pFVar30 + (longlong)iVar28 * 8;
    while( true ) {
      if ((this->GameplayTagTables).ArrayNum != iVar28) {
        local_317 = 0;
        `TCheckedPointerIterator<TObjectPtr<UDataTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_317);
      }
      if (pFVar30 == pFVar32) break;
      if (*(UDataTable **)pFVar30 != (UDataTable *)0x0) {
        PopulateTreeFromDataTable(this,*(UDataTable **)pFVar30);
      }
      pFVar30 = pFVar30 + 8;
    }
    local_290.Value = (FGameplayTagSource *)NAME_Native;
    pFVar20 = TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
              ::Find((TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
                      *)&this->TagSources,NAME_Native);
    if (pFVar20 == (FGameplayTagSource *)0x0) {
      local_108 = (FName)local_290.Value;
      local_178 = &local_290.Value;
      local_100 = 0;
      local_170 = &local_108;
      local_f8 = 0;
      uStack_f0 = 0;
      TSet<TTuple<FName,FGameplayTagSource>,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FGameplayTagSource_&&>_>
                ((TSet<TTuple<FName,FGameplayTagSource>,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>,FDefaultSetAllocator>
                  *)&this->TagSources,&local_290,(bool *)&local_178);
      lVar25 = *(longlong *)&this->TagSources;
      pUVar21 = NewObject<UGameplayTagsList>
                          ((UObject *)this,(FName)local_290.Value,RF_Transient,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar21 != (UGameplayTagsList *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar21);
      }
      *(UGameplayTagsList **)((longlong)(int)local_290.Key * 0x30 + lVar25 + 0x18) = pUVar21;
    }
    pUVar22 = UGameplayTagsSettings::StaticClass();
    if ((pUVar22->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar22);
    }
    if ((pUVar22->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x8 != '\0') {
      pUVar22 = UGameplayTagsSettings::StaticClass();
      if ((pUVar22->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar22);
      }
      FVar7 = NAME_DefaultGameplayTagsIni;
      pUVar8 = (pUVar22->ClassDefaultObject).field0_0x0.DebugPtr;
      local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Data.ArrayNum = 0;
      local_270.Data.ArrayMax = 0;
      FindOrAddTagSource(this,NAME_DefaultGameplayTagsIni,DefaultTagList,&local_270);
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      iVar28 = *(int *)(pUVar8 + 2);
      pFVar33 = *(FGameplayTagTableRow **)&pUVar8[1].field_0x20;
      pFVar40 = pFVar33 + iVar28;
      while( true ) {
        if (*(int *)(pUVar8 + 2) != iVar28) {
          local_316 = 0;
          `TCheckedPointerIterator<FGameplayTagTableRow_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_316);
        }
        if (pFVar33 == pFVar40) break;
        AddTagTableRow(this,pFVar33,FVar7,false);
        pFVar33 = pFVar33 + 1;
      }
      pTVar23 = &FPaths::ProjectConfigDir(&local_128)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_208,pTVar23,6 - (uint)(pTVar23->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_208,L"Tags",4);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      AddTagIniSearchPath(this,(FString *)&local_208,
                          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
      puVar1 = &(this->RegisteredSearchPaths).field_0x10;
      uVar6 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
      local_2f0 = (TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
                   *)&this->RegisteredSearchPaths;
      TStack_1c0.CurrentBitIndex = uVar37;
      if (uVar6 == 0) {
LAB_146ad357f:
        iVar28 = (int)pFVar35;
        uVar13 = (uint)local_310;
      }
      else {
        puVar39 = *(uint **)&(this->RegisteredSearchPaths).field_0x20;
        if (puVar39 == (uint *)0x0) {
          puVar39 = (uint *)puVar1;
        }
        uVar13 = *puVar39;
        pFVar16 = pFVar35;
        while (iVar28 = (int)pFVar35, uVar13 == 0) {
          uVar37 = (int)pFVar16 + 0x20;
          pFVar16 = (FGameplayTagNode *)(ulonglong)uVar37;
          pFVar35 = (FGameplayTagNode *)(ulonglong)(iVar28 + 1U);
          TStack_1c0.CurrentBitIndex = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)(iVar28 + 1U))
          goto LAB_146ad357f;
          uVar13 = puVar39[(longlong)iVar28 + 1];
        }
        uVar13 = -uVar13 & uVar13;
        uVar5 = (ulonglong)uVar13 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_220 = (int)lVar25;
        TStack_1c0.CurrentBitIndex = (uVar37 - 1) + local_220;
        if ((int)uVar6 < TStack_1c0.CurrentBitIndex) {
          TStack_1c0.CurrentBitIndex = uVar6;
        }
      }
      uVar14 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
      local_2c8 = *(int *)&(this->RegisteredSearchPaths).field_0x8 -
                  *(int *)&(this->RegisteredSearchPaths).field_0x34;
      uVar31 = uVar14 & 0xffffffe0;
      uStack_2d8 = CONCAT44(TStack_1c0.CurrentBitIndex,0xffffffff);
      uVar38 = -1 << ((byte)uVar14 & 0x1f);
      uStack_2e8 = CONCAT44(uVar13,iVar28);
      uStack_2d0 = CONCAT44(local_4c,uVar37);
      TStack_1c0._padding_ = uStack_2e8;
      iVar28 = (int)uVar14 >> 5;
      local_310 = (FName *)CONCAT44(local_310._4_4_,uVar38);
      uStack_1a0 = CONCAT44(uStack_2c4,local_2c8);
      TStack_1c0.UnvisitedBitMask = 0xffffffff;
      TStack_1c0._24_8_ = uStack_2d0;
      pTStack_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_1c8 = (TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
                   *)local_2f0;
      TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (((int)uVar14 < 0) || ((int)uVar6 < (int)uVar14)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar38 = (uint)local_310;
      }
      uVar37 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
      if (uVar14 != uVar37) {
        puVar36 = *(undefined1 **)&(this->RegisteredSearchPaths).field_0x20;
        if (puVar36 == (undefined1 *)0x0) {
          puVar36 = puVar1;
        }
        uVar38 = uVar38 & *(uint *)(puVar36 + (longlong)iVar28 * 4);
        while (uVar38 == 0) {
          lVar25 = (longlong)iVar28;
          uVar31 = uVar31 + 0x20;
          iVar28 = iVar28 + 1;
          uVar14 = uVar37;
          if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
          goto LAB_146ad36a1;
          uVar38 = *(uint *)(puVar36 + lVar25 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_21c = (int)lVar25;
        uVar14 = local_21c + -1 + uVar31;
        if ((int)uVar37 < (int)uVar14) {
          uVar14 = uVar37;
        }
      }
LAB_146ad36a1:
      while( true ) {
        pTVar11 = local_1c8;
        if (*(int *)(&local_1c8->field_0x0 + 8) - *(int *)(&local_1c8->field_0x0 + 0x34) !=
            (int)uStack_1a0) {
          local_315 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_315);
        }
        if (((TStack_1c0.CurrentBitIndex == uVar14) &&
            (TStack_1c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar11 == &this->RegisteredSearchPaths)) break;
        pFVar26 = (FString *)
                  ((longlong)TStack_1c0.CurrentBitIndex * 0x40 + *(longlong *)&pTVar11->field_0x0);
        if ((*(char *)&pFVar26[3].Data.AllocatorInstance.Data == '\0') ||
           (*(char *)((longlong)&pFVar26[3].Data.AllocatorInstance.Data + 1) == '\0')) {
          AddTagIniSearchPath(this,pFVar26,
                              (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
        }
        TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
      }
      if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
    }
    pwVar27 = L"";
    if (GGameplayTagsIni.Data.ArrayNum != 0) {
      pwVar27 = (wchar_t *)GGameplayTagsIni.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SafeUnloadBranch(GConfig,pwVar27);
    pUVar22 = UGameplayTagsSettings::StaticClass();
    if ((pUVar22->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar22);
    }
    pUVar8 = (pUVar22->ClassDefaultObject).field0_0x0.DebugPtr;
    pTVar4 = &this->CommonlyReplicatedTags;
    piVar2 = &(this->CommonlyReplicatedTags).ArrayMax;
    (this->CommonlyReplicatedTags).ArrayNum = 0;
    if ((this->CommonlyReplicatedTags).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar4->AllocatorInstance,0,piVar2);
    }
    pFVar34 = *(FName **)&pUVar8[3].field_0x18;
    iVar28 = *(int *)&pUVar8[3].field_0x20;
    local_310 = pFVar34 + iVar28;
    pFVar24 = local_310;
    while( true ) {
      if (*(int *)&pUVar8[3].field_0x20 != iVar28) {
        local_314 = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_314);
        pFVar24 = local_310;
      }
      if (pFVar34 == pFVar24) break;
      local_210 = *pFVar34;
      if (local_210 == (FName)0x0) {
LAB_146ad3914:
        pFVar34 = pFVar34 + 1;
      }
      else {
        RequestGameplayTag(this,(FName)&local_308,local_210.ComparisonIndex.Value._0_1_);
        if (local_308 == 0) {
          pFVar24 = local_310;
          if (2 < (byte)LogGameplayTags._0_1_) {
            ::FName::ToString(&local_210,&local_118);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
            pFVar24 = local_310;
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
              pFVar24 = local_310;
            }
          }
          goto LAB_146ad3914;
        }
        pFVar32 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar32 <= (FScriptContainerElement *)&local_308) &&
            ((FScriptContainerElement *)&local_308 < pFVar32 + (longlong)*piVar2 * 8)) &&
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
        iVar15 = (this->CommonlyReplicatedTags).ArrayNum;
        if (iVar15 == *piVar2) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar4->AllocatorInstance,piVar2);
        }
        pFVar34 = pFVar34 + 1;
        (this->CommonlyReplicatedTags).ArrayNum = iVar15 + 1;
        *(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_308;
        pFVar24 = local_310;
      }
    }
    bVar12 = (bool)pUVar8[2].field_0xd;
    this->bUseFastReplication = bVar12;
    this->bUseDynamicReplication = (bool)pUVar8[2].field_0xe;
    this->bShouldWarnOnInvalidTags = (bool)pUVar8[2].field_0x9;
    this->NumBitsForContainerSize = *(int *)(pUVar8 + 4);
    this->NetIndexFirstBitSegment = *(int *)&pUVar8[4].field_0x4;
    this->bShouldAllowUnloadingTags = (bool)pUVar8[2].field_0xc;
    if (bVar12 != false) {
      this->bNetworkIndexInvalidated = true;
    }
    if (this->bDeferBroadcastOnGameplayTagTreeChanged == 0) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&IGameplayTagsModule::OnGameplayTagTreeChanged);
    }
    else {
      this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
    }
  }
  this->bIsConstructingGameplayTagTree = local_313;
  if (&this->GameplayTagMapCritical != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->GameplayTagMapCritical);
  }
  return;
}

// ConstructNetIndex @ 146ad39f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTagsManager::ConstructNetIndex(UGameplayTagsManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *this_00;
  FString *pFVar11;
  wchar_t *pwVar12;
  FGameplayTag *pFVar13;
  ushort uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  int *piVar22;
  float fVar23;
  FIdentityFunctor local_res8 [8];
  longlong local_res10;
  FName *local_res18;
  longlong local_res20;
  UGameplayTagsManager *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if ((&this->GameplayTagMapCritical == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->GameplayTagMapCritical);
  this->bNetworkIndexInvalidated = false;
  pTVar19 = &this->NetworkGameplayTagNodeIndex;
  DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
            ((TSharedPtr<FGameplayTagNode,1> *)(pTVar19->AllocatorInstance).Data,
             (this->NetworkGameplayTagNodeIndex).ArrayNum);
  uVar20 = 0;
  piVar1 = &(this->NetworkGameplayTagNodeIndex).ArrayMax;
  (this->NetworkGameplayTagNodeIndex).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar19->AllocatorInstance,0,piVar1);
  }
  TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
              *)&this->GameplayTagNodeMap,pTVar19);
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>
            ((TSharedPtr<FGameplayTagNode,1> *)(pTVar19->AllocatorInstance).Data,
             (this->NetworkGameplayTagNodeIndex).ArrayNum,local_res8[0],
             (FCompareFGameplayTagNodeByTag *)local_res8);
  if (((this->NetworkGameplayTagNodeIndex).ArrayNum < (this->CommonlyReplicatedTags).ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonlyReplicatedTags.Num() <= NetworkGameplayTagNodeIndex.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                         ,0x2af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < (this->CommonlyReplicatedTags).ArrayNum) {
    local_res10 = 0;
    local_res20 = 0;
    do {
      lVar3 = local_res20;
      uVar15 = 0;
      uVar9 = 0;
      if ((int)uVar20 < (this->CommonlyReplicatedTags).ArrayNum) {
        uVar9 = ~uVar20 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res18 = (FName *)((this->CommonlyReplicatedTags).AllocatorInstance.Data + lVar3);
      uVar18 = uVar15;
      uVar21 = uVar15;
      if (0 < (this->NetworkGameplayTagNodeIndex).ArrayNum) {
        do {
          uVar16 = (uint)uVar18;
          uVar9 = 0;
          if ((int)uVar16 < (this->NetworkGameplayTagNodeIndex).ArrayNum) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (pTVar19->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar2 + uVar15) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)(pFVar2 + uVar15);
          if (*(int *)(lVar3 + 0x10) < 1) {
            pFVar13 = &FGameplayTag::EmptyTag;
          }
          else {
            pFVar13 = *(FGameplayTag **)(lVar3 + 8);
          }
          if (pFVar13->TagName == *local_res18) {
            if ((((int)uVar16 < 0) || ((int)uVar20 < 0)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0xce6,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar17 = (this->NetworkGameplayTagNodeIndex).ArrayNum;
            if (((iVar17 <= (int)uVar16) || (iVar17 <= (int)uVar20)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0xce7,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar16 != uVar20) {
              pFVar2 = (pTVar19->AllocatorInstance).Data;
              uVar5 = *(undefined8 *)(pFVar2 + uVar21 * 0x10);
              uVar6 = *(undefined8 *)(pFVar2 + uVar21 * 0x10 + 8);
              uVar7 = *(undefined8 *)(pFVar2 + local_res10 + 8);
              *(undefined8 *)(pFVar2 + uVar21 * 0x10) = *(undefined8 *)(pFVar2 + local_res10);
              *(undefined8 *)(pFVar2 + uVar21 * 0x10 + 8) = uVar7;
              *(undefined8 *)(pFVar2 + local_res10) = uVar5;
              *(undefined8 *)(pFVar2 + local_res10 + 8) = uVar6;
            }
            goto LAB_146ad3cc4;
          }
          uVar15 = uVar15 + 0x10;
          uVar18 = (ulonglong)(uVar16 + 1);
          uVar21 = uVar21 + 1;
        } while ((int)(uVar16 + 1) < (this->NetworkGameplayTagNodeIndex).ArrayNum);
      }
      ::FName::ToString(local_res18,&local_88);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Found",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                         ,0x2c3,L"Tag %s not found in NetworkGameplayTagNodeIndex");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_146ad3cc4:
      uVar20 = uVar20 + 1;
      local_res10 = local_res10 + 0x10;
      local_res20 = local_res20 + 8;
    } while ((int)uVar20 < (this->CommonlyReplicatedTags).ArrayNum);
  }
  piVar22 = &(this->NetworkGameplayTagNodeIndex).ArrayNum;
  pTVar19 = &this->NetworkGameplayTagNodeIndex;
  if (0xfffe < *piVar22) {
    local_90 = this;
    `UGameplayTagsManager::ConstructNetIndex'::__l28::<lambda_1>::operator()(&local_90);
    iVar17 = (this->NetworkGameplayTagNodeIndex).ArrayNum;
    if (iVar17 < 0xfffe) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,0xfffe - iVar17,&pTVar19->AllocatorInstance,piVar22,piVar1);
      memset((pTVar19->AllocatorInstance).Data + (longlong)iVar10 * 0x10,0,
             (longlong)(0xfffe - iVar17) << 4);
    }
    else if (0xfffe < iVar17) {
      iVar17 = iVar17 + -0xfffe;
      if ((iVar17 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar17 != 0) {
        TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (pTVar19,0xfffe,iVar17);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar19->AllocatorInstance,(this->NetworkGameplayTagNodeIndex).ArrayNum,
                   piVar1);
      }
    }
  }
  uVar20 = *piVar22 + 1;
  if (((uVar20 != (uVar20 & 0xffff)) || ((int)uVar20 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->InvalidTagNetIndex = (ushort)uVar20;
  fVar23 = logf((float)(uVar20 & 0xffff));
  iVar17 = -((int)ROUND(__real_bf000000 - fVar23 * __real_4038aa3b) >> 1);
  this->NetIndexTrueBitNum = iVar17;
  this_00 = UGameplayTagsSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  iVar10 = *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x4;
  if (iVar10 < iVar17) {
    iVar17 = iVar10;
  }
  this->NetIndexFirstBitSegment = iVar17;
  if ((3 < (byte)LogGameplayTags._0_1_) && (PrintNetIndiceAssignment != 0)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  iVar17 = *piVar22;
  this->NetworkGameplayTagNodeIndexHash = 0;
  if (0 < iVar17) {
    uVar15 = 0;
    do {
      iVar17 = (int)uVar15;
      if (((this->NetworkGameplayTagNodeIndex).ArrayNum <= iVar17) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data + uVar15 * 0x10)
          == 0) {
        if (2 < (byte)LogGameplayTags._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
        }
      }
      else {
        if (((this->NetworkGameplayTagNodeIndex).ArrayNum <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar2 + uVar15 * 0x10) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(short *)(*(longlong *)(pFVar2 + uVar15 * 0x10) + 0x48) = (short)uVar15;
        uVar20 = this->NetworkGameplayTagNodeIndexHash;
        if (((this->NetworkGameplayTagNodeIndex).ArrayNum <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar2 + uVar15 * 0x10) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(pFVar2 + uVar15 * 0x10);
        if (*(int *)(lVar3 + 0x10) < 1) {
          pFVar13 = &FGameplayTag::EmptyTag;
        }
        else {
          pFVar13 = *(FGameplayTag **)(lVar3 + 8);
        }
        ::FName::ToString(&pFVar13->TagName,&local_68);
        pFVar11 = ::FString::ToLower(&local_68,&local_58);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        uVar20 = ~uVar20;
        uVar14 = *pwVar12;
        while (uVar14 != 0) {
          pwVar12 = (wchar_t *)((longlong)pwVar12 + 2);
          uVar20 = FCrc::CRCTablesSB8[1][(ulonglong)(uVar20 >> 0x10) & 0xff] ^
                   FCrc::CRCTablesSB8[2][((ulonglong)uVar14 ^ (ulonglong)uVar20) >> 8 & 0xff] ^
                   FCrc::CRCTablesSB8[0][uVar20 >> 0x18] ^
                   FCrc::CRCTablesSB8[3][((ulonglong)uVar14 ^ (ulonglong)uVar20) & 0xff];
          uVar14 = *pwVar12;
        }
        this->NetworkGameplayTagNodeIndexHash = ~uVar20;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if ((3 < (byte)LogGameplayTags._0_1_) && (PrintNetIndiceAssignment != 0)) {
          if (((this->NetworkGameplayTagNodeIndex).ArrayNum <= iVar17) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar2 + uVar15 * 0x10) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)(pFVar2 + uVar15 * 0x10);
          if (*(int *)(lVar3 + 0x10) < 1) {
            pFVar13 = &FGameplayTag::EmptyTag;
          }
          else {
            pFVar13 = *(FGameplayTag **)(lVar3 + 8);
          }
          ::FName::ToString(&pFVar13->TagName,&local_78);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar14 = (short)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while ((int)(uint)uVar14 < *piVar22);
  }
  if (4 < (byte)LogGameplayTags._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  if (&this->GameplayTagMapCritical != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->GameplayTagMapCritical);
  }
  return;
}

// DestroyGameplayTagTree @ 146ad6070

void __thiscall UGameplayTagsManager::DestroyGameplayTagTree(UGameplayTagsManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<FGameplayTagNode,1> *pTVar1;
  undefined1 *puVar2;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  lpCriticalSection = &this->GameplayTagMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->GameplayRootTag;
  iVar12 = 0;
  if (pTVar1->Object != (FGameplayTagNode *)0x0) {
    FGameplayTagNode::ResetNode(pTVar1->Object);
    local_c8 = 0;
    FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FGameplayTagNode,1> *)&local_c8) {
      pTVar1->Object = (FGameplayTagNode *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->GameplayRootTag).SharedReferenceCount,&FStack_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c0.ReferenceController);
    TSet<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>,FDefaultSetAllocator>
             *)&this->GameplayTagNodeMap);
  }
  if (*(int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x8 !=
      *(int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
              (&this->RestrictedGameplayTagSourceNames);
    iVar5 = *(int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0xc;
    *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x8 = 0;
    if (iVar5 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->RestrictedGameplayTagSourceNames,0,
                 (int *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0xc);
    }
    *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->RestrictedGameplayTagSourceNames).Elements.field_0x28 = 0;
  }
  puVar2 = &(this->RegisteredSearchPaths).field_0x10;
  uStack_ac = 1;
  iVar5 = *(int *)&(this->RegisteredSearchPaths).field_0x28;
  pTVar3 = &this->RegisteredSearchPaths;
  local_98 = 0;
  iStack_9c = local_98;
  if (iVar5 != 0) {
    puVar15 = *(uint **)&(this->RegisteredSearchPaths).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar11 = *puVar15;
    local_98 = 0;
    iVar12 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      local_98 = local_98 + 0x20;
      iVar12 = iVar12 + 1;
      iStack_9c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146ad61ed;
      uVar11 = puVar15[lVar10 + 1];
    }
    uStack_ac = -uVar11 & uVar11;
    uVar4 = (ulonglong)uStack_ac * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_9c = local_98 + -1 + local_res10;
    if (iVar5 < iStack_9c) {
      iStack_9c = iVar5;
    }
  }
LAB_146ad61ed:
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->RegisteredSearchPaths).field_0x8 -
              *(int *)&(this->RegisteredSearchPaths).field_0x34;
  uVar11 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_ac,iVar12);
  uStack_a0 = 0xffffffff;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar3;
  iStack_b0 = iVar12;
  local_a8 = puVar2;
  local_88 = pTVar3;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar5 < (int)uVar11)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
  if (uVar11 != uVar6) {
    puVar14 = *(undefined1 **)&(this->RegisteredSearchPaths).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146ad62f0;
      uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_146ad62f0:
  while( true ) {
    pTVar8 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar11) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar3))
    break;
    *(undefined1 *)((longlong)TStack_80.CurrentBitIndex * 0x40 + 0x31 + *(longlong *)pTVar8) = 0;
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// DoneAddingNativeTags @ 146ad6480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameplayTagsManager::DoneAddingNativeTags(UGameplayTagsManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *pTVar6;
  bool bVar7;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  wchar_t *pwVar9;
  FString *pFVar10;
  IFileManager *pIVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FString local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  FString local_a0;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  FString local_50;
  
  if ((GEngine != (UEngine *)0x0) && (this->bDoneAddingNativeTags == false)) {
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2472,"UGameplayTagsManager::DoneAddingNativeTags",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                 ,0x9a8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2472);
    }
    pTVar8 = OnLastChanceToAddNativeTags();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(pTVar8);
    this->bDoneAddingNativeTags = true;
    if (this->bNeedsTreeRebuildOnDoneAddingGameplayTags == false) {
      puVar1 = &(this->RegisteredSearchPaths).field_0x10;
      iStack_d0 = 0;
      iVar15 = *(int *)&(this->RegisteredSearchPaths).field_0x28;
      local_d8 = &this->RegisteredSearchPaths;
      local_b8 = 0;
      uStack_cc = 1;
      iStack_bc = 0;
      if (iVar15 != 0) {
        puVar18 = *(uint **)&(this->RegisteredSearchPaths).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar14 = *puVar18;
        while (uVar14 == 0) {
          lVar12 = (longlong)iStack_d0;
          local_b8 = local_b8 + 0x20;
          iStack_d0 = iStack_d0 + 1;
          iStack_bc = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0)
          goto LAB_146ad65d7;
          uVar14 = puVar18[lVar12 + 1];
        }
        uStack_cc = -uVar14 & uVar14;
        uVar2 = (ulonglong)uStack_cc * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res20 = (int)lVar12;
        iStack_bc = local_b8 + -1 + local_res20;
        if (iVar15 < iStack_bc) {
          iStack_bc = iVar15;
        }
      }
LAB_146ad65d7:
      uVar14 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
      uVar19 = uVar14 & 0xffffffe0;
      iStack_b0 = *(int *)&(this->RegisteredSearchPaths).field_0x8 -
                  *(int *)&(this->RegisteredSearchPaths).field_0x34;
      uStack_c0 = 0xffffffff;
      TStack_88._padding_ = CONCAT44(uStack_cc,iStack_d0);
      TStack_88.CurrentBitIndex = iStack_bc;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar14 >> 5;
      TStack_88._28_4_ = iStack_bc;
      TStack_88.BaseBitIndex = local_b8;
      uStack_68 = CONCAT44(uStack_ac,iStack_b0);
      local_c8 = puVar1;
      iStack_b4 = iStack_bc;
      local_90 = local_d8;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
      if (uVar14 != uVar3) {
        puVar17 = *(undefined1 **)&(this->RegisteredSearchPaths).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
        while (uVar14 == 0) {
          lVar12 = (longlong)iVar16;
          uVar19 = uVar19 + 0x20;
          iVar16 = iVar16 + 1;
          uVar14 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_146ad66df;
          uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_a8 = (int)lVar12;
        uVar14 = local_a8 + -1 + uVar19;
        if ((int)uVar3 < (int)uVar14) {
          uVar14 = uVar3;
        }
      }
LAB_146ad66df:
      while( true ) {
        pTVar6 = local_90;
        if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
          local_res10[0] = (FIdentityFunctor)0x0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_88.CurrentBitIndex == uVar14) &&
            (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar6 == &this->RegisteredSearchPaths)) goto LAB_146ad675b;
        lVar12 = *(longlong *)pTVar6;
        if ((*(char *)((longlong)TStack_88.CurrentBitIndex * 0x40 + 0x30 + lVar12) == '\0') ||
           (*(char *)((longlong)TStack_88.CurrentBitIndex * 0x40 + 0x31 + lVar12) == '\0')) break;
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
    }
    DestroyGameplayTagTree(this);
    ConstructGameplayTagTree(this);
LAB_146ad675b:
    pwVar9 = FCommandLine::Get();
    bVar7 = FParse::Param(pwVar9,L"DumpStartupGameplayTagManagerState");
    if (bVar7) {
      ::FString::FString(&local_a0,L"GameplayTagManager/Tags.txt");
      if (((this->GameplayRootTag).Object == (FGameplayTagNode *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      GameplayTagUtil::GatherGameplayTagStringsRecursive((this->GameplayRootTag).Object,&local_e8);
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum,local_res10[0],
                 (TLess<void> *)local_res18);
      pFVar10 = FPaths::ProjectSavedDir();
      iVar15 = local_a0.Data.ArrayNum + -1;
      if (local_a0.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      if (((pFVar10->Data).ArrayNum != 0) || (iVar16 = 2, iVar15 == -1)) {
        iVar16 = 1;
      }
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (pFVar10->Data).ArrayNum;
      _Src = (pFVar10->Data).AllocatorInstance.Data;
      local_f8.Data.ArrayNum = iVar4;
      if ((iVar4 == 0) && (iVar16 + iVar15 == 0)) {
        local_f8.Data.ArrayMax = 0;
      }
      else {
        uVar14 = iVar4 + iVar16 + iVar15;
        if ((int)uVar14 < iVar4) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar14,0,(ForAnyElementType *)&local_f8,iVar4,&local_f8.Data.ArrayMax);
        if (iVar4 != 0) {
          memcpy(local_f8.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
        }
      }
      ::FString::PathAppend(&local_f8,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar15);
      pIVar11 = IFileManager::Get();
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar13.Data = local_f8.Data.AllocatorInstance.Data;
      }
      bVar7 = FFileHelper::SaveStringArrayToFile
                        (&local_e8,(wchar_t *)FVar13.Data,ForceUTF8WithoutBOM,pIVar11,0);
      if ((!bVar7) && (3 < (byte)LogGameplayTags._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_Wrote_Tag_Dump__1513e78a8,
                   (FLogCategoryBase *)&LogGameplayTags);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_60,L"GameplayTagManager/RegisteredSearchPaths.txt");
      GameplayTagUtil::DumpRegisteredSearchPaths(&this->RegisteredSearchPaths,&local_60);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_50,L"GameplayTagManager/RestrictedGameplayTagSourceNames.txt");
      GameplayTagUtil::DumpRestrictedGameplayTagSourceNames
                (&this->RestrictedGameplayTagSourceNames,&local_50);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    pTVar8 = OnDoneAddingNativeTagsDelegate();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(pTVar8);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ExtractParentTags @ 146ad88b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UGameplayTagsManager::ExtractParentTags
          (UGameplayTagsManager *this,FGameplayTag *param_1,
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGameplayTagNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  TSharedPtr<FGameplayTagNode,1> *pTVar8;
  FName *pFVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  wchar_t *pwVar14;
  undefined1 auStack_908 [32];
  undefined1 local_8e8 [16];
  wchar_t *local_8d8;
  ulonglong uStack_8d0;
  TStringView<wchar_t> local_8c8;
  FName local_8b8;
  FName local_8b0;
  FName local_8a8 [2];
  TStringView<wchar_t> local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_908;
  if (param_1->TagName == (FName)0x0) {
    bVar5 = false;
  }
  else {
    lpCriticalSection = &this->GameplayTagMapCritical;
    iVar2 = param_2->ArrayNum;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar8 = TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
             ::Find((TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
                     *)&this->GameplayTagNodeMap,param_1);
    if (pTVar8 == (TSharedPtr<FGameplayTagNode,1> *)0x0) {
      local_8b8 = param_1->TagName;
      local_888.Base = local_868;
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      local_888.CurPos = local_868;
      local_888.End = local_52;
      ::FName::AppendString(&local_8b8,&local_888);
      pwVar14 = local_888.Base;
      local_8d8 = local_888.Base;
      uVar11 = (longlong)local_888.CurPos - (longlong)local_888.Base >> 1;
      uStack_8d0 = CONCAT44(uStack_8d0._4_4_,(int)uVar11);
      local_8c8.DataPtr = local_888.Base;
      local_8c8._8_8_ = uStack_8d0;
      iVar7 = UE::String::FindLastChar(&local_8c8,L'.',CaseSensitive);
      if (iVar7 != -1) {
        while( true ) {
          iVar10 = (int)uVar11;
          if (iVar7 < (int)uVar11) {
            iVar10 = iVar7;
          }
          iVar12 = 0;
          if (0 < iVar10) {
            iVar12 = iVar10;
          }
          local_8c8.Size = iVar12;
          uStack_8d0 = local_8c8._8_8_;
          local_898.Size = iVar12;
          local_898._12_4_ = local_8c8._12_4_;
          local_8d8 = pwVar14;
          local_8c8.DataPtr = pwVar14;
          local_898.DataPtr = pwVar14;
          iVar7 = UE::String::FindLastChar(&local_898,L'.',CaseSensitive);
          pFVar9 = ::FName::FName(local_8a8,iVar12,pwVar14,FNAME_Add);
          local_8b0 = *pFVar9;
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag>
                    (param_2,(FGameplayTag *)&local_8b0);
          if (iVar7 == -1) break;
          uVar11 = uStack_8d0 & 0xffffffff;
          pwVar14 = local_8d8;
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    }
    else {
      if ((pTVar8->Object == (FGameplayTagNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = pTVar8->Object;
      pFVar13 = (pFVar3->CompleteTagWithParents).ParentTags.AllocatorInstance.Data;
      iVar7 = (pFVar3->CompleteTagWithParents).ParentTags.ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar7 * 8;
      while( true ) {
        if ((pFVar3->CompleteTagWithParents).ParentTags.ArrayNum != iVar7) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_8e8);
        }
        if (pFVar13 == pFVar1) break;
        TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTag_const_&>
                  (param_2,(FGameplayTag *)pFVar13);
        pFVar13 = pFVar13 + 8;
      }
    }
    bVar5 = param_2->ArrayNum != iVar2;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return bVar5;
}

// FindGameplayTagFromPartialString_Slow @ 146ad9710

FGameplayTag __thiscall
UGameplayTagsManager::FindGameplayTagFromPartialString_Slow
          (UGameplayTagsManager *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FGameplayTag FVar6;
  size_t sVar7;
  undefined1 *puVar8;
  FName FVar9;
  wchar_t *pwVar10;
  FNameEntryId FVar11;
  FName FVar12;
  longlong *in_R8;
  int iVar13;
  FName local_res18;
  FName local_res20;
  FString local_68;
  FGameplayTagContainer local_58;
  
  lpCriticalSection = &this->GameplayTagMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar6.TagName = (FName)(*pcVar1)();
    return (FGameplayTag)FVar6.TagName;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((int)in_R8[1] == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)*in_R8;
  }
  ::FName::FName(&local_res20,pwVar10);
  uVar3 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
  if (*(int *)&(this->GameplayTagNodeMap).field_0x8 !=
      *(int *)&(this->GameplayTagNodeMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->GameplayTagNodeMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GameplayTagNodeMap).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->GameplayTagNodeMap).field_0x48 - 1U &
                              local_res20.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)((longlong)iVar4 * 0x20 + *(longlong *)&this->GameplayTagNodeMap) ==
            local_res20) {
          (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_res20;
          goto LAB_146ad998b;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->GameplayTagNodeMap);
      } while (iVar4 != -1);
    }
  }
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  local_58.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.GameplayTags.ArrayNum = 0;
  local_58.GameplayTags.ArrayMax = 0;
  local_58.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ParentTags.ArrayNum = 0;
  local_58.ParentTags.ArrayMax = 0;
  RequestAllGameplayTags(this,&local_58,false);
  iVar4 = local_58.GameplayTags.ArrayNum;
  iVar13 = 0x7fffffff;
  FVar12 = FVar9;
  do {
    FVar11 = FVar12.ComparisonIndex.Value;
    if (FVar11.Value == iVar4) {
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
      if (local_58.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ParentTags.AllocatorInstance.Data);
      }
      if (local_58.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.GameplayTags.AllocatorInstance.Data);
      }
LAB_146ad998b:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      if ((void *)*in_R8 != (void *)0x0) {
        FMemory::Free((void *)*in_R8);
      }
      return (FGameplayTag)(FName)param_1;
    }
    uVar3 = 0;
    if ((int)FVar11.Value < local_58.GameplayTags.ArrayNum) {
      uVar3 = ~FVar11.Value >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar6.TagName = (FName)(*pcVar1)();
      return (FGameplayTag)FVar6.TagName;
    }
    local_res18 = *(FName *)(local_58.GameplayTags.AllocatorInstance.Data +
                            (longlong)(int)FVar11.Value * 8);
    ::FName::ToString(&local_res18,&local_68);
    if ((int)in_R8[1] == 0) {
      pwVar10 = L"";
LAB_146ad9901:
      sVar7 = wcslen(pwVar10);
      iVar5 = ::FString::Find(&local_68,pwVar10,(int)sVar7,IgnoreCase,FromStart,-1);
      if (iVar5 != -1) {
        iVar5 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        if (iVar5 < iVar13) {
          FVar9 = local_res18;
          iVar13 = iVar5;
        }
      }
    }
    else {
      pwVar10 = (wchar_t *)*in_R8;
      if (pwVar10 != (wchar_t *)0x0) goto LAB_146ad9901;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar12.ComparisonIndex.Value = FVar11.Value + 1;
    FVar12.Number = 0;
  } while( true );
}

// FindOrAddTagSource @ 146ad99c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGameplayTagSource * __thiscall
UGameplayTagsManager::FindOrAddTagSource
          (UGameplayTagsManager *this,FName param_1,EGameplayTagSourceType param_2,FString *param_3)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  FGameplayTagSource *pFVar5;
  UGameplayTagsSettings *pUVar6;
  UGameplayTagsList *pUVar7;
  FString *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FUObjectItem *this_00;
  longlong *plVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int iVar15;
  wchar_t *pwVar16;
  FName local_res10 [3];
  undefined1 auStackY_168 [32];
  undefined1 local_128 [16];
  undefined1 local_118 [24];
  FString local_100;
  FName local_f0;
  EGameplayTagSourceType local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1;
  pFVar5 = TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
           ::Find((TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
                   *)&this->TagSources,param_1);
  if (pFVar5 != (FGameplayTagSource *)0x0) {
    if (param_2 != pFVar5->SourceType) {
      return (FGameplayTagSource *)0x0;
    }
    return pFVar5;
  }
  local_f0 = local_res10[0];
  local_128._0_8_ = local_res10;
  local_128._8_8_ = &local_f0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = param_2;
  TSet<TTuple<FName,FGameplayTagSource>,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FGameplayTagSource_&&>_>
            ((TSet<TTuple<FName,FGameplayTagSource>,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>,FDefaultSetAllocator>
              *)&this->TagSources,(TPairInitializer<FName_const_&,FGameplayTagSource_&&> *)local_118
             ,(bool *)local_128);
  FVar2 = local_res10[0];
  lVar14 = (longlong)(int)local_118._0_4_ * 0x30 + *(longlong *)&this->TagSources;
  if (param_2 == Native) {
    pUVar6 = (UGameplayTagsSettings *)
             NewObject<UGameplayTagsList>
                       ((UObject *)this,local_res10[0],RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    if (param_2 != DefaultTagList) {
      if (param_2 == TagList) {
        pUVar7 = NewObject<UGameplayTagsList>
                           ((UObject *)this,local_res10[0],RF_Transient,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UGameplayTagsList *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        *(UGameplayTagsList **)(lVar14 + 0x18) = pUVar7;
        iVar15 = 0;
        if ((param_3->Data).ArrayNum < 2) {
          ::FName::ToString(local_res10,&local_100);
          FPaths::SourceConfigDir((FString *)(local_118 + 8));
          ::FString::PrintfImpl((FString *)local_128,L"%sTags/%s");
          ::FString::operator=
                    ((FString *)(*(longlong *)(lVar14 + 0x18) + 0x28),(FString *)local_128);
          if ((FName *)local_128._0_8_ != (FName *)0x0) {
            FMemory::Free((void *)local_128._0_8_);
          }
          if ((FGameplayTagSource *)local_118._8_8_ != (FGameplayTagSource *)0x0) {
            FMemory::Free((void *)local_118._8_8_);
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
        }
        else {
          pFVar8 = ::FName::ToString(local_res10,(FString *)(local_118 + 8));
          pwVar13 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pFVar8 = ::operator/(&local_100,param_3,pwVar16);
          ::FString::operator=((FString *)(*(longlong *)(lVar14 + 0x18) + 0x28),pFVar8);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if ((FGameplayTagSource *)local_118._8_8_ != (FGameplayTagSource *)0x0) {
            FMemory::Free((void *)local_118._8_8_);
          }
          iVar1 = (param_3->Data).ArrayNum;
          if (iVar1 != 0) {
            pwVar13 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
            iVar15 = iVar1 + -1;
          }
          uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar13);
          TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
          ::FindOrAddImpl<FString_const_&>
                    ((TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
                      *)&this->RegisteredSearchPaths,uVar4,param_3);
        }
        if (GUObjectArray.ObjLastNonGCIndex < *(int *)((longlong)&this->_padding_ + 4))
        goto LAB_146ad9e45;
        lVar12 = *(longlong *)(lVar14 + 0x18);
      }
      else {
        if (param_2 != RestrictedTagList) goto LAB_146ad9e45;
        if (local_res10[0] == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar9 = URestrictedGameplayTagsList::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar9);
        FVar3 = local_res10[0];
        local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_c8._56_8_ = (UPackage *)0x0;
        local_res10[0].ComparisonIndex = FVar2.ComparisonIndex.Value;
        local_res10[0].Number = FVar2.Number;
        local_c8._16_4_ = local_res10[0].ComparisonIndex.Value;
        local_c8._20_4_ = local_res10[0].Number;
        local_c8._24_4_ = RF_Transient;
        local_c8._40_8_ = (UObject *)0x0;
        local_c8[0x20] = false;
        local_res10[0] = FVar3;
        local_c8._8_8_ = this;
        pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar11 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        *(UObject **)(lVar14 + 0x20) = pUVar10;
        iVar15 = 0;
        if ((param_3->Data).ArrayNum < 2) {
          ::FName::ToString(local_res10,(FString *)(local_118 + 8));
          FPaths::SourceConfigDir(&local_100);
          ::FString::PrintfImpl((FString *)local_128,L"%sTags/%s");
          ::FString::operator=
                    ((FString *)(*(longlong *)(lVar14 + 0x20) + 0x28),(FString *)local_128);
          if ((FName *)local_128._0_8_ != (FName *)0x0) {
            FMemory::Free((void *)local_128._0_8_);
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if ((FGameplayTagSource *)local_118._8_8_ != (FGameplayTagSource *)0x0) {
            FMemory::Free((void *)local_118._8_8_);
          }
        }
        else {
          pFVar8 = ::FName::ToString(local_res10,(FString *)(local_118 + 8));
          pwVar13 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pFVar8 = ::operator/(&local_100,param_3,pwVar16);
          ::FString::operator=((FString *)(*(longlong *)(lVar14 + 0x20) + 0x28),pFVar8);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if ((FGameplayTagSource *)local_118._8_8_ != (FGameplayTagSource *)0x0) {
            FMemory::Free((void *)local_118._8_8_);
          }
          iVar1 = (param_3->Data).ArrayNum;
          if (iVar1 != 0) {
            pwVar13 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
            iVar15 = iVar1 + -1;
          }
          uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar13);
          TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
          ::FindOrAddImpl<FString_const_&>
                    ((TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
                      *)&this->RegisteredSearchPaths,uVar4,param_3);
        }
        if (GUObjectArray.ObjLastNonGCIndex < *(int *)((longlong)&this->_padding_ + 4))
        goto LAB_146ad9e45;
        lVar12 = *(longlong *)(lVar14 + 0x20);
      }
      this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar12 + 0xc));
      FUObjectItem::SetRootFlags(this_00,RootSet);
      goto LAB_146ad9e45;
    }
    pUVar6 = GetMutableDefault<UGameplayTagsSettings>();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UGameplayTagsSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UGameplayTagsSettings **)(lVar14 + 0x18) = pUVar6;
LAB_146ad9e45:
  return (FGameplayTagSource *)(lVar14 + 8);
}

// FindTagNode @ 146ad9e80

TSharedPtr<FGameplayTagNode,1> * __thiscall
UGameplayTagsManager::FindTagNode
          (UGameplayTagsManager *this,TSharedPtr<FGameplayTagNode,1> *__return_storage_ptr__,
          FGameplayTag *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FGameplayTagNode,1> *pTVar4;
  
  lpCriticalSection = &this->GameplayTagMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FGameplayTagNode,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
           ::Find((TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
                   *)&this->GameplayTagNodeMap,param_1);
  if (pTVar4 == (TSharedPtr<FGameplayTagNode,1> *)0x0) {
    __return_storage_ptr__->Object = (FGameplayTagNode *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// FindTagSource @ 146ad9f40

FGameplayTagSource * __thiscall
UGameplayTagsManager::FindTagSource(UGameplayTagsManager *this,FName param_1)

{
  FGameplayTagSource *pFVar1;
  
  pFVar1 = TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
           ::Find((TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
                   *)&this->TagSources,param_1);
  return pFVar1;
}

// FindTagSource @ 146ad9f60

FGameplayTagSource * __thiscall
UGameplayTagsManager::FindTagSource(UGameplayTagsManager *this,FName param_1)

{
  FGameplayTagSource *pFVar1;
  
  pFVar1 = TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
           ::Find((TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
                   *)&this->TagSources,param_1);
  return pFVar1;
}

// FindTagSourcesWithType @ 146ad9f80

void __thiscall
UGameplayTagsManager::FindTagSourcesWithType
          (UGameplayTagsManager *this,EGameplayTagSourceType param_1,
          TArray<FGameplayTagSource_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  longlong local_88;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *local_80;
  int iStack_78;
  uint uStack_74;
  undefined1 *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_48;
  
  local_80 = &this->TagSources;
  iVar6 = *(int *)&(this->TagSources).field_0x28;
  local_70 = &(this->TagSources).field_0x10;
  iStack_78 = 0;
  uStack_74 = 1;
  local_60 = 0;
  iStack_64 = 0;
  if (iVar6 != 0) {
    puVar8 = *(uint **)&(this->TagSources).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_70;
    }
    uVar2 = *puVar8;
    while (uVar2 == 0) {
      lVar7 = (longlong)iStack_78;
      local_60 = local_60 + 0x20;
      iStack_78 = iStack_78 + 1;
      iStack_64 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_146ada02e;
      uVar2 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_74 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_64 = local_60 + -1 + (int)lVar7;
    if (iVar6 < iStack_64) {
      iStack_64 = iVar6;
    }
  }
LAB_146ada02e:
  uStack_68 = 0xffffffff;
  TStack_48._padding_ = CONCAT44(uStack_74,iStack_78);
  TStack_48.UnvisitedBitMask = 0xffffffff;
  TStack_48._28_4_ = iStack_64;
  TStack_48.BaseBitIndex = local_60;
  iStack_5c = iStack_64;
  local_50 = local_80;
  TStack_48.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_70;
  TStack_48.CurrentBitIndex = iStack_64;
  if (iStack_64 < iVar6) {
    do {
      if (*(EGameplayTagSourceType *)
           ((longlong)TStack_48.CurrentBitIndex * 0x30 + 0x10 + *(longlong *)local_50) == param_1) {
        pFVar3 = (param_2->AllocatorInstance).Data;
        local_88 = *(longlong *)local_50 + 8 + (longlong)TStack_48.CurrentBitIndex * 0x30;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_88;
      }
      TStack_48.UnvisitedBitMask = TStack_48.UnvisitedBitMask & ~TStack_48._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_48);
    } while (TStack_48.CurrentBitIndex < (TStack_48.Array)->NumBits);
  }
  return;
}

// FindTagsWithSource @ 146ada190

void __thiscall
UGameplayTagsManager::FindTagsWithSource
          (UGameplayTagsManager *this,TStringView<wchar_t> *param_1,
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *pTVar7;
  bool bVar8;
  FString *pFVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 local_res8 [8];
  TStringView<wchar_t> *local_res10;
  undefined1 local_res20 [8];
  FString local_128;
  undefined8 local_118;
  FString local_110;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *local_c8;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_b8;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FString local_68;
  FString local_58;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TagSources).field_0x10;
  iVar3 = *(int *)&(this->TagSources).field_0x28;
  local_100 = &this->TagSources;
  iStack_f8 = 0;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->TagSources).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar20;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_146ada24f;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_146ada24f:
  iStack_d8 = *(int *)&(this->TagSources).field_0x8 - *(int *)&(this->TagSources).field_0x34;
  uVar15 = *(uint *)&(this->TagSources).field_0x28;
  uStack_e8 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_f4,iStack_f8);
  uVar18 = uVar15 & 0xffffffe0;
  TStack_a0.CurrentBitIndex = iStack_e4;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_a0._28_4_ = iStack_e4;
  TStack_a0.BaseBitIndex = local_e0;
  uStack_80 = CONCAT44(uStack_d4,iStack_d8);
  local_res10 = param_1;
  local_f0 = (undefined1 *)pTVar20;
  iStack_dc = iStack_e4;
  local_c8 = local_100;
  local_c0 = pTVar20;
  local_a8 = local_100;
  TStack_a0.Array = pTVar20;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->TagSources).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->TagSources).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar20;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146ada360;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar15 = local_cc + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_146ada360:
  do {
    pTVar7 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTagSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar15) && (TStack_a0.Array == pTVar20)) &&
       (pTVar7 == local_c8)) {
      return;
    }
    lVar11 = (longlong)TStack_a0.CurrentBitIndex * 0x30 + *(longlong *)pTVar7;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    cVar2 = *(char *)(lVar11 + 0x10);
    if (cVar2 == '\0') {
      pFVar9 = ::FName::ToString((FName *)(lVar11 + 8),&local_58);
      FVar12.Data = local_58.Data.AllocatorInstance.Data;
      if (&local_128 != pFVar9) {
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        local_128.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = (pFVar9->Data).ArrayNum;
        local_128.Data.ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
        FVar12.Data = local_58.Data.AllocatorInstance.Data;
      }
LAB_146ada50d:
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
    }
    else if (cVar2 == '\x02') {
      if (*(longlong *)(lVar11 + 0x18) != 0) {
        pTVar10 = &FPaths::GetPath(&local_68,(FString *)(*(longlong *)(lVar11 + 0x18) + 0x28))->Data
        ;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_b8,pTVar10,0x10 - (uint)(pTVar10->ArrayNum != 0));
        ::FString::PathAppend((FString *)&local_b8,L"../../Content/",0xe);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Data.ArrayNum = 0;
        local_110.Data.ArrayMax = 0;
        bVar8 = FPackageName::TryConvertFilenameToLongPackageName
                          ((FString *)&local_b8,&local_110,(FString *)0x0,None);
        if (bVar8) {
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_110.Data.ArrayNum != 0) {
            FVar12.Data = local_110.Data.AllocatorInstance.Data;
          }
          ::FString::operator=(&local_128,(wchar_t *)FVar12.Data);
        }
        FVar12.Data = local_b8.AllocatorInstance.Data;
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
          FVar12.Data = local_b8.AllocatorInstance.Data;
        }
        goto LAB_146ada50d;
      }
    }
    else if (cVar2 == '\x04') {
      pFVar9 = ::FName::ToString((FName *)(lVar11 + 8),&local_78);
      FVar12.Data = local_78.Data.AllocatorInstance.Data;
      if (&local_128 != pFVar9) {
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        local_128.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = (pFVar9->Data).ArrayNum;
        local_128.Data.ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
        FVar12.Data = local_78.Data.AllocatorInstance.Data;
      }
      goto LAB_146ada50d;
    }
    local_48 = param_1->DataPtr;
    uStack_40 = *(undefined8 *)&param_1->Size;
    bVar8 = ::FString::StartsWith
                      (&local_128,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size,IgnoreCase);
    if ((bVar8) && (lVar11 = *(longlong *)(lVar11 + 0x18), lVar11 != 0)) {
      iVar3 = *(int *)(lVar11 + 0x50);
      lVar14 = *(longlong *)(lVar11 + 0x48);
      lVar19 = (longlong)iVar3 * 0x20 + lVar14;
      while( true ) {
        if (*(int *)(lVar11 + 0x50) != iVar3) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FGameplayTagTableRow,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        param_1 = local_res10;
        pTVar20 = local_c0;
        if (lVar14 == lVar19) break;
        local_118 = *(undefined8 *)(lVar14 + 8);
        pFVar5 = (param_2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == param_2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
          param_2->ArrayNum = iVar13;
        }
        lVar14 = lVar14 + 0x20;
        param_2->ArrayNum = iVar13 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_118;
      }
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// GameplayTagContainerLoaded @ 146ada920

void __thiscall
UGameplayTagsManager::GameplayTagContainerLoaded
          (UGameplayTagsManager *this,FGameplayTagContainer *param_1,FProperty *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy> *this_00;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  
  RedirectTagsForContainer(this,param_1,param_2);
  this_00 = &this->OnGameplayTagLoadedDelegate;
  if ((this_00 ==
       (TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy> *)0x0)
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar2 = *(int *)&(this->OnGameplayTagLoadedDelegate).field_0x30;
  plVar13 = *(longlong **)&(this->OnGameplayTagLoadedDelegate).field_0x28;
  plVar10 = plVar13 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->OnGameplayTagLoadedDelegate).field_0x30 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar13 == plVar10) {
      if (this_00 ==
          (TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy> *)0x0
         ) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000146adab42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      return;
    }
    if (((int)plVar13[1] != 0) && (*plVar13 != 0)) break;
    plVar13 = plVar13 + 2;
  }
  if (this_00 !=
      (TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  uVar3 = (param_1->GameplayTags).ArrayNum;
  uVar14 = 0;
  while( true ) {
    if (uVar14 == uVar3) {
      return;
    }
    uVar12 = 0;
    if ((int)uVar14 < (param_1->GameplayTags).ArrayNum) {
      uVar12 = ~uVar14 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if ((this_00 ==
         (TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy> *)0x0)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    puVar1 = &(this->OnGameplayTagLoadedDelegate).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar12 = *(int *)&(this->OnGameplayTagLoadedDelegate).field_0x30 - 1;
    if (-1 < (int)uVar12) {
      lVar11 = (longlong)(int)uVar12 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&(this->OnGameplayTagLoadedDelegate).field_0x30) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)&(this->OnGameplayTagLoadedDelegate).field_0x28;
        if (((*(int *)(lVar11 + 8 + lVar4) == 0) ||
            (plVar13 = *(longlong **)(lVar11 + lVar4), plVar13 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar13 + 0x68))(), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->OnGameplayTagLoadedDelegate).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    uVar14 = uVar14 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// GameplayTagsMatchDepth @ 146add2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UGameplayTagsManager::GameplayTagsMatchDepth
          (UGameplayTagsManager *this,FGameplayTag *param_1,FGameplayTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FName> FVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<FName> FVar10;
  undefined1 auStack_298 [32];
  ulonglong local_278;
  longlong local_270;
  UGameplayTagsManager *local_268 [2];
  TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_258;
  TArray<FName,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  iVar4 = 0;
  local_258.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x20;
  local_148.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0x20;
  local_268[0] = this;
  `UGameplayTagsManager::GameplayTagsMatchDepth'::__l2::<lambda_1>::operator()
            (local_268,&local_148,param_1);
  `UGameplayTagsManager::GameplayTagsMatchDepth'::__l2::<lambda_1>::operator()
            (local_268,&local_258,param_2);
  uVar6 = local_258.ArrayNum - 1;
  uVar8 = local_148.ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar6 * 8;
    lVar7 = (longlong)(int)uVar8 * 8;
    do {
      if ((int)uVar6 < 0) break;
      uVar3 = 0;
      if ((int)uVar6 < local_258.ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_278 = (ulonglong)(int)uVar6;
        local_270 = (longlong)local_258.ArrayNum;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      FVar10 = (ForElementType<FName>)&local_258;
      if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FVar10 = local_258.AllocatorInstance.SecondaryData;
      }
      uVar3 = 0;
      if ((int)uVar8 < local_148.ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_278 = (ulonglong)uVar8;
        local_270 = (longlong)local_148.ArrayNum;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      FVar5 = (ForElementType<FName>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FVar5 = local_148.AllocatorInstance.SecondaryData;
      }
      if (*(longlong *)(lVar7 + (longlong)FVar5) != *(longlong *)(lVar9 + (longlong)FVar10)) break;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
      lVar9 = lVar9 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  if (local_148.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return iVar4;
}

// Get @ 146add750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTagsManager * __cdecl UGameplayTagsManager::Get(void)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UGameplayTagsManager *pUVar3;
  FUObjectItem *this;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [32];
  FConditionalScopeLogTime local_c8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (SingletonManager == (UGameplayTagsManager *)0x0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1074,"UGameplayTagsManager::InitializeManager",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                 ,0x432);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1074);
    }
    FScopedBootTiming::FScopedBootTiming
              ((FScopedBootTiming *)(local_e8 + 8),"UGameplayTagsManager::InitializeManager");
    FConditionalScopeLogTime::FConditionalScopeLogTime
              (&local_c8,true,L"UGameplayTagsManager::InitializeManager",
               (TKeyValuePair<double,unsigned_int> *)0x0,ScopeLog_Seconds);
    local_e8._0_8_ = 0;
    pUVar1 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = pUVar1;
    pUVar3 = (UGameplayTagsManager *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    SingletonManager = pUVar3;
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
    LoadGameplayTagTables(SingletonManager,false);
    ConstructGameplayTagTree(SingletonManager);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UGameplayTagsManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,(UGameplayTagsManager *)local_e8,
               (pmf_aa779a69)SingletonManager);
    FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_c8);
    FScopedBootTiming::~FScopedBootTiming((FScopedBootTiming *)(local_e8 + 8));
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return SingletonManager;
}

// GetAllParentNodeNames @ 146addd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTagsManager::GetAllParentNodeNames
          (UGameplayTagsManager *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TSharedPtr<FGameplayTagNode,1> *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGameplayTagNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_GetAllParentNodeNames> FVar10;
  FGameplayTag *pFVar11;
  atomic<int> *paVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_78;
  FName local_70;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  TSharedPtr<FGameplayTagNode,1> local_38;
  
  FVar10 = StatPtr_STAT_UGameplayTagsManager_GetAllParentNodeNames;
  if (StatPtr_STAT_UGameplayTagsManager_GetAllParentNodeNames ==
      (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_GetAllParentNodeNames>)0x0) {
    pFVar9 = ::FName::FName(&local_60,"STAT_UGameplayTagsManager_GetAllParentNodeNames");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_GetAllParentNodeNames>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UGameplayTagsManager_GetAllParentNodeNames,*pFVar9,
                        L"UGameplayTagsManager::GetAllParentNodeNames","STATGROUP_GameplayTags",
                        "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar14.Value;
        local_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                   ,0xa97);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.ComparisonIndex.Value = FVar14.Value;
      local_res20.Number = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_146addeed;
    }
  }
  bVar6 = false;
  FVar15 = local_58;
LAB_146addeed:
  if (param_2->Object == (FGameplayTagNode *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_2->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
    pFVar11 = &FGameplayTag::EmptyTag;
  }
  else {
    pFVar11 = (FGameplayTag *)
              (param_2->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
  }
  local_70 = pFVar11->TagName;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (param_1,&local_res20,(bool *)&local_70);
  if (param_2->Object == (FGameplayTagNode *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (param_2->Object->ParentNode).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_2->Object->ParentNode).Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar12 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  if (pFVar3 != (FGameplayTagNode *)0x0) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    local_38.Object = pFVar3;
    local_38.SharedReferenceCount.ReferenceController = pTVar2;
    GetAllParentNodeNames(this,param_1,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// GetInvalidTagNetIndex @ 146ade7a0

/* WARNING: Enum "Type": Some values do not have unique names */

ushort __thiscall UGameplayTagsManager::GetInvalidTagNetIndex(UGameplayTagsManager *this)

{
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      return this->InvalidTagNetIndex;
    }
  }
  else if (this->bNetworkIndexInvalidated != false) {
    ConstructNetIndex(this);
    return this->InvalidTagNetIndex;
  }
  return this->InvalidTagNetIndex;
}

// GetNetIndexFirstBitSegment @ 146ade830

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UGameplayTagsManager::GetNetIndexFirstBitSegment(UGameplayTagsManager *this)

{
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      return this->NetIndexFirstBitSegment;
    }
  }
  else if (this->bNetworkIndexInvalidated != false) {
    ConstructNetIndex(this);
    return this->NetIndexFirstBitSegment;
  }
  return this->NetIndexFirstBitSegment;
}

// GetNetIndexFromTag @ 146ade8a0

/* WARNING: Enum "Type": Some values do not have unique names */

ushort __thiscall
UGameplayTagsManager::GetNetIndexFromTag(UGameplayTagsManager *this,FGameplayTag *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  TSharedPtr<FGameplayTagNode,1> local_18;
  
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
  }
  else if (this->bNetworkIndexInvalidated != false) {
    ConstructNetIndex(this);
  }
  FindTagNode(this,&local_18,param_1);
  if (local_18.Object == (FGameplayTagNode *)0x0) {
    uVar3 = this->InvalidTagNetIndex;
  }
  else {
    if (local_18.Object == (FGameplayTagNode *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    if ((local_18.Object)->NetIndex == 0xffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetIndex != ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Classes\\GameplayTagsManager.h"
                         ,0xe6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    uVar3 = (local_18.Object)->NetIndex;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return uVar3;
}

// GetNetIndexTrueBitNum @ 146ade9a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UGameplayTagsManager::GetNetIndexTrueBitNum(UGameplayTagsManager *this)

{
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      return this->NetIndexTrueBitNum;
    }
  }
  else if (this->bNetworkIndexInvalidated != false) {
    ConstructNetIndex(this);
    return this->NetIndexTrueBitNum;
  }
  return this->NetIndexTrueBitNum;
}

// GetNetworkGameplayTagNodeIndex @ 146adea10

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
UGameplayTagsManager::GetNetworkGameplayTagNodeIndex(UGameplayTagsManager *this)

{
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      return &this->NetworkGameplayTagNodeIndex;
    }
  }
  else if (this->bNetworkIndexInvalidated != false) {
    ConstructNetIndex(this);
    return &this->NetworkGameplayTagNodeIndex;
  }
  return &this->NetworkGameplayTagNodeIndex;
}

// GetNumTagSourceSearchPaths @ 146adea90

int __thiscall UGameplayTagsManager::GetNumTagSourceSearchPaths(UGameplayTagsManager *this)

{
  return *(int *)&(this->RegisteredSearchPaths).field_0x8 -
         *(int *)&(this->RegisteredSearchPaths).field_0x34;
}

// GetNumberOfTagNodes @ 146adeab0

int __thiscall
UGameplayTagsManager::GetNumberOfTagNodes(UGameplayTagsManager *this,FGameplayTag *param_1)

{
  code *pcVar1;
  FGameplayTagNode *pFVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FGameplayTagNode,1> local_28;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  iVar4 = 0;
  FindTagNode(this,&local_28,param_1);
  pFVar2 = local_28.Object;
  while( true ) {
    local_28.Object = pFVar2;
    if (pFVar2 == (FGameplayTagNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    if ((pFVar2 == (FGameplayTagNode *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    local_10.ReferenceController = (pFVar2->ParentNode).SharedReferenceCount.ReferenceController;
    local_28.Object = (pFVar2->ParentNode).Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_28.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    pFVar2 = local_28.Object;
  }
  pcVar1 = (code *)swi(3);
  iVar4 = (*pcVar1)();
  return iVar4;
}

// GetOwnersForTagSource @ 146adec00

void __thiscall
UGameplayTagsManager::GetOwnersForTagSource
          (UGameplayTagsManager *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  int iVar4;
  UClass *this_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 local_res20 [8];
  
  this_00 = UGameplayTagsSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  puVar5 = *(undefined8 **)&pUVar3[4].field_0x8;
  iVar1 = *(int *)&pUVar3[4].field_0x10;
  puVar6 = puVar5 + (longlong)iVar1 * 4;
  do {
    if (*(int *)&pUVar3[4].field_0x10 != iVar1) {
      `TCheckedPointerIterator<FRestrictedConfigInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (puVar5 == puVar6) {
      return;
    }
    iVar4 = *(int *)(puVar5 + 1);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar2) {
      if (iVar4 < 2) {
LAB_146adeca8:
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                  (param_2,(TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar5 + 2));
        return;
      }
      iVar4 = wcscmp((wchar_t *)*puVar5,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar7 = iVar4 == 0;
    }
    else {
      bVar7 = iVar4 + iVar2 == 1;
    }
    if (bVar7) goto LAB_146adeca8;
    puVar5 = puVar5 + 4;
  } while( true );
}

// GetPrivateStaticClass @ 146adf730

UClass * __cdecl UGameplayTagsManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsManager",
               &Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton,
               StaticRegisterNativesUGameplayTagsManager,0x390,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGameplayTagsManager>,
               InternalVTableHelperCtorCaller<UGameplayTagsManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton;
}

// GetRestrictedTagConfigFiles @ 146ae0510

/* WARNING: Removing unreachable block (ram,0x000146ae0a4f) */
/* WARNING: Removing unreachable block (ram,0x000146ae06a5) */

void __thiscall
UGameplayTagsManager::GetRestrictedTagConfigFiles
          (UGameplayTagsManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  code *pcVar4;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  UClass *this_00;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 *puVar13;
  uint *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  FString *pFVar16;
  uint uVar17;
  longlong lVar18;
  FRestrictedConfigInfo *pFVar19;
  FString *pFVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_138 [4];
  uint local_134;
  FString local_130;
  FString local_120;
  TArray<FRestrictedConfigInfo,TSizedDefaultAllocator<32>_> local_110;
  uint local_100;
  int local_fc;
  int local_f8;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_f0;
  longlong *local_e8;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  this_00 = UGameplayTagsSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    iVar1 = *(int *)&pUVar3[4].field_0x10;
    lVar11 = *(longlong *)&pUVar3[4].field_0x8;
    lVar18 = (longlong)iVar1 * 0x20 + lVar11;
    while( true ) {
      if (*(int *)&pUVar3[4].field_0x10 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRestrictedConfigInfo_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (lVar11 == lVar18) break;
      FPaths::SourceConfigDir(&local_78);
      ::FString::PrintfImpl(&local_130,L"%sTags/%s");
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 < pFVar9 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_130.Data.AllocatorInstance.Data;
      *(int *)(pFVar9 + 8) = local_130.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_130.Data.ArrayMax;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      lVar11 = lVar11 + 0x20;
    }
  }
  iStack_d0 = 0;
  pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredSearchPaths).field_0x10;
  iVar1 = *(int *)&(this->RegisteredSearchPaths).field_0x28;
  local_f0 = &this->RegisteredSearchPaths;
  local_b8 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  if (iVar1 != 0) {
    puVar14 = *(uint **)&(this->RegisteredSearchPaths).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)pTVar15;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar11 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar1;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_146ae074f;
      uVar10 = puVar14[lVar11 + 1];
    }
    uStack_cc = -uVar10 & uVar10;
    uVar8 = (ulonglong)uStack_cc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_fc = (int)lVar11;
    iStack_bc = local_b8 + -1 + local_fc;
    if (iVar1 < iStack_bc) {
      iStack_bc = iVar1;
    }
  }
LAB_146ae074f:
  uVar10 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
  uStack_b4 = local_3c;
  iStack_b0 = *(int *)&(this->RegisteredSearchPaths).field_0x8 -
              *(int *)&(this->RegisteredSearchPaths).field_0x34;
  uVar17 = uVar10 & 0xffffffe0;
  uStack_c0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
  TStack_a0.CurrentBitIndex = iStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar7 = (int)uVar10 >> 5;
  TStack_a0._28_4_ = local_3c;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_134 = uVar10;
  local_e0 = pTVar15;
  local_d8 = local_f0;
  local_c8 = (undefined1 *)pTVar15;
  local_a8 = local_f0;
  TStack_a0.Array = pTVar15;
  if ((((int)uVar10 < 0) || (iVar1 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&(this->RegisteredSearchPaths).field_0x28;
  if (uVar10 != uVar2) {
    puVar13 = *(undefined1 **)&(this->RegisteredSearchPaths).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar15;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar7 * 4);
    while (uVar10 == 0) {
      lVar11 = (longlong)iVar7;
      uVar17 = uVar17 + 0x20;
      iVar7 = iVar7 + 1;
      uVar10 = uVar2;
      local_134 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_146ae0870;
      uVar10 = *(uint *)(puVar13 + lVar11 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f8 = (int)lVar11;
    uVar10 = local_f8 + -1 + uVar17;
    local_134 = uVar10;
    if ((int)uVar2 < (int)uVar10) {
      uVar10 = uVar2;
      local_134 = uVar2;
    }
  }
LAB_146ae0870:
  while( true ) {
    pTVar5 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_a0.CurrentBitIndex == uVar10) && (TStack_a0.Array == pTVar15)) &&
       (pTVar5 == local_f0)) break;
    local_e8 = (longlong *)(*(longlong *)pTVar5 + 0x20 + (longlong)TStack_a0.CurrentBitIndex * 0x40)
    ;
    local_100 = *(uint *)(local_e8 + 1);
    uVar8 = (ulonglong)(int)local_100;
    pFVar20 = (FString *)*local_e8;
    pFVar16 = pFVar20 + uVar8;
    while( true ) {
      if ((int)local_e8[1] != (int)uVar8) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar20 == pFVar16) break;
      local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.ArrayNum = 0;
      local_110.ArrayMax = 0;
      GameplayTagUtil::GetRestrictedConfigsFromIni(pFVar20,&local_110);
      iVar1 = local_110.ArrayNum;
      pFVar19 = (FRestrictedConfigInfo *)
                (local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 0x20);
      FVar12.Data = local_110.AllocatorInstance.Data;
      while( true ) {
        if (local_110.ArrayNum != iVar1) {
          local_138[0] = 0;
          `TCheckedPointerIterator<FRestrictedConfigInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_138);
        }
        if ((FRestrictedConfigInfo *)FVar12.Data == pFVar19) break;
        FPaths::GetPath(local_68,pFVar20);
        ::FString::PrintfImpl(&local_120,L"%s/%s");
        pFVar9 = (param_1->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 < pFVar9 + (longlong)param_1->ArrayMax * 0x10))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar9 = 0;
        *(FScriptContainerElement **)pFVar9 = local_120.Data.AllocatorInstance.Data;
        *(int *)(pFVar9 + 8) = local_120.Data.ArrayNum;
        *(int *)(pFVar9 + 0xc) = local_120.Data.ArrayMax;
        local_120.Data.ArrayNum = 0;
        local_120.Data.ArrayMax = 0;
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
        }
        FVar12.Data = FVar12.Data + 0x20;
      }
      DestructItems<FRestrictedConfigInfo,int>
                ((FRestrictedConfigInfo *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
      if ((FRestrictedConfigInfo *)local_110.AllocatorInstance.Data != (FRestrictedConfigInfo *)0x0)
      {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      pFVar20 = pFVar20 + 1;
      uVar8 = (ulonglong)local_100;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    pTVar15 = local_e0;
    uVar10 = local_134;
  }
  return;
}

// GetRestrictedTagSources @ 146ae0ae0

void __thiscall
UGameplayTagsManager::GetRestrictedTagSources
          (UGameplayTagsManager *this,
          TArray<FGameplayTagSource_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  longlong local_a8;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_98 = 0;
  puVar1 = &(this->TagSources).field_0x10;
  iVar9 = *(int *)&(this->TagSources).field_0x28;
  pTVar2 = &this->TagSources;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->TagSources).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_146ae0b8e;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = (int)lVar10 + -1 + local_80;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_146ae0b8e:
  iStack_78 = *(int *)&(this->TagSources).field_0x8 - *(int *)&(this->TagSources).field_0x34;
  uVar11 = *(uint *)&(this->TagSources).field_0x28;
  uStack_88 = 0xffffffff;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->TagSources).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->TagSources).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146ae0c90;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_146ae0c90:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTagSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = *(longlong *)pTVar7 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x30;
    if (*(char *)(lVar10 + 8) == '\x03') {
      pFVar5 = (param_1->AllocatorInstance).Data;
      local_a8 = lVar10;
      if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_a8;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetTagNameFromNetIndex @ 146ae1350

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
UGameplayTagsManager::GetTagNameFromNetIndex(UGameplayTagsManager *this,ushort param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  FGameplayTag *pFVar5;
  undefined6 in_register_00000012;
  FScriptContainerElement *pFVar6;
  ushort in_R8W;
  ushort *local_res8;
  ushort local_res18 [8];
  
  FVar4._2_6_ = in_register_00000012;
  FVar4.ComparisonIndex.Value._0_2_ = param_1;
  local_res18[0] = in_R8W;
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      in_R8W = local_res18[0];
    }
  }
  else if (this->bNetworkIndexInvalidated != false) {
    ConstructNetIndex(this);
    in_R8W = local_res18[0];
  }
  if ((int)(uint)in_R8W < (this->NetworkGameplayTagNodeIndex).ArrayNum) {
    pFVar6 = (this->NetworkGameplayTagNodeIndex).AllocatorInstance.Data + (ulonglong)in_R8W * 0x10;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
    lVar1 = *(longlong *)pFVar6;
    if (*(int *)(lVar1 + 0x10) < 1) {
      pFVar5 = &FGameplayTag::EmptyTag;
    }
    else {
      pFVar5 = *(FGameplayTag **)(lVar1 + 8);
    }
    *(FName *)FVar4 = pFVar5->TagName;
    return FVar4;
  }
  if (in_R8W != this->InvalidTagNetIndex) {
    local_res8 = local_res18;
    `UGameplayTagsManager::GetTagNameFromNetIndex'::__l5::<lambda_1>::operator()(&local_res8);
  }
  *(undefined8 *)FVar4 = 0;
  return FVar4;
}

// GetTagSourceSearchPaths @ 146ae1450

void __thiscall
UGameplayTagsManager::GetTagSourceSearchPaths
          (UGameplayTagsManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
              *)&this->RegisteredSearchPaths,param_1);
  return;
}

// HandleGameplayTagTreeChanged @ 146ae15c0

void __thiscall
UGameplayTagsManager::HandleGameplayTagTreeChanged(UGameplayTagsManager *this,bool param_1)

{
  if ((this->bIsConstructingGameplayTagTree != false) || (this->bDoneAddingNativeTags == false)) {
    if (param_1) {
      this->bNeedsTreeRebuildOnDoneAddingGameplayTags = true;
    }
    return;
  }
  if ((param_1) &&
     (((this->ShouldDeferGameplayTagTreeRebuilds).bIsSet == false ||
      ((this->ShouldDeferGameplayTagTreeRebuilds).TypedValue == false)))) {
    DestroyGameplayTagTree(this);
    ConstructGameplayTagTree(this);
    return;
  }
  if (this->bUseFastReplication != false) {
    this->bNetworkIndexInvalidated = true;
  }
  if (this->bDeferBroadcastOnGameplayTagTreeChanged != 0) {
    this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
    return;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&IGameplayTagsModule::OnGameplayTagTreeChanged);
  return;
}

// ImportSingleGameplayTag @ 146ae1cf0

bool __thiscall
UGameplayTagsManager::ImportSingleGameplayTag
          (UGameplayTagsManager *this,FGameplayTag *param_1,FName param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
  *this_00;
  FName *pFVar5;
  
  if (param_2 == (FName)0x0) {
    return true;
  }
  lpCriticalSection = &this->GameplayTagMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar2 = false;
  this_00 = (TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
             *)FGameplayTagRedirectors::Get();
  pFVar5 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
            ::Find(this_00,param_2)->TagName;
  if (pFVar5 == (FName *)0x0) {
    bVar4 = ValidateTagCreation(this,param_2);
    if ((bVar4) || (param_3)) {
      param_1->TagName = param_2;
      bVar2 = true;
      TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
                (&this->OnGameplayTagLoadedDelegate,param_1);
    }
    else {
      param_1->TagName = (FName)0x0;
    }
  }
  else {
    param_1->TagName = *pFVar5;
    bVar2 = true;
    TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
              (&this->OnGameplayTagLoadedDelegate,param_1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// InitializeManager @ 146ae2210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UGameplayTagsManager::InitializeManager(void)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UGameplayTagsManager *pUVar5;
  FUObjectItem *this;
  longlong *plVar6;
  undefined1 auStackY_118 [32];
  undefined1 local_e0 [32];
  FConditionalScopeLogTime local_c0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((SingletonManager != (UGameplayTagsManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SingletonManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                         ,0x431,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1074,"UGameplayTagsManager::InitializeManager",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
               ,0x432);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1074);
  }
  FScopedBootTiming::FScopedBootTiming
            ((FScopedBootTiming *)(local_e0 + 8),"UGameplayTagsManager::InitializeManager");
  FConditionalScopeLogTime::FConditionalScopeLogTime
            (&local_c0,true,L"UGameplayTagsManager::InitializeManager",
             (TKeyValuePair<double,unsigned_int> *)0x0,ScopeLog_Seconds);
  pUVar3 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar3;
  pUVar5 = (UGameplayTagsManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  SingletonManager = pUVar5;
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4));
  FUObjectItem::SetRootFlags(this,RootSet);
  LoadGameplayTagTables(SingletonManager,false);
  ConstructGameplayTagTree(SingletonManager);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UGameplayTagsManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(UGameplayTagsManager *)local_e0,
             (pmf_aa779a69)SingletonManager);
  FConditionalScopeLogTime::~FConditionalScopeLogTime(&local_c0);
  FScopedBootTiming::~FScopedBootTiming((FScopedBootTiming *)(local_e0 + 8));
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InsertTagIntoNodeArray @ 146ae2560

int __thiscall
UGameplayTagsManager::InsertTagIntoNodeArray
          (UGameplayTagsManager *this,FName param_1,FName param_2,
          TSharedPtr<FGameplayTagNode,1> *param_3,
          TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *param_4,FName param_5,
          FString *param_6,bool param_7,bool param_8,bool param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *this_00;
  <lambda_1> <Var2;
  bool bVar3;
  int iVar4;
  FGameplayTagNode *this_01;
  FGameplayTagNode *pFVar5;
  FGameplayTag *pFVar6;
  undefined8 *puVar7;
  FGameplayTagNode *lpCriticalSection_00;
  FGameplayTagNode *pFVar8;
  FName local_res10 [2];
  TSharedPtr<FGameplayTagNode,1> *local_res20;
  TRawPtrProxy<FGameplayTagNode> local_98;
  FName local_90;
  TSharedPtr<FGameplayTagNode,1> local_88;
  TSharedPtr<FGameplayTagNode,1> local_78;
  undefined8 local_68;
  TReferenceControllerBase<1> *local_60;
  undefined8 local_58;
  TReferenceControllerBase<1> *local_50;
  FName *local_48;
  TSharedPtr<FGameplayTagNode,1> *local_40;
  
  this_00 = param_4;
  lpCriticalSection_00 = (FGameplayTagNode *)0x0;
  local_98.Object = local_98.Object & 0xffffffff00000000;
  local_res20._0_1_ = SUB81(param_3,0);
  local_res10[0] = param_1;
  <Var2 = local_res20._0_1_;
  local_res20 = param_3;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TSharedPtr<FGameplayTagNode,1>_const_,int,FName,_UGameplayTagsManager::InsertTagIntoNodeArray_::__l2::<lambda_1>,_UGameplayTagsManager::InsertTagIntoNodeArray_::__l2::<lambda_2>_>
                    ((TSharedPtr<FGameplayTagNode,1> *)(param_4->AllocatorInstance).Data,
                     param_4->ArrayNum,local_res10,<Var2,(<lambda_2>)<Var2);
  if (iVar4 < this_00->ArrayNum) {
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    if (**(FName **)((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10) == param_1) {
      if (iVar4 != -1) goto LAB_146ae2816;
      goto LAB_146ae2629;
    }
    if (iVar4 == -1) goto LAB_146ae2629;
  }
  else {
LAB_146ae2629:
    iVar4 = this_00->ArrayNum;
  }
  this_01 = ::operator_new(0x50);
  pFVar5 = lpCriticalSection_00;
  pFVar8 = lpCriticalSection_00;
  if (this_01 != (FGameplayTagNode *)0x0) {
    local_78.Object = local_res20->Object;
    if (local_78.Object == (this->GameplayRootTag).Object) {
      local_60 = (TReferenceControllerBase<1> *)0x0;
      puVar7 = &local_68;
      pFVar8 = (FGameplayTagNode *)&DAT_00000002;
      local_78.Object = lpCriticalSection_00;
    }
    else {
      local_50 = (local_res20->SharedReferenceCount).ReferenceController;
      if (local_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar7 = &local_58;
      pFVar8 = (FGameplayTagNode *)&DAT_00000001;
    }
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    pFVar5 = FGameplayTagNode::FGameplayTagNode
                       (this_01,param_1,param_2,&local_78,param_7,param_8,param_9);
  }
  local_98.Object = pFVar5;
  TSharedPtr<FGameplayTagNode,1>::TSharedPtr<FGameplayTagNode,1><FGameplayTagNode>
            (&local_88,&local_98);
  if (((ulonglong)pFVar8 & 2) != 0) {
    pFVar8 = (FGameplayTagNode *)(ulonglong)((uint)pFVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  if (((ulonglong)pFVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  iVar4 = TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_>::Insert
                    (this_00,&local_88,iVar4);
  if ((local_88.Object == (FGameplayTagNode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  if (((local_88.Object)->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
    pFVar6 = &FGameplayTag::EmptyTag;
  }
  else {
    pFVar6 = (FGameplayTag *)
             ((local_88.Object)->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
  }
  local_90 = pFVar6->TagName;
  if ((local_90 != param_2) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4119478789166070389>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                         ,0x58b,"GameplayTag.GetTagName() == FullTag"), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  lpCriticalSection = &this->GameplayTagMapCritical;
  if (this->bIsConstructingGameplayTagTree == false) {
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x3e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = (FGameplayTagNode *)lpCriticalSection;
  }
  local_48 = &local_90;
  local_40 = &local_88;
  TSet<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGameplayTag_const_&,TSharedPtr<FGameplayTagNode,1>_const_&>_>
            ((TSet<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>,FDefaultSetAllocator>
              *)&this->GameplayTagNodeMap,
             (TPairInitializer<FGameplayTag_const_&,TSharedPtr<FGameplayTagNode,1>_const_&> *)
             &param_4,(bool *)&local_48);
  if (lpCriticalSection_00 != (FGameplayTagNode *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
LAB_146ae2816:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res20->SharedReferenceCount).ReferenceController);
  return iVar4;
}

// IsValidGameplayTagString @ 146ae2d20

bool __thiscall
UGameplayTagsManager::IsValidGameplayTagString
          (UGameplayTagsManager *this,TStringView<wchar_t> *param_1,FText *param_2,
          TStringBuilderBase<wchar_t> *param_3)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = UE::GameplayTags::Private::IsValidGameplayTagString<TStringBuilderBase<wchar_t>_>
                    (&local_18,param_2,param_3,&this->InvalidTagCharacters);
  return bVar1;
}

// IsValidGameplayTagString @ 146ae2d60

bool __thiscall
UGameplayTagsManager::IsValidGameplayTagString
          (UGameplayTagsManager *this,FString *param_1,FText *param_2,FString *param_3)

{
  int iVar1;
  bool bVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  bVar2 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,param_2,param_3,&this->InvalidTagCharacters);
  return bVar2;
}

// IsValidGameplayTagString @ 146ae2db0

bool __thiscall
UGameplayTagsManager::IsValidGameplayTagString
          (UGameplayTagsManager *this,wchar_t *param_1,FText *param_2,FString *param_3)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = UE::GameplayTags::Private::IsValidGameplayTagString<FString>
                    (&local_18,param_2,param_3,&this->InvalidTagCharacters);
  return bVar1;
}

// LoadGameplayTagTables @ 146ae2e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTagsManager::LoadGameplayTagTables(UGameplayTagsManager *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FName _Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_GameplayTags_LoadGameplayTags> FVar10;
  UClass *pUVar11;
  FString *pFVar12;
  UObject *this_00;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  size_t sVar16;
  undefined1 uVar17;
  FName *pFVar18;
  TArray<TObjectPtr<UDataTable>,TSizedDefaultAllocator<32>_> *pTVar19;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  UObject *local_158;
  UObject *local_150;
  FName local_148;
  FName local_140;
  FString local_138;
  FName local_128;
  undefined1 local_118 [16];
  FName local_108;
  FName FStack_100;
  ForAnyElementType local_f8;
  uint local_f0;
  int local_ec;
  FSoftObjectPath local_e8;
  FName local_c8 [2];
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98;
  FString local_90;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  
  bVar5 = false;
  bVar7 = false;
  local_res10 = 0;
  FVar10 = StatPtr_STAT_GameplayTags_LoadGameplayTags;
  if (StatPtr_STAT_GameplayTags_LoadGameplayTags ==
      (FThreadSafeStaticStat<FStat_STAT_GameplayTags_LoadGameplayTags>)0x0) {
    pFVar9 = ::FName::FName(&local_98,"STAT_GameplayTags_LoadGameplayTags");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_GameplayTags_LoadGameplayTags>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameplayTags_LoadGameplayTags,
                        *pFVar9,L"Load Gameplay Tags","STATGROUP_GameplayTags","STATCAT_Advanced",
                        L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  uVar17 = 0;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  local_res10 = local_res10 & 0xffffff00;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar13 == 0)) {
LAB_146ae2f83:
    local_140 = local_128;
    FVar15 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      uVar17 = 1;
      local_res10 = CONCAT31(local_res10._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar14.Value;
        local_148.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                   ,0x121);
        uVar17 = 3;
        local_res10 = CONCAT31(local_res10._1_3_,3);
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146ae2f83;
    local_res8 = FVar14.Value;
    uStackX_c = uVar13;
    local_140 = FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    local_res10 = CONCAT31(local_res10._1_3_,uVar17) | 4;
  }
  pUVar11 = UGameplayTagsSettings::StaticClass();
  if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar11);
  }
  local_150 = (pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
  pTVar19 = &this->GameplayTagTables;
  piVar1 = &(this->GameplayTagTables).ArrayMax;
  (this->GameplayTagTables).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar19->AllocatorInstance,0,piVar1);
  }
  if ((param_1) && (bVar6 = IsLoading(), !bVar6)) {
    iVar2 = *(int *)&local_150[3].field_0x10;
    if (0 < iVar2) {
      pFVar9 = *(FName **)&local_150[3].field_0x8;
      pFVar18 = pFVar9 + (longlong)iVar2 * 4;
      while( true ) {
        if (*(int *)&local_150[3].field_0x10 != iVar2) {
          `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar9 == pFVar18) break;
        uVar13 = pFVar9[3].ComparisonIndex.Value;
        _Src = pFVar9[2];
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0 = uVar13;
        local_108 = *pFVar9;
        FStack_100 = pFVar9[1];
        if (uVar13 == 0) {
          local_ec = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar13,0,&local_f8,uVar13,&local_ec);
          memcpy(local_f8.Data,(void *)_Src,(longlong)(int)uVar13);
        }
        local_c8[0] = local_108;
        if (local_108 == (FName)0x0) {
          local_118._8_4_ = local_108.ComparisonIndex.Value;
          local_118._12_4_ = local_108.Number;
          bVar5 = true;
          pFVar12 = (FString *)local_118;
          local_118._0_8_ = (FScriptContainerElement *)0x0;
        }
        else {
          bVar7 = true;
          pFVar12 = ::FName::ToString(local_c8,&local_90);
        }
        local_138.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = (pFVar12->Data).ArrayNum;
        local_138.Data.ArrayMax = (pFVar12->Data).ArrayMax;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
        if ((bVar7) &&
           (bVar7 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if ((bVar5) &&
           (bVar5 = false,
           (FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_118._0_8_);
        }
        LoadPackageAsync(&local_138,(FGuid *)0x0);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
        pFVar9 = pFVar9 + 4;
      }
      goto LAB_146ae3375;
    }
  }
  iVar2 = *(int *)&local_150[3].field_0x10;
  pFVar9 = *(FName **)&local_150[3].field_0x8;
  pFVar18 = pFVar9 + (longlong)iVar2 * 4;
  while( true ) {
    if (*(int *)&local_150[3].field_0x10 != iVar2) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    FVar15 = local_140;
    if (pFVar9 == pFVar18) break;
    local_e8.SubPathString.Data.ArrayNum = pFVar9[3].ComparisonIndex.Value;
    sVar16 = (size_t)local_e8.SubPathString.Data.ArrayNum;
    local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar15 = pFVar9[2];
    local_e8.AssetPath.PackageName = *pFVar9;
    local_e8.AssetPath.AssetName = pFVar9[1];
    if (local_e8.SubPathString.Data.ArrayNum == 0) {
      local_e8.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_e8.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_e8.SubPathString,local_e8.SubPathString.Data.ArrayNum,
                 &local_e8.SubPathString.Data.ArrayMax);
      memcpy(local_e8.SubPathString.Data.AllocatorInstance.Data,(void *)FVar15,sVar16);
    }
    local_a8 = (wchar_t *)0x0;
    iVar8 = 0;
    iStack_a0 = 0;
    pFVar12 = FSoftObjectPath::ToString(&local_e8,&local_58);
    if ((pFVar12->Data).ArrayNum == 0) {
      local_b8 = (FScriptContainerElement *)0x15060d16c;
LAB_146ae3224:
      sVar16 = wcslen((wchar_t *)local_b8);
      iVar8 = (int)sVar16;
    }
    else {
      local_b8 = (pFVar12->Data).AllocatorInstance.Data;
      if (local_b8 != (FScriptContainerElement *)0x0) goto LAB_146ae3224;
    }
    iStack_b0 = iVar8;
    pUVar11 = Z_Construct_UClass_UDataTable_NoRegister();
    local_78._12_4_ = uStack_9c;
    local_78.Size = iStack_a0;
    local_68._12_4_ = uStack_ac;
    local_68.Size = iStack_b0;
    local_78.DataPtr = local_a8;
    local_68.DataPtr = (wchar_t *)local_b8;
    this_00 = StaticLoadObject(pUVar11,(UObject *)0x0,&local_68,&local_78,0,(UPackageMap *)0x0,true,
                               (FLinkerInstancingContext *)0x0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPreload(this_00);
    }
    local_158 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_00);
    }
    pFVar3 = (pTVar19->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 < pFVar3 + (longlong)*piVar1 * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->GameplayTagTables).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar19->AllocatorInstance,piVar1);
    }
    (this->GameplayTagTables).ArrayNum = iVar8 + 1;
    *(UObject **)((pTVar19->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_158;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_158 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_158);
    }
    if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 4;
  }
LAB_146ae3375:
  uVar13 = local_res10;
  if ((local_res10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar13 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar13 & 4) != 0) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// MarkChildrenOfNodeConflict @ 146ae4330

void __thiscall
UGameplayTagsManager::MarkChildrenOfNodeConflict
          (UGameplayTagsManager *this,TSharedPtr<FGameplayTagNode,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// NotifyTagReplicated @ 146ae7840

void __thiscall
UGameplayTagsManager::NotifyTagReplicated
          (UGameplayTagsManager *this,FGameplayTag param_1,bool param_2)

{
  FName FVar1;
  uint uVar2;
  int *piVar3;
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  FName local_res10;
  
  local_res10 = param_1.TagName;
  uVar2 = ::GetTypeHash(param_1.TagName.ComparisonIndex.Value);
  piVar3 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
           ::FindOrAddImpl<FGameplayTag_const_&>
                     ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                       *)&this->ReplicationCountMap,uVar2 + param_1.TagName.Number,
                      (FGameplayTag *)&local_res10);
  FVar1 = local_res10;
  *piVar3 = *piVar3 + 1;
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  this_00 = &this->ReplicationCountMap_Containers;
  if (!param_2) {
    this_00 = &this->ReplicationCountMap_SingleTags;
  }
  piVar3 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
           ::FindOrAddImpl<FGameplayTag_const_&>
                     ((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                       *)this_00,uVar2 + FVar1.Number,(FGameplayTag *)&local_res10);
  *piVar3 = *piVar3 + 1;
  return;
}

// OnDoneAddingNativeTagsDelegate @ 146ae78d0

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UGameplayTagsManager::OnDoneAddingNativeTagsDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UGameplayTagsManager::OnDoneAddingNativeTagsDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// OnLastChanceToAddNativeTags @ 146ae7950

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UGameplayTagsManager::OnLastChanceToAddNativeTags(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UGameplayTagsManager::OnLastChanceToAddNativeTags'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// PopDeferOnGameplayTagTreeChangedBroadcast @ 146ae7b40

void __thiscall
UGameplayTagsManager::PopDeferOnGameplayTagTreeChangedBroadcast(UGameplayTagsManager *this)

{
  int *piVar1;
  
  piVar1 = &this->bDeferBroadcastOnGameplayTagTreeChanged;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (this->bShouldBroadcastDeferredOnGameplayTagTreeChanged != false)) {
    this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = false;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&IGameplayTagsModule::OnGameplayTagTreeChanged);
    return;
  }
  return;
}

// PopulateTreeFromDataTable @ 146ae7b70

void __thiscall
UGameplayTagsManager::PopulateTreeFromDataTable(UGameplayTagsManager *this,UDataTable *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  UPackage *pUVar6;
  FGameplayTagSource *pFVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  undefined1 local_78 [8];
  TArray<FGameplayTagTableRow_*,TSizedDefaultAllocator<32>_> local_70;
  FName local_60;
  TPairInitializer<FName_const_&,FGameplayTagSource_&&> local_58;
  TObjectPtr<URestrictedGameplayTagsList>_u_0 local_48;
  FName local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((this->GameplayRootTag).Object == (FGameplayTagNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameplayRootTag.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                       ,0x449,
                       L"ConstructGameplayTagTree() must be called before PopulateTreeFromDataTable()"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ContextString,L"UGameplayTagsManager::PopulateTreeFromDataTable");
      atexit(`UGameplayTagsManager::PopulateTreeFromDataTable'::__l2::
             _dynamic_atexit_destructor_for__ContextString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pwVar8 = L"";
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (ContextString.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)ContextString.Data.AllocatorInstance.Data;
  }
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  UDataTable::GetAllRows<FGameplayTagTableRow>(param_1,pwVar8,&local_70);
  pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  FVar2 = (FName)pUVar6->_padding_;
  local_60 = FVar2;
  pFVar7 = TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
           ::Find((TMapBase<FName,FGameplayTagSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>_>
                   *)&this->TagSources,FVar2);
  if (pFVar7 == (FGameplayTagSource *)0x0) {
    local_40 = local_60;
    local_58.Value = (FGameplayTagSource *)&local_60;
    local_38 = 4;
    local_48.DebugPtr = (URestrictedGameplayTagsList *)&local_40;
    local_30 = 0;
    uStack_28 = 0;
    TSet<TTuple<FName,FGameplayTagSource>,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FGameplayTagSource_&&>_>
              ((TSet<TTuple<FName,FGameplayTagSource>,TDefaultMapHashableKeyFuncs<FName,FGameplayTagSource,0>,FDefaultSetAllocator>
                *)&this->TagSources,&local_58,(bool *)&local_58.Value);
  }
  iVar4 = local_70.ArrayNum;
  pFVar1 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 8;
  FVar9.Data = local_70.AllocatorInstance.Data;
  while( true ) {
    if (local_70.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FGameplayTagTableRow_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (FVar9.Data == pFVar1) break;
    if (*(FGameplayTagTableRow **)FVar9.Data != (FGameplayTagTableRow *)0x0) {
      AddTagTableRow(this,*(FGameplayTagTableRow **)FVar9.Data,FVar2,false);
    }
    FVar9.Data = FVar9.Data + 8;
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// PrintReplicationFrequencyReport @ 146ae7e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTagsManager::PrintReplicationFrequencyReport(UGameplayTagsManager *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  float _X;
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *pTVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar9;
  ulonglong uVar10;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *pTVar19;
  int iVar20;
  ulonglong uVar21;
  int *piVar22;
  undefined1 *puVar23;
  int iVar24;
  ForElementType<unsigned_int> FVar25;
  longlong lVar26;
  uint *puVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  undefined1 *puVar29;
  ushort uVar30;
  uint uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_4e8 [32];
  double local_4c8;
  uint local_4b8;
  undefined1 local_4b4;
  undefined1 local_4b3;
  FIdentityFunctor local_4b2 [2];
  uint local_4b0;
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4a0;
  undefined8 local_480;
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  undefined1 local_475;
  int local_474;
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *local_470;
  undefined8 uStack_468;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_460;
  uint uStack_458;
  uint uStack_454;
  int iStack_450;
  undefined4 uStack_44c;
  int local_448;
  undefined4 uStack_444;
  undefined8 local_440;
  int local_438 [2];
  int local_430;
  uint uStack_42c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_428;
  undefined4 local_420;
  uint uStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_390;
  FIdentityFunctor *local_370;
  FIdentityFunctor **local_368;
  FString local_360;
  FString local_350;
  FValueComparisonClass<TGreater<int>_> local_340;
  FString local_338;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  FString local_318;
  FValueComparisonClass<TGreater<int>_> local_308;
  longlong *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  FValueComparisonClass<TGreater<int>_> local_2d8;
  uint *local_2d0;
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  undefined1 local_298 [12];
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *local_288;
  undefined8 uStack_280;
  longlong local_278;
  int iStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [12];
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *local_258;
  undefined8 uStack_250;
  longlong local_248;
  int iStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [12];
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined8 uStack_220;
  longlong local_218;
  int iStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  TRangedForIterator local_1d8;
  TRangedForIterator local_1a8;
  TRangedForIterator local_178;
  undefined4 local_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  undefined4 local_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      goto LAB_146ae7f03;
    }
  }
  else {
    if (this->bNetworkIndexInvalidated != false) {
      ConstructNetIndex(this);
    }
LAB_146ae7f03:
    if (((2 < (byte)LogGameplayTags._0_1_) &&
        (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags),
        2 < (byte)LogGameplayTags._0_1_)) &&
       (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags),
       2 < (byte)LogGameplayTags._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
  }
  local_308.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)&local_478;
  pTVar19 = &this->ReplicationCountMap_SingleTags;
  TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
            ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
              *)pTVar19,&local_308);
  puVar29 = &(this->ReplicationCountMap_SingleTags).field_0x10;
  local_3d0._padding_._0_4_ = 0;
  local_440 = 1;
  local_3d0._padding_._4_4_ = 1;
  local_3d0.UnvisitedBitMask = 0xffffffff;
  local_3d0.CurrentBitIndex = 0;
  local_3d0.BaseBitIndex = 0;
  local_3d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar29;
  if (*(int *)&(this->ReplicationCountMap_SingleTags).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d0);
  }
  TStack_4a0._padding_ = CONCAT44(local_3d0._padding_._4_4_,(undefined4)local_3d0._padding_);
  TStack_4a0._16_8_ = CONCAT44(local_3d0.CurrentBitIndex,local_3d0.UnvisitedBitMask);
  TStack_4a0._24_8_ = CONCAT44(local_3d0._28_4_,local_3d0.BaseBitIndex);
  local_480._0_4_ =
       *(int *)&(this->ReplicationCountMap_SingleTags).field_0x8 -
       *(int *)&(this->ReplicationCountMap_SingleTags).field_0x34;
  TStack_4a0.Array = local_3d0.Array;
  local_288 = local_3d0.Array;
  uStack_26c = local_480._4_4_;
  local_4a8 = pTVar19;
  local_298._0_8_ = pTVar19;
  unique0x10001a3d = TStack_4a0._padding_;
  uStack_280 = TStack_4a0._16_8_;
  local_278 = TStack_4a0._24_8_;
  iStack_270 = (int)local_480;
  pTVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_128,(TBitArray<FDefaultBitArrayAllocator> *)puVar29,
                      *(int *)&(this->ReplicationCountMap_SingleTags).field_0x28);
  TStack_4a0._padding_ = pTVar9->_padding_;
  TStack_4a0.Array = pTVar9->Array;
  TStack_4a0.UnvisitedBitMask = pTVar9->UnvisitedBitMask;
  TStack_4a0.CurrentBitIndex = pTVar9->CurrentBitIndex;
  TStack_4a0._24_8_ = *(undefined8 *)&pTVar9->BaseBitIndex;
  local_480._0_4_ =
       *(int *)&(this->ReplicationCountMap_SingleTags).field_0x8 -
       *(int *)&(this->ReplicationCountMap_SingleTags).field_0x34;
  local_1d8.InitialNum = (int)local_480;
  local_1d8._44_4_ = local_480._4_4_;
  local_4a8 = pTVar19;
  local_1d8._padding_ = (longlong)pTVar19;
  local_1d8._padding_ = TStack_4a0._padding_;
  local_1d8._padding_ = (longlong)TStack_4a0.Array;
  local_1d8._padding_ = TStack_4a0._16_8_;
  local_1d8._padding_ = TStack_4a0._24_8_;
  bVar6 = TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_298,&local_1d8);
  if (bVar6) {
    do {
      if (2 < (byte)LogGameplayTags._0_1_) {
        ::FName::ToString((FName *)(*(longlong *)(undefined1 *)local_298._0_8_ +
                                   (longlong)uStack_280._4_4_ * 0x14),&local_360);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
        }
      }
      uStack_280 = CONCAT44(uStack_280._4_4_,(uint)uStack_280 & ~uStack_28c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_298 + 8));
      bVar6 = TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_298,&local_1d8);
    } while (bVar6);
  }
  if (2 < (byte)LogGameplayTags._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  local_2d8.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)&local_477;
  pTVar19 = &this->ReplicationCountMap_Containers;
  TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
            ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
              *)pTVar19,&local_2d8);
  puVar29 = &(this->ReplicationCountMap_Containers).field_0x10;
  local_3b0._padding_._0_4_ = 0;
  local_3b0._padding_._4_4_ = 1;
  local_3b0.UnvisitedBitMask = 0xffffffff;
  local_3b0.CurrentBitIndex = 0;
  local_3b0.BaseBitIndex = 0;
  local_3b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar29;
  if (*(int *)&(this->ReplicationCountMap_Containers).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b0);
  }
  TStack_4a0._padding_ = CONCAT44(local_3b0._padding_._4_4_,(undefined4)local_3b0._padding_);
  TStack_4a0._16_8_ = CONCAT44(local_3b0.CurrentBitIndex,local_3b0.UnvisitedBitMask);
  TStack_4a0._24_8_ = CONCAT44(local_3b0._28_4_,local_3b0.BaseBitIndex);
  iStack_240 = *(int *)&(this->ReplicationCountMap_Containers).field_0x8 -
               *(int *)&(this->ReplicationCountMap_Containers).field_0x34;
  TStack_4a0.Array = local_3b0.Array;
  local_258 = local_3b0.Array;
  uStack_23c = local_480._4_4_;
  local_4a8 = pTVar19;
  local_268._0_8_ = pTVar19;
  unique0x10001a5d = TStack_4a0._padding_;
  uStack_250 = TStack_4a0._16_8_;
  local_248 = TStack_4a0._24_8_;
  local_480._0_4_ = iStack_240;
  pTVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_108,(TBitArray<FDefaultBitArrayAllocator> *)puVar29,
                      *(int *)&(this->ReplicationCountMap_Containers).field_0x28);
  TStack_4a0._padding_ = pTVar9->_padding_;
  TStack_4a0.Array = pTVar9->Array;
  TStack_4a0.UnvisitedBitMask = pTVar9->UnvisitedBitMask;
  TStack_4a0.CurrentBitIndex = pTVar9->CurrentBitIndex;
  TStack_4a0._24_8_ = *(undefined8 *)&pTVar9->BaseBitIndex;
  local_480._0_4_ =
       *(int *)&(this->ReplicationCountMap_Containers).field_0x8 -
       *(int *)&(this->ReplicationCountMap_Containers).field_0x34;
  local_1a8.InitialNum = (int)local_480;
  local_1a8._44_4_ = local_480._4_4_;
  local_4a8 = pTVar19;
  local_1a8._padding_ = (longlong)pTVar19;
  local_1a8._padding_ = TStack_4a0._padding_;
  local_1a8._padding_ = (longlong)TStack_4a0.Array;
  local_1a8._padding_ = TStack_4a0._16_8_;
  local_1a8._padding_ = TStack_4a0._24_8_;
  bVar6 = TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_268,&local_1a8);
  if (bVar6) {
    do {
      if (2 < (byte)LogGameplayTags._0_1_) {
        ::FName::ToString((FName *)(*(longlong *)(undefined1 *)local_268._0_8_ +
                                   (longlong)uStack_250._4_4_ * 0x14),&local_350);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
      }
      uStack_250 = CONCAT44(uStack_250._4_4_,(uint)uStack_250 & ~uStack_25c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_268 + 8));
      bVar6 = TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_268,&local_1a8);
    } while (bVar6);
  }
  if (2 < (byte)LogGameplayTags._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  local_340.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)&local_476;
  pTVar19 = &this->ReplicationCountMap;
  TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
            ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
              *)pTVar19,&local_340);
  puVar29 = &(this->ReplicationCountMap).field_0x10;
  local_3f0._padding_._0_4_ = 0;
  local_3f0._padding_._4_4_ = 1;
  local_3f0.UnvisitedBitMask = 0xffffffff;
  local_3f0.CurrentBitIndex = 0;
  local_3f0.BaseBitIndex = 0;
  local_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar29;
  if (*(int *)&(this->ReplicationCountMap).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f0);
  }
  TStack_4a0._padding_ = CONCAT44(local_3f0._padding_._4_4_,(undefined4)local_3f0._padding_);
  TStack_4a0._16_8_ = CONCAT44(local_3f0.CurrentBitIndex,local_3f0.UnvisitedBitMask);
  TStack_4a0._24_8_ = CONCAT44(local_3f0._28_4_,local_3f0.BaseBitIndex);
  iStack_210 = *(int *)&(this->ReplicationCountMap).field_0x8 -
               *(int *)&(this->ReplicationCountMap).field_0x34;
  TStack_4a0.Array = local_3f0.Array;
  local_228 = local_3f0.Array;
  uStack_20c = local_480._4_4_;
  local_4a8 = pTVar19;
  local_238._0_8_ = pTVar19;
  unique0x10001a7d = TStack_4a0._padding_;
  uStack_220 = TStack_4a0._16_8_;
  local_218 = TStack_4a0._24_8_;
  local_480._0_4_ = iStack_210;
  pTVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_c8,(TBitArray<FDefaultBitArrayAllocator> *)puVar29,
                      *(int *)&(this->ReplicationCountMap).field_0x28);
  TStack_4a0._padding_ = pTVar9->_padding_;
  TStack_4a0.Array = pTVar9->Array;
  TStack_4a0.UnvisitedBitMask = pTVar9->UnvisitedBitMask;
  TStack_4a0.CurrentBitIndex = pTVar9->CurrentBitIndex;
  TStack_4a0._24_8_ = *(undefined8 *)&pTVar9->BaseBitIndex;
  local_480._0_4_ =
       *(int *)&(this->ReplicationCountMap).field_0x8 -
       *(int *)&(this->ReplicationCountMap).field_0x34;
  local_178.InitialNum = (int)local_480;
  local_178._44_4_ = local_480._4_4_;
  local_4a8 = pTVar19;
  local_178._padding_ = (longlong)pTVar19;
  local_178._padding_ = TStack_4a0._padding_;
  local_178._padding_ = (longlong)TStack_4a0.Array;
  local_178._padding_ = TStack_4a0._16_8_;
  local_178._padding_ = TStack_4a0._24_8_;
  bVar6 = TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=((TRangedForIterator *)local_238,&local_178);
  if (bVar6) {
    do {
      if (2 < (byte)LogGameplayTags._0_1_) {
        ::FName::ToString((FName *)(*(longlong *)(undefined1 *)local_238._0_8_ +
                                   (longlong)uStack_220._4_4_ * 0x14),&local_318);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u__s____d_1513e8500,
                   (FLogCategoryBase *)&LogGameplayTags);
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
      }
      uStack_220 = CONCAT44(uStack_220._4_4_,(uint)uStack_220 & ~uStack_22c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_238 + 8));
      bVar6 = TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_238,&local_178);
    } while (bVar6);
  }
  _X = __real_40000000;
  local_a8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_4b8 = 1;
  uVar32 = 1;
  uVar8 = 0;
  if (1 < this->NetIndexTrueBitNum) {
    do {
      pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReplicationCountMap).field_0x10;
      pTVar19 = &this->ReplicationCountMap;
      uVar30 = 0;
      iVar16 = (int)local_440;
      local_474 = 0;
      local_4b0 = 0;
      local_390._padding_._0_4_ = 0;
      local_390.UnvisitedBitMask = 0xffffffff;
      local_390.CurrentBitIndex = 0;
      local_390.BaseBitIndex = 0;
      local_390._padding_._4_4_ = iVar16;
      local_390.Array = pTVar28;
      if (*(int *)&(this->ReplicationCountMap).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_390);
      }
      uStack_468 = CONCAT44(local_390._padding_._4_4_,(undefined4)local_390._padding_);
      local_448 = *(int *)&(this->ReplicationCountMap).field_0x8 -
                  *(int *)&(this->ReplicationCountMap).field_0x34;
      uStack_454 = local_390.CurrentBitIndex;
      uStack_458 = local_390.UnvisitedBitMask;
      uStack_44c = local_390._28_4_;
      iStack_450 = local_390.BaseBitIndex;
      pTStack_460 = local_390.Array;
      uVar8 = *(uint *)&(this->ReplicationCountMap).field_0x28;
      local_410._padding_._0_4_ = (int)uVar8 >> 5;
      bVar11 = (byte)uVar8 & 0x1f;
      local_410._padding_._4_4_ = iVar16 << bVar11;
      local_410.UnvisitedBitMask = -1 << bVar11;
      local_410.BaseBitIndex = uVar8 & 0xffffffe0;
      uStack_2a0 = CONCAT44(uStack_444,local_448);
      TStack_2c0.Array = local_390.Array;
      local_470 = pTVar19;
      local_410.Array = pTVar28;
      local_410.CurrentBitIndex = uVar8;
      local_2c8 = pTVar19;
      TStack_2c0._padding_ = uStack_468;
      TStack_2c0._16_8_ = _uStack_458;
      TStack_2c0._24_8_ = _iStack_450;
      if (((int)uVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != *(uint *)&(this->ReplicationCountMap).field_0x28) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_410);
        pTVar28 = local_410.Array;
        uVar8 = local_410.CurrentBitIndex;
      }
      while( true ) {
        pTVar19 = local_2c8;
        if (*(int *)&local_2c8->field_0x8 - *(int *)&local_2c8->field_0x34 != (int)uStack_2a0) {
          local_4b4 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4b4);
        }
        uVar7 = local_4b8;
        lVar18 = (longlong)TStack_2c0.CurrentBitIndex;
        if (((TStack_2c0.CurrentBitIndex == uVar8) && (TStack_2c0.Array == pTVar28)) &&
           (pTVar19 == &this->ReplicationCountMap)) break;
        lVar26 = *(longlong *)pTVar19;
        fVar33 = powf(_X,(float)(int)local_4b8);
        if (fVar33 <= (float)uVar30) {
          uVar7 = this->NetIndexTrueBitNum;
        }
        uVar30 = uVar30 + 1;
        iVar16 = *(int *)(lVar26 + 8 + lVar18 * 0x14);
        local_4b0 = local_4b0 + iVar16 * this->NetIndexTrueBitNum;
        local_474 = local_474 + (this->NetIndexTrueBitNum - (uVar7 + 1)) * iVar16;
        TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
      }
      if (local_a8._8_4_ != local_74) {
        FVar13.Data = (FScriptContainerElement *)local_70;
        if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_68.Data;
        }
        iVar16 = *(int *)((longlong)FVar13.Data + (ulonglong)(local_60 - 1 & local_4b8) * 4);
        while (iVar16 != -1) {
          pFVar12 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar16 * 0x10);
          if (*(uint *)&pFVar12->field_0x0 == local_4b8) {
            if (pFVar12 != (FScriptContainerElement *)0x0) goto LAB_146ae87bb;
            break;
          }
          iVar16 = *(int *)(pFVar12 + 8);
        }
      }
      local_2d0 = &local_4b8;
      local_4c8 = 0.0;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      EmplaceByHash<TKeyInitializer<int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_a8,(uint)local_438,(TKeyInitializer<int_const_&> *)(ulonglong)local_4b8,
                 (bool *)&local_2d0);
      pFVar12 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)local_438[0] * 0x10);
LAB_146ae87bb:
      *(int *)(pFVar12 + 4) = local_474;
      local_4b8 = local_4b8 + 1;
      uVar32 = local_440;
      uVar8 = local_4b0;
    } while ((int)local_4b8 < this->NetIndexTrueBitNum);
  }
  local_370 = local_4b2;
  local_368 = &local_370;
  if (0 < local_a8._8_4_ - local_74) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8);
    uVar5 = local_a8._0_8_;
    iVar16 = local_a8._8_4_ - local_74;
    if ((iVar16 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *)uVar5,iVar16,local_4b2[0],
               (FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
                *)&local_368);
  }
  uVar7 = local_60;
  uVar21 = (ulonglong)local_60;
  if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar7 == 0) goto LAB_146ae8920;
  uVar31 = uVar7;
  if (uVar7 < 2) {
    if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
      uVar31 = 0;
      goto LAB_146ae88c8;
    }
  }
  else {
LAB_146ae88c8:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar31,4);
  }
  if (0 < (int)uVar7) {
    uVar15 = 0;
    do {
      FVar13.Data = (FScriptContainerElement *)local_70;
      if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
        FVar13.Data = local_68.Data;
      }
      uVar10 = uVar15 & (longlong)(int)uVar7 - 1U;
      uVar15 = uVar15 + 1;
      *(undefined4 *)((longlong)FVar13.Data + uVar10 * 4) = 0xffffffff;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
LAB_146ae8920:
  uVar7 = (uint)uVar32;
  if (local_60 != 0) {
    local_430 = 0;
    uStack_41c = 0;
    iStack_418 = 0;
    pTStack_428 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uStack_42c = uVar7;
    if (local_80 != 0) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_88;
      }
      uVar31 = *(uint *)FVar25;
      iStack_418 = 0;
      local_430 = 0;
      while (uVar31 == 0) {
        iStack_418 = iStack_418 + 0x20;
        lVar18 = (longlong)local_430;
        local_430 = local_430 + 1;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < local_430)
        goto LAB_146ae89cc;
        uVar31 = ((uint *)((longlong)FVar25 + 4))[lVar18];
      }
      uStack_42c = -uVar31 & uVar31;
      uVar21 = (ulonglong)uStack_42c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_328 = (int)lVar18;
      uStack_41c = local_328 + -1 + iStack_418;
      if ((int)local_80 < (int)uStack_41c) {
LAB_146ae89cc:
        uStack_41c = local_80;
      }
    }
    local_420 = 0xffffffff;
    local_300 = (longlong *)local_a8;
    local_2f8._padding_ = CONCAT44(uStack_42c,local_430);
    local_2f8.CurrentBitIndex = uStack_41c;
    local_2f8.UnvisitedBitMask = 0xffffffff;
    local_2f8._28_4_ = uStack_414;
    local_2f8.BaseBitIndex = iStack_418;
    uVar31 = uStack_41c;
    local_2f8.Array = pTStack_428;
    if ((int)uStack_41c < (int)local_80) {
      do {
        lVar18 = *local_300;
        lVar26 = (longlong)(int)uVar31 * 0x10;
        uVar14 = local_60 - 1 & *(uint *)(lVar26 + lVar18);
        *(uint *)(lVar26 + 0xc + lVar18) = uVar14;
        FVar13.Data = (FScriptContainerElement *)local_70;
        if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
          FVar13.Data = local_68.Data;
        }
        uVar21 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar26 + 8 + lVar18) = *(undefined4 *)((longlong)FVar13.Data + uVar21 * 4);
        *(uint *)((longlong)FVar13.Data + uVar21 * 4) = uVar31;
        local_2f8.UnvisitedBitMask = local_2f8.UnvisitedBitMask & ~local_2f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
        uVar31 = local_2f8.CurrentBitIndex;
      } while (local_2f8.CurrentBitIndex < (local_2f8.Array)->NumBits);
    }
  }
  uVar31 = local_80;
  iVar16 = 0;
  iVar24 = 0;
  iStack_450 = 0;
  uStack_454 = 0;
  if (local_80 != 0) {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_88;
    }
    uVar14 = *(uint *)FVar25;
    while (uVar14 == 0) {
      lVar18 = (longlong)iVar24;
      iStack_450 = iStack_450 + 0x20;
      iVar24 = iVar24 + 1;
      uStack_454 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_146ae8b13;
      uVar14 = ((uint *)((longlong)FVar25 + 4))[lVar18];
    }
    uVar7 = -uVar14 & uVar14;
    uVar21 = (ulonglong)uVar7 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_324 = (int)lVar18;
    uStack_454 = iStack_450 + -1 + local_324;
    if ((int)local_80 < (int)uStack_454) {
      uStack_454 = local_80;
    }
  }
LAB_146ae8b13:
  local_470 = (TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
               *)local_a8;
  pTStack_460 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_448 = local_a8._8_4_ - local_74;
  uStack_458 = 0xffffffff;
  uVar14 = local_80 & 0xffffffe0;
  uStack_468 = CONCAT44(uVar7,iVar24);
  uStack_44c = local_12c;
  TStack_200._padding_ = uStack_468;
  iVar24 = (int)local_80 >> 5;
  uStack_1e0 = CONCAT44(uStack_444,local_448);
  bVar11 = (byte)local_80;
  TStack_200.UnvisitedBitMask = 0xffffffff;
  TStack_200.CurrentBitIndex = uStack_454;
  TStack_200.BaseBitIndex = iStack_450;
  TStack_200._28_4_ = local_12c;
  local_208 = (longlong *)local_470;
  TStack_200.Array = pTStack_460;
  if (((int)local_80 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar31 != local_80) {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_88;
    }
    uVar7 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar24 * 4);
    while (uVar7 == 0) {
      lVar18 = (longlong)iVar24;
      uVar14 = uVar14 + 0x20;
      iVar24 = iVar24 + 1;
      uVar31 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_146ae8c33;
      uVar7 = ((uint *)((longlong)FVar25 + 4))[lVar18];
    }
    uVar21 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_320 = (int)lVar18;
    uVar31 = (uVar14 - 1) + local_320;
    if ((int)local_80 < (int)uVar31) {
      uVar31 = local_80;
    }
  }
LAB_146ae8c33:
  while( true ) {
    plVar4 = local_208;
    if ((int)local_208[1] - *(int *)((longlong)local_208 + 0x34) != (int)uStack_1e0) {
      local_4b3 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4b3);
    }
    if (((TStack_200.CurrentBitIndex == uVar31) &&
        (TStack_200.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar4 == (longlong *)local_a8)) break;
    piVar22 = (int *)((longlong)TStack_200.CurrentBitIndex * 0x10 + *plVar4);
    if (iVar16 == 0) {
      iVar16 = *piVar22;
    }
    if (2 < (byte)LogGameplayTags._0_1_) {
      local_4c8 = (double)((float)piVar22[1] / (float)(int)uVar8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
  }
  if (2 < (byte)LogGameplayTags._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  TStack_4a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReplicationCountMap).field_0x10
  ;
  iVar17 = 0;
  iVar24 = *(int *)&(this->ReplicationCountMap).field_0x28;
  pTVar19 = &this->ReplicationCountMap;
  iVar20 = 0;
  iStack_450 = 0;
  uStack_454 = 0;
  if (iVar24 == 0) {
LAB_146ae8db3:
    uVar8 = (uint)local_440;
  }
  else {
    puVar27 = *(uint **)&(this->ReplicationCountMap).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)TStack_4a0.Array;
    }
    uVar8 = *puVar27;
    while (uVar8 == 0) {
      lVar18 = (longlong)iVar20;
      iStack_450 = iStack_450 + 0x20;
      iVar20 = iVar20 + 1;
      uStack_454 = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_146ae8db3;
      uVar8 = puVar27[lVar18 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar21 = (ulonglong)uVar8 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_31c = (int)lVar18;
    uStack_454 = iStack_450 + -1 + local_31c;
    if (iVar24 < (int)uStack_454) {
      uStack_454 = iVar24;
    }
  }
  uVar7 = *(uint *)&(this->ReplicationCountMap).field_0x28;
  local_448 = *(int *)&(this->ReplicationCountMap).field_0x8 -
              *(int *)&(this->ReplicationCountMap).field_0x34;
  puVar29 = &(this->ReplicationCountMap).field_0x10;
  uStack_458 = 0xffffffff;
  uVar31 = uVar7 & 0xffffffe0;
  local_4b0 = -1 << ((byte)uVar7 & 0x1f);
  uStack_468 = CONCAT44(uVar8,iVar20);
  uStack_44c = local_cc;
  TStack_4a0._padding_ = uStack_468;
  iVar24 = (int)uVar7 >> 5;
  local_480 = CONCAT44(uStack_444,local_448);
  TStack_4a0.UnvisitedBitMask = 0xffffffff;
  TStack_4a0.CurrentBitIndex = uStack_454;
  TStack_4a0.BaseBitIndex = iStack_450;
  TStack_4a0._28_4_ = local_cc;
  local_4a8 = pTVar19;
  local_470 = pTVar19;
  pTStack_460 = TStack_4a0.Array;
  if (((int)uVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = *(uint *)&(this->ReplicationCountMap).field_0x28;
  if (uVar7 != uVar8) {
    puVar1 = *(undefined1 **)&(this->ReplicationCountMap).field_0x20;
    puVar23 = puVar29;
    if (puVar1 != (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar7 = local_4b0 & *(uint *)(puVar23 + (longlong)iVar24 * 4);
    while (uVar7 == 0) {
      lVar18 = (longlong)iVar24;
      uVar31 = uVar31 + 0x20;
      iVar24 = iVar24 + 1;
      uVar7 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_146ae8ee0;
      uVar7 = *(uint *)(puVar23 + lVar18 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar7 = (int)lVar18 + -1 + uVar31;
    if ((int)uVar8 < (int)uVar7) {
      uVar7 = uVar8;
    }
  }
LAB_146ae8ee0:
  do {
    pTVar3 = local_4a8;
    if (*(int *)&local_4a8->field_0x8 - *(int *)&local_4a8->field_0x34 != (int)local_480) {
      `TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_475);
    }
    if (((TStack_4a0.CurrentBitIndex == uVar7) &&
        (TStack_4a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar29)) &&
       (pTVar3 == pTVar19)) {
LAB_146ae8fda:
      if (2 < (byte)LogGameplayTags._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      }
      if (2 < (byte)LogGameplayTags._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      }
      local_60 = 0;
      if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      return;
    }
    if (2 < (byte)LogGameplayTags._0_1_) {
      ::FName::ToString((FName *)(*(longlong *)pTVar3 + (longlong)TStack_4a0.CurrentBitIndex * 0x14)
                        ,&local_338);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
    }
    fVar34 = (float)iVar17;
    fVar33 = powf(_X,(float)iVar16);
    if ((fVar34 == fVar33) && (2 < (byte)LogGameplayTags._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
    fVar33 = powf(_X,(float)(iVar16 + 1));
    iVar17 = iVar17 + 1;
    if (fVar33 <= fVar34) goto LAB_146ae8fda;
    TStack_4a0.UnvisitedBitMask = TStack_4a0.UnvisitedBitMask & ~TStack_4a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4a0);
  } while( true );
}

// PrintReplicationIndices @ 146ae90a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTagsManager::PrintReplicationIndices(UGameplayTagsManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName FVar7;
  code *pcVar8;
  TMap<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  FName *pFVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FName local_res20;
  FString local_e0;
  TMap<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if (this->bUseFastReplication == false) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`private:_void___cdecl_UGameplayTagsManager::VerifyNetworkIndex(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
  }
  else if (this->bNetworkIndexInvalidated != false) {
    ConstructNetIndex(this);
  }
  if (3 < (byte)LogGameplayTags._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  lpCriticalSection = &this->GameplayTagMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iStack_c8 = 0;
  local_c0 = &(this->GameplayTagNodeMap).field_0x10;
  iVar3 = *(int *)&(this->GameplayTagNodeMap).field_0x28;
  pTVar1 = &this->GameplayTagNodeMap;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->GameplayTagNodeMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_c0;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_146ae91f6;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_c4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_b4 = local_b0 + -1 + local_res10;
    if (iVar3 < iStack_b4) {
LAB_146ae91f6:
      iStack_b4 = iVar3;
    }
  }
  puVar18 = &(this->GameplayTagNodeMap).field_0x10;
  uVar13 = *(uint *)&(this->GameplayTagNodeMap).field_0x28;
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->GameplayTagNodeMap).field_0x8 -
              *(int *)&(this->GameplayTagNodeMap).field_0x34;
  uVar17 = uVar13 & 0xffffffe0;
  uStack_b8 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  iVar14 = (int)uVar13 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar1;
  local_a0 = pTVar1;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(this->GameplayTagNodeMap).field_0x28;
  if (uVar13 != uVar4) {
    puVar5 = *(undefined1 **)&(this->GameplayTagNodeMap).field_0x20;
    puVar15 = puVar18;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146ae9310;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar13 = local_res18 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_146ae9310:
  do {
    pTVar9 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) && (pTVar9 == pTVar1))
    {
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return;
    }
    pFVar12 = (FName *)((longlong)TStack_98.CurrentBitIndex * 0x20 + *(longlong *)pTVar9);
    FVar6 = pFVar12[2];
    local_res20 = *pFVar12;
    FVar7 = pFVar12[1];
    if (FVar6 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar6 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar6 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar6 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar6 + 8) + 1);
      UNLOCK();
    }
    if (3 < (byte)LogGameplayTags._0_1_) {
      if ((FVar7 == (FName)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(short *)((longlong)FVar7 + 0x48) == -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NetIndex != ((uint16) 0xffff)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Classes\\GameplayTagsManager.h"
                              ,0xe6,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ::FName::ToString(&local_res20,&local_e0);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar6);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// PushDeferOnGameplayTagTreeChangedBroadcast @ 146ae9480

void __thiscall
UGameplayTagsManager::PushDeferOnGameplayTagTreeChangedBroadcast(UGameplayTagsManager *this)

{
  this->bDeferBroadcastOnGameplayTagTreeChanged = this->bDeferBroadcastOnGameplayTagTreeChanged + 1;
  return;
}

// RedirectSingleGameplayTag @ 146ae9ac0

void __thiscall
UGameplayTagsManager::RedirectSingleGameplayTag
          (UGameplayTagsManager *this,FGameplayTag *param_1,FProperty *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
  *this_00;
  FName *pFVar4;
  
  lpCriticalSection = &this->GameplayTagMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar1 = param_1->TagName;
  this_00 = (TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
             *)FGameplayTagRedirectors::Get();
  pFVar4 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
            ::Find(this_00,FVar1)->TagName;
  if ((pFVar4 != (FName *)0x0) && (*pFVar4 != (FName)0x0)) {
    param_1->TagName = *pFVar4;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RedirectTagsForContainer @ 146ae9b90

void __thiscall
UGameplayTagsManager::RedirectTagsForContainer
          (UGameplayTagsManager *this,FGameplayTagContainer *param_1,FProperty *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res20;
  FName local_58;
  FName local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  iVar7 = 0;
  lpCriticalSection = &this->GameplayTagMapCritical;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  while( true ) {
    if ((iVar7 < 0) || ((param_1->GameplayTags).ArrayNum <= iVar7)) {
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      iVar7 = (int)local_30;
      uVar5 = (ulonglong)(int)local_30;
      pFVar4 = (FName *)(local_38.Data + uVar5 * 8);
      FVar6.Data = local_38.Data;
      while( true ) {
        if ((int)uVar5 != iVar7) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if ((FName *)FVar6.Data == pFVar4) break;
        local_res20 = *(FName *)FVar6.Data;
        FGameplayTagContainer::RemoveTag(param_1,(FGameplayTag *)&local_res20,false);
        uVar5 = local_30 & 0xffffffff;
        FVar6.Data = FVar6.Data + 8;
      }
      iVar7 = (int)local_40;
      uVar5 = (ulonglong)(int)local_40;
      pFVar4 = (FName *)(local_48.Data + uVar5 * 8);
      FVar6.Data = local_48.Data;
      while( true ) {
        if ((int)uVar5 != iVar7) {
          `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if ((FName *)FVar6.Data == pFVar4) break;
        FGameplayTagContainer::AddTag(param_1,(FGameplayTag *)FVar6.Data);
        uVar5 = local_40 & 0xffffffff;
        FVar6.Data = FVar6.Data + 8;
      }
      if ((FName *)local_48.Data != (FName *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if ((FName *)local_38.Data != (FName *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return;
    }
    if ((iVar7 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    local_50 = *(FName *)((param_1->GameplayTags).AllocatorInstance.Data + (longlong)iVar7 * 8);
    local_58.ComparisonIndex.Value = 0;
    local_58.Number = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FGameplayTagRedirectors::FGameplayTagRedirectors(&::Singleton);
      atexit(`FGameplayTagRedirectors::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
              ::Find((TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
                      *)&::Singleton,local_50)->TagName;
    if (pFVar4 != (FName *)0x0) {
      local_58 = *pFVar4;
      if (((local_38.Data <= &local_50) &&
          (&local_50 < (FName *)(local_38.Data + (longlong)local_30._4_4_ * 8))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = (int)local_30;
      if ((int)local_30 == local_30._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_38,(int *)((longlong)&local_30 + 4));
      }
      local_30 = CONCAT44(local_30._4_4_,iVar3 + 1);
      *(FName *)(local_38.Data + (longlong)iVar3 * 8) = local_50;
      if (local_58 != (FName)0x0) {
        if (((local_48.Data <= &local_58) &&
            (&local_58 < (FName *)(local_48.Data + (longlong)local_40._4_4_ * 8))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_48,(int *)((longlong)&local_40 + 4));
        }
        local_40 = CONCAT44(local_40._4_4_,iVar3 + 1);
        *(FName *)(local_48.Data + (longlong)iVar3 * 8) = local_58;
      }
    }
    iVar7 = iVar7 + 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// RemoveNativeGameplayTag @ 146aead70

void __thiscall
UGameplayTagsManager::RemoveNativeGameplayTag
          (UGameplayTagsManager *this,FNativeGameplayTag *param_1)

{
  if (*(char *)((longlong)(this->GameplayTagMapCritical).CriticalSection.Opaque1 +
               ((ulonglong)((this->ShouldAllowUnloadingTagsOverride).bIsSet != false) - 0x24)) !=
      '\0') {
    if ((this->bIsConstructingGameplayTagTree == false) && (this->bDoneAddingNativeTags != false)) {
      if (((this->ShouldDeferGameplayTagTreeRebuilds).bIsSet == false) ||
         ((this->ShouldDeferGameplayTagTreeRebuilds).TypedValue == false)) {
        DestroyGameplayTagTree(this);
        ConstructGameplayTagTree(this);
        return;
      }
      if (this->bUseFastReplication != false) {
        this->bNetworkIndexInvalidated = true;
      }
      if (this->bDeferBroadcastOnGameplayTagTreeChanged != 0) {
        this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
        return;
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&IGameplayTagsModule::OnGameplayTagTreeChanged);
      return;
    }
    this->bNeedsTreeRebuildOnDoneAddingGameplayTags = true;
  }
  return;
}

// RemoveTagIniSearchPath @ 146aeb3e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UGameplayTagsManager::RemoveTagIniSearchPath(UGameplayTagsManager *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  FName *pFVar3;
  FGameplayTagSearchPathInfo *pFVar4;
  wchar_t *pwVar5;
  bool bVar6;
  int iVar7;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FSimpleScopeSecondsStat local_38;
  
  iVar7 = 0;
  local_38.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_GameplayTags_RemoveTagIniSearchPath;
  if (StatPtr_STAT_GameplayTags_RemoveTagIniSearchPath ==
      (FThreadSafeStaticStat<FStat_STAT_GameplayTags_RemoveTagIniSearchPath>)0x0) {
    pFVar3 = ::FName::FName(local_res18,"STAT_GameplayTags_RemoveTagIniSearchPath");
    local_38.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameplayTags_RemoveTagIniSearchPath,
                    *pFVar3,L"Remove Tag *.ini Search Path","STATGROUP_GameplayTags",
                    "STATCAT_Advanced",L"Gameplay Tags",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_38._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_res8);
  local_38.StartTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  local_38.Scale = __real_3ff0000000000000;
  if ((*(char *)((longlong)(this->GameplayTagMapCritical).CriticalSection.Opaque1 +
                ((ulonglong)((this->ShouldAllowUnloadingTagsOverride).bIsSet != false) - 0x24)) ==
       '\0') ||
     (pFVar4 = TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
               ::Find((TMapBase<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
                       *)&this->RegisteredSearchPaths,param_1),
     pFVar4 == (FGameplayTagSearchPathInfo *)0x0)) {
    bVar6 = false;
  }
  else {
    if (*(int *)&(this->RegisteredSearchPaths).field_0x8 !=
        *(int *)&(this->RegisteredSearchPaths).field_0x34) {
      iVar1 = (param_1->Data).ArrayNum;
      if (iVar1 == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar7 = iVar1 + -1;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar5);
      TSet<TTuple<FString,FGameplayTagSearchPathInfo>,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,FGameplayTagSearchPathInfo>,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>,FDefaultSetAllocator>
                  *)&this->RegisteredSearchPaths,uVar2,param_1);
    }
    if ((this->bIsConstructingGameplayTagTree == false) && (this->bDoneAddingNativeTags != false)) {
      if (((this->ShouldDeferGameplayTagTreeRebuilds).bIsSet == false) ||
         ((this->ShouldDeferGameplayTagTreeRebuilds).TypedValue == false)) {
        DestroyGameplayTagTree(this);
        ConstructGameplayTagTree(this);
        bVar6 = true;
      }
      else {
        if (this->bUseFastReplication != false) {
          this->bNetworkIndexInvalidated = true;
        }
        if (this->bDeferBroadcastOnGameplayTagTreeChanged == 0) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&IGameplayTagsModule::OnGameplayTagTreeChanged);
          bVar6 = true;
        }
        else {
          this->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
          bVar6 = true;
        }
      }
    }
    else {
      this->bNeedsTreeRebuildOnDoneAddingGameplayTags = true;
      bVar6 = true;
    }
  }
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_38);
  return bVar6;
}

// RequestAllGameplayTags @ 146aeb910

void __thiscall
UGameplayTagsManager::RequestAllGameplayTags
          (UGameplayTagsManager *this,FGameplayTagContainer *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FGameplayTagContainer *this_00;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FGameplayTag *pFVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FGameplayTagContainer *local_res10;
  char local_res18;
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  lpCriticalSection = &this->GameplayTagMapCritical;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar12 = 0;
  puVar1 = &(this->GameplayTagNodeMap).field_0x10;
  iVar3 = *(int *)&(this->GameplayTagNodeMap).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->GameplayTagNodeMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146aeb9fe;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_146aeb9fe:
  uVar11 = *(uint *)&(this->GameplayTagNodeMap).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar7,iVar12);
  TStack_98.CurrentBitIndex = iVar8;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar14;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(this->GameplayTagNodeMap).field_0x8 -
                       *(int *)&(this->GameplayTagNodeMap).field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar5 = local_res18;
  this_00 = local_res10;
  uVar7 = *(uint *)&(this->GameplayTagNodeMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->GameplayTagNodeMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146aebb10;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_146aebb10:
  do {
    if (*(int *)&(this->GameplayTagNodeMap).field_0x8 -
        *(int *)&(this->GameplayTagNodeMap).field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TSharedPtr<FGameplayTagNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar11) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return;
    }
    lVar9 = *(longlong *)&this->GameplayTagNodeMap + (longlong)TStack_98.CurrentBitIndex * 0x20;
    if (cVar5 == '\0') {
LAB_146aebb83:
      if ((*(longlong *)(lVar9 + 8) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (*(longlong *)(lVar9 + 8) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146aebb83;
    }
    if (*(int *)(*(longlong *)(lVar9 + 8) + 0x10) < 1) {
      pFVar10 = &FGameplayTag::EmptyTag;
    }
    else {
      pFVar10 = *(FGameplayTag **)(*(longlong *)(lVar9 + 8) + 8);
    }
    FGameplayTagContainer::AddTagFast(this_00,pFVar10);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// RequestGameplayTag @ 146aebd30

/* WARNING: Enum "Type": Some values do not have unique names */

FGameplayTag __thiscall
UGameplayTagsManager::RequestGameplayTag(UGameplayTagsManager *this,FName param_1,bool param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_RequestGameplayTag> FVar12;
  FGameplayTag FVar13;
  TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
  *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *pFVar14;
  undefined1 *puVar15;
  ForElementType<FSetElementId> FVar16;
  FStatMessage *pFVar17;
  FNameEntryId FVar18;
  FName FVar20;
  undefined7 in_register_00000081;
  char in_R9B;
  FColor_u_0 local_res8 [2];
  FName local_res18 [2];
  FNameEntryId local_f8;
  FName local_f0;
  FName local_e8;
  undefined1 local_d8 [8];
  LARGE_INTEGER local_d0;
  FName local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FName *local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  FStatMessage local_70;
  FName *local_60;
  FString *local_58;
  FString local_50;
  FName local_40;
  uint uVar19;
  
  local_res18[0]._1_7_ = in_register_00000081;
  local_res18[0].ComparisonIndex.Value._0_1_ = param_2;
  FVar12 = StatPtr_STAT_UGameplayTagsManager_RequestGameplayTag;
  if (StatPtr_STAT_UGameplayTagsManager_RequestGameplayTag ==
      (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_RequestGameplayTag>)0x0) {
    pFVar11 = ::FName::FName(&local_40,"STAT_UGameplayTagsManager_RequestGameplayTag");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_RequestGameplayTag>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UGameplayTagsManager_RequestGameplayTag,*pFVar11,
                        L"UGameplayTagsManager::RequestGameplayTag","STATGROUP_GameplayTags",
                        "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_f0.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                   ,0x886);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar5 = true;
      goto LAB_146aebe7a;
    }
  }
  bVar5 = false;
  FVar20 = local_e8;
LAB_146aebe7a:
  lpCriticalSection = &this->GameplayTagMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    FVar13.TagName = (FName)(*pcVar3)();
    return (FGameplayTag)FVar13.TagName;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
             *)FGameplayTagRedirectors::Get();
  pFVar11 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
             ::Find(this_00,local_res18[0])->TagName;
  FVar2 = local_res18[0];
  FVar18 = FVar20.ComparisonIndex.Value;
  uVar19 = FVar20.Number;
  if (pFVar11 == (FName *)0x0) {
    uVar9 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
    if (*(int *)&(this->GameplayTagNodeMap).field_0x8 !=
        *(int *)&(this->GameplayTagNodeMap).field_0x34) {
      puVar15 = *(undefined1 **)&(this->GameplayTagNodeMap).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->GameplayTagNodeMap).field_0x38;
      }
      iVar10 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->GameplayTagNodeMap).field_0x48 - 1U & FVar2.Number + uVar9)
                       * 4);
      if (iVar10 != -1) {
        do {
          if (*(FName *)((longlong)iVar10 * 0x20 + *(longlong *)&this->GameplayTagNodeMap) == FVar2)
          {
            *(FName *)param_1 = FVar2;
            if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
            if (bVar6) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar4) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (!bVar5) {
              return (FGameplayTag)param_1;
            }
            if (FVar20 == (FName)0x0) {
              return (FGameplayTag)param_1;
            }
            if (FThreadStats::bPrimaryDisableForever != false) {
              return (FGameplayTag)param_1;
            }
            if (FThreadStats::TlsSlot == 0xffffffff) {
              return (FGameplayTag)param_1;
            }
            this_01 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_01 == (FThreadStats *)0x0) {
              pFVar14 = FThreadStatsPool::Get();
              this_01 = FThreadStatsPool::GetFromPool(pFVar14);
            }
            if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
              return (FGameplayTag)param_1;
            }
            local_80.NameAndInfo.Number = uVar19 & 0xffff6fff | 0x6000;
            local_80.NameAndInfo.Index.Value = FVar18.Value;
            QueryPerformanceCounter(&local_b8);
            local_80.StatData.Pad[4] = '\0';
            local_80.StatData.Pad[5] = '\0';
            local_80.StatData.Pad[6] = '\0';
            local_80.StatData.Pad[7] = '\0';
            local_80.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
            local_80.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
            local_80.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
            local_80.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
            pFVar17 = &local_80;
            goto LAB_146aec38a;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this->GameplayTagNodeMap)
          ;
        } while (iVar10 != -1);
      }
    }
    if (in_R9B != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        atexit(`UGameplayTagsManager::RequestGameplayTag'::__l20::
               _dynamic_atexit_destructor_for__MissingTagName__);
        _Init_thread_footer(&::_TSS1);
      }
      FVar2 = local_res18[0];
      uVar9 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
      if (MissingTagName.Elements._8_4_ != MissingTagName.Elements._52_4_) {
        FVar16 = (ForElementType<FSetElementId>)0x154c09dc8;
        if (MissingTagName.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar16 = MissingTagName.Hash.SecondaryData;
        }
        for (iVar10 = *(int *)((longlong)FVar16 +
                              (ulonglong)(MissingTagName.HashSize - 1U & FVar2.Number + uVar9) * 4);
            iVar10 != -1;
            iVar10 = *(int *)(MissingTagName.Elements._0_8_ + 8 + (longlong)iVar10 * 0x10)) {
          if (*(FName *)(MissingTagName.Elements._0_8_ + (longlong)iVar10 * 0x10) == FVar2)
          goto LAB_146aec2dc;
        }
      }
      local_b0 = local_res18;
      `UGameplayTagsManager::RequestGameplayTag'::__l23::<lambda_2>::operator()(&local_b0);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&MissingTagName,(FName *)(local_d8 + 4),(bool *)local_res18);
    }
LAB_146aec2dc:
    *(undefined8 *)param_1 = 0;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar5) {
      return (FGameplayTag)param_1;
    }
    if (FVar20 == (FName)0x0) {
      return (FGameplayTag)param_1;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return (FGameplayTag)param_1;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return (FGameplayTag)param_1;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return (FGameplayTag)param_1;
    }
    local_70.NameAndInfo.Number = uVar19 & 0xffff6fff | 0x6000;
    local_70.NameAndInfo.Index.Value = FVar18.Value;
    QueryPerformanceCounter(&local_a8);
    local_70.StatData.Pad[4] = '\0';
    local_70.StatData.Pad[5] = '\0';
    local_70.StatData.Pad[6] = '\0';
    local_70.StatData.Pad[7] = '\0';
    local_70.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
    local_70.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
    local_70.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
    local_70.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
    pFVar17 = &local_70;
  }
  else {
    FVar2 = *pFVar11;
    local_f8 = FVar2.ComparisonIndex.Value;
    uVar9 = ::GetTypeHash(local_f8);
    if (*(int *)&(this->GameplayTagNodeMap).field_0x8 !=
        *(int *)&(this->GameplayTagNodeMap).field_0x34) {
      puVar15 = *(undefined1 **)&(this->GameplayTagNodeMap).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->GameplayTagNodeMap).field_0x38;
      }
      iVar10 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->GameplayTagNodeMap).field_0x48 - 1U & FVar2.Number + uVar9)
                       * 4);
      if (iVar10 != -1) {
        do {
          if (*(FName *)((longlong)iVar10 * 0x20 + *(longlong *)&this->GameplayTagNodeMap) == FVar2)
          {
            *(FName *)param_1 = FVar2;
            if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
            if (bVar6) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar4) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (!bVar5) {
              return (FGameplayTag)param_1;
            }
            if (FVar20 == (FName)0x0) {
              return (FGameplayTag)param_1;
            }
            if (FThreadStats::bPrimaryDisableForever != false) {
              return (FGameplayTag)param_1;
            }
            if (FThreadStats::TlsSlot == 0xffffffff) {
              return (FGameplayTag)param_1;
            }
            this_01 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_01 == (FThreadStats *)0x0) {
              pFVar14 = FThreadStatsPool::Get();
              this_01 = FThreadStatsPool::GetFromPool(pFVar14);
            }
            if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
              return (FGameplayTag)param_1;
            }
            local_a0.NameAndInfo.Number = uVar19 & 0xffff6fff | 0x6000;
            local_a0.NameAndInfo.Index.Value = FVar18.Value;
            QueryPerformanceCounter(&local_d0);
            local_a0.StatData.Pad[4] = '\0';
            local_a0.StatData.Pad[5] = '\0';
            local_a0.StatData.Pad[6] = '\0';
            local_a0.StatData.Pad[7] = '\0';
            local_a0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
            local_a0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
            local_a0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
            local_a0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
            pFVar17 = &local_a0;
            goto LAB_146aec38a;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this->GameplayTagNodeMap)
          ;
        } while (iVar10 != -1);
      }
    }
    if (in_R9B != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UGameplayTagsManager::RequestGameplayTag'::__l11::
               _dynamic_atexit_destructor_for__MissingRedirectedTagNames__);
        _Init_thread_footer(&::_TSS0);
      }
      FVar7 = local_res18[0];
      uVar9 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
      if (MissingRedirectedTagNames.Elements._8_4_ != MissingRedirectedTagNames.Elements._52_4_) {
        FVar16 = (ForElementType<FSetElementId>)0x154c09d78;
        if (MissingRedirectedTagNames.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar16 = MissingRedirectedTagNames.Hash.SecondaryData;
        }
        for (iVar10 = *(int *)((longlong)FVar16 +
                              (ulonglong)
                              (MissingRedirectedTagNames.HashSize - 1U & FVar7.Number + uVar9) * 4);
            iVar10 != -1;
            iVar10 = *(int *)(MissingRedirectedTagNames.Elements._0_8_ + 8 + (longlong)iVar10 * 0x10
                             )) {
          if (*(FName *)(MissingRedirectedTagNames.Elements._0_8_ + (longlong)iVar10 * 0x10) ==
              FVar7) goto LAB_146aec043;
        }
      }
      local_c8 = FVar2;
      ::FName::ToString(&local_c8,&local_50);
      local_60 = local_res18;
      local_58 = &local_50;
      `UGameplayTagsManager::RequestGameplayTag'::__l14::<lambda_1>::operator()(&local_60);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&MissingRedirectedTagNames,(FName *)local_d8,(bool *)local_res18);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
LAB_146aec043:
    *(undefined8 *)param_1 = 0;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar5) {
      return (FGameplayTag)param_1;
    }
    if (FVar20 == (FName)0x0) {
      return (FGameplayTag)param_1;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return (FGameplayTag)param_1;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return (FGameplayTag)param_1;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return (FGameplayTag)param_1;
    }
    local_90.NameAndInfo.Number = uVar19 & 0xffff6fff | 0x6000;
    local_90.NameAndInfo.Index.Value = FVar18.Value;
    QueryPerformanceCounter(&local_c0);
    local_90.StatData.Pad[4] = '\0';
    local_90.StatData.Pad[5] = '\0';
    local_90.StatData.Pad[6] = '\0';
    local_90.StatData.Pad[7] = '\0';
    local_90.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
    local_90.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
    local_90.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
    local_90.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
    pFVar17 = &local_90;
  }
LAB_146aec38a:
  FThreadStats::AddStatMessage(this_01,pFVar17);
  piVar1 = &this_01->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_01,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_01,false,false);
  }
  return (FGameplayTag)param_1;
}

// RequestGameplayTagChildren @ 146aec500

FGameplayTagContainer * __thiscall
UGameplayTagsManager::RequestGameplayTagChildren
          (UGameplayTagsManager *this,FGameplayTagContainer *__return_storage_ptr__,
          FGameplayTag *param_1)

{
  TSharedPtr<FGameplayTagNode,1> local_18;
  
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  FindTagNode(this,&local_18,param_1);
  if (local_18.Object != (FGameplayTagNode *)0x0) {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddChildrenTags(this,__return_storage_ptr__,&local_18,true,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RequestGameplayTagContainer @ 146aec590

void __thiscall
UGameplayTagsManager::RequestGameplayTagContainer
          (UGameplayTagsManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FGameplayTagContainer *param_2,bool param_3)

{
  int iVar1;
  FString *pFVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FName local_48;
  FName local_40;
  FString local_38;
  
  iVar1 = param_1->ArrayNum;
  this_00 = (param_1->AllocatorInstance).Data;
  pFVar5 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar5) break;
    pFVar2 = ::FString::TrimStartAndEnd((FString *)this_00,&local_38);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(&local_40,pwVar4);
    RequestGameplayTag(this,(FName)&local_48,(*pFVar3).ComparisonIndex);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48 != (FName)0x0) {
      FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)&local_48);
    }
    this_00 = this_00 + 0x10;
  }
  return;
}

// RequestGameplayTagDirectParent @ 146aec660

FGameplayTag __thiscall
UGameplayTagsManager::RequestGameplayTagDirectParent
          (UGameplayTagsManager *this,FGameplayTag *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGameplayTagNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FGameplayTag FVar5;
  FGameplayTag *in_R8;
  TSharedPtr<FGameplayTagNode,1> local_18;
  
  FindTagNode(this,&local_18,in_R8);
  if (local_18.Object != (FGameplayTagNode *)0x0) {
    if (local_18.Object == (FGameplayTagNode *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5.TagName = (FName)(*pcVar3)();
        return (FGameplayTag)FVar5.TagName;
      }
    }
    pTVar1 = ((local_18.Object)->ParentNode).SharedReferenceCount.ReferenceController;
    pFVar2 = ((local_18.Object)->ParentNode).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FGameplayTagNode *)0x0) {
      if ((pFVar2->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
        param_1->TagName = (FName)FGameplayTag::EmptyTag;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      else {
        param_1->TagName =
             *(FName *)(pFVar2->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      goto LAB_146aec701;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  param_1->TagName = (FName)0x0;
LAB_146aec701:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (FGameplayTag)(FName)param_1;
}

// RequestGameplayTagParents @ 146aec720

FGameplayTagContainer * __thiscall
UGameplayTagsManager::RequestGameplayTagParents
          (UGameplayTagsManager *this,FGameplayTagContainer *__return_storage_ptr__,
          FGameplayTag *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FGameplayTagContainer *pFVar3;
  TSharedPtr<FGameplayTagNode,1> *pTVar4;
  
  lpCriticalSection = &this->GameplayTagMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGameplayTagContainer *)(*pcVar1)();
      return pFVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
           ::Find((TMapBase<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,1>,0>_>
                   *)&this->GameplayTagNodeMap,param_1);
  if (pTVar4 != (TSharedPtr<FGameplayTagNode,1> *)0x0) {
    if (pTVar4->Object == (FGameplayTagNode *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FGameplayTagContainer *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar3 = &pTVar4->Object->CompleteTagWithParents;
    if (pFVar3 != (FGameplayTagContainer *)0x0) {
      FGameplayTagContainer::GetGameplayTagParents(pFVar3,__return_storage_ptr__);
      goto LAB_146aec7df;
    }
  }
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
LAB_146aec7df:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// SetShouldDeferGameplayTagTreeRebuilds @ 146aed6b0

void __thiscall
UGameplayTagsManager::SetShouldDeferGameplayTagTreeRebuilds(UGameplayTagsManager *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<bool> *)local_res10 != &this->ShouldDeferGameplayTagTreeRebuilds) {
    (this->ShouldDeferGameplayTagTreeRebuilds).TypedValue = param_1;
    (this->ShouldDeferGameplayTagTreeRebuilds).bIsSet = true;
  }
  return;
}

// SetShouldUnloadTagsOverride @ 146aed6d0

void __thiscall
UGameplayTagsManager::SetShouldUnloadTagsOverride(UGameplayTagsManager *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<bool> *)local_res10 != &this->ShouldAllowUnloadingTagsOverride) {
    (this->ShouldAllowUnloadingTagsOverride).TypedValue = param_1;
    (this->ShouldAllowUnloadingTagsOverride).bIsSet = true;
  }
  return;
}

// ShouldImportTagsFromINI @ 146aed6f0

bool __thiscall UGameplayTagsManager::ShouldImportTagsFromINI(UGameplayTagsManager *this)

{
  UClass *this_00;
  
  this_00 = UGameplayTagsSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x8;
  }
  return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x8;
}

// ShouldUnloadTags @ 146aed740

bool __thiscall UGameplayTagsManager::ShouldUnloadTags(UGameplayTagsManager *this)

{
  if ((this->ShouldAllowUnloadingTagsOverride).bIsSet != false) {
    return (this->ShouldAllowUnloadingTagsOverride).TypedValue;
  }
  return this->bShouldAllowUnloadingTags;
}

// SingleGameplayTagLoaded @ 146aed760

void __thiscall
UGameplayTagsManager::SingleGameplayTagLoaded
          (UGameplayTagsManager *this,FGameplayTag *param_1,FProperty *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
  *this_00;
  FName *pFVar4;
  
  lpCriticalSection = &this->GameplayTagMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar1 = param_1->TagName;
  this_00 = (TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
             *)FGameplayTagRedirectors::Get();
  pFVar4 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
            ::Find(this_00,FVar1)->TagName;
  if ((pFVar4 != (FName *)0x0) && (*pFVar4 != (FName)0x0)) {
    param_1->TagName = *pFVar4;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
            (&this->OnGameplayTagLoadedDelegate,param_1);
  return;
}

// SplitGameplayTagFName @ 146aed870

void __thiscall
UGameplayTagsManager::SplitGameplayTagFName
          (UGameplayTagsManager *this,FGameplayTag *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGameplayTagNode *pFVar5;
  FName local_38;
  TSharedPtr<FGameplayTagNode,1> local_30;
  undefined8 local_20;
  FSharedReferencer<1> local_18 [2];
  
  FindTagNode(this,&local_30,param_1);
  pFVar5 = local_30.Object;
  if (local_30.Object != (FGameplayTagNode *)0x0) {
    if ((local_30.Object == (FGameplayTagNode *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    do {
      local_38 = pFVar5->Tag;
      pFVar1 = (FName *)(param_2->AllocatorInstance).Data;
      if (((pFVar1 <= &local_38) && (&local_38 < pFVar1 + param_2->ArrayMax)) &&
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
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      _Src = (param_2->AllocatorInstance).Data;
      param_2->ArrayNum = iVar4 + 1;
      memmove(_Src + 8,_Src,(longlong)iVar4 << 3);
      *(FName *)(param_2->AllocatorInstance).Data = local_38;
      if ((pFVar5 == (FGameplayTagNode *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_18[0].ReferenceController =
           (pFVar5->ParentNode).SharedReferenceCount.ReferenceController;
      local_30.Object = (pFVar5->ParentNode).Object;
      if (local_18[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18[0].ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_18[0].ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_20 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_30.SharedReferenceCount,local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18[0].ReferenceController);
      pFVar5 = local_30.Object;
    } while (local_30.Object != (FGameplayTagNode *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUGameplayTagsManager @ 146aedb80

void __cdecl UGameplayTagsManager::StaticRegisterNativesUGameplayTagsManager(void)

{
  return;
}

// ValidateTagCreation @ 146af0020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UGameplayTagsManager::ValidateTagCreation(UGameplayTagsManager *this,FName param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_ValidateTagCreation> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  undefined1 *puVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  FVar10 = StatPtr_STAT_UGameplayTagsManager_ValidateTagCreation;
  if (StatPtr_STAT_UGameplayTagsManager_ValidateTagCreation ==
      (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_ValidateTagCreation>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_UGameplayTagsManager_ValidateTagCreation");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_ValidateTagCreation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UGameplayTagsManager_ValidateTagCreation,*pFVar9,
                        L"UGameplayTagsManager::ValidateTagCreation","STATGROUP_GameplayTags",
                        "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar8 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                   ,0xaa5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      goto LAB_146af0173;
    }
  }
  bVar4 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_146af0173:
  lpCriticalSection = &this->GameplayTagMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar8 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  FVar16 = FVar15;
  if (*(int *)&(this->GameplayTagNodeMap).field_0x8 !=
      *(int *)&(this->GameplayTagNodeMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->GameplayTagNodeMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->GameplayTagNodeMap).field_0x38;
    }
    uVar8 = *(uint *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(this->GameplayTagNodeMap).field_0x48 - 1U & param_1.Number + uVar8)
                     * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar9 = (FName *)((longlong)(int)uVar8 * 0x20 + *(longlong *)&this->GameplayTagNodeMap);
        if (*pFVar9 == param_1) {
          FVar11 = (FName)(pFVar9 + 1);
          if (pFVar9 == (FName *)0x0) {
            FVar11 = FVar15;
          }
          if (FVar11 != (FName)0x0) {
            FVar15 = *(FName *)((longlong)FVar11 + 8);
            FVar16 = *(FName *)FVar11;
            if (FVar15 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar15 + 8) = *(int *)((longlong)FVar15 + 8) + 1;
              UNLOCK();
            }
          }
          break;
        }
        uVar8 = pFVar9[3].ComparisonIndex.Value;
      } while (uVar8 != 0xffffffff);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar15);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return FVar16 != (FName)0x0;
}

// operator() @ 1504f84e0

bool __thiscall
`UGameplayTagsManager::GetTagNameFromNetIndex'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4119478789166071054>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4119478789166071054>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504f8700

bool __thiscall `UGameplayTagsManager::ConstructNetIndex'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4119478789166071095>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4119478789166071095>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f8a50

bool __thiscall
`UGameplayTagsManager::RequestGameplayTag'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4119478789166069602>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4119478789166069602>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f8ae4;
    }
  }
  bVar2 = false;
LAB_1504f8ae4:
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

// operator() @ 1504f8b20

bool __thiscall
`UGameplayTagsManager::RequestGameplayTag'::__l23::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4119478789166069579>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4119478789166069579>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f8b87;
    }
  }
  bVar2 = false;
LAB_1504f8b87:
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

