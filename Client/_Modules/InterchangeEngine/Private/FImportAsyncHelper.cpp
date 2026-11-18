// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 25

// FImportAsyncHelper @ 14e4d7130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportAsyncHelper * __thiscall
UE::Interchange::FImportAsyncHelper::FImportAsyncHelper(FImportAsyncHelper *this)

{
  UInterchangeManager *pUVar1;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->bRunSynchronous = false;
  this->bRuntimeOrPIE = false;
  this->_padding_ = (longlong)&___7FImportAsyncHelper_Interchange_UE__6B_;
  (this->ContentBasePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentBasePath).Data.ArrayNum = 0;
  (this->ContentBasePath).Data.ArrayMax = 0;
  (this->BaseNodeContainers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseNodeContainers).ArrayNum = 0;
  (this->BaseNodeContainers).ArrayMax = 0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  (this->Translators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Translators).ArrayNum = 0;
  (this->Translators).ArrayMax = 0;
  (this->Pipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pipelines).ArrayNum = 0;
  (this->Pipelines).ArrayMax = 0;
  (this->OriginalPipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalPipelines).ArrayNum = 0;
  (this->OriginalPipelines).ArrayMax = 0;
  (this->TranslatorTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslatorTasks).ArrayNum = 0;
  (this->TranslatorTasks).ArrayMax = 0;
  (this->PipelineTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineTasks).ArrayNum = 0;
  (this->PipelineTasks).ArrayMax = 0;
  (this->WaitAssetCompilationTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaitAssetCompilationTasks).ArrayNum = 0;
  (this->WaitAssetCompilationTasks).ArrayMax = 0;
  (this->PostImportTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostImportTasks).ArrayNum = 0;
  (this->PostImportTasks).ArrayMax = 0;
  (this->ImportObjectQueryPayloadsTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportObjectQueryPayloadsTasks).ArrayNum = 0;
  (this->ImportObjectQueryPayloadsTasks).ArrayMax = 0;
  (this->BeginImportObjectTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeginImportObjectTasks).ArrayNum = 0;
  (this->BeginImportObjectTasks).ArrayMax = 0;
  (this->ImportObjectTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportObjectTasks).ArrayNum = 0;
  (this->ImportObjectTasks).ArrayMax = 0;
  (this->FinalizeImportObjectTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalizeImportObjectTasks).ArrayNum = 0;
  (this->FinalizeImportObjectTasks).ArrayMax = 0;
  (this->SceneTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneTasks).ArrayNum = 0;
  (this->SceneTasks).ArrayMax = 0;
  (this->TaskData).bIsAutomated = false;
  (this->TaskData).bFollowRedirectors = false;
  (this->TaskData).ImportType = ImportType_None;
  (this->TaskData).ReimportObject = (UObject *)0x0;
  (this->TaskData).ImportLevel = (ULevel *)0x0;
  (this->TaskData).DestinationName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskData).DestinationName.Data.ArrayNum = 0;
  (this->TaskData).DestinationName.Data.ArrayMax = 0;
  (this->TaskData).bReplaceExisting = true;
  MakeShared<UE::Interchange::FImportResult,1>(&this->AssetImportResult);
  MakeShared<UE::Interchange::FImportResult,1>(&this->SceneImportResult);
  this->bCancel = (atomic<bool>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ClassPermissionLock,4000);
  *(undefined8 *)&(this->DeniedClasses).Elements = 0;
  *(undefined8 *)&(this->DeniedClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DeniedClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DeniedClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DeniedClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeniedClasses).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeniedClasses).Elements.field_0x34 = 0;
  (this->DeniedClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DeniedClasses).HashSize = 0;
  *(undefined8 *)&(this->AllowedClasses).Elements = 0;
  *(undefined8 *)&(this->AllowedClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllowedClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x34 = 0;
  (this->AllowedClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllowedClasses).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CreatedPackagesLock,4000);
  *(undefined8 *)&this->CreatedPackages = 0;
  *(undefined8 *)&(this->CreatedPackages).field_0x8 = 0;
  *(undefined8 *)&(this->CreatedPackages).field_0x20 = 0;
  *(undefined4 *)&(this->CreatedPackages).field_0x28 = 0;
  *(undefined4 *)&(this->CreatedPackages).field_0x2c = 0x80;
  *(undefined4 *)&(this->CreatedPackages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CreatedPackages).field_0x34 = 0;
  *(undefined8 *)&(this->CreatedPackages).field_0x40 = 0;
  *(undefined4 *)&(this->CreatedPackages).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CreatedFactoriesLock,4000);
  *(undefined8 *)&this->CreatedFactories = 0;
  *(undefined8 *)&(this->CreatedFactories).field_0x8 = 0;
  *(undefined8 *)&(this->CreatedFactories).field_0x20 = 0;
  *(undefined4 *)&(this->CreatedFactories).field_0x28 = 0;
  *(undefined4 *)&(this->CreatedFactories).field_0x2c = 0x80;
  *(undefined4 *)&(this->CreatedFactories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CreatedFactories).field_0x34 = 0;
  *(undefined8 *)&(this->CreatedFactories).field_0x40 = 0;
  *(undefined4 *)&(this->CreatedFactories).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ImportedAssetsPerSourceIndexLock,4000);
  *(undefined8 *)&this->ImportedAssetsPerSourceIndex = 0;
  *(undefined8 *)&(this->ImportedAssetsPerSourceIndex).field_0x8 = 0;
  *(undefined8 *)&(this->ImportedAssetsPerSourceIndex).field_0x20 = 0;
  *(undefined4 *)&(this->ImportedAssetsPerSourceIndex).field_0x28 = 0;
  *(undefined4 *)&(this->ImportedAssetsPerSourceIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportedAssetsPerSourceIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportedAssetsPerSourceIndex).field_0x34 = 0;
  *(undefined8 *)&(this->ImportedAssetsPerSourceIndex).field_0x40 = 0;
  *(undefined4 *)&(this->ImportedAssetsPerSourceIndex).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ImportedSceneObjectsPerSourceIndexLock,4000);
  *(undefined8 *)&this->ImportedSceneObjectsPerSourceIndex = 0;
  *(undefined8 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x8 = 0;
  *(undefined8 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x20 = 0;
  *(undefined4 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x28 = 0;
  *(undefined4 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x34 = 0;
  *(undefined8 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x40 = 0;
  *(undefined4 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x48 = 0;
  LOCK();
  this->bCancel = (atomic<bool>)0x0;
  UNLOCK();
  if (Interchange::Private::StaticHelpers::AsyncHelperCounter == (TAtomic<unsigned___int64>)0x0) {
    pUVar1 = UInterchangeManager::GetInterchangeManager();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&pUVar1->OnImportStarted);
  }
  LOCK();
  Interchange::Private::StaticHelpers::AsyncHelperCounter =
       (TAtomic<unsigned___int64>)
       ((longlong)Interchange::Private::StaticHelpers::AsyncHelperCounter + 1);
  UNLOCK();
  return this;
}

// ~FImportAsyncHelper @ 14e4da0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FImportAsyncHelper::~FImportAsyncHelper(FImportAsyncHelper *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  UInterchangeManager *pUVar4;
  
  this->_padding_ = (longlong)&___7FImportAsyncHelper_Interchange_UE__6B_;
  CleanUp(this);
  LOCK();
  Interchange::Private::StaticHelpers::AsyncHelperCounter =
       (TAtomic<unsigned___int64>)
       ((longlong)Interchange::Private::StaticHelpers::AsyncHelperCounter + -1);
  UNLOCK();
  if (Interchange::Private::StaticHelpers::AsyncHelperCounter == (TAtomic<unsigned___int64>)0x0) {
    pUVar4 = UInterchangeManager::GetInterchangeManager();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&pUVar4->OnImportFinished);
    UInterchangeManager::GetInterchangeManager();
    LOCK();
    Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer =
         (TAtomic<signed_char>)0xff;
    UNLOCK();
  }
  *(undefined4 *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ImportedSceneObjectsPerSourceIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImportedSceneObjectsPerSourceIndex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ImportedSceneObjectsPerSourceIndexLock);
  *(undefined4 *)&(this->ImportedAssetsPerSourceIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ImportedAssetsPerSourceIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImportedAssetsPerSourceIndex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ImportedAssetsPerSourceIndexLock);
  *(undefined4 *)&(this->CreatedFactories).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CreatedFactories).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CreatedFactories);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CreatedFactoriesLock);
  *(undefined4 *)&(this->CreatedPackages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CreatedPackages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CreatedPackages);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CreatedPackagesLock);
  (this->AllowedClasses).HashSize = 0;
  FVar2 = (this->AllowedClasses).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllowedClasses).Elements);
  (this->DeniedClasses).HashSize = 0;
  FVar2 = (this->DeniedClasses).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DeniedClasses).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ClassPermissionLock);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneImportResult).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AssetImportResult).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->TaskData).DestinationName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SceneTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FinalizeImportObjectTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ImportObjectTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BeginImportObjectTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ImportObjectQueryPayloadsTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PostImportTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WaitAssetCompilationTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PipelineTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TranslatorTasks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->OriginalPipelines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Pipelines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Translators).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->BaseNodeContainers).AllocatorInstance.Data,
             (this->BaseNodeContainers).ArrayNum);
  pFVar3 = (this->BaseNodeContainers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ContentBasePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 14e4dd4a0

void __thiscall
`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>::operator()
          (void *this,int param_1,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  bool bVar2;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar3;
  undefined1 local_res8 [8];
  FSoftObjectPath local_48;
  
  if (**(char **)this == '\0') {
    this_00 = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
    iVar1 = param_2->ArrayNum;
    pFVar3 = (FSoftObjectPath *)((longlong)this_00 + (longlong)iVar1 * 0x38);
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar3) {
        return;
      }
      local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_48.AssetPath.PackageName.Number = 0;
      local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_48.AssetPath.AssetName.Number = 0;
      local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.SubPathString.Data.ArrayNum = 0;
      local_48.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_48,*(UObject **)((longlong)this + 8));
      bVar2 = FSoftObjectPath::operator==(this_00,&local_48);
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      if (bVar2) break;
      this_00 = (FSoftObjectPath *)&this_00[1].SubPathString.Data.ArrayNum;
    }
    **(undefined1 **)this = 1;
  }
  return;
}

// operator() @ 14e4dd580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Interchange::FImportAsyncHelper::SendAnalyticImportEndData'::__l2::<lambda_1>::operator()
          (void *this,UInterchangeResultsContainer *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> *pTVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FText *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FString *local_res10;
  int local_res18 [2];
  int local_res20 [2];
  ForAnyElementType local_a8;
  uint local_a0;
  int local_9c;
  FString local_98;
  FString local_88;
  longlong *local_78 [2];
  longlong *local_68 [2];
  longlong *local_58 [2];
  longlong *local_48 [2];
  
  lpCriticalSection = &param_1->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_a0 = (param_1->Results).ArrayNum;
  lVar11 = (longlong)(int)local_a0;
  pFVar1 = (param_1->Results).AllocatorInstance.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pFVar1,lVar11 << 3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = local_a0;
  uVar9 = (ulonglong)(int)local_a0;
  pFVar1 = local_a8.Data + uVar9 * 8;
  FVar12.Data = local_a8.Data;
  do {
    if ((uint)uVar9 != uVar4) {
      `TCheckedPointerIterator<UInterchangeResult_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (FVar12.Data == pFVar1) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      return;
    }
    plVar2 = *(longlong **)FVar12.Data;
    iVar6 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (iVar6 == 1) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      pFVar8 = (FText *)(**(code **)(*plVar2 + 0x2b8))(plVar2,local_58);
      bVar5 = UE::Interchange::Private::ExtractNamespace(pFVar8,&local_88);
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (bVar5) {
        pTVar3 = *(TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                   **)this;
        iVar6 = local_88.Data.ArrayNum + -1;
        FVar10.Data = local_88.Data.AllocatorInstance.Data;
        if (local_88.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar10.Data = (FScriptContainerElement *)L"";
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(pTVar3,uVar7,&local_88);
        if ((iVar6 == -1) ||
           (lVar11 = (longlong)iVar6 * 0x20 + *(longlong *)&pTVar3->Elements, lVar11 == 0)) {
          local_res10 = &local_88;
          TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    (pTVar3,(uint)local_res20,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar7,
                     (bool *)&local_res10);
          lVar11 = (longlong)local_res20[0] * 0x20 + *(longlong *)&pTVar3->Elements;
        }
        *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
        FVar10.Data = local_88.Data.AllocatorInstance.Data;
      }
      else {
        FVar10.Data = local_88.Data.AllocatorInstance.Data;
        if (1 < (byte)LogInterchangeEngine._0_1_) {
          pFVar8 = (FText *)(**(code **)(*plVar2 + 0x2b8))(plVar2,local_48);
          FText::ToString(pFVar8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine)
          ;
          FVar10.Data = local_88.Data.AllocatorInstance.Data;
          if (local_48[0] != (longlong *)0x0) {
            (**(code **)(*local_48[0] + 0x10))();
            FVar10.Data = local_88.Data.AllocatorInstance.Data;
          }
        }
      }
LAB_14e4dd881:
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
    else if (iVar6 == 2) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      pFVar8 = (FText *)(**(code **)(*plVar2 + 0x2b8))(plVar2,local_78);
      bVar5 = UE::Interchange::Private::ExtractNamespace(pFVar8,&local_98);
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if (bVar5) {
        pTVar3 = *(TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                   **)((longlong)this + 8);
        iVar6 = local_98.Data.ArrayNum + -1;
        FVar10.Data = local_98.Data.AllocatorInstance.Data;
        if (local_98.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar10.Data = (FScriptContainerElement *)L"";
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
        iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(pTVar3,uVar7,&local_98);
        if ((iVar6 == -1) ||
           (lVar11 = (longlong)iVar6 * 0x20 + *(longlong *)&pTVar3->Elements, lVar11 == 0)) {
          local_res10 = &local_98;
          TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    (pTVar3,(uint)local_res18,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar7,
                     (bool *)&local_res10);
          lVar11 = (longlong)local_res18[0] * 0x20 + *(longlong *)&pTVar3->Elements;
        }
        *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
        FVar10.Data = local_98.Data.AllocatorInstance.Data;
      }
      else {
        FVar10.Data = local_98.Data.AllocatorInstance.Data;
        if (1 < (byte)LogInterchangeEngine._0_1_) {
          pFVar8 = (FText *)(**(code **)(*plVar2 + 0x2b8))(plVar2,local_68);
          FText::ToString(pFVar8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine)
          ;
          FVar10.Data = local_98.Data.AllocatorInstance.Data;
          if (local_68[0] != (longlong *)0x0) {
            (**(code **)(*local_68[0] + 0x10))();
            FVar10.Data = local_98.Data.AllocatorInstance.Data;
          }
        }
      }
      goto LAB_14e4dd881;
    }
    uVar9 = (ulonglong)local_a0;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// AddCreatedFactory @ 14e4e1bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportAsyncHelper::AddCreatedFactory
          (FImportAsyncHelper *this,FString *param_1,UInterchangeFactoryBase *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  UInterchangeFactoryBase *local_res20;
  FString *local_28;
  UInterchangeFactoryBase **local_20;
  
  lpCriticalSection = &this->CreatedFactoriesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar5 = TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
                      *)&this->CreatedFactories,uVar4,param_1);
  if (iVar5 == -1) {
    local_res20 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UInterchangeFactoryBase *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_20 = &local_res20;
    local_28 = param_1;
    TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInterchangeFactoryBase>_&&>_>
              ((TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
                *)&this->CreatedFactories,
               (TPairInitializer<FString_const_&,TObjectPtr<UInterchangeFactoryBase>_&&> *)
               &stack0x00000008,(bool *)&local_28);
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6687235758857649739>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                       ,0x1b5,"!CreatedFactories.Contains(FactoryNodeUniqueId)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014e4e1ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddCreatedPackage @ 14e4e1cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportAsyncHelper::AddCreatedPackage
          (FImportAsyncHelper *this,FString *param_1,UPackage *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  UPackage *local_res18;
  FString *local_18;
  UPackage **local_10;
  
  lpCriticalSection = &this->CreatedPackagesLock;
  local_res18 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar5 = TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
                      *)&this->CreatedPackages,uVar4,param_1);
  if (iVar5 == -1) {
    local_10 = &local_res18;
    local_18 = param_1;
    TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UPackage_*_const_&>_>
              ((TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
                *)&this->CreatedPackages,
               (TPairInitializer<FString_const_&,UPackage_*_const_&> *)&stack0x00000008,
               (bool *)&local_18);
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6687235758857649758>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                       ,0x1a2,"!CreatedPackages.Contains(PackageName)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddDefaultImportedAssetGetRef @ 14e4e1db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportedObjectInfo * __thiscall
UE::Interchange::FImportAsyncHelper::AddDefaultImportedAssetGetRef
          (FImportAsyncHelper *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FImportedObjectInfo *pFVar3;
  uint local_res10 [6];
  
  lpCriticalSection = &this->ImportedAssetsPerSourceIndexLock;
  local_res10[0] = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->ImportedAssetsPerSourceIndex,local_res10[0],(int *)local_res10);
    iVar1 = pTVar2->ArrayNum;
    if (iVar1 == pTVar2->ArrayMax) {
      iVar1 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar1 + 1;
    pFVar3 = (FImportedObjectInfo *)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 0x38);
    DefaultConstructItems<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,int>(pFVar3,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pFVar3;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// AddDefaultImportedSceneObjectGetRef @ 14e4e1e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportedObjectInfo * __thiscall
UE::Interchange::FImportAsyncHelper::AddDefaultImportedSceneObjectGetRef
          (FImportAsyncHelper *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FImportedObjectInfo *pFVar3;
  uint local_res10 [6];
  
  lpCriticalSection = &this->ImportedSceneObjectsPerSourceIndexLock;
  local_res10[0] = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                         *)&this->ImportedSceneObjectsPerSourceIndex,local_res10[0],
                        (int *)local_res10);
    iVar1 = pTVar2->ArrayNum;
    if (iVar1 == pTVar2->ArrayMax) {
      iVar1 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar1 + 1;
    pFVar3 = (FImportedObjectInfo *)((pTVar2->AllocatorInstance).Data + (longlong)iVar1 * 0x38);
    DefaultConstructItems<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,int>(pFVar3,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pFVar3;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// AddReferencedObjects @ 14e4e2a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportAsyncHelper::AddReferencedObjects
          (FImportAsyncHelper *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->SourceDatas).AllocatorInstance.Data,(this->SourceDatas).ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->Translators).AllocatorInstance.Data,(this->Translators).ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->Pipelines).AllocatorInstance.Data,(this->Pipelines).ArrayNum,0,0);
  FReferenceCollector::
  AddReferencedObjects<FString,UInterchangeFactoryBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
            (param_1,(TMapBase<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
                      *)&this->CreatedFactories,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// CleanUp @ 14e4e5af0

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

void __thiscall UE::Interchange::FImportAsyncHelper::CleanUp(FImportAsyncHelper *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int *piVar3;
  TMap<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
  *this_00;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  UObjectBase *pUVar7;
  code *pcVar8;
  TMap<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
  *pTVar9;
  bool bVar10;
  FUObjectItem *pFVar11;
  longlong lVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_e8;
  undefined1 local_e7 [3];
  int local_e4;
  TMap<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  code *local_80;
  undefined1 *local_78;
  undefined4 local_54;
  
  pFVar14 = (this->BaseNodeContainers).AllocatorInstance.Data;
  iVar5 = (this->BaseNodeContainers).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->BaseNodeContainers).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar1) break;
    if ((*(longlong *)pFVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_78 = &local_e8;
    local_80 = Core::Private::Function::
               TFunctionRefCaller<`UE::Interchange::FImportAsyncHelper::CleanUp'::__l6::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
               ::Call;
    UInterchangeBaseNodeContainer::IterateNodes
              (*(UInterchangeBaseNodeContainer **)pFVar14,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_80);
    if ((*(longlong *)pFVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)pFVar14 + 0xc));
    FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar11,Async);
    if ((*(longlong *)pFVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UObjectBase::AtomicallyClearFlags(*(UObjectBase **)pFVar14,RF_Standalone);
    pFVar14 = pFVar14 + 8;
  }
  DestructItems<TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UInterchangeBaseNodeContainer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->BaseNodeContainers).AllocatorInstance.Data,
             (this->BaseNodeContainers).ArrayNum);
  piVar3 = &(this->BaseNodeContainers).ArrayMax;
  (this->BaseNodeContainers).ArrayNum = 0;
  if (*piVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BaseNodeContainers).AllocatorInstance,0,piVar3);
  }
  pFVar14 = (this->SourceDatas).AllocatorInstance.Data;
  iVar5 = (this->SourceDatas).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->SourceDatas).ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInterchangeSourceData>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar14 == pFVar1) break;
    pUVar7 = *(UObjectBase **)pFVar14;
    if (pUVar7 != (UObjectBase *)0x0) {
      pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar7->InternalIndex);
      FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar11,RootSet);
      UObjectBase::AtomicallyClearFlags(pUVar7,RF_Standalone);
    }
    pFVar14 = pFVar14 + 8;
  }
  piVar3 = &(this->SourceDatas).ArrayMax;
  (this->SourceDatas).ArrayNum = 0;
  if (*piVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SourceDatas).AllocatorInstance,0,piVar3);
  }
  pFVar14 = (this->Translators).AllocatorInstance.Data;
  iVar5 = (this->Translators).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Translators).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInterchangeTranslatorBase>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar14 == pFVar1) break;
    pUVar7 = *(UObjectBase **)pFVar14;
    if (pUVar7 != (UObjectBase *)0x0) {
      (**(code **)(pUVar7->_padding_ + 0x2e8))(pUVar7);
      pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar7->InternalIndex);
      FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar11,RootSet);
      UObjectBase::AtomicallyClearFlags(pUVar7,RF_Standalone);
      pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar7->InternalIndex);
      FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar11,Async);
    }
    pFVar14 = pFVar14 + 8;
  }
  piVar3 = &(this->Translators).ArrayMax;
  (this->Translators).ArrayNum = 0;
  if (*piVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Translators).AllocatorInstance,0,piVar3);
  }
  pFVar14 = (this->Pipelines).AllocatorInstance.Data;
  iVar5 = (this->Pipelines).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Pipelines).ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInterchangePipelineBase>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar14 == pFVar1) break;
    pUVar7 = *(UObjectBase **)pFVar14;
    if (pUVar7 != (UObjectBase *)0x0) {
      pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar7->InternalIndex);
      FUObjectItem::ThisThreadAtomicallyClearedFlag(pFVar11,RootSet);
      UObjectBase::AtomicallyClearFlags(pUVar7,RF_Standalone);
      pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar7->InternalIndex);
      FUObjectItem::ClearRootFlags(pFVar11,Async);
    }
    pFVar14 = pFVar14 + 8;
  }
  piVar3 = &(this->Pipelines).ArrayMax;
  (this->Pipelines).ArrayNum = 0;
  if (*piVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Pipelines).AllocatorInstance,0,piVar3);
  }
  iStack_d8 = 0;
  this_00 = &this->CreatedFactories;
  puVar4 = &(this->CreatedFactories).field_0x10;
  iVar5 = *(int *)&(this->CreatedFactories).field_0x28;
  local_c0 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->CreatedFactories).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar4;
    }
    uVar15 = *puVar17;
    iStack_d8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14e4e5ece;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_d4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_e4 = (int)lVar12;
    iStack_c4 = local_c0 + -1 + local_e4;
    if (iVar5 < iStack_c4) {
      iStack_c4 = iVar5;
    }
  }
LAB_14e4e5ece:
  uVar15 = *(uint *)&(this->CreatedFactories).field_0x28;
  uStack_bc = local_54;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_b8 = *(int *)&(this->CreatedFactories).field_0x8 -
              *(int *)&(this->CreatedFactories).field_0x34;
  uStack_c8 = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_a8._28_4_ = local_54;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_e0 = this_00;
  local_d0 = puVar4;
  local_b0 = this_00;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->CreatedFactories).field_0x28;
  if (uVar15 != uVar6) {
    puVar16 = *(undefined1 **)&(this->CreatedFactories).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar4;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e4e5fe0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (uVar18 - 1) + (int)lVar12;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_14e4e5fe0:
  while( true ) {
    pTVar9 = local_b0;
    if (*(int *)(&local_b0->field_0x0 + 8) - *(int *)(&local_b0->field_0x0 + 0x34) != (int)uStack_88
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e7);
    }
    if (((TStack_a8.CurrentBitIndex == uVar15) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar9 == this_00))
    break;
    lVar12 = *(longlong *)&pTVar9->field_0x0 + (longlong)TStack_a8.CurrentBitIndex * 0x20;
    if (*(longlong *)(lVar12 + 0x10) != 0) {
      pFVar11 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)(*(longlong *)(lVar12 + 0x10) + 0xc));
      FUObjectItem::ClearRootFlags(pFVar11,RootSet);
      UObjectBase::AtomicallyClearFlags(*(UObjectBase **)(lVar12 + 0x10),RF_Standalone);
      pFVar11 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)(*(longlong *)(lVar12 + 0x10) + 0xc));
      FUObjectItem::ClearRootFlags(pFVar11,Async);
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  bVar10 = 1 < *(int *)&(this->CreatedFactories).field_0x48;
  if (!bVar10) {
    TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CreatedFactories).field_0x8);
  puVar4 = &(this->CreatedFactories).field_0xc;
  *(undefined4 *)&(this->CreatedFactories).field_0x8 = 0;
  if (*(int *)puVar4 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar4);
  }
  *(undefined4 *)&(this->CreatedFactories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CreatedFactories).field_0x34 = 0;
  iVar5 = *(int *)&(this->CreatedFactories).field_0x2c;
  *(undefined4 *)&(this->CreatedFactories).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->CreatedFactories).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CreatedFactories).field_0x10,0);
  }
  if (bVar10) {
    *(undefined4 *)&(this->CreatedFactories).field_0x48 = 1;
    TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TObjectPtr<UInterchangeFactoryBase>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// FindImportedAssets @ 14e4f3e00

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

FImportedObjectInfo * __thiscall
UE::Interchange::FImportAsyncHelper::FindImportedAssets
          (FImportAsyncHelper *this,int param_1,
          TFunction<bool___cdecl(UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&)>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  FImportedObjectInfo *pFVar9;
  FImportedObjectInfo *pFVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_68;
  lpCriticalSection = &this->ImportedAssetsPerSourceIndexLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->ImportedAssetsPerSourceIndex).field_0x8 !=
      *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ImportedAssetsPerSourceIndex).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ImportedAssetsPerSourceIndex).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ImportedAssetsPerSourceIndex).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)&this->ImportedAssetsPerSourceIndex;
LAB_14e4f3e80:
      if (*(int *)((longlong)iVar3 * 0x20 + lVar4) != param_1) goto code_r0x00014e4f3e8b;
      pTVar5 = TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ImportedAssetsPerSourceIndex,param_1);
      iVar3 = pTVar5->ArrayNum;
      pFVar9 = (FImportedObjectInfo *)(pTVar5->AllocatorInstance).Data;
      pFVar10 = pFVar9 + iVar3;
      while( true ) {
        if (pTVar5->ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_48);
        }
        if (pFVar9 == pFVar10) break;
        Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar1 = *(code **)param_2;
        plVar7 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&param_2->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar2 = (*pcVar1)(uVar6,pFVar9);
        if (cVar2 != '\0') {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(longlong *)param_2 != 0) {
            plVar7 = (longlong *)&param_2->field_0x10;
            if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
              plVar7 = *(longlong **)&param_2->field_0x28;
            }
            (**(code **)(*plVar7 + 0x10))(plVar7);
            return pFVar9;
          }
          return pFVar9;
        }
        pFVar9 = pFVar9 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(longlong *)param_2 == 0) {
        return (FImportedObjectInfo *)0x0;
      }
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      lVar4 = *plVar7;
      goto LAB_14e4f3eb5;
    }
  }
LAB_14e4f3e94:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    lVar4 = *plVar7;
LAB_14e4f3eb5:
    (**(code **)(lVar4 + 0x10))(plVar7);
  }
  return (FImportedObjectInfo *)0x0;
code_r0x00014e4f3e8b:
  iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar4);
  if (iVar3 == -1) goto LAB_14e4f3e94;
  goto LAB_14e4f3e80;
}

// FindImportedSceneObjects @ 14e4f3fb0

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

FImportedObjectInfo * __thiscall
UE::Interchange::FImportAsyncHelper::FindImportedSceneObjects
          (FImportAsyncHelper *this,int param_1,
          TFunction<bool___cdecl(UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_&)>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  FImportedObjectInfo *pFVar9;
  FImportedObjectInfo *pFVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_68;
  lpCriticalSection = &this->ImportedSceneObjectsPerSourceIndexLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x8 !=
      *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ImportedSceneObjectsPerSourceIndex).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ImportedSceneObjectsPerSourceIndex).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)&this->ImportedSceneObjectsPerSourceIndex;
LAB_14e4f4030:
      if (*(int *)((longlong)iVar3 * 0x20 + lVar4) != param_1) goto code_r0x00014e4f403b;
      pTVar5 = TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ImportedSceneObjectsPerSourceIndex,param_1);
      iVar3 = pTVar5->ArrayNum;
      pFVar9 = (FImportedObjectInfo *)(pTVar5->AllocatorInstance).Data;
      pFVar10 = pFVar9 + iVar3;
      while( true ) {
        if (pTVar5->ArrayNum != iVar3) {
          `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_48);
        }
        if (pFVar9 == pFVar10) break;
        Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar1 = *(code **)param_2;
        plVar7 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&param_2->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar2 = (*pcVar1)(uVar6,pFVar9);
        if (cVar2 != '\0') {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(longlong *)param_2 != 0) {
            plVar7 = (longlong *)&param_2->field_0x10;
            if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
              plVar7 = *(longlong **)&param_2->field_0x28;
            }
            (**(code **)(*plVar7 + 0x10))(plVar7);
            return pFVar9;
          }
          return pFVar9;
        }
        pFVar9 = pFVar9 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(longlong *)param_2 == 0) {
        return (FImportedObjectInfo *)0x0;
      }
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      lVar4 = *plVar7;
      goto LAB_14e4f4065;
    }
  }
LAB_14e4f4044:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    lVar4 = *plVar7;
LAB_14e4f4065:
    (**(code **)(lVar4 + 0x10))(plVar7);
  }
  return (FImportedObjectInfo *)0x0;
code_r0x00014e4f403b:
  iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar4);
  if (iVar3 == -1) goto LAB_14e4f4044;
  goto LAB_14e4f4030;
}

// GetCompletionTaskGraphEvent @ 14e4f5bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UE::Interchange::FImportAsyncHelper::GetCompletionTaskGraphEvent
          (FImportAsyncHelper *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  ulong64 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar9;
  FInterchangeTaskSystem *this_00;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>
            (__return_storage_ptr__,&this->TranslatorTasks);
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&this->PipelineTasks);
  puVar3 = &this->ParsingTask;
  if (*puVar3 != 0xffffffffffffffff) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= puVar3) && (puVar3 < pFVar4 + (longlong)*piVar2 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = *piVar1;
    if (iVar7 == *piVar2) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar7 + 1;
    *(ulong64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = *puVar3;
  }
  this_00 = FInterchangeTaskSystem::Get();
  FInterchangeTaskSystem::WaitUntilTasksComplete(this_00,__return_storage_ptr__);
  *piVar1 = 0;
  if (*piVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&__return_storage_ptr__->AllocatorInstance,0,piVar2);
  }
  if (__return_storage_ptr__ == &this->ImportObjectQueryPayloadsTasks) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
  }
  iVar7 = (this->ImportObjectQueryPayloadsTasks).ArrayNum;
  if (iVar7 != 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar7,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8,
           (this->ImportObjectQueryPayloadsTasks).AllocatorInstance.Data,(longlong)iVar7 << 3);
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>
            (__return_storage_ptr__,&this->BeginImportObjectTasks);
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>
            (__return_storage_ptr__,&this->ImportObjectTasks);
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>
            (__return_storage_ptr__,&this->FinalizeImportObjectTasks);
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&this->SceneTasks);
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>
            (__return_storage_ptr__,&this->WaitAssetCompilationTasks);
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
  Append<unsigned___int64,TSizedDefaultAllocator<32>_>
            (__return_storage_ptr__,&this->PostImportTasks);
  puVar3 = &this->PreCompletionTask;
  if (*puVar3 != 0xffffffffffffffff) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= puVar3) && (puVar3 < pFVar4 + (longlong)*piVar2 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = *piVar1;
    if (iVar7 == *piVar2) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar7 + 1;
    *(ulong64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = *puVar3;
  }
  puVar3 = &this->CompletionTask;
  if (*puVar3 != 0xffffffffffffffff) {
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= puVar3) && (puVar3 < pFVar4 + (longlong)*piVar2 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = *piVar1;
    if (iVar7 == *piVar2) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
    }
    *piVar1 = iVar7 + 1;
    *(ulong64 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = *puVar3;
  }
  return __return_storage_ptr__;
}

// GetCreatedFactory @ 14e4f5ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeFactoryBase * __thiscall
UE::Interchange::FImportAsyncHelper::GetCreatedFactory(FImportAsyncHelper *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TObjectPtr<UInterchangeFactoryBase> *pTVar1;
  UInterchangeFactoryBase *pUVar2;
  
  lpCriticalSection = &this->CreatedFactoriesLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TMapBase<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
             ::Find((TMapBase<FString,TObjectPtr<UInterchangeFactoryBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeFactoryBase>,0>_>
                     *)&this->CreatedFactories,param_1);
    if (pTVar1 == (TObjectPtr<UInterchangeFactoryBase> *)0x0) {
      pUVar2 = (UInterchangeFactoryBase *)0x0;
    }
    else {
      pUVar2 = (pTVar1->field0_0x0).DebugPtr;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// GetCreatedPackage @ 14e4f5f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPackage * __thiscall
UE::Interchange::FImportAsyncHelper::GetCreatedPackage(FImportAsyncHelper *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UPackage **ppUVar1;
  UPackage *pUVar2;
  
  lpCriticalSection = &this->CreatedPackagesLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ppUVar1 = TMapBase<FString,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>_>
              ::Find((TMapBase<FString,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>_>
                      *)&this->CreatedPackages,param_1);
    if (ppUVar1 == (UPackage **)0x0) {
      pUVar2 = (UPackage *)0x0;
    }
    else {
      pUVar2 = *ppUVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// GetReferencerName @ 14e4f8570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UE::Interchange::FImportAsyncHelper::GetReferencerName
          (FImportAsyncHelper *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UE::Interchange::FImportAsyncHelper");
  return __return_storage_ptr__;
}

// InitCancel @ 14e4fd980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FImportAsyncHelper::InitCancel(FImportAsyncHelper *this)

{
  LOCK();
  this->bCancel = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// IsClassImportAllowed @ 14e4fe8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Interchange::FImportAsyncHelper::IsClassImportAllowed(FImportAsyncHelper *this,UClass *param_1)

{
  return true;
}

// IsImportingObject @ 14e4fe8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Interchange::FImportAsyncHelper::IsImportingObject(FImportAsyncHelper *this,UObject *param_1)

{
  char local_res10 [8];
  code *local_38 [2];
  undefined **local_28;
  char *local_20;
  UObject *local_18;
  undefined8 local_10;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  local_20 = local_res10;
  local_res10[0] = '\0';
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                ::Call;
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = param_1;
  IterateImportedAssetsPerSourceIndex
            (this,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                   *)local_38);
  if (local_res10[0] == '\0') {
    local_20 = local_res10;
    local_10 = 0;
    local_28 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
    local_18 = param_1;
    IterateImportedSceneObjectsPerSourceIndex
              (this,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                     *)local_38);
  }
  return (bool)local_res10[0];
}

// IterateImportedAssets @ 14e4fee80

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

void __thiscall
UE::Interchange::FImportAsyncHelper::IterateImportedAssets
          (FImportAsyncHelper *this,int param_1,
          TFunction<void___cdecl(TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_58;
  lpCriticalSection = &this->ImportedAssetsPerSourceIndexLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->ImportedAssetsPerSourceIndex).field_0x8 !=
      *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ImportedAssetsPerSourceIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ImportedAssetsPerSourceIndex).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ImportedAssetsPerSourceIndex).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->ImportedAssetsPerSourceIndex;
      do {
        if (*(int *)((longlong)iVar3 * 0x20 + lVar1) == param_1) {
          pTVar4 = TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->ImportedAssetsPerSourceIndex,param_1);
          Core::Private::Function::CheckCallable(*(void **)param_2);
          pcVar2 = *(code **)param_2;
          plVar6 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar6 = *(longlong **)&param_2->field_0x28;
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          (*pcVar2)(uVar5,pTVar4);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(longlong *)param_2 == 0) {
            return;
          }
          plVar6 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar6 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar1);
      } while (iVar3 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// IterateImportedAssetsPerSourceIndex @ 14e4fefc0

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

void __thiscall
UE::Interchange::FImportAsyncHelper::IterateImportedAssetsPerSourceIndex
          (FImportAsyncHelper *this,
          TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined4 local_b0 [2];
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lpCriticalSection = &this->ImportedAssetsPerSourceIndexLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iStack_a0 = 0;
  puVar1 = &(this->ImportedAssetsPerSourceIndex).field_0x10;
  iVar3 = *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x28;
  local_a8 = &this->ImportedAssetsPerSourceIndex;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ImportedAssetsPerSourceIndex).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14e4ff09f;
      uVar12 = puVar16[lVar10 + 1];
    }
    uStack_9c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_78 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14e4ff09f:
  iStack_80 = *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x8 -
              *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x34;
  uVar12 = *(uint *)&(this->ImportedAssetsPerSourceIndex).field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_70 = local_a8;
  local_68 = local_a8;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_70;
  uVar4 = *(uint *)&(this->ImportedAssetsPerSourceIndex).field_0x28;
  if (uVar12 != uVar4) {
    puVar15 = *(undefined1 **)&(this->ImportedAssetsPerSourceIndex).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e4ff1b0;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14e4ff1b0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    puVar13 = (undefined4 *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    local_b0[0] = *puVar13;
    Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar11 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_1->field_0x10;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar9,local_b0,puVar13 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// IterateImportedSceneObjects @ 14e4ff2a0

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

void __thiscall
UE::Interchange::FImportAsyncHelper::IterateImportedSceneObjects
          (FImportAsyncHelper *this,int param_1,
          TFunction<void___cdecl(TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_58;
  lpCriticalSection = &this->ImportedSceneObjectsPerSourceIndexLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x8 !=
      *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ImportedSceneObjectsPerSourceIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ImportedSceneObjectsPerSourceIndex).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->ImportedSceneObjectsPerSourceIndex;
      do {
        if (*(int *)((longlong)iVar3 * 0x20 + lVar1) == param_1) {
          pTVar4 = TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&this->ImportedSceneObjectsPerSourceIndex,param_1);
          Core::Private::Function::CheckCallable(*(void **)param_2);
          pcVar2 = *(code **)param_2;
          plVar6 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar6 = *(longlong **)&param_2->field_0x28;
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          (*pcVar2)(uVar5,pTVar4);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(longlong *)param_2 == 0) {
            return;
          }
          plVar6 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar6 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar1);
      } while (iVar3 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// IterateImportedSceneObjectsPerSourceIndex @ 14e4ff3e0

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

void __thiscall
UE::Interchange::FImportAsyncHelper::IterateImportedSceneObjectsPerSourceIndex
          (FImportAsyncHelper *this,
          TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined4 local_b0 [2];
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lpCriticalSection = &this->ImportedSceneObjectsPerSourceIndexLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iStack_a0 = 0;
  puVar1 = &(this->ImportedSceneObjectsPerSourceIndex).field_0x10;
  iVar3 = *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x28;
  local_a8 = &this->ImportedSceneObjectsPerSourceIndex;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ImportedSceneObjectsPerSourceIndex).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14e4ff4bf;
      uVar12 = puVar16[lVar10 + 1];
    }
    uStack_9c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_78 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14e4ff4bf:
  iStack_80 = *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x8 -
              *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x34;
  uVar12 = *(uint *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_70 = local_a8;
  local_68 = local_a8;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_70;
  uVar4 = *(uint *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x28;
  if (uVar12 != uVar4) {
    puVar15 = *(undefined1 **)&(this->ImportedSceneObjectsPerSourceIndex).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e4ff5d0;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14e4ff5d0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    puVar13 = (undefined4 *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    local_b0[0] = *puVar13;
    Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar11 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_1->field_0x10;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar9,local_b0,puVar13 + 2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// ReleaseTranslatorsSource @ 14e503110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportAsyncHelper::ReleaseTranslatorsSource(FImportAsyncHelper *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  EInterchangeTaskStatus EVar4;
  uint uVar5;
  FInterchangeTaskSystem *pFVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar11;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_38;
  ulonglong uVar10;
  
  lVar11 = (longlong)(this->Translators).ArrayNum;
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < lVar11) {
    do {
      uVar9 = (uint)uVar10;
      if (((int)uVar9 < 0) || ((this->TranslatorTasks).ArrayNum <= (int)uVar9)) {
        uVar7 = 0xffffffffffffffff;
      }
      else {
        uVar5 = 0;
        if ((int)uVar9 < (this->TranslatorTasks).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = *(ulong64 *)((this->TranslatorTasks).AllocatorInstance.Data + uVar8 * 8);
      }
      uVar5 = 0;
      if ((int)uVar9 < (this->Translators).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->Translators).AllocatorInstance.Data + uVar8 * 8);
      if (plVar1 != (longlong *)0x0) {
        pFVar6 = FInterchangeTaskSystem::Get();
        EVar4 = FInterchangeTaskSystem::GetTaskStatus(pFVar6,uVar7);
        if (EVar4 == Executing) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6687235758857649493>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                             ,0x2ab,"TaskStatus != EInterchangeTaskStatus::Executing");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = FInterchangeTaskSystem::Get();
          local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.ArrayNum = 1;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
          *(ulong64 *)local_38.AllocatorInstance.Data = uVar7;
          FInterchangeTaskSystem::WaitUntilTasksComplete(pFVar6,&local_38);
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
        }
        (**(code **)(*plVar1 + 0x2e0))(plVar1);
      }
      uVar8 = uVar8 + 1;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar8 < lVar11);
  }
  return;
}

// SendAnalyticImportEndData @ 14e5053f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e50616e) */
/* WARNING: Removing unreachable block (ram,0x00014e505729) */
/* WARNING: Removing unreachable block (ram,0x00014e505e83) */
/* WARNING: Removing unreachable block (ram,0x00014e506396) */
/* WARNING: Removing unreachable block (ram,0x00014e50617c) */
/* WARNING: Removing unreachable block (ram,0x00014e505738) */
/* WARNING: Removing unreachable block (ram,0x00014e505e91) */
/* WARNING: Removing unreachable block (ram,0x00014e5063a4) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportAsyncHelper::SendAnalyticImportEndData(FImportAsyncHelper *this)

{
  undefined1 *puVar1;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  UInterchangeResultsContainer *pUVar6;
  code *pcVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  undefined8 uVar9;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  FString *pFVar13;
  FAnalyticsEventAttribute *pFVar14;
  longlong lVar15;
  FString *pFVar16;
  UInterchangeSourceNode *pUVar17;
  FJsonFragment *pFVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  IAnalyticsProviderET *pIVar20;
  wchar_t *pwVar21;
  int iVar22;
  uint uVar23;
  wchar_t *pwVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 auStackY_428 [32];
  ForAnyElementType local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  undefined1 local_3c7 [7];
  FAnalyticsEventAttribute local_3c0;
  FAnalyticsEventAttribute local_390;
  FAnalyticsEventAttribute local_360;
  FAnalyticsEventAttribute local_330;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 local_2d8;
  ulonglong local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  int local_2a8;
  int local_2a4;
  undefined8 *local_2a0;
  undefined1 *local_298;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_290;
  int iStack_288;
  undefined4 uStack_284;
  undefined1 *local_280;
  undefined4 uStack_278;
  int iStack_274;
  int local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  TMap<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  FString local_230;
  FJsonFragment local_220;
  FJsonFragment local_210;
  FJsonFragment local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FAnalyticsEventAttribute local_190;
  FAnalyticsEventAttribute local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0 = 0;
  pFVar13 = ::FString::FString(&local_1f0,L"UniqueId");
  pFVar14 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
                      (&local_190,pFVar13,&this->UniqueId);
  if (((local_3d8.Data <= pFVar14) &&
      (pFVar14 < (FAnalyticsEventAttribute *)(local_3d8.Data + (longlong)local_3d0._4_4_ * 0x30)))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (int)local_3d0;
  if ((int)local_3d0 == local_3d0._4_4_) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_3d8,(int *)((longlong)&local_3d0 + 4));
  }
  lVar15 = (longlong)iVar12;
  local_3d0 = CONCAT44(local_3d0._4_4_,iVar12 + 1);
  *(undefined8 *)&local_3d8.Data[lVar15 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_3d8.Data[lVar15 * 0x30].field_0x0 =
       (pFVar14->AttrName).Data.AllocatorInstance.Data;
  (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 8) = (pFVar14->AttrName).Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0xc) = (pFVar14->AttrName).Data.ArrayMax;
  (pFVar14->AttrName).Data.ArrayNum = 0;
  (pFVar14->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_3d8.Data + lVar15 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_3d8.Data + lVar15 * 0x30 + 0x10) =
       (pFVar14->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar14->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x18) = (pFVar14->AttrValueString).Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x1c) = (pFVar14->AttrValueString).Data.ArrayMax;
  (pFVar14->AttrValueString).Data.ArrayNum = 0;
  (pFVar14->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_3d8.Data + lVar15 * 0x30 + 0x20) = pFVar14->AttrValueNumber;
  local_3d8.Data[lVar15 * 0x30 + 0x28] = (FScriptContainerElement)pFVar14->AttrValueBool;
  *(AttrTypeEnum *)(local_3d8.Data + lVar15 * 0x30 + 0x2c) = pFVar14->AttrType;
  if (local_190.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_190.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar13 = ::FString::FString(&local_1e0,L"IsCanceled");
  pFVar16 = FAnalyticsEventAttribute::CheckName(&local_3c0,pFVar13);
  pwVar21 = L"true";
  local_3c0.AttrName.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
  (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0.AttrName.Data.ArrayNum = (pFVar16->Data).ArrayNum;
  local_3c0.AttrName.Data.ArrayMax = (pFVar16->Data).ArrayMax;
  (pFVar16->Data).ArrayNum = 0;
  (pFVar16->Data).ArrayMax = 0;
  if (this->bCancel == (atomic<bool>)0x0) {
    pwVar21 = L"false";
  }
  ::FString::FString(&local_3c0.AttrValueString,pwVar21);
  local_3c0.AttrValueBool = false;
  local_3c0.AttrValueNumber = 0.0;
  local_3c0.AttrType = String;
  pFVar5 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (((local_3d8.Data <= &local_3c0) &&
      (&local_3c0 < (FAnalyticsEventAttribute *)(local_3d8.Data + (longlong)local_3d0._4_4_ * 0x30))
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (int)local_3d0;
  if ((int)local_3d0 == local_3d0._4_4_) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_3d8,(int *)((longlong)&local_3d0 + 4));
  }
  lVar15 = (longlong)iVar12;
  local_3d0 = CONCAT44(local_3d0._4_4_,iVar12 + 1);
  *(undefined8 *)&local_3d8.Data[lVar15 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_3d8.Data[lVar15 * 0x30].field_0x0 =
       local_3c0.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 8) = local_3c0.AttrName.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0xc) = local_3c0.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_3d8.Data + lVar15 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_3d8.Data + lVar15 * 0x30 + 0x10) =
       local_3c0.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x18) = local_3c0.AttrValueString.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x1c) = local_3c0.AttrValueString.Data.ArrayMax;
  *(double *)(local_3d8.Data + lVar15 * 0x30 + 0x20) = local_3c0.AttrValueNumber;
  local_3d8.Data[lVar15 * 0x30 + 0x28] = (FScriptContainerElement)local_3c0.AttrValueBool;
  *(AttrTypeEnum *)(local_3d8.Data + lVar15 * 0x30 + 0x2c) = local_3c0.AttrType;
  local_3c0.AttrValueString.Data.ArrayNum = 0;
  local_3c0.AttrValueString.Data.ArrayMax = 0;
  local_3c0.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0.AttrName.Data.ArrayNum = 0;
  local_3c0.AttrName.Data.ArrayMax = 0;
  local_3c0.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (this->bCancel != (atomic<bool>)0x0) goto LAB_14e506591;
  if (((this->BaseNodeContainers).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar17 = UInterchangeSourceNode::GetUniqueInstance
                      (*(UInterchangeBaseNodeContainer **)
                        (this->BaseNodeContainers).AllocatorInstance.Data);
  if (pUVar17 != (UInterchangeSourceNode *)0x0) {
    if (((this->SourceDatas).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = Interchange::Private::AnalyticsPrimarySourceDataMetadataToJsonFragment
                        (&local_220,
                         *(UInterchangeSourceData **)(this->SourceDatas).AllocatorInstance.Data,
                         pUVar17);
    pFVar13 = ::FString::FString(&local_1d0,L"PrimarySourceDataMetadata");
    pFVar14 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<FJsonFragment>
                        (&local_160,pFVar13,pFVar18);
    if (((local_3d8.Data <= pFVar14) &&
        (pFVar14 < (FAnalyticsEventAttribute *)(local_3d8.Data + (longlong)local_3d0._4_4_ * 0x30)))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (int)local_3d0;
    if ((int)local_3d0 == local_3d0._4_4_) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_3d8,(int *)((longlong)&local_3d0 + 4));
    }
    lVar15 = (longlong)iVar12;
    local_3d0 = CONCAT44(local_3d0._4_4_,iVar12 + 1);
    *(undefined8 *)&local_3d8.Data[lVar15 * 0x30].field_0x0 = 0;
    *(FScriptContainerElement **)&local_3d8.Data[lVar15 * 0x30].field_0x0 =
         (pFVar14->AttrName).Data.AllocatorInstance.Data;
    (pFVar14->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_3d8.Data + lVar15 * 0x30 + 8) = (pFVar14->AttrName).Data.ArrayNum;
    *(int *)(local_3d8.Data + lVar15 * 0x30 + 0xc) = (pFVar14->AttrName).Data.ArrayMax;
    (pFVar14->AttrName).Data.ArrayNum = 0;
    (pFVar14->AttrName).Data.ArrayMax = 0;
    *(undefined8 *)(local_3d8.Data + lVar15 * 0x30 + 0x10) = 0;
    *(FScriptContainerElement **)(local_3d8.Data + lVar15 * 0x30 + 0x10) =
         (pFVar14->AttrValueString).Data.AllocatorInstance.Data;
    (pFVar14->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x18) = (pFVar14->AttrValueString).Data.ArrayNum;
    *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x1c) = (pFVar14->AttrValueString).Data.ArrayMax;
    (pFVar14->AttrValueString).Data.ArrayNum = 0;
    (pFVar14->AttrValueString).Data.ArrayMax = 0;
    *(double *)(local_3d8.Data + lVar15 * 0x30 + 0x20) = pFVar14->AttrValueNumber;
    local_3d8.Data[lVar15 * 0x30 + 0x28] = (FScriptContainerElement)pFVar14->AttrValueBool;
    *(AttrTypeEnum *)(local_3d8.Data + lVar15 * 0x30 + 0x2c) = pFVar14->AttrType;
    if (local_160.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AttrValueString.Data.AllocatorInstance.Data);
    }
    if (local_160.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AttrName.Data.AllocatorInstance.Data);
    }
    if (local_220.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.FragmentString.Data.AllocatorInstance.Data);
    }
  }
  puVar1 = &(this->ImportedAssetsPerSourceIndex).field_0x10;
  pTVar2 = &this->ImportedAssetsPerSourceIndex;
  local_2d0 = 1;
  local_2c8._padding_._4_4_ = 1;
  local_2c8.UnvisitedBitMask = 0xffffffff;
  local_2c8._padding_._0_4_ = 0;
  local_2c8.CurrentBitIndex = 0;
  local_2c8.BaseBitIndex = 0;
  local_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->ImportedAssetsPerSourceIndex).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c8);
  }
  TStack_2f8._padding_ = CONCAT44(local_2c8._padding_._4_4_,(undefined4)local_2c8._padding_);
  TStack_2f8.CurrentBitIndex = local_2c8.CurrentBitIndex;
  TStack_2f8.UnvisitedBitMask = local_2c8.UnvisitedBitMask;
  TStack_2f8._28_4_ = local_2c8._28_4_;
  TStack_2f8.BaseBitIndex = local_2c8.BaseBitIndex;
  TStack_2f8.Array = local_2c8.Array;
  local_2d8 = CONCAT44(local_2d8._4_4_,
                       *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x8 -
                       *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x34);
  TStack_258.Array = local_2c8.Array;
  uStack_238 = local_2d8;
  local_300 = pTVar2;
  local_260 = pTVar2;
  TStack_258._padding_ = TStack_2f8._padding_;
  TStack_258._16_8_ = TStack_2f8._16_8_;
  TStack_258._24_8_ = TStack_2f8._24_8_;
  pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_130,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->ImportedAssetsPerSourceIndex).field_0x28);
  TStack_2f8._padding_ = pTVar19->_padding_;
  pTVar8 = pTVar19->Array;
  uVar9._0_4_ = pTVar19->UnvisitedBitMask;
  uVar9._4_4_ = pTVar19->CurrentBitIndex;
  TStack_2f8.BaseBitIndex = pTVar19->BaseBitIndex;
  TStack_2f8._28_4_ = *(undefined4 *)&pTVar19->field_0x1c;
  TStack_2f8.Array = pTVar8;
  TStack_2f8._16_8_ = uVar9;
  while( true ) {
    pTVar10 = local_260;
    if (*(int *)&local_260->field_0x8 - *(int *)&local_260->field_0x34 != (int)uStack_238) {
      local_3c8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3c8);
    }
    if (((TStack_258.CurrentBitIndex == uVar9._4_4_) && (TStack_258.Array == pTVar8)) &&
       (pTVar10 == pTVar2)) break;
    TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
  }
  puVar1 = &(this->ImportedSceneObjectsPerSourceIndex).field_0x10;
  iStack_288 = 0;
  iVar12 = *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x28;
  local_300 = &this->ImportedSceneObjectsPerSourceIndex;
  local_270 = 0;
  iStack_274 = 0;
  if (iVar12 != 0) {
    puVar26 = *(uint **)&(this->ImportedSceneObjectsPerSourceIndex).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar23 = *puVar26;
    while (uVar23 == 0) {
      lVar15 = (longlong)iStack_288;
      local_270 = local_270 + 0x20;
      iStack_288 = iStack_288 + 1;
      iStack_274 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288) goto LAB_14e505b12;
      uVar23 = puVar26[lVar15 + 1];
    }
    local_2d0 = (ulonglong)(-uVar23 & uVar23);
    uVar3 = local_2d0 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2a8 = (int)lVar15;
    iStack_274 = local_2a8 + -1 + local_270;
    if (iVar12 < iStack_274) {
      iStack_274 = iVar12;
    }
  }
LAB_14e505b12:
  uVar23 = *(uint *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x28;
  uStack_284 = (undefined4)local_2d0;
  uStack_26c = local_f4;
  iStack_268 = *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x8 -
               *(int *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x34;
  uVar27 = uVar23 & 0xffffffe0;
  uStack_278 = 0xffffffff;
  TStack_2f8._padding_ = CONCAT44(uStack_284,iStack_288);
  TStack_2f8.CurrentBitIndex = iStack_274;
  TStack_2f8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar23 >> 5;
  TStack_2f8._28_4_ = local_f4;
  TStack_2f8.BaseBitIndex = local_270;
  local_2d8 = CONCAT44(uStack_264,iStack_268);
  TStack_2f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_290 = local_300;
  local_280 = puVar1;
  if ((((int)uVar23 < 0) || (iVar12 < (int)uVar23)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->ImportedSceneObjectsPerSourceIndex).field_0x28;
  if (uVar23 != uVar4) {
    puVar25 = *(undefined1 **)&(this->ImportedSceneObjectsPerSourceIndex).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar22 * 4);
    while (uVar23 == 0) {
      lVar15 = (longlong)iVar22;
      uVar27 = uVar27 + 0x20;
      iVar22 = iVar22 + 1;
      uVar23 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14e505c42;
      uVar23 = *(uint *)(puVar25 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_2a4 = (int)lVar15;
    uVar23 = local_2a4 + -1 + uVar27;
    if ((int)uVar4 < (int)uVar23) {
      uVar23 = uVar4;
    }
  }
LAB_14e505c42:
  while( true ) {
    pTVar2 = local_300;
    if (*(int *)&local_300->field_0x8 - *(int *)&local_300->field_0x34 != (int)local_2d8) {
      local_3c7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3c7);
    }
    if (((TStack_2f8.CurrentBitIndex == uVar23) &&
        (TStack_2f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar2 == &this->ImportedSceneObjectsPerSourceIndex)) break;
    TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
  }
  pFVar13 = ::FString::FString(&local_1c0,L"ImportObjectCount");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"),
     iVar12 == 0)) {
LAB_14e505cfc:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidAttributeName(InName)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                        ,0x78,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar21,L"DateOffset");
    if (iVar12 == 0) goto LAB_14e505cfc;
  }
  local_390.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_390.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_390.AttrValueString,L"%d");
  local_390.AttrValueNumber = 0.0;
  local_390.AttrValueBool = false;
  local_390.AttrType = JsonFragment;
  pFVar5 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (((local_3d8.Data <= &local_390) &&
      (&local_390 < (FAnalyticsEventAttribute *)(local_3d8.Data + (longlong)local_3d0._4_4_ * 0x30))
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (int)local_3d0;
  if ((int)local_3d0 == local_3d0._4_4_) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_3d8,(int *)((longlong)&local_3d0 + 4));
  }
  lVar15 = (longlong)iVar12;
  local_3d0 = CONCAT44(local_3d0._4_4_,iVar12 + 1);
  *(undefined8 *)&local_3d8.Data[lVar15 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_3d8.Data[lVar15 * 0x30].field_0x0 =
       local_390.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 8) = local_390.AttrName.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0xc) = local_390.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_3d8.Data + lVar15 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_3d8.Data + lVar15 * 0x30 + 0x10) =
       local_390.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x18) = local_390.AttrValueString.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x1c) = local_390.AttrValueString.Data.ArrayMax;
  *(double *)(local_3d8.Data + lVar15 * 0x30 + 0x20) = local_390.AttrValueNumber;
  local_3d8.Data[lVar15 * 0x30 + 0x28] = (FScriptContainerElement)local_390.AttrValueBool;
  *(AttrTypeEnum *)(local_3d8.Data + lVar15 * 0x30 + 0x2c) = local_390.AttrType;
  local_390.AttrValueString.Data.ArrayNum = 0;
  local_390.AttrValueString.Data.ArrayMax = 0;
  local_390.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.AttrName.Data.ArrayNum = 0;
  local_390.AttrName.Data.ArrayMax = 0;
  local_390.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0 = (undefined8 *)local_98;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_298 = local_e8;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  pUVar6 = (((this->AssetImportResult).Object)->Results).field0_0x0.DebugPtr;
  if (pUVar6 != (UInterchangeResultsContainer *)0x0) {
    `UE::Interchange::FImportAsyncHelper::SendAnalyticImportEndData'::__l2::<lambda_1>::operator()
              (&local_2a0,pUVar6);
  }
  pUVar6 = (((this->SceneImportResult).Object)->Results).field0_0x0.DebugPtr;
  if (pUVar6 != (UInterchangeResultsContainer *)0x0) {
    `UE::Interchange::FImportAsyncHelper::SendAnalyticImportEndData'::__l2::<lambda_1>::operator()
              (&local_2a0,pUVar6);
  }
  pFVar18 = Interchange::Private::AnalyticsConvertMapToJsonFragment
                      (&local_210,
                       (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        *)local_98);
  pFVar13 = ::FString::FString(&local_1b0,L"WarningTypes");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"),
     iVar12 == 0)) {
LAB_14e505fe1:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidAttributeName(InName)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                        ,0x78,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar21,L"DateOffset");
    if (iVar12 == 0) goto LAB_14e505fe1;
  }
  local_360.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  pwVar24 = L"null";
  pwVar21 = L"null";
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_360.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  if (1 < (pFVar18->FragmentString).Data.ArrayNum) {
    pwVar21 = (wchar_t *)(pFVar18->FragmentString).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_360.AttrValueString,pwVar21);
  local_360.AttrValueNumber = 0.0;
  local_360.AttrValueBool = false;
  local_360.AttrType = JsonFragment;
  pFVar5 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (((local_3d8.Data <= &local_360) &&
      (&local_360 < (FAnalyticsEventAttribute *)(local_3d8.Data + (longlong)local_3d0._4_4_ * 0x30))
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (int)local_3d0;
  if ((int)local_3d0 == local_3d0._4_4_) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_3d8,(int *)((longlong)&local_3d0 + 4));
  }
  lVar15 = (longlong)iVar12;
  local_3d0 = CONCAT44(local_3d0._4_4_,iVar12 + 1);
  *(undefined8 *)&local_3d8.Data[lVar15 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_3d8.Data[lVar15 * 0x30].field_0x0 =
       local_360.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 8) = local_360.AttrName.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0xc) = local_360.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_3d8.Data + lVar15 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_3d8.Data + lVar15 * 0x30 + 0x10) =
       local_360.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x18) = local_360.AttrValueString.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x1c) = local_360.AttrValueString.Data.ArrayMax;
  *(double *)(local_3d8.Data + lVar15 * 0x30 + 0x20) = local_360.AttrValueNumber;
  local_3d8.Data[lVar15 * 0x30 + 0x28] = (FScriptContainerElement)local_360.AttrValueBool;
  *(AttrTypeEnum *)(local_3d8.Data + lVar15 * 0x30 + 0x2c) = local_360.AttrType;
  local_360.AttrValueString.Data.ArrayNum = 0;
  local_360.AttrValueString.Data.ArrayMax = 0;
  local_360.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.AttrName.Data.ArrayNum = 0;
  local_360.AttrName.Data.ArrayMax = 0;
  local_360.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_210.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.FragmentString.Data.AllocatorInstance.Data);
  }
  pFVar18 = Interchange::Private::AnalyticsConvertMapToJsonFragment
                      (&local_200,
                       (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        *)local_e8);
  pFVar13 = ::FString::FString(&local_1a0,L"ErrorTypes");
  if (((pFVar13->Data).ArrayNum < 2) ||
     (iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,L"EventName"),
     iVar12 == 0)) {
LAB_14e5061f9:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidAttributeName(InName)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                        ,0x78,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar21,L"DateOffset");
    if (iVar12 == 0) goto LAB_14e5061f9;
  }
  local_330.AttrName.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.AttrName.Data.ArrayNum = (pFVar13->Data).ArrayNum;
  local_330.AttrName.Data.ArrayMax = (pFVar13->Data).ArrayMax;
  (pFVar13->Data).ArrayNum = 0;
  (pFVar13->Data).ArrayMax = 0;
  if (1 < (pFVar18->FragmentString).Data.ArrayNum) {
    pwVar24 = (wchar_t *)(pFVar18->FragmentString).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_330.AttrValueString,pwVar24);
  local_330.AttrValueNumber = 0.0;
  local_330.AttrValueBool = false;
  local_330.AttrType = JsonFragment;
  pFVar5 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (((local_3d8.Data <= &local_330) &&
      (&local_330 < (FAnalyticsEventAttribute *)(local_3d8.Data + (longlong)local_3d0._4_4_ * 0x30))
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (int)local_3d0;
  if ((int)local_3d0 == local_3d0._4_4_) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_3d8,(int *)((longlong)&local_3d0 + 4));
  }
  lVar15 = (longlong)iVar12;
  local_3d0 = CONCAT44(local_3d0._4_4_,iVar12 + 1);
  *(undefined8 *)&local_3d8.Data[lVar15 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_3d8.Data[lVar15 * 0x30].field_0x0 =
       local_330.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 8) = local_330.AttrName.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0xc) = local_330.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_3d8.Data + lVar15 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_3d8.Data + lVar15 * 0x30 + 0x10) =
       local_330.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x18) = local_330.AttrValueString.Data.ArrayNum;
  *(int *)(local_3d8.Data + lVar15 * 0x30 + 0x1c) = local_330.AttrValueString.Data.ArrayMax;
  *(double *)(local_3d8.Data + lVar15 * 0x30 + 0x20) = local_330.AttrValueNumber;
  local_3d8.Data[lVar15 * 0x30 + 0x28] = (FScriptContainerElement)local_330.AttrValueBool;
  *(AttrTypeEnum *)(local_3d8.Data + lVar15 * 0x30 + 0x2c) = local_330.AttrType;
  local_330.AttrValueString.Data.ArrayNum = 0;
  local_330.AttrValueString.Data.ArrayMax = 0;
  local_330.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.AttrName.Data.ArrayNum = 0;
  local_330.AttrName.Data.ArrayMax = 0;
  local_330.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_200.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.FragmentString.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_230,L"Interchange.Usage.ImportResult");
  pIVar20 = FEngineAnalytics::GetProvider();
  (**(code **)(pIVar20->_padding_ + 0x80))(pIVar20,&local_230,&local_3d8);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,0,local_e8._8_4_);
  iVar12 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar12 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar12 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar12 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
LAB_14e506591:
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_3d8.Data,(int)local_3d0);
  if ((FAnalyticsEventAttribute *)local_3d8.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_3d8.Data);
  }
  return;
}

