// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 100

// StaticClass @ 14e4cc360

UClass * __cdecl UInterchangeManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeManager",
               &Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton,
               StaticRegisterNativesUInterchangeManager,0x430,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeManager>,
               InternalVTableHelperCtorCaller<UInterchangeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton;
}

// UInterchangeManager @ 14e4d8520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeManager * __thiscall
UInterchangeManager::UInterchangeManager(UInterchangeManager *this,FVTableHelper *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar3 = (TNode *)0x0;
  *(undefined ***)this = &___7UInterchangeManager__6B_;
  *(undefined8 *)&this->OnAssetPostImport = 0;
  *(undefined8 *)&(this->OnAssetPostImport).field_0x8 = 0;
  *(undefined8 *)&(this->OnAssetPostImport).field_0x10 = 0;
  *(undefined8 *)&(this->OnAssetPostImport).field_0x18 = 2;
  *(undefined8 *)&this->OnAssetPostReimport = 0;
  *(undefined8 *)&(this->OnAssetPostReimport).field_0x8 = 0;
  *(undefined8 *)&(this->OnAssetPostReimport).field_0x10 = 0;
  *(undefined8 *)&(this->OnAssetPostReimport).field_0x18 = 2;
  *(undefined8 *)&this->OnBatchImportComplete = 0;
  *(undefined8 *)&(this->OnBatchImportComplete).field_0x8 = 0;
  *(undefined8 *)&(this->OnBatchImportComplete).field_0x10 = 0;
  *(undefined8 *)&(this->OnBatchImportComplete).field_0x18 = 2;
  *(undefined8 *)&this->OnImportStarted = 0;
  *(undefined8 *)&(this->OnImportStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnImportStarted).field_0x10 = 0;
  *(undefined8 *)&(this->OnImportStarted).field_0x18 = 2;
  *(undefined8 *)&this->OnImportFinished = 0;
  *(undefined8 *)&(this->OnImportFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnImportFinished).field_0x10 = 0;
  *(undefined8 *)&(this->OnImportFinished).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnSanitizeName,4000);
  *(undefined8 *)&(this->OnSanitizeName).field_0x28 = 0;
  *(undefined8 *)&(this->OnSanitizeName).field_0x30 = 0;
  *(undefined8 *)&(this->OnSanitizeName).field_0x38 = 2;
  *(undefined8 *)&this->OnPreDestroyInterchangeManager = 0;
  *(undefined8 *)&(this->OnPreDestroyInterchangeManager).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreDestroyInterchangeManager).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreDestroyInterchangeManager).field_0x18 = 2;
  *(undefined8 *)&this->NonParallelTranslatorLocks = 0;
  *(undefined8 *)&(this->NonParallelTranslatorLocks).field_0x8 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorLocks).field_0x20 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x28 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x34 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorLocks).field_0x40 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x48 = 0;
  *(undefined8 *)&this->NonParallelTranslatorQueueTasks = 0;
  *(undefined8 *)&(this->NonParallelTranslatorQueueTasks).field_0x8 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorQueueTasks).field_0x20 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x28 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x34 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorQueueTasks).field_0x40 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x48 = 0;
  pTVar1 = ::operator_new(0x20);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar1->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pTVar1->Item).TranslatorClass = (UClass *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar1->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pTVar1->Item).TranslatorClass = (UClass *)0x0;
    pTVar2 = pTVar1;
  }
  (this->QueuedTasks).Tail = pTVar2;
  (this->QueuedTasks).Head = pTVar2;
  this->QueueTaskCount = 0;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar2->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar2->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar3 = pTVar2;
  }
  (this->QueuedPostImportTasks).Tail = (TNode *)pTVar3;
  (this->QueuedPostImportTasks).Head = (TNode *)pTVar3;
  (this->QueuedPostImportTasksTickerHandle).Object = (FElement *)0x0;
  (this->QueuedPostImportTasksTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ImportTasksLock,4000);
  (this->ImportTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportTasks).ArrayNum = 0;
  (this->ImportTasks).ArrayMax = 0;
  (this->Notification).Object = (FAsyncTaskNotification *)0x0;
  (this->Notification).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->NotificationTickHandle).Object = (FElement *)0x0;
  (this->NotificationTickHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->RegisteredTranslatorsClass).Elements = 0;
  *(undefined8 *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTranslatorsClass).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x30 = 0xffffffff;
  (this->RegisteredTranslatorsClass).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredTranslatorsClass).HashSize = 0;
  *(undefined8 *)&this->RegisteredFactoryClasses = 0;
  *(undefined8 *)&(this->RegisteredFactoryClasses).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredFactoryClasses).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredFactoryClasses).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredWriters = 0;
  *(undefined8 *)&(this->RegisteredWriters).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredWriters).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredWriters).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredWriters).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredWriters).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredWriters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredWriters).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredWriters).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredConverters = 0;
  *(undefined8 *)&(this->RegisteredConverters).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredConverters).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredConverters).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredConverters).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredConverters).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredConverters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredConverters).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredConverters).field_0x48 = 0;
  (this->EditorUtilities).Object = (UObject *)0x0;
  this->bIsActive = (FThreadSafeBool)0x0;
  *(undefined8 *)&this->ImportAllWithSamePipelines = 0;
  *(undefined8 *)&(this->ImportAllWithSamePipelines).field_0x8 = 0;
  *(undefined8 *)&(this->ImportAllWithSamePipelines).field_0x20 = 0;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x28 = 0;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x34 = 0;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ImportAllWithSamePipelines).field_0x40 = 0;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x48 = 0;
  this->bImportCanceled = false;
  (this->GCEndDelegate).ID = 0;
  (this->GCPreDelegate).ID = 0;
  this->bGCEndDelegateCancellAllTask = false;
  return this;
}

// UInterchangeManager @ 14e4d88f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeManager * __thiscall
UInterchangeManager::UInterchangeManager(UInterchangeManager *this,FObjectInitializer *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar3 = (TNode *)0x0;
  *(undefined ***)this = &___7UInterchangeManager__6B_;
  *(undefined8 *)&this->OnAssetPostImport = 0;
  *(undefined8 *)&(this->OnAssetPostImport).field_0x8 = 0;
  *(undefined8 *)&(this->OnAssetPostImport).field_0x10 = 0;
  *(undefined8 *)&(this->OnAssetPostImport).field_0x18 = 2;
  *(undefined8 *)&this->OnAssetPostReimport = 0;
  *(undefined8 *)&(this->OnAssetPostReimport).field_0x8 = 0;
  *(undefined8 *)&(this->OnAssetPostReimport).field_0x10 = 0;
  *(undefined8 *)&(this->OnAssetPostReimport).field_0x18 = 2;
  *(undefined8 *)&this->OnBatchImportComplete = 0;
  *(undefined8 *)&(this->OnBatchImportComplete).field_0x8 = 0;
  *(undefined8 *)&(this->OnBatchImportComplete).field_0x10 = 0;
  *(undefined8 *)&(this->OnBatchImportComplete).field_0x18 = 2;
  *(undefined8 *)&this->OnImportStarted = 0;
  *(undefined8 *)&(this->OnImportStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnImportStarted).field_0x10 = 0;
  *(undefined8 *)&(this->OnImportStarted).field_0x18 = 2;
  *(undefined8 *)&this->OnImportFinished = 0;
  *(undefined8 *)&(this->OnImportFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnImportFinished).field_0x10 = 0;
  *(undefined8 *)&(this->OnImportFinished).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OnSanitizeName,4000);
  *(undefined8 *)&(this->OnSanitizeName).field_0x28 = 0;
  *(undefined8 *)&(this->OnSanitizeName).field_0x30 = 0;
  *(undefined8 *)&(this->OnSanitizeName).field_0x38 = 2;
  *(undefined8 *)&this->OnPreDestroyInterchangeManager = 0;
  *(undefined8 *)&(this->OnPreDestroyInterchangeManager).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreDestroyInterchangeManager).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreDestroyInterchangeManager).field_0x18 = 2;
  *(undefined8 *)&this->NonParallelTranslatorLocks = 0;
  *(undefined8 *)&(this->NonParallelTranslatorLocks).field_0x8 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorLocks).field_0x20 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x28 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x34 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorLocks).field_0x40 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x48 = 0;
  *(undefined8 *)&this->NonParallelTranslatorQueueTasks = 0;
  *(undefined8 *)&(this->NonParallelTranslatorQueueTasks).field_0x8 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorQueueTasks).field_0x20 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x28 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x34 = 0;
  *(undefined8 *)&(this->NonParallelTranslatorQueueTasks).field_0x40 = 0;
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x48 = 0;
  pTVar1 = ::operator_new(0x20);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar1->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pTVar1->Item).TranslatorClass = (UClass *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar1->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pTVar1->Item).TranslatorClass = (UClass *)0x0;
    pTVar2 = pTVar1;
  }
  (this->QueuedTasks).Tail = pTVar2;
  (this->QueuedTasks).Head = pTVar2;
  this->QueueTaskCount = 0;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar2->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).AsyncHelper.Object = (FImportAsyncHelper *)0x0;
    (pTVar2->Item).AsyncHelper.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar3 = pTVar2;
  }
  (this->QueuedPostImportTasks).Tail = (TNode *)pTVar3;
  (this->QueuedPostImportTasks).Head = (TNode *)pTVar3;
  (this->QueuedPostImportTasksTickerHandle).Object = (FElement *)0x0;
  (this->QueuedPostImportTasksTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ImportTasksLock,4000);
  (this->ImportTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportTasks).ArrayNum = 0;
  (this->ImportTasks).ArrayMax = 0;
  (this->Notification).Object = (FAsyncTaskNotification *)0x0;
  (this->Notification).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->NotificationTickHandle).Object = (FElement *)0x0;
  (this->NotificationTickHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->RegisteredTranslatorsClass).Elements = 0;
  *(undefined8 *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTranslatorsClass).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredTranslatorsClass).Elements.field_0x34 = 0;
  (this->RegisteredTranslatorsClass).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredTranslatorsClass).HashSize = 0;
  *(undefined8 *)&this->RegisteredFactoryClasses = 0;
  *(undefined8 *)&(this->RegisteredFactoryClasses).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredFactoryClasses).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredFactoryClasses).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredWriters = 0;
  *(undefined8 *)&(this->RegisteredWriters).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredWriters).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredWriters).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredWriters).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredWriters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredWriters).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredWriters).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredWriters).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredConverters = 0;
  *(undefined8 *)&(this->RegisteredConverters).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredConverters).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredConverters).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredConverters).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredConverters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredConverters).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredConverters).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredConverters).field_0x48 = 0;
  (this->EditorUtilities).Object = (UObject *)0x0;
  this->bIsActive = (FThreadSafeBool)0x0;
  *(undefined8 *)&this->ImportAllWithSamePipelines = 0;
  *(undefined8 *)&(this->ImportAllWithSamePipelines).field_0x8 = 0;
  *(undefined8 *)&(this->ImportAllWithSamePipelines).field_0x20 = 0;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x28 = 0;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x34 = 0;
  *(undefined8 *)&(this->ImportAllWithSamePipelines).field_0x40 = 0;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x48 = 0;
  this->bImportCanceled = false;
  (this->GCEndDelegate).ID = 0;
  (this->GCPreDelegate).ID = 0;
  this->bGCEndDelegateCancellAllTask = false;
  if (((bIsCreatingSingleton == false) && ((*(uint *)&this->field_0x8 & 0x30) == 0)) &&
     (1 < (byte)LogInterchangeEngine._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
  }
  return this;
}

// ~UInterchangeManager @ 14e4dad10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInterchangeManager::~UInterchangeManager(UInterchangeManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  UObject *pUVar4;
  ForElementType<FSetElementId> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  
  *(undefined ***)this = &___7UInterchangeManager__6B_;
  *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ImportAllWithSamePipelines).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImportAllWithSamePipelines);
  pUVar4 = (this->EditorUtilities).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    (this->EditorUtilities).Object = (UObject *)0x0;
  }
  *(undefined4 *)&(this->RegisteredConverters).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredConverters).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeAssetImportDataConverterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeAssetImportDataConverterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeAssetImportDataConverterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredConverters);
  *(undefined4 *)&(this->RegisteredWriters).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredWriters).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeWriterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeWriterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeWriterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredWriters);
  *(undefined4 *)&(this->RegisteredFactoryClasses).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredFactoryClasses).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredFactoryClasses);
  (this->RegisteredTranslatorsClass).HashSize = 0;
  FVar5 = (this->RegisteredTranslatorsClass).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredTranslatorsClass).Elements);
  pTVar6 = (this->NotificationTickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Notification).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int>
            ((TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *)
             (this->ImportTasks).AllocatorInstance.Data,(this->ImportTasks).ArrayNum);
  pFVar7 = (this->ImportTasks).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ImportTasksLock);
  pTVar6 = (this->QueuedPostImportTasksTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  pTVar8 = (this->QueuedPostImportTasks).Tail;
  while (pTVar8 != (TNode *)0x0) {
    (this->QueuedPostImportTasks).Tail = pTVar8->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar8->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar8,0x18);
    pTVar8 = (this->QueuedPostImportTasks).Tail;
  }
  pTVar9 = (this->QueuedTasks).Tail;
  while (pTVar9 != (TNode *)0x0) {
    (this->QueuedTasks).Tail = pTVar9->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar9->Item).AsyncHelper.SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar9,0x20);
    pTVar9 = (this->QueuedTasks).Tail;
  }
  *(undefined4 *)&(this->NonParallelTranslatorQueueTasks).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NonParallelTranslatorQueueTasks).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NonParallelTranslatorQueueTasks);
  *(undefined4 *)&(this->NonParallelTranslatorLocks).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NonParallelTranslatorLocks).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NonParallelTranslatorLocks);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreDestroyInterchangeManager).field_0x8,
             *(int *)&(this->OnPreDestroyInterchangeManager).field_0x10);
  pvVar3 = *(void **)&(this->OnPreDestroyInterchangeManager).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreDestroyInterchangeManager);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSanitizeName).field_0x28,*(int *)&(this->OnSanitizeName).field_0x30);
  pvVar3 = *(void **)&(this->OnSanitizeName).field_0x28;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OnSanitizeName);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnImportFinished).field_0x8,*(int *)&(this->OnImportFinished).field_0x10);
  pvVar3 = *(void **)&(this->OnImportFinished).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnImportFinished);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnImportStarted).field_0x8,*(int *)&(this->OnImportStarted).field_0x10);
  pvVar3 = *(void **)&(this->OnImportStarted).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnImportStarted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBatchImportComplete).field_0x8,
             *(int *)&(this->OnBatchImportComplete).field_0x10);
  pvVar3 = *(void **)&(this->OnBatchImportComplete).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBatchImportComplete);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAssetPostReimport).field_0x8,*(int *)&(this->OnAssetPostReimport).field_0x10
            );
  pvVar3 = *(void **)&(this->OnAssetPostReimport).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAssetPostReimport);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAssetPostImport).field_0x8,*(int *)&(this->OnAssetPostImport).field_0x10);
  pvVar3 = *(void **)&(this->OnAssetPostImport).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAssetPostImport);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e4dd9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall `UInterchangeManager::StartQueuedTasks'::__l2::<lambda_1>::operator()(void *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  longlong lVar3;
  FAsyncTaskNotification *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FImportAsyncHelper *pFVar7;
  bool bVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> **ppTVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_238 [56];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  ForAnyElementType FStack_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  FSlateBrush *local_1a8;
  FLogCategoryBase *pFStack_1a0;
  TReferenceControllerBase<1> *local_198;
  FSharedReferencer<1> FStack_190;
  FText local_188;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> local_178;
  undefined1 local_168 [72];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  int local_110;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  if (**(ulong64 **)((longlong)this + 8) != GFrameCounter) {
    **(ulong64 **)((longlong)this + 8) = GFrameCounter;
    lVar3 = *(longlong *)this;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x210);
    if (*(longlong *)(lVar3 + 0x248) == 0) {
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_14e4de1a9;
      EnterCriticalSection(lpCriticalSection);
      iVar1 = *(int *)(lVar3 + 0x240);
      LeaveCriticalSection(lpCriticalSection);
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      pTVar11 = pTVar14;
      if (0 < iVar1) {
        do {
          UInterchangeManager::GetImportTaskForIndex
                    (*(UInterchangeManager **)this,&local_178,(int)pTVar11);
          pFVar7 = local_178.Object;
          if (local_178.Object != (FImportAsyncHelper *)0x0) {
            if ((local_178.Object == (FImportAsyncHelper *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pFVar7->TaskData).bIsAutomated == false) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_178.SharedReferenceCount.ReferenceController);
              FText::AsLocalizable_Advanced_LocText
                        (&local_188,L"Interchange",L"Asynchronous_import_start",L"Importing");
              FText::FText((FText *)local_238);
              FText::FText((FText *)(local_238 + 0x10));
              uVar6 = local_238._0_8_;
              local_1f0 = 0;
              local_1d0 = 0;
              local_1b0 = 0;
              local_238._32_4_ = 0.5;
              local_238._36_4_ = 2.0;
              local_238._40_4_ = 1.0;
              local_238[0x30] = false;
              local_238[0x31] = true;
              local_1e8[0] = false;
              local_1e8[1] = true;
              local_1c8[0] = false;
              local_1c8[1] = true;
              local_238[0x2c] = false;
              local_200.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_1f8.Data = (FScriptContainerElement *)0x0;
              local_1e0.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_1d8.Data = (FScriptContainerElement *)0x0;
              local_1c0.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_1b8.Data = (FScriptContainerElement *)0x0;
              local_1a8 = (FSlateBrush *)0x0;
              pFStack_1a0 = (FLogCategoryBase *)0x0;
              if ((ITextData *)local_238._0_8_ != local_188.TextData.Reference) {
                local_238._0_8_ = local_188.TextData.Reference;
                if (local_188.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_188.TextData.Reference + 8))
                            (local_188.TextData.Reference,local_res8);
                }
                if ((ITextData *)uVar6 != (ITextData *)0x0) {
                  (**(code **)((longlong)*(ITextData *)uVar6 + 0x10))(uVar6);
                }
              }
              local_238._8_4_ = local_188.Flags;
              pFStack_1a0 = (FLogCategoryBase *)&LogInterchangeEngine;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_200,(FWriteAccessScope *)&local_108);
              if (((int)local_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_1f8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_1f8,0,0,0x10);
                local_1f0 = local_1f0 & 0xffffffff00000000;
              }
              if (local_108.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
              }
              local_238[0x30] = true;
              local_238[0x31] = true;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_1e0,(FWriteAccessScope *)&local_f0);
              if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_1d8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_1d8,0,0,0x10);
                local_1d0 = local_1d0 & 0xffffffff00000000;
              }
              if (local_f0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
              }
              local_1e8[0] = false;
              local_1e8[1] = true;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_1c0,(FWriteAccessScope *)&local_d8);
              if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_1b8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_1b8,0,0,0x10);
                local_1b0 = local_1b0 & 0xffffffff00000000;
              }
              if (local_d8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
              }
              local_1c8[0] = false;
              local_1c8[1] = true;
              pTVar11 = ::operator_new(0x20);
              if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
                local_198 = ___xmm_00000000000000000000000000000010;
                pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
                FStack_190.ReferenceController = _UNK_150651568;
              }
              else {
                pTVar11->SharedReferenceCount = (atomic<int>)0x1;
                pTVar11->WeakReferenceCount = (atomic<int>)0x1;
                pTVar11->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFAsyncTaskNotification___00_SharedPointerInternals__6B_
                ;
                FAsyncTaskNotification::FAsyncTaskNotification
                          ((FAsyncTaskNotification *)(pTVar11 + 1),
                           (FAsyncTaskNotificationConfig *)local_238);
                pTVar15 = pTVar11 + 1;
                if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                LOCK();
                pTVar11->SharedReferenceCount =
                     (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                UNLOCK();
                FStack_190.ReferenceController = pTVar11;
                pTVar14 = pTVar11;
                local_198 = pTVar15;
              }
              lVar3 = *(longlong *)this;
              ppTVar12 = (TReferenceControllerBase<1> **)(lVar3 + 0x248);
              if (ppTVar12 != &local_198) {
                *ppTVar12 = pTVar15;
                local_198 = (TReferenceControllerBase<1> *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)(lVar3 + 0x250),&FStack_190);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FStack_190.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar14);
              lVar3 = *(longlong *)this;
              if ((*(longlong *)(lVar3 + 0x248) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = *(FAsyncTaskNotification **)(lVar3 + 0x248);
              pFVar9 = FText::GetEmpty();
              local_168[0] = Pending;
              local_168._8_8_ = local_188.TextData.Reference;
              if (local_188.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_188.TextData.Reference + 8))
                          (local_188.TextData.Reference,local_res10);
              }
              local_168._16_4_ = local_188.Flags;
              local_168._24_8_ = (pFVar9->TextData).Reference;
              if ((ITextData *)local_168._24_8_ != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_168._24_8_ + 8))
                          (local_168._24_8_,local_res18);
              }
              local_168._32_4_ = pFVar9->Flags;
              FText::FText((FText *)(local_168 + 0x28));
              FText::FText((FText *)(local_168 + 0x38));
              local_110 = 0;
              local_120.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_118.Data = (FScriptContainerElement *)0x0;
              FAsyncTaskNotification::SetNotificationState
                        (pFVar4,(FAsyncNotificationStateData *)local_168);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_120,(FWriteAccessScope *)&local_c0);
              if ((local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_118.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_118,0,0,0x10);
                local_110 = 0;
              }
              if (local_c0.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
              }
              if (FStack_118.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_118.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector)
              ;
              if ((ITextData *)local_168._56_8_ != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_168._56_8_ + 0x10))();
              }
              if ((ITextData *)local_168._40_8_ != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_168._40_8_ + 0x10))();
              }
              if ((ITextData *)local_168._24_8_ != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_168._24_8_ + 0x10))();
              }
              if ((ITextData *)local_168._8_8_ != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_168._8_8_ + 0x10))();
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_1c0,(FWriteAccessScope *)&local_a8);
              if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_1b8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_1b8,0,0,0x10);
                local_1b0 = local_1b0 & 0xffffffff00000000;
              }
              if (local_a8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
              }
              if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_1b8.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector)
              ;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_1e0,(FWriteAccessScope *)&local_90);
              if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_1d8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_1d8,0,0,0x10);
                local_1d0 = local_1d0 & 0xffffffff00000000;
              }
              if (local_90.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
              }
              if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_1d8.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector)
              ;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_200,(FWriteAccessScope *)&local_78);
              if (((int)local_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_1f8.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_1f8,0,0,0x10);
                local_1f0 = local_1f0 & 0xffffffff00000000;
              }
              if (local_78.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
              }
              if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_1f8.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_200.AccessDetector)
              ;
              if ((ITextData *)local_238._16_8_ != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_238._16_8_ + 0x10))();
              }
              if ((ITextData *)local_238._0_8_ != (ITextData *)0x0) {
                (**(code **)((longlong)*(ITextData *)local_238._0_8_ + 0x10))();
              }
              if (local_188.TextData.Reference == (ITextData *)0x0) {
                return;
              }
              (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
              return;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.SharedReferenceCount.ReferenceController);
          uVar13 = (int)pTVar11 + 1;
          pTVar11 = (TReferenceControllerBase<1> *)(ulonglong)uVar13;
        } while ((int)uVar13 < iVar1);
      }
    }
    else {
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
LAB_14e4de1a9:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      iVar1 = *(int *)(lVar3 + 0x240);
      LeaveCriticalSection(lpCriticalSection);
      lVar3 = *(longlong *)this;
      iVar2 = *(int *)(lVar3 + 0x1e0);
      if ((*(longlong *)(lVar3 + 0x248) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = *(FAsyncTaskNotification **)(lVar3 + 0x248);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_50,L"Interchange",L"Asynchronous_pending_import_tasks",
                          L"Importing ({0})");
      pFVar10 = FTextFormat::FTextFormat(&local_40,pFVar9,Default);
      pFVar9 = FText::Format<int>(&local_60,pFVar10,iVar2 + iVar1);
      FAsyncTaskNotification::SetProgressText(pFVar4,pFVar9);
      if (local_60.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
      }
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

// operator() @ 14e4de370

bool __thiscall
`UInterchangeManager::EnqueuePostImportTask'::__l8::<lambda_1>::operator()(void *this,float param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined8 *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28 [2];
  
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                          ,0xa20,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  lVar4 = **(longlong **)(*(longlong *)this + 0x1f8);
  while ((lVar4 != 0 && (**(longlong **)(*(longlong *)this + 0x1d8) == 0))) {
    lVar4 = *(longlong *)this;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x210);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    iVar3 = *(int *)(lVar4 + 0x240);
    LeaveCriticalSection(lpCriticalSection);
    if (0 < iVar3) break;
    lVar4 = *(longlong *)this;
    local_48 = (undefined8 *)0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    lVar5 = **(longlong **)(lVar4 + 0x1f8);
    if (lVar5 != 0) {
      ppuVar1 = (undefined8 **)(lVar5 + 8);
      if (&local_48 != ppuVar1) {
        local_48 = *ppuVar1;
        *ppuVar1 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_40,(FSharedReferencer<1> *)(lVar5 + 0x10));
      }
      pvVar6 = *(void **)(lVar4 + 0x1f8);
      *(longlong *)(lVar4 + 0x1f8) = lVar5;
      local_38 = (undefined8 *)0x0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (ppuVar1 != &local_38) {
        *ppuVar1 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar5 + 0x10),&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      if (pvVar6 != (void *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar6 + 0x10));
        ::operator_delete(pvVar6,0x18);
      }
      puVar9 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        if ((local_48 == (undefined8 *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        (**(code **)*puVar9)(puVar9);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    lVar4 = **(longlong **)(*(longlong *)this + 0x1f8);
  }
  if (**(longlong **)(*(longlong *)this + 0x1f8) == 0) {
    lVar4 = *(longlong *)this;
    if ((undefined8 *)(lVar4 + 0x200) != local_28) {
      plVar7 = *(longlong **)(lVar4 + 0x208);
      *(undefined8 *)(lVar4 + 0x200) = 0;
      *(undefined8 *)(lVar4 + 0x208) = 0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  return bVar10;
}

// operator() @ 14e4de5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UInterchangeManager::ReleaseAsyncHelper'::__l10::<lambda_1>::operator()
          (void *this,TArray<UInterchangeResult_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UInterchangeResult *this_00;
  int iVar3;
  FText *pFVar4;
  TRefCountPtr<ITextData> TVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FText local_38;
  FText local_28;
  
  if ((**(char **)this == '\0') || (*(char *)((longlong)this + 0x10) != '\0')) {
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + param_1->ArrayNum;
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UInterchangeResult_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      this_00 = *(UInterchangeResult **)pFVar6;
      if (this_00 == (UInterchangeResult *)0x0) {
LAB_14e4de706:
        pFVar6 = pFVar6 + 8;
      }
      else {
        iVar3 = (**(code **)(this_00->_padding_ + 0x2b0))(this_00);
        if (iVar3 != 0) {
          if (*(char *)((longlong)this + 0x10) != '\0') {
            iVar3 = (**(code **)(this_00->_padding_ + 0x2b0))(this_00);
            if (iVar3 == 1) {
              if (2 < (byte)LogInterchangeEngine._0_1_) {
                pFVar4 = UInterchangeResult::GetMessageLogText(this_00,&local_28);
                FText::ToString(pFVar4);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
                TVar5.Reference = local_28.TextData.Reference;
                goto LAB_14e4de6fb;
              }
            }
            else if ((iVar3 == 2) && (1 < (byte)LogInterchangeEngine._0_1_)) {
              pFVar4 = UInterchangeResult::GetMessageLogText(this_00,&local_38);
              FText::ToString(pFVar4);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
              TVar5.Reference = local_38.TextData.Reference;
LAB_14e4de6fb:
              if (TVar5.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*TVar5.Reference + 0x10))();
              }
            }
          }
          goto LAB_14e4de706;
        }
        pFVar6 = pFVar6 + 8;
        **(undefined1 **)this = 1;
      }
    }
  }
  return;
}

// operator() @ 14e4df0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_> *
__thiscall
`UInterchangeManager::ImportInternal'::__l2::<lambda_2>::operator()
          (void *this,
          TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar5;
  TSharedRef<UE::Interchange::FImportResult,1> *pTVar6;
  TSharedRef<UE::Interchange::FImportResult,1> *pTVar7;
  TSharedRef<UE::Interchange::FImportResult,1> local_28;
  TSharedRef<UE::Interchange::FImportResult,1> local_18;
  
  plVar1 = (longlong *)**(undefined8 **)this;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  UE::Interchange::FAnalyticsHelper::SendAnalytics((FAnalyticsHelper *)*plVar1);
  pTVar6 = MakeShared<UE::Interchange::FImportResult,1>(&local_18);
  pTVar7 = MakeShared<UE::Interchange::FImportResult,1>(&local_28);
  *(FImportResult **)__return_storage_ptr__ = pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FImportResult **)&__return_storage_ptr__->field_0x10 = pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x18 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  UE::Interchange::FImportResult::SetDone(*(FImportResult **)__return_storage_ptr__);
  UE::Interchange::FImportResult::SetDone(*(FImportResult **)&__return_storage_ptr__->field_0x10);
  return __return_storage_ptr__;
}

// operator() @ 14e4df300

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
`UInterchangeManager::GetInterchangeManager'::__l5::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  undefined1 *lpCriticalSection;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TStrongObjectPtr<UInterchangeManager,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FInterchangeTaskSystem *this_00;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForAnyElementType *this_01;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined8 local_58 [2];
  FDestructionSentinel local_48;
  
  if (InterchangeManager.Object == (UObject *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6687235758857649068>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                       ,0x454,"InterchangeManager.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_00 = UE::Interchange::FInterchangeTaskSystem::Get();
    lVar3 = *(longlong *)this;
    uVar11 = 0;
    if (lVar3 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      uVar12 = uVar11;
      if (0 < *(int *)&(this_00->OnTaskSystemTick).field_0x10) {
        do {
          uVar10 = (uint)uVar11;
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(this_00->OnTaskSystemTick).field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          this_01 = (ForAnyElementType *)
                    (*(longlong *)&(this_00->OnTaskSystemTick).field_0x8 + uVar12);
          if (((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
             && (plVar9 = (longlong *)(**(code **)(*(longlong *)this_01->Data + 0x40))(),
                *plVar9 == lVar3)) {
            if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_01->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10)
              ;
              *(undefined4 *)&this_01[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
            break;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          uVar12 = uVar12 + 0x10;
        } while ((int)(uVar10 + 1) < *(int *)&(this_00->OnTaskSystemTick).field_0x10);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    cVar7 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
    if (cVar7 != '\0') {
      if ((InterchangeManager.Object == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UInterchangeManager::WaitUntilAllTasksDone
                ((UInterchangeManager *)InterchangeManager.Object,true);
    }
    if ((InterchangeManager.Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar5.Object = InterchangeManager.Object;
    lpCriticalSection = &InterchangeManager.Object[0xd].field_0x8;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = *(int *)&TVar5.Object[0xe].field_0x10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((iVar2 != 0) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6687235758857649050>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                           ,0x466,"InterchangeManager->GetImportTaskCount() == 0"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((InterchangeManager.Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &InterchangeManager.Object[6].field_0x18);
    if ((InterchangeManager.Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(longlong *)&InterchangeManager.Object[0xc].field_0x20 != 0) &&
        (*(longlong *)(InterchangeManager.Object + 0xd) != 0)) &&
       (0 < *(int *)(*(longlong *)(InterchangeManager.Object + 0xd) + 8))) {
      if ((InterchangeManager.Object == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68.Object = *(FElement **)&InterchangeManager.Object[0xc].field_0x20;
      local_68.WeakReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(InterchangeManager.Object + 0xd);
      if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_68);
      if ((InterchangeManager.Object == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TVar5.Object = InterchangeManager.Object;
      if ((undefined8 *)&InterchangeManager.Object[0xc].field_0x20 != local_58) {
        plVar9 = *(longlong **)(InterchangeManager.Object + 0xd);
        *(undefined8 *)&InterchangeManager.Object[0xc].field_0x20 = 0;
        *(undefined8 *)(TVar5.Object + 0xd) = 0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    if ((InterchangeManager.Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar5.Object = InterchangeManager.Object;
    if (*(UObject **)&InterchangeManager.Object[0x17].field_0x10 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject
                (*(UObject **)&InterchangeManager.Object[0x17].field_0x10);
      *(undefined8 *)&TVar5.Object[0x17].field_0x10 = 0;
    }
    if (InterchangeManager.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(InterchangeManager.Object);
      InterchangeManager.Object = (UObject *)0x0;
    }
  }
  InterchangeManagerScopeOfLifeEnded = true;
  return;
}

// operator() @ 14e4dff60

void __thiscall
`UInterchangeManager::ImportInternal'::__l2::<lambda_8>::operator()
          (void *this,UInterchangePipelineBase *param_1)

{
  int iVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 local_28 [8];
  undefined8 local_20;
  UObject *local_18;
  UObject *local_10;
  
  if (*(char *)this == '\0') {
    uVar3 = 1;
    if (*(char *)((longlong)this + 1) != '\0') {
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 2;
    if (*(char *)((longlong)this + 1) != '\0') {
      uVar3 = 4;
    }
  }
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&param_1->ContentImportPath,(wchar_t *)**(undefined8 **)((longlong)this + 0x18),iVar4);
  local_20 = 0;
  local_18 = *(UObject **)(*(longlong *)((longlong)this + 8) + 8);
  local_28[0] = uVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  pUVar2 = *(UObject **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_10 = pUVar2;
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_28);
  iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0x20);
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&param_1->DestinationName,*(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x18),iVar4
            );
  return;
}

// AddImportTask @ 14e4e1ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UInterchangeManager::AddImportTask
          (UInterchangeManager *this,TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if (param_1->Object == (FImportAsyncHelper *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return -1;
  }
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar8 = &this->ImportTasks;
    pTVar2 = (TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *)(pTVar8->AllocatorInstance).Data;
    if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->ImportTasks).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    iVar7 = (this->ImportTasks).ArrayNum;
    piVar1 = &(this->ImportTasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar8->AllocatorInstance,piVar1);
    }
    (this->ImportTasks).ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar8->AllocatorInstance).Data;
    *(FImportAsyncHelper **)(pFVar3 + (longlong)iVar7 * 0x10) = param_1->Object;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CanReimport @ 14e4e5480

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
UInterchangeManager::CanReimport
          (UInterchangeManager *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  TStrongObjectPtr<UInterchangeSourceData,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  char cVar3;
  UClass *this_00;
  UInterchangeFactoryBase *pUVar4;
  UInterchangeTranslatorBase *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res20 [8];
  TStrongObjectPtr<UInterchangeSourceData,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  local_38 [2];
  
  cVar3 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  if ((cVar3 != '\0') &&
     (this_00 = GetRegisteredFactoryClass(this,*(UClass **)&param_1->field_0x10),
     this_00 != (UClass *)0x0)) {
    pUVar4 = UClass::GetDefaultObject<UInterchangeFactoryBase>(this_00);
    cVar3 = (**(code **)(pUVar4->_padding_ + 0x318))(pUVar4,param_1);
    if (cVar3 != '\0') {
      iVar1 = param_2->ArrayNum;
      pFVar7 = (param_2->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar7 == pFVar6) break;
        UE::Interchange::FScopedSourceData::FScopedSourceData
                  ((FScopedSourceData *)local_38,(FString *)pFVar7);
        cVar3 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
        TVar2.Object = local_38[0].Object;
        if ((cVar3 != '\0') &&
           (pUVar5 = GetTranslatorForSourceData(this,(UInterchangeSourceData *)local_38[0].Object),
           pUVar5 != (UInterchangeTranslatorBase *)0x0)) {
          (**(code **)(pUVar5->_padding_ + 0x2e0))(pUVar5);
          if ((UInterchangeSourceData *)TVar2.Object != (UInterchangeSourceData *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject(TVar2.Object);
          }
          return true;
        }
        if ((UInterchangeSourceData *)TVar2.Object != (UInterchangeSourceData *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(TVar2.Object);
          local_38[0].Object = (UObject *)0x0;
        }
        pFVar7 = pFVar7 + 0x10;
      }
      DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
    }
  }
  return false;
}

// CanTranslateSourceData @ 14e4e55e0

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
UInterchangeManager::CanTranslateSourceData
          (UInterchangeManager *this,UInterchangeSourceData *param_1,bool param_2)

{
  char cVar1;
  UInterchangeTranslatorBase *pUVar2;
  
  cVar1 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  if (cVar1 != '\0') {
    pUVar2 = GetTranslatorForSourceData(this,param_1);
    if (pUVar2 != (UInterchangeTranslatorBase *)0x0) {
      (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2);
      if (param_2) {
        cVar1 = (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2);
        return cVar1 == '\x06';
      }
      return true;
    }
  }
  return false;
}

// CanTranslateSourceDataWithPayloadInterface @ 14e4e5690

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
UInterchangeManager::CanTranslateSourceDataWithPayloadInterface
          (UInterchangeManager *this,UInterchangeSourceData *param_1,UClass *param_2)

{
  UInterchangeTranslatorBase *pUVar1;
  
  pUVar1 = GetTranslatorSupportingPayloadInterfaceForSourceData(this,param_1,param_2);
  return pUVar1 != (UInterchangeTranslatorBase *)0x0;
}

// CanUseTranslator @ 14e4e56b0

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
UInterchangeManager::CanUseTranslator(UInterchangeManager *this,UInterchangeTranslatorBase *param_1)

{
  char cVar1;
  TTuple<UClass_*,bool> *pTVar2;
  char *pcVar3;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  if (cVar1 == '\0') {
    pTVar2 = TSet<TTuple<UClass_*,bool>,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UClass_*,bool>,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>,FDefaultSetAllocator>
                     *)&this->NonParallelTranslatorLocks,(UClass *)param_1->_padding_);
    pcVar3 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<UClass_*,bool> *)0x0) {
      pcVar3 = (char *)0x0;
    }
    if (pcVar3 != (char *)0x0) {
      return *pcVar3 == '\0';
    }
  }
  return true;
}

// CancelAllTasks @ 14e4e5730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInterchangeManager::CancelAllTasks(UInterchangeManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  FImportAsyncHelper *pFVar9;
  TMap<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> local_c8;
  TMap<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,0>_>
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
  TMap<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                          ,0xbf7,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  StartQueuedTasks(this,true);
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = (this->ImportTasks).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar13 = 0;
  if (0 < iVar4) {
    do {
      GetImportTaskForIndex(this,&local_c8,iVar13);
      pFVar9 = local_c8.Object;
      if (local_c8.Object != (FImportAsyncHelper *)0x0) {
        if ((local_c8.Object == (FImportAsyncHelper *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        pFVar9->bCancel = (atomic<bool>)0x1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar1 = &(this->NonParallelTranslatorQueueTasks).field_0x10;
  iStack_b0 = 0;
  iVar4 = *(int *)&(this->NonParallelTranslatorQueueTasks).field_0x28;
  pTVar2 = &this->NonParallelTranslatorQueueTasks;
  local_98 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->NonParallelTranslatorQueueTasks).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14e4e58dd;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_ac = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iStack_9c = local_98 + -1 + local_res10;
    if (iVar4 < iStack_9c) {
      iStack_9c = iVar4;
    }
  }
LAB_14e4e58dd:
  uVar15 = *(uint *)&(this->NonParallelTranslatorQueueTasks).field_0x28;
  uStack_94 = local_3c;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_90 = *(int *)&(this->NonParallelTranslatorQueueTasks).field_0x8 -
              *(int *)&(this->NonParallelTranslatorQueueTasks).field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar2;
  local_a8 = puVar1;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->NonParallelTranslatorQueueTasks).field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->NonParallelTranslatorQueueTasks).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e4e59f0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar15 = local_res18 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14e4e59f0:
  while( true ) {
    pTVar10 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar15) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    break;
    lVar12 = *(longlong *)pTVar10 + (longlong)TStack_80.CurrentBitIndex * 0x20;
    iVar4 = *(int *)(lVar12 + 0x10);
    if (iVar4 != 0) {
      if ((iVar4 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar6 = *(longlong **)(lVar12 + 8);
      pTVar7 = (TReferenceControllerBase<1> *)plVar6[1];
      lVar12 = *plVar6;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar12 != 0) {
        LOCK();
        *(undefined1 *)(lVar12 + 0x170) = 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  this->bImportCanceled = true;
  return;
}

// ConvertImportData @ 14e4e6510

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
UInterchangeManager::ConvertImportData(UInterchangeManager *this,UObject *param_1,FString *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  FString *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res10 [8];
  FString *local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 != (UObject *)0x0) {
    iVar18 = 0;
    puVar1 = &(this->RegisteredConverters).field_0x10;
    uVar11 = 1;
    iVar4 = *(int *)&(this->RegisteredConverters).field_0x28;
    iVar16 = 0;
    iVar12 = 0;
    if (iVar4 != 0) {
      puVar19 = *(uint **)&(this->RegisteredConverters).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar15 = *puVar19;
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar18;
        iVar16 = iVar16 + 0x20;
        iVar18 = iVar18 + 1;
        iVar12 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e4e65cd;
        uVar15 = puVar19[lVar13 + 1];
      }
      uVar11 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      iVar12 = local_res20 + -1 + iVar16;
      if (iVar4 < iVar12) {
        iVar12 = iVar4;
      }
    }
LAB_14e4e65cd:
    uVar15 = *(uint *)&(this->RegisteredConverters).field_0x28;
    uVar14 = uVar15 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar11,iVar18);
    TStack_60.CurrentBitIndex = iVar12;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar15 >> 5;
    TStack_60._28_4_ = iVar12;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->RegisteredConverters).field_0x8 -
                         *(int *)&(this->RegisteredConverters).field_0x34);
    local_res18 = param_2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pFVar7 = local_res18;
    uVar11 = *(uint *)&(this->RegisteredConverters).field_0x28;
    if (uVar15 != uVar11) {
      puVar17 = *(undefined1 **)&(this->RegisteredConverters).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar18;
        uVar14 = uVar14 + 0x20;
        iVar18 = iVar18 + 1;
        uVar15 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14e4e66e0;
        uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar15 = (int)lVar13 + -1 + uVar14;
      if ((int)uVar11 < (int)uVar15) {
        uVar15 = uVar11;
      }
    }
LAB_14e4e66e0:
    while( true ) {
      if (*(int *)&(this->RegisteredConverters).field_0x8 -
          *(int *)&(this->RegisteredConverters).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeAssetImportDataConverterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar15) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      puVar2 = (undefined8 *)
               (*(longlong *)&this->RegisteredConverters +
               (longlong)TStack_60.CurrentBitIndex * 0x18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 = (UObject *)*puVar2, pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pUVar5 = (UObject *)puVar2[1];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      cVar10 = (**(code **)(*(longlong *)pUVar5 + 0x2c0))(pUVar5,param_1,pFVar7);
      if (cVar10 != '\0') {
        return true;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return false;
}

// ConvertImportData @ 14e4e67a0

/* WARNING: Removing unreachable block (ram,0x00014e4e6e66) */
/* WARNING: Removing unreachable block (ram,0x00014e4e6d22) */
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
UInterchangeManager::ConvertImportData
          (UInterchangeManager *this,UObject *param_1,FImportAssetParameters *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  UInterchangePipelineBase *pUVar5;
  FName FVar6;
  code *pcVar7;
  UInterchangeAssetImportData *this_00;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  UClass *pUVar14;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar15;
  TTuple<FName,FInterchangePipelineStack> *pTVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  FName *pFVar19;
  FSoftObjectPath *pFVar20;
  FSoftObjectPath *pFVar21;
  ForAnyElementType FVar22;
  undefined1 local_res20 [8];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  UInterchangePipelineBase *local_d0;
  UInterchangePipelineBase *local_c8;
  FSoftObjectPath local_c0;
  FSoftObjectPath local_a0;
  UInterchangeAssetImportData *local_80;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_80 = (UInterchangeAssetImportData *)0x0;
  pUVar14 = UInterchangeAssetImportData::StaticClass();
  bVar8 = ConvertImportData(this,param_1,pUVar14,(UObject **)&local_80);
  this_00 = local_80;
  if (bVar8) {
    if (local_80 == (UInterchangeAssetImportData *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6687235758857648900>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                         ,0x4fc,"DestinationImportData");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    else {
      pUVar14 = UInterchangeAssetImportData::StaticClass();
      iVar12 = (int)pUVar14->_padding_;
      if (((iVar12 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
           &pUVar14->_padding_)) && (this_00 != (UInterchangeAssetImportData *)0x0)) {
        bVar8 = false;
        local_e0.Data = (FScriptContainerElement *)0x0;
        local_d8 = 0;
        pUVar14 = UInterchangeProjectSettings::StaticClass();
        if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar14);
        }
        pUVar3 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
        UInterchangeAssetImportData::ProcessPipelinesCache(this_00);
        if ((this_00->TransientPipelines).ArrayNum == 1) {
          lVar4 = *(longlong *)&pUVar3[3].field_0x10;
          uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
          if (*(int *)&pUVar3[1].field_0x18 != *(int *)&pUVar3[2].field_0x1c) {
            puVar18 = *(undefined1 **)(pUVar3 + 3);
            if (*(undefined1 **)(pUVar3 + 3) == (undefined1 *)0x0) {
              puVar18 = &pUVar3[2].field_0x20;
            }
            iVar12 = *(int *)(puVar18 +
                             (ulonglong)
                             (*(int *)&pUVar3[3].field_0x8 - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + uVar11) * 4);
            if (iVar12 != -1) {
              do {
                if (*(longlong *)(*(longlong *)&pUVar3[1].field_0x10 + (longlong)iVar12 * 0x30) ==
                    lVar4) {
                  pTVar15 = UInterchangeAssetImportData::GetPipelines(this_00,&local_68);
                  if ((pTVar15->ArrayNum < 1) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    uVar9 = (*pcVar7)();
                    return (bool)uVar9;
                  }
                  pUVar5 = *(UInterchangePipelineBase **)(pTVar15->AllocatorInstance).Data;
                  if (pUVar5 == (UInterchangePipelineBase *)0x0) {
LAB_14e4e6992:
                    local_d0 = (UInterchangePipelineBase *)0x0;
                  }
                  else {
                    pUVar14 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
                    iVar12 = (int)pUVar14->_padding_;
                    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar12) ||
                       (local_d0 = pUVar5,
                       (longlong *)
                       *(undefined1 **)
                        (*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
                       &pUVar14->_padding_)) goto LAB_14e4e6992;
                  }
                  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.AllocatorInstance.Data);
                  }
                  if (local_d0 != (UInterchangePipelineBase *)0x0) {
                    FVar6.ComparisonIndex.Value = *(uint *)&pUVar3[3].field_0x10;
                    FVar6.Number = *(uint *)&pUVar3[3].field_0x14;
                    lVar4 = local_d0->_padding_;
                    pTVar16 = TSet<TTuple<FName,FInterchangePipelineStack>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>,FDefaultSetAllocator>
                              ::Find((TSet<TTuple<FName,FInterchangePipelineStack>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelineStack,0>,FDefaultSetAllocator>
                                      *)&pUVar3[1].field_0x10,FVar6);
                    if ((pTVar16 == (TTuple<FName,FInterchangePipelineStack> *)0x0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Pair != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                            ,0x27b,L""), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      uVar9 = (*pcVar7)();
                      return (bool)uVar9;
                    }
                    iVar12 = *(int *)&pTVar16->field_0x10;
                    pFVar20 = *(FSoftObjectPath **)&pTVar16->field_0x8;
                    pFVar21 = pFVar20 + iVar12;
                    goto LAB_14e4e6a10;
                  }
                  break;
                }
                iVar12 = *(int *)(*(longlong *)&pUVar3[1].field_0x10 + 0x28 +
                                 (longlong)iVar12 * 0x30);
              } while (iVar12 != -1);
            }
          }
        }
LAB_14e4e6d37:
        UInterchangeAssetImportData::GetPipelines(this_00,&local_78);
        iVar12 = local_78.ArrayNum;
        uVar17 = (ulonglong)local_78.ArrayNum;
        pFVar2 = local_78.AllocatorInstance.Data + uVar17 * 8;
        FVar22.Data = local_78.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar17 != iVar12) {
            local_e7[0] = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_e7);
          }
          if (FVar22.Data == pFVar2) break;
          local_a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_a0.AssetPath.PackageName.Number = 0;
          local_a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_a0.AssetPath.AssetName.Number = 0;
          local_a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.SubPathString.Data.ArrayNum = 0;
          local_a0.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_a0,*(UObject **)FVar22.Data);
          pFVar20 = (FSoftObjectPath *)(param_2->OverridePipelines).AllocatorInstance.Data;
          if (((pFVar20 <= &local_a0) &&
              (&local_a0 < pFVar20 + (param_2->OverridePipelines).ArrayMax)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          iVar13 = (param_2->OverridePipelines).ArrayNum;
          piVar1 = &(param_2->OverridePipelines).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&(param_2->OverridePipelines).AllocatorInstance,piVar1);
          }
          (param_2->OverridePipelines).ArrayNum = iVar13 + 1;
          pFVar19 = (FName *)((param_2->OverridePipelines).AllocatorInstance.Data +
                             (longlong)iVar13 * 0x20);
          *pFVar19 = local_a0.AssetPath.PackageName;
          pFVar19[1] = local_a0.AssetPath.AssetName;
          pFVar19[2].ComparisonIndex = 0;
          pFVar19[2].Number = 0;
          pFVar19[2] = (FName)local_a0.SubPathString.Data.AllocatorInstance.Data;
          local_a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar19[3].ComparisonIndex.Value = local_a0.SubPathString.Data.ArrayNum;
          pFVar19[3].Number = local_a0.SubPathString.Data.ArrayMax;
          local_a0.SubPathString.Data.ArrayNum = 0;
          local_a0.SubPathString.Data.ArrayMax = 0;
          uVar17 = (ulonglong)(uint)local_78.ArrayNum;
          FVar22.Data = FVar22.Data + 8;
        }
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
LAB_14e4e6e85:
        if (local_e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data);
        }
        return true;
      }
    }
  }
  return false;
LAB_14e4e6a10:
  if (*(int *)&pTVar16->field_0x10 != iVar12) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res20);
  }
  if (pFVar20 == pFVar21) {
    if (bVar8) {
      iVar12 = (int)local_d8;
      uVar17 = (ulonglong)(int)local_d8;
      pFVar2 = local_e0.Data + uVar17 * 8;
      FVar22.Data = local_e0.Data;
      while( true ) {
        if ((int)uVar17 != iVar12) {
          local_e8 = 0;
          `TCheckedPointerIterator<UInterchangePipelineBase_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_e8);
        }
        if (FVar22.Data == pFVar2) break;
        local_c0.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_c0.AssetPath.PackageName.Number = 0;
        local_c0.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_c0.AssetPath.AssetName.Number = 0;
        local_c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.SubPathString.Data.ArrayNum = 0;
        local_c0.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_c0,(UObject *)*(UInterchangePipelineBase **)FVar22.Data);
        pFVar20 = (FSoftObjectPath *)(param_2->OverridePipelines).AllocatorInstance.Data;
        if (((pFVar20 <= &local_c0) && (&local_c0 < pFVar20 + (param_2->OverridePipelines).ArrayMax)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        iVar13 = (param_2->OverridePipelines).ArrayNum;
        piVar1 = &(param_2->OverridePipelines).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(param_2->OverridePipelines).AllocatorInstance,piVar1);
        }
        (param_2->OverridePipelines).ArrayNum = iVar13 + 1;
        pFVar19 = (FName *)((param_2->OverridePipelines).AllocatorInstance.Data +
                           (longlong)iVar13 * 0x20);
        *pFVar19 = local_c0.AssetPath.PackageName;
        pFVar19[1] = local_c0.AssetPath.AssetName;
        pFVar19[2].ComparisonIndex = 0;
        pFVar19[2].Number = 0;
        pFVar19[2] = (FName)local_c0.SubPathString.Data.AllocatorInstance.Data;
        local_c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar19[3].ComparisonIndex.Value = local_c0.SubPathString.Data.ArrayNum;
        pFVar19[3].Number = local_c0.SubPathString.Data.ArrayMax;
        local_c0.SubPathString.Data.ArrayNum = 0;
        local_c0.SubPathString.Data.ArrayMax = 0;
        uVar17 = local_d8 & 0xffffffff;
        FVar22.Data = FVar22.Data + 8;
      }
      goto LAB_14e4e6e85;
    }
    goto LAB_14e4e6d37;
  }
  local_c8 = UE::Interchange::GeneratePipelineInstance(pFVar20);
  if (local_c8 == (UInterchangePipelineBase *)0x0) {
LAB_14e4e6bee:
    pFVar20 = pFVar20 + 1;
  }
  else {
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_58[0] = 1;
    (**(code **)(local_c8->_padding_ + 0x2c0))(local_c8,local_58);
    iVar13 = *(int *)(lVar4 + 0x38);
    if ((*(int *)(local_c8->_padding_ + 0x38) < iVar13) ||
       (*(longlong *)(*(longlong *)(local_c8->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
        lVar4 + 0x30)) {
      if ((local_e0.Data <= (FScriptContainerElement *)&local_c8) &&
         (((FScriptContainerElement *)&local_c8 < local_e0.Data + (longlong)local_d8._4_4_ * 8 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar13 = (int)local_d8;
      if ((int)local_d8 == local_d8._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_e0,(int *)((longlong)&local_d8 + 4));
      }
      local_d8 = CONCAT44(local_d8._4_4_,iVar13 + 1);
      *(UInterchangePipelineBase **)(local_e0.Data + (longlong)iVar13 * 8) = local_c8;
      goto LAB_14e4e6bee;
    }
    bVar8 = true;
    if (((local_e0.Data <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 < local_e0.Data + (longlong)local_d8._4_4_ * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    iVar13 = (int)local_d8;
    if ((int)local_d8 == local_d8._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_e0,(int *)((longlong)&local_d8 + 4));
    }
    pFVar20 = pFVar20 + 1;
    local_d8 = CONCAT44(local_d8._4_4_,iVar13 + 1);
    *(UInterchangePipelineBase **)(local_e0.Data + (longlong)iVar13 * 8) = local_d0;
  }
  goto LAB_14e4e6a10;
}

// ConvertImportData @ 14e4e6ed0

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
UInterchangeManager::ConvertImportData
          (UInterchangeManager *this,UObject *param_1,UClass *param_2,UObject **param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UObject *pUVar6;
  code *pcVar7;
  UObject **ppUVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  undefined1 local_res10 [16];
  UObject **local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  iVar19 = 0;
  uVar12 = 1;
  puVar1 = &(this->RegisteredConverters).field_0x10;
  iVar4 = *(int *)&(this->RegisteredConverters).field_0x28;
  iVar16 = 0;
  iVar13 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->RegisteredConverters).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar19;
      iVar16 = iVar16 + 0x20;
      iVar19 = iVar19 + 1;
      iVar13 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14e4e6f9d;
      uVar15 = puVar18[lVar14 + 1];
    }
    uVar12 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar13 = (int)lVar14 + -1 + iVar16;
    if (iVar4 < iVar13) {
      iVar13 = iVar4;
    }
  }
LAB_14e4e6f9d:
  uVar15 = *(uint *)&(this->RegisteredConverters).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar12,iVar19);
  uVar12 = uVar15 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar13;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar13;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RegisteredConverters).field_0x8 -
                       *(int *)&(this->RegisteredConverters).field_0x34);
  local_res20 = param_3;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  ppUVar8 = local_res20;
  uVar5 = *(uint *)&(this->RegisteredConverters).field_0x28;
  if (uVar15 != uVar5) {
    puVar17 = *(undefined1 **)&(this->RegisteredConverters).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar19 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar19;
      uVar12 = uVar12 + 0x20;
      iVar19 = iVar19 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14e4e70a1;
      uVar15 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = (int)lVar14 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14e4e70a1:
  do {
    if (*(int *)&(this->RegisteredConverters).field_0x8 -
        *(int *)&(this->RegisteredConverters).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UInterchangeAssetImportDataConverterBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
LAB_14e4e7156:
      return *ppUVar8 != (UObject *)0x0;
    }
    puVar2 = (undefined8 *)
             (*(longlong *)&this->RegisteredConverters + (longlong)TStack_60.CurrentBitIndex * 0x18)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (UObject *)*puVar2, pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    pUVar6 = (UObject *)puVar2[1];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    cVar11 = (**(code **)(*(longlong *)pUVar6 + 0x2b0))
                       (pUVar6,*(undefined8 *)&param_1->field_0x10,param_2);
    if ((cVar11 != '\0') &&
       (cVar11 = (**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6,param_1,param_2,ppUVar8),
       cVar11 != '\0')) goto LAB_14e4e7156;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// CreateAsyncHelper @ 14e4e71b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FImportAsyncHelper,1> * __thiscall
UInterchangeManager::CreateAsyncHelper
          (UInterchangeManager *this,
          TSharedRef<UE::Interchange::FImportAsyncHelper,1> *__return_storage_ptr__,
          FImportAsyncHelperData *param_1,FImportAssetParameters *param_2)

{
  atomic<UE::Interchange::FImportResult::EStatus> *paVar1;
  FImportAsyncHelper *pFVar2;
  FImportResult *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<UE::Interchange::FImportAsyncHelper,1> *pTVar9;
  LARGE_INTEGER local_res8;
  TWeakPtr<UE::Interchange::FImportAsyncHelper,1> local_38;
  TWeakPtr<UE::Interchange::FImportAsyncHelper,1> local_28;
  
  pTVar8 = ::operator_new(0x438);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImportAsyncHelper *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFImportAsyncHelper_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    UE::Interchange::FImportAsyncHelper::FImportAsyncHelper((FImportAsyncHelper *)(pTVar8 + 1));
    __return_storage_ptr__->Object = (FImportAsyncHelper *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if (((FImportAsyncHelper *)(pTVar8 + 1) == (FImportAsyncHelper *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<UE::Interchange::FImportAsyncHelper,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  (pFVar2->TaskData).bIsAutomated = param_1->bIsAutomated;
  (pFVar2->TaskData).bFollowRedirectors = param_1->bFollowRedirectors;
  (pFVar2->TaskData).ImportType = param_1->ImportType;
  (pFVar2->TaskData).ReimportObject = param_1->ReimportObject;
  (pFVar2->TaskData).ImportLevel = param_1->ImportLevel;
  ::FString::operator=(&(pFVar2->TaskData).DestinationName,&param_1->DestinationName);
  (pFVar2->TaskData).bReplaceExisting = param_1->bReplaceExisting;
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
             &((__return_storage_ptr__->Object->AssetImportResult).Object)->OnObjectDone,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_2->OnAssetDone);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&((__return_storage_ptr__->Object->AssetImportResult).Object)->OnObjectDoneNative,
             &param_2->OnAssetDoneNative);
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
             &((__return_storage_ptr__->Object->AssetImportResult).Object)->OnImportDone,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_2->OnAssetsImportDone);
  TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&((__return_storage_ptr__->Object->AssetImportResult).Object)->OnImportDoneNative,
              &param_2->OnAssetsImportDoneNative);
  local_38.Object = __return_storage_ptr__->Object;
  pFVar3 = ((local_38.Object)->AssetImportResult).Object;
  local_38.WeakReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  UE::Interchange::FImportResult::SetAsyncHelper(pFVar3,&local_38);
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
             &((__return_storage_ptr__->Object->SceneImportResult).Object)->OnObjectDone,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_2->OnSceneObjectDone);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&((__return_storage_ptr__->Object->SceneImportResult).Object)->OnObjectDoneNative,
             &param_2->OnSceneObjectDoneNative);
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
             &((__return_storage_ptr__->Object->SceneImportResult).Object)->OnImportDone,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_2->OnSceneImportDone);
  TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&((__return_storage_ptr__->Object->SceneImportResult).Object)->OnImportDoneNative,
              &param_2->OnSceneImportDoneNative);
  local_28.Object = __return_storage_ptr__->Object;
  pFVar3 = ((local_28.Object)->SceneImportResult).Object;
  local_28.WeakReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  UE::Interchange::FImportResult::SetAsyncHelper(pFVar3,&local_28);
  paVar1 = &((__return_storage_ptr__->Object->AssetImportResult).Object)->ImportStatus;
  LOCK();
  if (*paVar1 == (atomic<UE::Interchange::FImportResult::EStatus>)0x0) {
    *paVar1 = (atomic<UE::Interchange::FImportResult::EStatus>)0x1;
  }
  UNLOCK();
  pUVar4 = (this->EditorUtilities).Object;
  uVar7 = false;
  if (pUVar4 != (UObject *)0x0) {
    uVar7 = (**(code **)(*(longlong *)pUVar4 + 0x2b8))();
  }
  __return_storage_ptr__->Object->bRuntimeOrPIE = (bool)uVar7;
  QueryPerformanceCounter(&local_res8);
  __return_storage_ptr__->Object->TaskExecuteStarted =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  return __return_storage_ptr__;
}

// CreateSourceData @ 14e4e7890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSourceData * __cdecl UInterchangeManager::CreateSourceData(FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UInterchangeSourceData *pUVar5;
  FString *pFVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pUVar3 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UInterchangeSourceData_NoRegister();
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
  pUVar5 = (UInterchangeSourceData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((1 < (param_1->Data).ArrayNum) && (pUVar5 != (UInterchangeSourceData *)0x0)) {
    pFVar6 = FPaths::ConvertRelativePathToFull(&local_a8,param_1);
    pFVar1 = &pUVar5->Filename;
    if (pFVar1 != pFVar6) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pUVar5->Filename).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (pUVar5->Filename).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if ((pUVar5->FileContentHashCache).bIsSet != false) {
      (pUVar5->FileContentHashCache).bIsSet = false;
    }
  }
  return pUVar5;
}

// EnqueuePostImportTask @ 14e4eb3b0

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
UInterchangeManager::EnqueuePostImportTask
          (UInterchangeManager *this,TSharedPtr<FInterchangePostImportTask,1> *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  TNode *pTVar9;
  FTSTicker *this_00;
  undefined8 *puVar10;
  ulong64 uVar11;
  TWeakPtr<FTSTicker::FElement,1> *pTVar12;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar7 = IsInGameThread();
  if (bVar7) {
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TNode *)0x0) {
      pTVar9->NextNode = (TNode *)0x0;
      (pTVar9->Item).Object = param_1->Object;
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      (pTVar9->Item).SharedReferenceCount.ReferenceController = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (this->QueuedPostImportTasks).Head;
      (this->QueuedPostImportTasks).Head = pTVar9;
      pTVar5->NextNode = pTVar9;
    }
    pTVar2 = &this->QueuedPostImportTasksTickerHandle;
    if (((pTVar2->Object == (FElement *)0x0) ||
        (pTVar4 = (this->QueuedPostImportTasksTickerHandle).WeakReferenceCount.ReferenceController,
        pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
      this_00 = FTSTicker::GetCoreTicker();
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      local_20 = &local_60;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UInterchangeManager::EnqueuePostImportTask'::`8'::<lambda_1>_>
                    ::_vftable_;
        puVar10[3] = this;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      pTVar12 = FTSTicker::AddTicker
                          (this_00,&local_78,
                           (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0
                          );
      if (pTVar2 != pTVar12) {
        pTVar2->Object = pTVar12->Object;
        pTVar12->Object = (FElement *)0x0;
        pTVar4 = (this->QueuedPostImportTasksTickerHandle).WeakReferenceCount.ReferenceController;
        (this->QueuedPostImportTasksTickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar12->WeakReferenceCount).ReferenceController;
        (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_78.WeakReferenceCount.ReferenceController,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6687235758857647595>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                     ,0xa15,"IsInGameThread()");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExportAsset @ 14e4f2540

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
UInterchangeManager::ExportAsset(UInterchangeManager *this,UObject *param_1,bool param_2)

{
  return false;
}

// ExportScene @ 14e4f2550

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
UInterchangeManager::ExportScene(UInterchangeManager *this,UObject *param_1,bool param_2)

{
  return false;
}

// FindPipelineCandidate @ 14e4f4160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e4f43f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
UInterchangeManager::FindPipelineCandidate
          (UInterchangeManager *this,TArray<UClass_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  EInternalObjectFlags EVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FName *pFVar12;
  FModuleManager *this_00;
  IModuleInterface *pIVar13;
  longlong *plVar14;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FAssetData *this_01;
  UObject *pUVar21;
  FAssetData *pFVar22;
  undefined1 auStackY_488 [32];
  char *pcVar23;
  undefined1 local_438 [8];
  ForAnyElementType local_430;
  undefined8 local_428;
  FString local_420;
  FAssetData *local_410;
  undefined8 local_408;
  UClass *local_400;
  TObjectIterator<UClass> local_3f8;
  ForAnyElementType local_3e0;
  undefined4 local_3d8;
  int local_3d4;
  FTopLevelAssetPath local_3d0;
  FTopLevelAssetPath local_3c0;
  UClass *local_3b0;
  UClass *local_3a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_3a0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_350;
  FName local_300;
  FTopLevelAssetPath local_2f8;
  FName local_2e8;
  FName FStack_2e0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_2d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_288;
  ForAnyElementType local_238;
  undefined8 local_230;
  TBitArray<FDefaultBitArrayAllocator> local_228;
  undefined4 local_208;
  undefined4 local_204;
  void *local_1f8;
  undefined4 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  FSoftObjectPath *local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_198;
  void *local_158;
  undefined4 local_150;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_148;
  void *local_108;
  undefined4 local_100;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  void *local_b8;
  undefined4 local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a4;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  pUVar21 = (UObject *)0x0;
  local_3f8.Index = 0xffffffff;
  local_3f8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.ObjectArray.ArrayNum = 0;
  local_3f8.ObjectArray.ArrayMax = 0;
  EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar11 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar11,&local_3f8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar8 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UClass>::Advance(&local_3f8);
    lVar20 = (longlong)local_3f8.Index;
    if ((local_3f8.Index < 0) || (local_3f8.ObjectArray.ArrayNum <= local_3f8.Index)) break;
    uVar9 = 0;
    if (local_3f8.Index < local_3f8.ObjectArray.ArrayNum) {
      uVar9 = (uint)~local_3f8.Index >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_400 = *(UClass **)(local_3f8.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
    if ((((local_400->ClassFlags & (CLASS_NewerVersionExists|CLASS_Deprecated)) == CLASS_None) &&
        (pUVar11 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister(), local_400 != pUVar11))
       && (pUVar11 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister(),
          pUVar11 != (UClass *)0x0)) {
      iVar10 = (int)pUVar11->_padding_;
      if (((int)local_400->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(local_400->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar11->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        TArray<UClass_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UClass_*_const_&>
                  (param_1,&local_400);
      }
    }
  }
  if (local_3f8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.ObjectArray.AllocatorInstance.Data);
  }
  pFVar12 = ::FName::FName(&local_300,"AssetRegistry");
  FVar2 = *pFVar12;
  this_00 = FModuleManager::Get();
  pIVar13 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x40))(pIVar13);
  local_430.Data = (FScriptContainerElement *)0x0;
  local_428 = 0;
  ::FString::FString(&local_420,L"/Game");
  if (((local_430.Data <= (FScriptContainerElement *)&local_420) &&
      ((FScriptContainerElement *)&local_420 < local_430.Data + (longlong)local_428._4_4_ * 0x10))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)local_428 == local_428._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_430,(int *)((longlong)&local_428 + 4));
    pFVar19 = local_430.Data + (longlong)iVar10 * 0x10;
    local_428 = CONCAT44(local_428._4_4_,iVar10 + 1);
  }
  else {
    pFVar19 = local_430.Data + (longlong)(int)local_428 * 0x10;
    local_428 = CONCAT44(local_428._4_4_,(int)local_428 + 1);
  }
  *(undefined8 *)pFVar19 = 0;
  *(FScriptContainerElement **)pFVar19 = local_420.Data.AllocatorInstance.Data;
  *(int *)(pFVar19 + 8) = local_420.Data.ArrayNum;
  *(int *)(pFVar19 + 0xc) = local_420.Data.ArrayMax;
  local_420.Data.ArrayNum = 0;
  local_420.Data.ArrayMax = 0;
  local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)(*plVar14 + 0x218))(plVar14,&local_430,0);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  pUVar11 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
  UStruct::GetStructPathName((UStruct *)pUVar11,&local_2f8);
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  pcVar3 = *(code **)(*plVar14 + 0x140);
  local_228.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_228.NumBits = 0;
  local_228.MaxBits = 0x80;
  local_208 = 0xffffffff;
  local_204 = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_2e8 = local_2f8.PackageName;
  FStack_2e0 = local_2f8.AssetName;
  local_3e0.Data = (FScriptContainerElement *)0x0;
  local_3d8 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_3e0,1,&local_3d4);
  *(uint *)local_3e0.Data = local_2e8.ComparisonIndex.Value;
  *(uint *)(local_3e0.Data + 4) = local_2e8.Number;
  *(uint *)(local_3e0.Data + 8) = FStack_2e0.ComparisonIndex.Value;
  *(uint *)(local_3e0.Data + 0xc) = FStack_2e0.Number;
  (*pcVar3)(plVar14,&local_3e0,&local_238,&local_98);
  if (local_3e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data);
  }
  local_1f0 = 0;
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  uVar4 = local_230 >> 0x20;
  local_230 = local_230 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_238,0,(int *)((longlong)&local_230 + 4));
  }
  local_208 = 0xffffffff;
  local_204 = 0;
  local_228.NumBits = 0;
  if (0x80 < (uint)local_228.MaxBits) {
    local_228.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_228,0);
  }
  if (local_228.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_228.AllocatorInstance.SecondaryData);
  }
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data);
  }
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1c8 = (FSoftObjectPath *)0x0;
  local_1c0 = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  local_198._0_8_ = 0;
  local_198._8_8_ = 0;
  local_198._32_8_ = 0;
  local_198._40_4_ = 0;
  local_198._44_4_ = 0x80;
  local_198._48_4_ = 0xffffffff;
  local_198._52_4_ = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_148._32_8_ = 0;
  local_148._40_4_ = 0;
  local_148._44_4_ = 0x80;
  local_148._48_4_ = 0xffffffff;
  local_148._52_4_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0x80;
  local_f8._48_4_ = 0xffffffff;
  local_f8._52_4_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_a6 = 0;
  local_a4 = 0;
  pUVar11 = Z_Construct_UClass_UBlueprint_NoRegister();
  UStruct::GetStructPathName((UStruct *)pUVar11,&local_3d0);
  if (((local_1a8.Data <= &local_3d0) &&
      (&local_3d0 < (FTopLevelAssetPath *)(local_1a8.Data + (longlong)local_1a0._4_4_ * 0x10))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = (int)local_1a0;
  if ((int)local_1a0 == local_1a0._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  *(FName *)(local_1a8.Data + (longlong)iVar10 * 0x10) = local_3d0.PackageName;
  ((FName *)(local_1a8.Data + (longlong)iVar10 * 0x10))[1] = local_3d0.AssetName;
  local_1a0._0_4_ = iVar10 + 1;
  pUVar11 = UInterchangePythonPipelineAsset::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar11,&local_3c0);
  if (((local_1a8.Data <= &local_3c0) &&
      (&local_3c0 < (FTopLevelAssetPath *)(local_1a8.Data + (longlong)local_1a0._4_4_ * 0x10))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = (int)local_1a0;
  if ((int)local_1a0 == local_1a0._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar10 + 1);
  pFVar19 = local_1a8.Data + (longlong)iVar10 * 0x10;
  *(uint *)pFVar19 = local_3c0.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar19 + 4) = local_3c0.PackageName.Number;
  *(uint *)(pFVar19 + 8) = local_3c0.AssetName.ComparisonIndex.Value;
  *(uint *)(pFVar19 + 0xc) = local_3c0.AssetName.Number;
  local_a8 = 0x101;
  local_410 = (FAssetData *)0x0;
  local_408 = 0;
  (**(code **)(*plVar14 + 0x50))(plVar14,&local_1e8,&local_410,1);
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  iVar10 = (int)local_408;
  pFVar22 = local_410 + (int)local_408;
  this_01 = local_410;
LAB_14e4f48ff:
  do {
    while( true ) {
      if ((int)local_408 != iVar10) {
        local_438[0] = 0;
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_438);
      }
      if (this_01 == pFVar22) {
        DestructItems<FAssetData,int>(local_410,(int)local_408);
        if (local_410 != (FAssetData *)0x0) {
          FMemory::Free(local_410);
        }
        local_b0 = 0;
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_f8);
        local_100 = 0;
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_148);
        local_150 = 0;
        if (local_158 != (void *)0x0) {
          FMemory::Free(local_158);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_198);
        if ((FTopLevelAssetPath *)local_1a8.Data != (FTopLevelAssetPath *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        if (local_1b8 != (void *)0x0) {
          FMemory::Free(local_1b8);
        }
        DestructItems<FSoftObjectPath,int>(local_1c8,(int)local_1c0);
        if (local_1c8 != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_1c8);
        }
        if (local_1d8 != (void *)0x0) {
          FMemory::Free(local_1d8);
        }
        if (local_1e8 != (void *)0x0) {
          FMemory::Free(local_1e8);
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        DestructItems<FString,int>((FString *)local_430.Data,(int)local_428);
        if (local_430.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_430.Data);
        }
        return;
      }
      bVar7 = UAssetRegistryHelpers::IsAssetDataBlueprintOfClassSet(this_01,&local_98);
      if (bVar7) break;
      pUVar11 = FAssetData::GetClass(this_01,No);
      if ((pUVar11 != (UClass *)0x0) &&
         (pUVar17 = UInterchangePythonPipelineAsset::StaticClass(), pUVar17 != (UClass *)0x0)) {
        iVar1 = (int)pUVar17->_padding_;
        if (((int)pUVar11->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar17->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          local_350.Hash.InlineData[0] = '\0';
          local_350.Hash.InlineData[1] = '\0';
          local_350.Hash.InlineData[2] = '\0';
          local_350.Hash.InlineData[3] = '\0';
          local_350.Hash._padding_ = 0;
          local_350._72_8_ = 0;
          local_350.Elements._0_8_ = 0;
          local_350.Elements._16_8_ = 0;
          local_350.Elements._24_8_ = 0;
          local_350.Elements._8_8_ = 0;
          local_350.Elements._32_8_ = 0;
          local_350.Elements._40_8_ = uVar5;
          local_350.Elements._48_8_ = uVar6;
          local_350.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          pTVar15 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_288,&local_350)
          ;
          pUVar16 = FAssetData::FastGetAsset(this_01,true,pTVar15);
          local_350._72_8_ = local_350._72_8_ & 0xffffffff00000000;
          if (local_350.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_350.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_350.Elements);
          if (pUVar16 != (UObject *)0x0) {
            pUVar11 = UInterchangePythonPipelineAsset::StaticClass();
            iVar1 = (int)pUVar11->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar11->_padding_)) {
              pUVar18 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)(pUVar16 + 1));
              if (pUVar18 == (UObject *)0x0) {
LAB_14e4f4c3a:
                pUVar18 = pUVar21;
              }
              else {
                pUVar11 = Z_Construct_UClass_UClass_NoRegister();
                iVar1 = (int)pUVar11->_padding_;
                if (((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar1) ||
                    ((longlong *)
                     *(undefined1 **)
                      (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar1 * 8
                      ) != &pUVar11->_padding_)) ||
                   (pUVar11 = UInterchangePythonPipelineBase::StaticClass(),
                   pUVar11 == (UClass *)0x0)) goto LAB_14e4f4c3a;
                iVar1 = (int)pUVar11->_padding_;
                if ((*(int *)&pUVar18[1].field_0x10 < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)&pUVar18[1].field_0x8 + (longlong)iVar1 * 8) !=
                    &pUVar11->_padding_)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (!bVar7) goto LAB_14e4f4c3a;
              }
              pUVar11 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
              if (pUVar11 != (UClass *)0x0) {
                iVar1 = (int)pUVar11->_padding_;
                if ((*(int *)&pUVar18[1].field_0x10 < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)&pUVar18[1].field_0x8 + (longlong)iVar1 * 8) !=
                    &pUVar11->_padding_)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (bVar7) {
                  local_3a8 = *(UClass **)&pUVar16->field_0x10;
                  TArray<UClass_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UClass_*>
                            (param_1,&local_3a8);
                }
              }
            }
          }
        }
      }
LAB_14e4f4c7f:
      this_01 = this_01 + 1;
    }
    local_3a0.Hash.InlineData[0] = '\0';
    local_3a0.Hash.InlineData[1] = '\0';
    local_3a0.Hash.InlineData[2] = '\0';
    local_3a0.Hash.InlineData[3] = '\0';
    local_3a0.Hash._padding_ = 0;
    local_3a0._72_8_ = 0;
    local_3a0.Elements._0_8_ = 0;
    local_3a0.Elements._16_8_ = 0;
    local_3a0.Elements._24_8_ = 0;
    local_3a0.Elements._8_8_ = 0;
    local_3a0.Elements._32_8_ = 0;
    local_3a0.Elements._40_8_ = uVar5;
    local_3a0.Elements._48_8_ = uVar6;
    local_3a0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar15 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_2d8,&local_3a0);
    pUVar16 = FAssetData::FastGetAsset(this_01,true,pTVar15);
    local_3a0._72_8_ = local_3a0._72_8_ & 0xffffffff00000000;
    if (local_3a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3a0.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_3a0.Elements);
    if (pUVar16 == (UObject *)0x0) {
LAB_14e4f4abf:
      pcVar23 = "Blueprint";
LAB_14e4f4ac4:
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6687235758857647134>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                         ,0xbe2,pcVar23);
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14e4f4c7f;
    }
    pUVar11 = Z_Construct_UClass_UBlueprint_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) goto LAB_14e4f4abf;
    lVar20 = *(longlong *)&pUVar16[2].field_0x8;
    pUVar18 = pUVar21;
    if ((lVar20 != 0) &&
       (pUVar11 = Z_Construct_UClass_UObject_NoRegister(), pUVar11 != (UClass *)0x0)) {
      iVar1 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar20 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar11->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar18 = *(UObject **)&pUVar16[2].field_0x8;
      }
    }
    pUVar11 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
    if (pUVar11 == (UClass *)0x0) {
LAB_14e4f4ab1:
      pcVar23 = "Blueprint->ParentClass->IsChildOf<UInterchangePipelineBase>()";
      goto LAB_14e4f4ac4;
    }
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)&pUVar18[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar18[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_14e4f4ab1;
    lVar20 = *(longlong *)&pUVar16[1].field_0x8;
    if ((lVar20 != 0) &&
       (pUVar11 = Z_Construct_UClass_UObject_NoRegister(), pUVar11 != (UClass *)0x0)) {
      iVar1 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar20 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar11->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_3b0 = *(UClass **)&pUVar16[1].field_0x8;
        TArray<UClass_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UClass_*>(param_1,&local_3b0);
        this_01 = this_01 + 1;
        goto LAB_14e4f48ff;
      }
    }
    local_3b0 = (UClass *)0x0;
    TArray<UClass_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UClass_*>(param_1,&local_3b0);
    this_01 = this_01 + 1;
  } while( true );
}

// GetAssetImportData @ 14e4f5a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeAssetImportData * __thiscall
UInterchangeManager::GetAssetImportData(UInterchangeManager *this,UObject *param_1)

{
  UInterchangeAssetImportData *pUVar1;
  
  pUVar1 = UInterchangeAssetImportData::GetFromObject(param_1);
  return pUVar1;
}

// GetAsyncHelper @ 14e4f5a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<UE::Interchange::FImportAsyncHelper,1> * __thiscall
UInterchangeManager::GetAsyncHelper
          (UInterchangeManager *this,
          TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *__return_storage_ptr__,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FImportAsyncHelper *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ImportTasks).ArrayNum;
  pFVar4 = (this->ImportTasks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ImportTasks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      __return_storage_ptr__->Object = (FImportAsyncHelper *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14e4f5b2d;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    pFVar3 = *(FImportAsyncHelper **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 != (FImportAsyncHelper *)0x0) && (pFVar3->UniqueId == param_1)) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14e4f5b2d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetEditorUtilities @ 14e4f6270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeEditorUtilitiesBase * __thiscall
UInterchangeManager::GetEditorUtilities(UInterchangeManager *this)

{
  return (UInterchangeEditorUtilitiesBase *)(this->EditorUtilities).Object;
}

// GetImportTaskCount @ 14e4f6790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UInterchangeManager::GetImportTaskCount(UInterchangeManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->ImportTasks).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetImportTaskForAsyncHelperUniqueId @ 14e4f67e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<UE::Interchange::FImportAsyncHelper,1> * __thiscall
UInterchangeManager::GetImportTaskForAsyncHelperUniqueId
          (UInterchangeManager *this,
          TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *__return_storage_ptr__,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FImportAsyncHelper *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ImportTasks).ArrayNum;
  pFVar4 = (this->ImportTasks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ImportTasks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      __return_storage_ptr__->Object = (FImportAsyncHelper *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14e4f688d;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    pFVar3 = *(FImportAsyncHelper **)pFVar4;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 != (FImportAsyncHelper *)0x0) && (pFVar3->UniqueId == param_1)) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar4 = pFVar4 + 0x10;
  }
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14e4f688d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetImportTaskForIndex @ 14e4f68c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<UE::Interchange::FImportAsyncHelper,1> * __thiscall
UInterchangeManager::GetImportTaskForIndex
          (UInterchangeManager *this,
          TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *__return_storage_ptr__,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1 < 0) || ((this->ImportTasks).ArrayNum <= param_1)) {
    __return_storage_ptr__->Object = (FImportAsyncHelper *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->ImportTasks).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar6 = (this->ImportTasks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    __return_storage_ptr__->Object = *(FImportAsyncHelper **)pFVar6;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetInterchangeManager @ 14e4f6a20

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeManager * __cdecl UInterchangeManager::GetInterchangeManager(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  TStrongObjectPtr<UInterchangeManager,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  bool bVar4;
  UInterchangeManager *pUVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UObjectBase *pUVar8;
  UClass *pUVar9;
  FInterchangeTaskSystem *this;
  longlong *plVar10;
  UObjectBase *pUVar11;
  undefined1 auStackY_198 [32];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  <lambda_2> local_138 [2];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UInterchangeManager::GetInterchangeManager'::__l2::
           _dynamic_atexit_destructor_for__InterchangeManager__);
    _Init_thread_footer(&::_TSS0);
  }
  if (InterchangeManager.Object == (UObject *)0x0) {
    if ((InterchangeManagerScopeOfLifeEnded != false) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6687235758857649108>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                           ,0x42c,"!InterchangeManagerScopeOfLifeEnded"), bVar4)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UInterchangeManager *)(*pcVar2)();
      return pUVar5;
    }
    bVar4 = IsInGameThread();
    if (((!bVar4) || (pUVar6 = GetTransientPackage(), pUVar6 == (UPackage *)0x0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() && GetTransientPackage()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                           ,0x43e,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UInterchangeManager *)(*pcVar2)();
      return pUVar5;
    }
    bIsCreatingSingleton = true;
    pUVar6 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar7);
    local_128._48_8_ = (FObjectInstancingGraph *)0x0;
    local_128._56_8_ = (UPackage *)0x0;
    local_128._16_4_ = 0;
    local_128._20_4_ = 0;
    local_128._24_4_ = RF_NoFlags;
    local_128._40_8_ = (UObject *)0x0;
    local_128[0x20] = false;
    local_128._8_8_ = pUVar6;
    pUVar8 = (UObjectBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ != 0) {
      plVar10 = (longlong *)(local_128 + 0x50);
      if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_128._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    pUVar11 = (UObjectBase *)0x0;
    if (pUVar8 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(pUVar8);
      pUVar11 = pUVar8;
    }
    if (InterchangeManager.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(InterchangeManager.Object);
    }
    bIsCreatingSingleton = false;
    InterchangeManager.Object = (UObject *)pUVar11;
    if ((pUVar11 == (UObjectBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UInterchangeManager *)(*pcVar2)();
      return pUVar5;
    }
    TVar3.Object = InterchangeManager.Object;
    pUVar7 = UInterchangeEditorUtilitiesBase::StaticClass();
    pUVar6 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = UInterchangeEditorUtilitiesBase::StaticClass();
    CheckIsClassChildOf_Internal(pUVar9,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar7);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = pUVar6;
    pUVar8 = (UObjectBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar10 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 != (UObjectBase *)0x0) {
      puVar1 = &TVar3.Object[0x17].field_0x10;
      if (*(UObject **)puVar1 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)puVar1);
        *(undefined8 *)puVar1 = 0;
      }
      UObjectBase::AddRef(pUVar8);
      if ((undefined8 *)puVar1 == &local_140) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar8);
      }
      else {
        if (*(UObject **)puVar1 != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)puVar1);
        }
        *(UObjectBase **)puVar1 = pUVar8;
      }
    }
    this = UE::Interchange::FInterchangeTaskSystem::Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_UInterchangeManager::GetInterchangeManager_::__l5::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)this
               ,(<lambda_1> *)&local_150);
    local_148 = local_150;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_UInterchangeManager::GetInterchangeManager_::__l5::<lambda_2>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEnginePreExit,local_138);
    if ((InterchangeManager.Object == (UObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InterchangeManager.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                           ,0x479,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UInterchangeManager *)(*pcVar2)();
      return pUVar5;
    }
  }
  return (UInterchangeManager *)InterchangeManager.Object;
}

// GetPrivateStaticClass @ 14e4f7f20

UClass * __cdecl UInterchangeManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeManager",
               &Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton,
               StaticRegisterNativesUInterchangeManager,0x430,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeManager>,
               InternalVTableHelperCtorCaller<UInterchangeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeManager.InnerSingleton;
}

// GetRegisteredFactoryClass @ 14e4f85d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UClass * __thiscall
UInterchangeManager::GetRegisteredFactoryClass(UInterchangeManager *this,UClass *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UClass *pUVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar15;
  uint *puVar17;
  undefined1 local_res8 [8];
  UClass *local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  ulonglong uVar14;
  ulonglong uVar16;
  
  uVar12 = 0;
  puVar1 = &(this->RegisteredFactoryClasses).field_0x10;
  uVar2 = *(uint *)&(this->RegisteredFactoryClasses).field_0x28;
  local_res20 = (UClass *)0x0;
  uVar13 = 0;
  uVar5 = 1;
  uVar15 = 0;
  uVar6 = uVar13;
  if (uVar2 != 0) {
    puVar17 = *(uint **)&(this->RegisteredFactoryClasses).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar6 = *puVar17;
    uVar14 = uVar12;
    uVar16 = uVar12;
    uVar15 = 0;
    uVar13 = 0;
    while (uVar6 == 0) {
      iVar11 = (int)uVar14;
      uVar15 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)uVar15;
      uVar13 = iVar11 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar6 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < (int)uVar13)
      goto LAB_14e4f868d;
      uVar6 = puVar17[(longlong)iVar11 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar6 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
  }
LAB_14e4f868d:
  uVar7 = *(uint *)&(this->RegisteredFactoryClasses).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar5,uVar13);
  uVar13 = uVar7 & 0xffffffe0;
  TStack_68.CurrentBitIndex = uVar6;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar7 >> 5;
  TStack_68._28_4_ = uVar6;
  TStack_68.BaseBitIndex = uVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->RegisteredFactoryClasses).field_0x8 -
                       *(int *)&(this->RegisteredFactoryClasses).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || ((int)uVar2 < (int)uVar7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UClass *)(*pcVar3)();
    return pUVar8;
  }
  uVar2 = *(uint *)&(this->RegisteredFactoryClasses).field_0x28;
  if (uVar7 != uVar2) {
    puVar10 = *(undefined1 **)&(this->RegisteredFactoryClasses).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar7 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar11) goto LAB_14e4f8790;
      uVar15 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar7 = (int)lVar9 + -1 + uVar13;
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
  }
LAB_14e4f8790:
  do {
    if (*(int *)&(this->RegisteredFactoryClasses).field_0x8 -
        *(int *)&(this->RegisteredFactoryClasses).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar7) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return local_res20;
    }
    uVar14 = *(ulonglong *)
              (*(longlong *)&this->RegisteredFactoryClasses +
              (longlong)TStack_68.CurrentBitIndex * 0x18);
    if (uVar14 != 0) {
      iVar11 = *(int *)(uVar14 + 0x38);
      if (((int)param_1->_padding_ < iVar11) ||
         (*(longlong **)(param_1->_padding_ + (longlong)iVar11 * 8) != (longlong *)(uVar14 + 0x30)))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (uVar12 != 0) {
          if ((iVar11 < *(int *)(uVar12 + 0x38)) ||
             (*(longlong *)(*(longlong *)(uVar14 + 0x30) + (longlong)*(int *)(uVar12 + 0x38) * 8) !=
              uVar12 + 0x30)) goto LAB_14e4f881d;
        }
        local_res20 = *(UClass **)
                       (*(longlong *)&this->RegisteredFactoryClasses +
                        (longlong)TStack_68.CurrentBitIndex * 0x18 + 8);
        uVar12 = uVar14;
      }
    }
LAB_14e4f881d:
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetReplaceExistingAlldialogAnswer @ 14e4f8860

TOptional<bool> __cdecl UInterchangeManager::GetReplaceExistingAlldialogAnswer(void)

{
  undefined1 *in_RCX;
  undefined1 local_18 [24];
  
  in_RCX[1] = 0;
  if ((UE::Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer !=
       (TAtomic<signed_char>)0xff) && (local_18 != in_RCX)) {
    *in_RCX = UE::Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer ==
              (TAtomic<signed_char>)0x1;
    in_RCX[1] = 1;
  }
  return SUB82(in_RCX,0);
}

// GetSupportedAssetTypeFormats @ 14e4f8bb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeManager::GetSupportedAssetTypeFormats
          (UInterchangeManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EInterchangeTranslatorAssetType param_1,EInterchangeTranslatorType param_2,bool param_3)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  UObject *pUVar7;
  longlong lVar8;
  code *pcVar9;
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  *pTVar10;
  char cVar11;
  bool bVar12;
  EInterchangeTranslatorAssetType EVar13;
  EInterchangeTranslatorType EVar14;
  uint uVar15;
  int iVar16;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar17;
  UClass *pUVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 local_res10 [8];
  EInterchangeTranslatorAssetType local_res18;
  undefined4 uStack_8c;
  FString *local_78;
  int local_70;
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar19 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_1;
  cVar11 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  if (cVar11 == '\0') {
    return __return_storage_ptr__;
  }
  pTVar2 = &this->RegisteredTranslatorsClass;
  iVar4 = *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  puVar1 = &(this->RegisteredTranslatorsClass).Elements.field_0x10;
  uVar15 = 1;
  iVar21 = 0;
  iVar16 = iVar19;
  if (iVar4 != 0) {
    puVar23 = *(uint **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar20 = *puVar23;
    iVar19 = 0;
    iVar21 = 0;
    while (uVar20 == 0) {
      iVar19 = iVar19 + 1;
      iVar21 = iVar21 + 0x20;
      iVar16 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14e4f8c8d;
      uVar20 = puVar23[iVar19];
    }
    uVar15 = ~(uVar20 - 1) & uVar20;
    uVar3 = (ulonglong)uVar15 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar16 = (int)lVar8 + -1 + iVar21;
    if (iVar4 < iVar16) {
      iVar16 = iVar4;
    }
  }
LAB_14e4f8c8d:
  uVar20 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  TStack_60._padding_ = CONCAT44(uVar15,iVar19);
  uVar15 = uVar20 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar16;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar20 >> 5;
  TStack_60._28_4_ = iVar16;
  TStack_60.BaseBitIndex = iVar21;
  uStack_40 = CONCAT44(uStack_8c,
                       *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 -
                       *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x34);
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar4 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pTVar17 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
    return pTVar17;
  }
  uVar5 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  if (uVar20 != uVar5) {
    puVar6 = *(undefined1 **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
    puVar22 = puVar1;
    if (puVar6 != (undefined1 *)0x0) {
      puVar22 = puVar6;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar20 == 0) {
      iVar19 = iVar19 + 1;
      uVar15 = uVar15 + 0x20;
      uVar20 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar19) goto LAB_14e4f8d90;
      uVar20 = *(uint *)(puVar22 + (longlong)iVar19 * 4);
    }
    uVar3 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar20 = (uVar15 - 1) + (int)lVar8;
    if ((int)uVar5 < (int)uVar20) {
      uVar20 = uVar5;
    }
  }
LAB_14e4f8d90:
  do {
    pTVar10 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar20) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    {
      return __return_storage_ptr__;
    }
    pUVar18 = *(UClass **)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if ((pUVar18->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar18);
    }
    pUVar7 = (pUVar18->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar18 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
    iVar19 = (int)pUVar18->_padding_;
    if (((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar19) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar19 * 8) !=
         &pUVar18->_padding_)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ret->IsA(T::StaticClass())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0x1181,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      pTVar17 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar17;
    }
    EVar13 = (**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7);
    if ((EVar13 & local_res18) == local_res18) {
      if (param_2 != Invalid) {
        EVar14 = (**(code **)(*(longlong *)pUVar7 + 0x2c0))(pUVar7);
        if (param_3) {
          bVar12 = (EVar14 & param_2) == param_2;
        }
        else {
          bVar12 = (param_2 & EVar14) != Invalid;
        }
        if (!bVar12) goto LAB_14e4f8eaa;
      }
      pTVar17 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*(longlong *)pUVar7 + 0x2d0))(pUVar7,&local_78);
      TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
                (__return_storage_ptr__,pTVar17);
      DestructItems<FString,int>(local_78,local_70);
      if (local_78 != (FString *)0x0) {
        FMemory::Free(local_78);
      }
    }
LAB_14e4f8eaa:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetSupportedFormats @ 14e4f8ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeManager::GetSupportedFormats
          (UInterchangeManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EInterchangeTranslatorType param_1)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 *puVar5;
  UObject *pUVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  *pTVar9;
  char cVar10;
  bool bVar11;
  EInterchangeTranslatorType EVar12;
  uint uVar13;
  int iVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar15;
  UClass *pUVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_8c;
  FString *local_78;
  int local_70;
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  cVar10 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  if (cVar10 != '\0') {
    iVar19 = 0;
    pTVar2 = &this->RegisteredTranslatorsClass;
    iVar4 = *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
    uVar13 = 1;
    puVar1 = &(this->RegisteredTranslatorsClass).Elements.field_0x10;
    iVar21 = 0;
    iVar14 = iVar19;
    if (iVar4 != 0) {
      puVar22 = *(uint **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar18 = *puVar22;
      iVar19 = 0;
      iVar21 = 0;
      while (uVar18 == 0) {
        iVar19 = iVar19 + 1;
        iVar21 = iVar21 + 0x20;
        iVar14 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14e4f8fcd;
        uVar18 = puVar22[iVar19];
      }
      uVar13 = ~(uVar18 - 1) & uVar18;
      uVar3 = (ulonglong)uVar13 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res20 = (int)lVar7;
      iVar14 = local_res20 + -1 + iVar21;
      if (iVar4 < iVar14) {
        iVar14 = iVar4;
      }
    }
LAB_14e4f8fcd:
    uVar18 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
    uVar17 = uVar18 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar13,iVar19);
    TStack_60.CurrentBitIndex = iVar14;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar18 >> 5;
    TStack_60._28_4_ = iVar14;
    TStack_60.BaseBitIndex = iVar21;
    uStack_40 = CONCAT44(uStack_8c,
                         *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 -
                         *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x34);
    local_68 = pTVar2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar15;
    }
    uVar13 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
    if (uVar18 != uVar13) {
      puVar5 = *(undefined1 **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
      puVar20 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar20 = puVar5;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
      while (uVar18 == 0) {
        iVar19 = iVar19 + 1;
        uVar17 = uVar17 + 0x20;
        uVar18 = uVar13;
        if ((int)(((int)(uVar13 - 1) >> 0x1f & 0x1fU) + (uVar13 - 1)) >> 5 < iVar19)
        goto LAB_14e4f90d0;
        uVar18 = *(uint *)(puVar20 + (longlong)iVar19 * 4);
      }
      uVar3 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar18 = (uVar17 - 1) + (int)lVar7;
      if ((int)uVar13 < (int)uVar18) {
        uVar18 = uVar13;
      }
    }
LAB_14e4f90d0:
    while( true ) {
      pTVar9 = local_68;
      if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
          (int)uStack_40) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar18) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2)
         ) break;
      pUVar16 = *(UClass **)
                 (*(longlong *)&pTVar9->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
      if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar16);
      }
      pUVar6 = (pUVar16->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar16 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
      iVar4 = (int)pUVar16->_padding_;
      if (((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar4) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
           &pUVar16->_padding_)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ret->IsA(T::StaticClass())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x1181,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar15;
      }
      EVar12 = (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6);
      if ((EVar12 & param_1) == param_1) {
        pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                  (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,&local_78);
        if ((__return_storage_ptr__ == pTVar15) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar15;
        }
        iVar4 = pTVar15->ArrayNum;
        if (iVar4 != 0) {
          iVar19 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar4,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar19 * 0x10,
                  (pTVar15->AllocatorInstance).Data,(longlong)iVar4 << 4);
          pTVar15->ArrayNum = 0;
        }
        DestructItems<FString,int>(local_78,local_70);
        if (local_78 != (FString *)0x0) {
          FMemory::Free(local_78);
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return __return_storage_ptr__;
}

// GetSupportedFormatsForObject @ 14e4f9280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeManager::GetSupportedFormatsForObject
          (UInterchangeManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1,
          int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  EInterchangeTranslatorType EVar5;
  undefined1 uVar6;
  uint uVar7;
  UClass *this_00;
  UInterchangeFactoryBase *pUVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  FString *local_a8;
  undefined8 local_a0;
  FScopedSourceData local_98;
  TStrongObjectPtr<UInterchangeTranslatorBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  cVar3 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  if (cVar3 == '\0') {
    return __return_storage_ptr__;
  }
  this_00 = GetRegisteredFactoryClass(this,*(UClass **)&param_1->field_0x10);
  if (this_00 == (UClass *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar8 = UClass::GetDefaultObject<UInterchangeFactoryBase>(this_00);
  local_a8 = (FString *)0x0;
  local_a0 = 0;
  cVar3 = (**(code **)(pUVar8->_padding_ + 0x318))(pUVar8,param_1,&local_a8);
  if (cVar3 == '\0') goto LAB_14e4f96a8;
  if (param_2 < (int)local_a0) {
    uVar7 = 0;
    if (param_2 < (int)local_a0) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar9;
    }
    UE::Interchange::FScopedSourceData::FScopedSourceData(&local_98,local_a8 + param_2);
    UE::Interchange::FScopedTranslator::FScopedTranslator
              ((FScopedTranslator *)&local_90,
               (UInterchangeSourceData *)local_98.SourceDataPtr.Object);
    if (local_90.Object != (UObject *)0x0) {
      EVar5 = (**(code **)(*(longlong *)local_90.Object + 0x2c0))(local_90.Object);
      uVar6 = (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8);
      switch(uVar6) {
      case 0:
        pTVar9 = GetSupportedFormats(this,&local_38,Actors);
        if (__return_storage_ptr__ != pTVar9) {
          DestructItems<FString,int>
                    ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar9->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar9->ArrayMax;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
        }
        DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
        local_48.AllocatorInstance.Data = local_38.AllocatorInstance.Data;
        break;
      case 1:
        pTVar9 = GetSupportedAssetTypeFormats(this,&local_58,Textures,EVar5,false);
        if (__return_storage_ptr__ != pTVar9) {
          DestructItems<FString,int>
                    ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar9->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar9->ArrayMax;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
        }
        DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
        local_48.AllocatorInstance.Data = local_58.AllocatorInstance.Data;
        break;
      case 2:
        pTVar9 = GetSupportedAssetTypeFormats(this,&local_78,Materials,EVar5,false);
        if (__return_storage_ptr__ != pTVar9) {
          DestructItems<FString,int>
                    ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar9->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar9->ArrayMax;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
        }
        DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
        local_48.AllocatorInstance.Data = local_78.AllocatorInstance.Data;
        break;
      case 3:
      case 5:
        pTVar9 = GetSupportedAssetTypeFormats(this,&local_68,Meshes,EVar5,false);
        if (__return_storage_ptr__ != pTVar9) {
          DestructItems<FString,int>
                    ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar9->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar9->ArrayMax;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
        }
        DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
        local_48.AllocatorInstance.Data = local_68.AllocatorInstance.Data;
        break;
      case 4:
        pTVar9 = GetSupportedAssetTypeFormats(this,&local_88,Animations,EVar5,false);
        if (__return_storage_ptr__ != pTVar9) {
          DestructItems<FString,int>
                    ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar9->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar9->ArrayMax;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
        }
        DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
        local_48.AllocatorInstance.Data = local_88.AllocatorInstance.Data;
        break;
      case 6:
        pTVar9 = GetSupportedAssetTypeFormats(this,&local_48,Grooms,EVar5,false);
        if (__return_storage_ptr__ != pTVar9) {
          DestructItems<FString,int>
                    ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
                     __return_storage_ptr__->ArrayNum);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          __return_storage_ptr__->ArrayNum = pTVar9->ArrayNum;
          __return_storage_ptr__->ArrayMax = pTVar9->ArrayMax;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
        }
        DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
        break;
      default:
        goto switchD_14e4f93dc_default;
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
switchD_14e4f93dc_default:
      (**(code **)(*(longlong *)local_90.Object + 0x2e0))(local_90.Object);
      if (local_90.Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(local_90.Object);
      }
    }
    if (local_98.SourceDataPtr.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_98.SourceDataPtr.Object);
    }
  }
  iVar1 = __return_storage_ptr__->ArrayNum;
  pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar11) break;
    ::FString::ToLowerInline((FString *)pFVar10);
    pFVar10 = pFVar10 + 0x10;
  }
LAB_14e4f96a8:
  DestructItems<FString,int>(local_a8,(int)local_a0);
  if (local_a8 != (FString *)0x0) {
    FMemory::Free(local_a8);
  }
  return __return_storage_ptr__;
}

// GetTranslatorForSourceData @ 14e4f9970

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeTranslatorBase * __thiscall
UInterchangeManager::GetTranslatorForSourceData
          (UInterchangeManager *this,UInterchangeSourceData *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  UClass *this_00;
  UObject *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  UInterchangeTranslatorBase *pUVar12;
  UClass *pUVar13;
  UPackage *pUVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar17 = 0;
  iVar3 = *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  puVar1 = &(this->RegisteredTranslatorsClass).Elements.field_0x10;
  iVar19 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      iVar19 = iVar19 + 0x20;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14e4f9a0e;
      uVar16 = puVar20[iVar17];
    }
    uVar10 = ~(uVar16 - 1) & uVar16;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar11 = (int)lVar6 + -1 + iVar19;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14e4f9a0e:
  uVar16 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar17);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar19;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 -
                       *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pUVar12 = (UInterchangeTranslatorBase *)(*pcVar7)();
    return pUVar12;
  }
  uVar10 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  if (uVar16 != uVar10) {
    puVar4 = *(undefined1 **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
    puVar18 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar18 = puVar4;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar15 = uVar15 + 0x20;
      uVar16 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar17)
      goto LAB_14e4f9b10;
      uVar16 = *(uint *)(puVar18 + (longlong)iVar17 * 4);
    }
    uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar16 = (int)lVar6 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_14e4f9b10:
  while( true ) {
    if (*(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 -
        *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar16) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return (UInterchangeTranslatorBase *)0x0;
    }
    this_00 = *(UClass **)
               (*(longlong *)&(this->RegisteredTranslatorsClass).Elements +
               (longlong)TStack_68.CurrentBitIndex * 0x10);
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar13 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if (((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar3) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
         &pUVar13->_padding_)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar8)) break;
    cVar9 = (**(code **)(*(longlong *)pUVar5 + 0x2b0))(pUVar5,param_1);
    if (cVar9 != '\0') {
      pUVar14 = GetTransientPackage();
      pUVar12 = NewObject<UInterchangeTranslatorBase>
                          ((UObject *)pUVar14,this_00,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UInterchangeSourceData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (pUVar12->SourceData).field0_0x0.DebugPtr = param_1;
      return pUVar12;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar7 = (code *)swi(3);
  pUVar12 = (UInterchangeTranslatorBase *)(*pcVar7)();
  return pUVar12;
}

// GetTranslatorSupportingPayloadInterfaceForSourceData @ 14e4f9c90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInterchangeTranslatorBase * __thiscall
UInterchangeManager::GetTranslatorSupportingPayloadInterfaceForSourceData
          (UInterchangeManager *this,UInterchangeSourceData *param_1,UClass *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  UClass *this_00;
  UObject *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  UInterchangeTranslatorBase *pUVar12;
  UClass *pUVar13;
  UPackage *pUVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar19 = 0;
  iVar3 = *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  puVar1 = &(this->RegisteredTranslatorsClass).Elements.field_0x10;
  iVar20 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar16 = *puVar17;
    while (uVar16 == 0) {
      iVar19 = iVar19 + 1;
      iVar20 = iVar20 + 0x20;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14e4f9d3c;
      uVar16 = puVar17[iVar19];
    }
    uVar10 = ~(uVar16 - 1) & uVar16;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar11 = (int)lVar6 + -1 + iVar20;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14e4f9d3c:
  uVar16 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar19);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar20;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 -
                       *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pUVar12 = (UInterchangeTranslatorBase *)(*pcVar7)();
    return pUVar12;
  }
  uVar10 = *(uint *)&(this->RegisteredTranslatorsClass).Elements.field_0x28;
  if (uVar16 != uVar10) {
    puVar4 = *(undefined1 **)&(this->RegisteredTranslatorsClass).Elements.field_0x20;
    puVar18 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar18 = puVar4;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar19 * 4);
    while (uVar16 == 0) {
      iVar19 = iVar19 + 1;
      uVar15 = uVar15 + 0x20;
      uVar16 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar19)
      goto LAB_14e4f9e40;
      uVar16 = *(uint *)(puVar18 + (longlong)iVar19 * 4);
    }
    uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar16 = (int)lVar6 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_14e4f9e40:
  do {
    if (*(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x8 -
        *(int *)&(this->RegisteredTranslatorsClass).Elements.field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return (UInterchangeTranslatorBase *)0x0;
    }
    this_00 = *(UClass **)
               (*(longlong *)&(this->RegisteredTranslatorsClass).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    bVar8 = UClass::ImplementsInterface(this_00,param_2);
    if (bVar8) {
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      pUVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar13 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
      iVar3 = (int)pUVar13->_padding_;
      if (((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar3) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
           &pUVar13->_padding_)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pUVar12 = (UInterchangeTranslatorBase *)(*pcVar7)();
        return pUVar12;
      }
      cVar9 = (**(code **)(*(longlong *)pUVar5 + 0x2b0))(pUVar5,param_1);
      if (cVar9 != '\0') {
        pUVar14 = GetTransientPackage();
        pUVar12 = NewObject<UInterchangeTranslatorBase>
                            ((UObject *)pUVar14,this_00,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UInterchangeSourceData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (pUVar12->SourceData).field0_0x0.DebugPtr = param_1;
        return pUVar12;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// ImportAsset @ 14e4fa170

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
UInterchangeManager::ImportAsset
          (UInterchangeManager *this,FString *param_1,UInterchangeSourceData *param_2,
          FImportAssetParameters *param_3)

{
  int iVar1;
  atomic<UE::Interchange::FImportResult::EStatus> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FImportResult *this_00;
  FScriptContainerElement *_Src;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_38;
  undefined1 local_28 [24];
  TReferenceControllerBase<1> *local_10;
  
  param_3->bRunSynchronous = true;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pTVar4 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                *)local_28,param_1,param_2,param_3,ImportType_Asset);
  pTVar3 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x8;
  this_00 = *(FImportResult **)pTVar4;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  UE::Interchange::FImportResult::WaitUntilDone(this_00,param_3->bRunSynchronous);
  pTVar5 = UE::Interchange::FImportResult::GetImportedObjects(this_00);
  if (&local_38 != pTVar5) {
    iVar1 = pTVar5->ArrayNum;
    _Src = (pTVar5->AllocatorInstance).Data;
    local_38.ArrayNum = iVar1;
    if (((iVar1 != 0) || (local_38.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,local_38.ArrayMax,&local_38.AllocatorInstance,iVar1,&local_38.ArrayMax)
       , iVar1 != 0)) {
      memcpy(local_38.AllocatorInstance.Data,_Src,(longlong)iVar1 << 3);
    }
  }
  aVar2 = this_00->ImportStatus;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return aVar2 != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
}

// ImportAsset @ 14e4fa2a0

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
UInterchangeManager::ImportAsset
          (UInterchangeManager *this,FString *param_1,UInterchangeSourceData *param_2,
          FImportAssetParameters *param_3,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_4)

{
  atomic<UE::Interchange::FImportResult::EStatus> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  FImportResult *this_00;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar3;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 local_28 [24];
  TReferenceControllerBase<1> *local_10;
  
  param_3->bRunSynchronous = true;
  pTVar3 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                *)local_28,param_1,param_2,param_3,ImportType_Asset);
  pTVar2 = *(TReferenceControllerBase<1> **)&pTVar3->field_0x8;
  this_00 = *(FImportResult **)pTVar3;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  UE::Interchange::FImportResult::WaitUntilDone(this_00,param_3->bRunSynchronous);
  pTVar4 = UE::Interchange::FImportResult::GetImportedObjects(this_00);
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=(param_4,pTVar4);
  aVar1 = this_00->ImportStatus;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return aVar1 != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
}

// ImportAssetAsync @ 14e4fa350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FImportResult,1> * __thiscall
UInterchangeManager::ImportAssetAsync
          (UInterchangeManager *this,
          TSharedRef<UE::Interchange::FImportResult,1> *__return_storage_ptr__,FString *param_1,
          UInterchangeSourceData *param_2,FImportAssetParameters *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar2;
  undefined1 local_28 [24];
  TReferenceControllerBase<1> *local_10;
  
  param_3->bRunSynchronous = false;
  pTVar2 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                *)local_28,param_1,param_2,param_3,ImportType_Asset);
  __return_storage_ptr__->Object = *(FImportResult **)pTVar2;
  pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  return __return_storage_ptr__;
}

// ImportAssetWithResult @ 14e4fa3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FImportResult,1> * __thiscall
UInterchangeManager::ImportAssetWithResult
          (UInterchangeManager *this,
          TSharedRef<UE::Interchange::FImportResult,1> *__return_storage_ptr__,FString *param_1,
          UInterchangeSourceData *param_2,FImportAssetParameters *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar2;
  undefined1 local_28 [24];
  TReferenceControllerBase<1> *local_10;
  
  param_3->bRunSynchronous = true;
  pTVar2 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                *)local_28,param_1,param_2,param_3,ImportType_Asset);
  __return_storage_ptr__->Object = *(FImportResult **)pTVar2;
  pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  UE::Interchange::FImportResult::WaitUntilDone
            (__return_storage_ptr__->Object,param_3->bRunSynchronous);
  return __return_storage_ptr__;
}

// ImportScene @ 14e4fd8a0

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
UInterchangeManager::ImportScene
          (UInterchangeManager *this,FString *param_1,UInterchangeSourceData *param_2,
          FImportAssetParameters *param_3)

{
  bool bVar1;
  FImportResult *local_28;
  TReferenceControllerBase<1> *local_20;
  FImportResult *local_18;
  TReferenceControllerBase<1> *local_10;
  
  param_3->bRunSynchronous = true;
  ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                       *)&local_28,param_1,param_2,param_3,ImportType_Scene);
  UE::Interchange::FImportResult::WaitUntilDone(local_28,param_3->bRunSynchronous);
  UE::Interchange::FImportResult::WaitUntilDone(local_18,param_3->bRunSynchronous);
  if ((local_28->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x0) ||
     (local_18->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return bVar1;
}

// ImportSceneAsync @ 14e4fd940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_> *
__thiscall
UInterchangeManager::ImportSceneAsync
          (UInterchangeManager *this,
          TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
          *__return_storage_ptr__,FString *param_1,UInterchangeSourceData *param_2,
          FImportAssetParameters *param_3)

{
  param_3->bRunSynchronous = false;
  ImportInternal(this,__return_storage_ptr__,param_1,param_2,param_3,ImportType_Scene);
  return __return_storage_ptr__;
}

// IsAttended @ 14e4fe8a0

bool __cdecl UInterchangeManager::IsAttended(void)

{
  return false;
}

// IsImporting @ 14e4fe8c0

bool __cdecl UInterchangeManager::IsImporting(void)

{
  return UE::Interchange::Private::StaticHelpers::AsyncHelperCounter !=
         (TAtomic<unsigned___int64>)0x0;
}

// IsInterchangeActive @ 14e4fe9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UInterchangeManager::IsInterchangeActive(UInterchangeManager *this)

{
  return this->bIsActive != (FThreadSafeBool)0x0;
}

// IsInterchangeImportEnabled @ 14e4fe9d0

bool __cdecl UInterchangeManager::IsInterchangeImportEnabled(void)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e4fe9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  return (bool)uVar1;
}

// IsObjectBeingImported @ 14e4fec00

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
UInterchangeManager::IsObjectBeingImported(UInterchangeManager *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FImportAsyncHelper *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  char local_res18 [8];
  undefined1 local_res20 [8];
  code *local_98 [2];
  undefined **local_88;
  char *local_80;
  UObject *local_78;
  undefined8 local_70;
  code *local_68 [2];
  undefined **local_58;
  char *local_50;
  UObject *local_48;
  undefined8 local_40;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6687235758857647616>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                       ,0xa00,"IsInGameThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ImportTasks).ArrayNum;
  pFVar5 = (this->ImportTasks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  do {
    if ((this->ImportTasks).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar5 == pFVar6) {
      bVar3 = false;
      goto LAB_14e4fedcd;
    }
    if (*(longlong *)pFVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    this_00 = *(FImportAsyncHelper **)pFVar5;
    if (param_1 != (UObject *)0x0) {
      local_res18[0] = '\0';
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_80 = local_res18;
      local_70 = 0;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                    ::Call;
      local_78 = param_1;
      UE::Interchange::FImportAsyncHelper::IterateImportedAssetsPerSourceIndex
                (this_00,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                          *)local_98);
      if (local_res18[0] != '\0') {
LAB_14e4fedc5:
        bVar3 = true;
LAB_14e4fedcd:
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return bVar3;
      }
      local_40 = 0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_50 = local_res18;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Interchange::FImportAsyncHelper::IsImportingObject'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                    ::Call;
      local_48 = param_1;
      UE::Interchange::FImportAsyncHelper::IterateImportedSceneObjectsPerSourceIndex
                (this_00,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                          *)local_68);
      if (local_res18[0] != '\0') goto LAB_14e4fedc5;
    }
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// RegisterFactory @ 14e500a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UInterchangeManager::RegisterFactory(UInterchangeManager *this,UClass *param_1)

{
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  UInterchangeFactoryBase *pUVar4;
  TObjectPtr<UClass_const_>_u_0 TVar5;
  uint uVar6;
  TObjectPtr<UClass_const_>_u_0 local_res10;
  TObjectPtr<UClass_const_>_u_0 local_res18;
  UClass *local_res20;
  TObjectPtr<UClass_const_>_u_0 *local_28;
  UClass **local_20;
  
  if (param_1 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UInterchangeFactoryBase_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar2 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pUVar4 = UClass::GetDefaultObject<UInterchangeFactoryBase>(param_1);
        TVar5.DebugPtr = (UClass *)(**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4);
        if (TVar5.DebugPtr != (UClass *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          }
          local_res10.DebugPtr = TVar5.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
            }
          }
          uVar6 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
                  (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          iVar2 = TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                            ((TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                              *)&this->RegisteredFactoryClasses,uVar6 >> 0x10 ^ uVar6,
                             (TObjectPtr<UClass_const_> *)&local_res10.ObjectPtr);
          if (iVar2 == -1) {
            local_res20 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_res18.DebugPtr = TVar5.DebugPtr;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
            }
            local_28 = &local_res18;
            local_20 = &local_res20;
            TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<TObjectPtr<UClass_const_>_&&,TObjectPtr<UClass_const_>_&&>_>
                      ((TSet<TTuple<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass_const_>,TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                        *)&this->RegisteredFactoryClasses,
                       (TPairInitializer<TObjectPtr<UClass_const_>_&&,TObjectPtr<UClass_const_>_&&>
                        *)&local_res10.ObjectPtr,(bool *)&local_28);
          }
          return true;
        }
      }
    }
  }
  return false;
}

// RegisterImportDataConverter @ 14e500ba0

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
UInterchangeManager::RegisterImportDataConverter(UInterchangeManager *this,UClass *param_1)

{
  return true;
}

// RegisterTranslator @ 14e500bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UInterchangeManager::RegisterTranslator(UInterchangeManager *this,UClass *param_1)

{
  TObjectPtr<UClass_const_> local_res10;
  UClass *local_res18 [2];
  
  if (param_1 == (UClass *)0x0) {
    return false;
  }
  local_res18[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<UClass_const_>_>
            (&this->RegisteredTranslatorsClass,&local_res10,(bool *)local_res18);
  return true;
}

// RegisterWriter @ 14e500c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UInterchangeManager::RegisterWriter(UInterchangeManager *this,UClass *param_1)

{
  return true;
}

// ReimportAsset @ 14e502250

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
UInterchangeManager::ReimportAsset
          (UInterchangeManager *this,UObject *param_1,FImportAssetParameters *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FImportResult *this_00;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  TStrongObjectPtr<UInterchangeSourceData,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  local_58;
  FString local_50;
  TOptional<FString>_u_0 local_40;
  undefined1 local_30 [24];
  TReferenceControllerBase<1> *local_18;
  
  ValidateReimportParameter(this,(TOptional<FString> *)&local_40.TypedValue,param_1,param_2,true);
  if (local_40.TypedValue.Data.ArrayMax == -1) {
    bVar4 = false;
  }
  else {
    UE::Interchange::FScopedSourceData::FScopedSourceData
              ((FScopedSourceData *)&local_58,&local_40.TypedValue);
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    pTVar2 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                  *)local_30,&local_50,(UInterchangeSourceData *)local_58.Object,
                            param_2,ImportType_Asset);
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x8;
    this_00 = *(FImportResult **)pTVar2;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_30._8_8_);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    UE::Interchange::FImportResult::WaitUntilDone(this_00,param_2->bRunSynchronous);
    pTVar3 = UE::Interchange::FImportResult::GetImportedObjects(this_00);
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar3);
    bVar4 = this_00->ImportStatus != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if ((UInterchangeSourceData *)local_58.Object != (UInterchangeSourceData *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_58.Object);
    }
  }
  if ((local_40.TypedValue.Data.ArrayMax != -1) &&
     (local_40.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_40.TypedValue.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// ReimportAssetAsync @ 14e502390

/* WARNING: Removing unreachable block (ram,0x00014e50240f) */
/* WARNING: Removing unreachable block (ram,0x00014e502419) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedRef<UE::Interchange::FImportResult,1> * __thiscall
UInterchangeManager::ReimportAssetAsync
          (UInterchangeManager *this,
          TSharedRef<UE::Interchange::FImportResult,1> *__return_storage_ptr__,UObject *param_1,
          FImportAssetParameters *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar2;
  FScopedSourceData local_68;
  TOptional<FString>_u_0 local_60;
  FString local_50;
  TSharedRef<UE::Interchange::FImportResult,1> local_40;
  undefined1 local_30 [24];
  TReferenceControllerBase<1> *local_18;
  
  MakeShared<UE::Interchange::FImportResult,1>(&local_40);
  UE::Interchange::FImportResult::SetDone(local_40.Object);
  ValidateReimportParameter(this,(TOptional<FString> *)&local_60.TypedValue,param_1,param_2,false);
  if (local_60.TypedValue.Data.ArrayMax == -1) {
    __return_storage_ptr__->Object = local_40.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_40.SharedReferenceCount.ReferenceController;
    if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    UE::Interchange::FScopedSourceData::FScopedSourceData(&local_68,&local_60.TypedValue);
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    pTVar2 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                  *)local_30,&local_50,
                            (UInterchangeSourceData *)local_68.SourceDataPtr.Object,param_2,
                            ImportType_Asset);
    __return_storage_ptr__->Object = *(FImportResult **)pTVar2;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x8;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_30._8_8_);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_68.SourceDataPtr.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_68.SourceDataPtr.Object);
    }
    if ((local_60.TypedValue.Data.ArrayMax != -1) &&
       (local_60.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_60.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ReleaseAsyncHelper @ 14e502510

/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UInterchangeManager::ReleaseAsyncHelper
          (UInterchangeManager *this,TWeakPtr<UE::Interchange::FImportAsyncHelper,1> *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *pFVar2;
  int *piVar3;
  TSharedPtr<FAsyncTaskNotification,1> *this_00;
  longlong *plVar4;
  ulonglong uVar5;
  atomic<int> aVar6;
  double dVar7;
  uint uVar8;
  UInterchangeResultsContainer *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  code *pcVar12;
  double dVar13;
  uint uVar14;
  TMap<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar15;
  bool bVar16;
  atomic<int> aVar17;
  TTuple<UClass_*,bool> *pTVar18;
  FText *pFVar19;
  FAsyncTaskNotification *pFVar20;
  FString *pFVar21;
  FUObjectItem *this_01;
  FTextFormat *pFVar22;
  FImportAsyncHelper *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  longlong *plVar25;
  int iVar26;
  uint uVar27;
  FImportAsyncHelper *pFVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FImportAsyncHelper *pFVar31;
  FImportAsyncHelper *pFVar32;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *_Dst;
  longlong lVar33;
  undefined1 *puVar34;
  uint *puVar35;
  undefined1 *puVar36;
  longlong lVar37;
  TMap<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar38;
  bool bVar39;
  bool local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_238 [4];
  uint local_234;
  int local_230 [2];
  LARGE_INTEGER local_228;
  TArray<UInterchangeResult_*,TSizedDefaultAllocator<32>_> local_220;
  TArray<UInterchangeResult_*,TSizedDefaultAllocator<32>_> local_210;
  FText local_200;
  FText local_1f0;
  undefined1 local_1e0 [4];
  int local_1dc;
  TMap<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_1d8;
  FString local_1d0;
  undefined8 local_1c0;
  FSharedReferencer<1> FStack_1b8;
  TMap<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TMap<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  bool *local_150;
  int *local_148;
  undefined1 local_140;
  FString local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FString local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88 [2];
  undefined4 local_5c;
  
  if ((((param_1->Object == (FImportAsyncHelper *)0x0) ||
       (pTVar24 = (param_1->WeakReferenceCount).ReferenceController,
       pTVar24 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar24->SharedReferenceCount < 1))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("AsyncHelper.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                             ,0xac0,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  bVar16 = GIsAutomationTesting == false;
  pFVar31 = (FImportAsyncHelper *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar32 = (FImportAsyncHelper *)0x0;
  local_230[0] = 0;
  local_res18[0] = false;
  pFVar28 = pFVar32;
  if (pFVar31 != (FImportAsyncHelper *)0x0) {
    aVar6 = *(atomic<int> *)&pFVar31->_padding_;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        QueryPerformanceCounter(&local_228);
        dVar13 = (double)local_228.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000;
        pFVar31 = pFVar32;
        goto LAB_14e502616;
      }
      LOCK();
      aVar17 = *(atomic<int> *)&pFVar31->_padding_;
      bVar39 = aVar6 == aVar17;
      if (bVar39) {
        *(atomic<int> *)&pFVar31->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar17 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar17;
    } while (!bVar39);
    pFVar28 = param_1->Object;
  }
  QueryPerformanceCounter(&local_228);
  dVar13 = (double)local_228.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (pFVar28 == (FImportAsyncHelper *)0x0) {
LAB_14e502616:
    bVar39 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar39) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  dVar7 = pFVar28->TaskExecuteStarted;
  if (0 < (pFVar28->Translators).ArrayNum) {
    if (((pFVar28->Translators).ArrayNum < 1) &&
       (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar39)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar18 = TSet<TTuple<UClass_*,bool>,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UClass_*,bool>,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>,FDefaultSetAllocator>
                      *)&this->NonParallelTranslatorLocks,
                     *(UClass **)(*(longlong *)(pFVar28->Translators).AllocatorInstance.Data + 0x10)
                    );
    pFVar23 = (FImportAsyncHelper *)&pTVar18->field_0x8;
    if (pTVar18 == (TTuple<UClass_*,bool> *)0x0) {
      pFVar23 = pFVar32;
    }
    if (pFVar23 != (FImportAsyncHelper *)0x0) {
      *(undefined1 *)&pFVar23->_padding_ = 0;
    }
  }
  local_150 = local_res18;
  local_148 = local_230;
  pUVar9 = (((pFVar28->AssetImportResult).Object)->Results).field0_0x0.DebugPtr;
  pFVar2 = &pUVar9->Lock;
  local_140 = bVar16;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.ArrayNum = (pUVar9->Results).ArrayNum;
  lVar37 = (longlong)local_220.ArrayNum;
  pFVar10 = (pUVar9->Results).AllocatorInstance.Data;
  if (local_220.ArrayNum == 0) {
    local_220.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_220.ArrayNum,0,&local_220.AllocatorInstance,local_220.ArrayNum,
               &local_220.ArrayMax);
    memcpy(local_220.AllocatorInstance.Data,pFVar10,lVar37 << 3);
  }
  pFVar32 = (FImportAsyncHelper *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  `UInterchangeManager::ReleaseAsyncHelper'::__l10::<lambda_1>::operator()(&local_150,&local_220);
  if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  pUVar9 = (((pFVar28->SceneImportResult).Object)->Results).field0_0x0.DebugPtr;
  pFVar2 = &pUVar9->Lock;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = (pUVar9->Results).ArrayNum;
  lVar37 = (longlong)local_210.ArrayNum;
  pFVar10 = (pUVar9->Results).AllocatorInstance.Data;
  if (local_210.ArrayNum == 0) {
    local_210.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_210.ArrayNum,0,&local_210.AllocatorInstance,local_210.ArrayNum,
               &local_210.ArrayMax);
    memcpy(local_210.AllocatorInstance.Data,pFVar10,lVar37 << 3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  `UInterchangeManager::ReleaseAsyncHelper'::__l10::<lambda_1>::operator()(&local_150,&local_210);
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar31);
  pFVar31 = (FImportAsyncHelper *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar28 = pFVar31;
  if (pFVar31 != (FImportAsyncHelper *)0x0) {
    aVar6 = *(atomic<int> *)&pFVar31->_padding_;
    do {
      pFVar28 = pFVar32;
      if (aVar6 == (atomic<int>)0x0) goto LAB_14e502852;
      LOCK();
      aVar17 = *(atomic<int> *)&pFVar31->_padding_;
      bVar16 = aVar6 == aVar17;
      if (bVar16) {
        *(atomic<int> *)&pFVar31->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar17 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar17;
    } while (!bVar16);
    pFVar32 = param_1->Object;
    pFVar28 = pFVar31;
  }
LAB_14e502852:
  pFVar2 = &this->ImportTasksLock;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  if (pFVar32 != (FImportAsyncHelper *)0x0) {
    pFVar10 = (this->ImportTasks).AllocatorInstance.Data;
    for (pFVar29 = pFVar10; pFVar29 != pFVar10 + (longlong)(this->ImportTasks).ArrayNum * 0x10;
        pFVar29 = pFVar29 + 0x10) {
      if (*(FImportAsyncHelper **)pFVar29 == pFVar32) {
        iVar26 = (int)((longlong)pFVar29 - (longlong)pFVar10 >> 4);
        if (iVar26 != -1) {
          _Dst = (TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *)
                 (pFVar10 + (longlong)iVar26 * 0x10);
          DestructItems<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int>(_Dst,1);
          memmove(_Dst,_Dst + 1,(longlong)(((this->ImportTasks).ArrayNum - iVar26) + -1) << 4);
          piVar3 = &(this->ImportTasks).ArrayNum;
          *piVar3 = *piVar3 + -1;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar28);
  pTVar24 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar24->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar24 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e502956;
      }
      LOCK();
      aVar17 = pTVar24->SharedReferenceCount;
      bVar16 = aVar6 == aVar17;
      if (bVar16) {
        pTVar24->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar17 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar17;
    } while (!bVar16);
    if (((param_1->Object != (FImportAsyncHelper *)0x0) &&
        (param_1->Object->bCancel == (atomic<bool>)0x0)) && (2 < (byte)LogInterchangeEngine._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
    }
  }
LAB_14e502956:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ImportTasksLock);
  iVar26 = (this->ImportTasks).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ImportTasksLock);
  iVar26 = this->QueueTaskCount + iVar26;
  this_00 = &this->Notification;
  if (iVar26 == 0) {
    SetActiveMode(this,false);
    if (this_00->Object != (FAsyncTaskNotification *)0x0) {
      FText::FText(&local_200);
      pFVar19 = FText::GetEmpty();
      local_1f0.TextData.Reference = (pFVar19->TextData).Reference;
      if (local_1f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f0.TextData.Reference + 8))
                  (local_1f0.TextData.Reference,local_1e0);
      }
      local_1f0.Flags = pFVar19->Flags;
      if (this->bImportCanceled == false) {
        if (local_230[0] == 0) {
          if (2 < (byte)LogInterchangeEngine._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
          }
          pFVar19 = FText::AsLocalizable_Advanced_LocText
                              (&local_108,L"Interchange",L"Asynchronous_import_progress",
                               L"No Data Imported");
          FText::operator=(&local_1f0,pFVar19);
          if (local_108.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          }
          pFVar19 = FText::AsLocalizable_Advanced_LocText
                              (&local_f8,L"Interchange",L"Asynchronous_import_empty_results",
                               L"Import Done");
          FText::operator=(&local_200,pFVar19);
          if (local_f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
          }
          local_res18[0] = true;
        }
        else if (local_res18[0] == false) {
          pFVar19 = FText::AsLocalizable_Advanced_LocText
                              (&local_c8,L"Interchange",L"Asynchronous_import_failed",
                               L"Import Failed");
          FText::operator=(&local_200,pFVar19);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          }
        }
        else {
          pFVar21 = ::FString::SanitizeFloat(&local_e8,dVar13 - dVar7,1);
          ::FString::ConcatCF(&local_138,L"Import Done in ",pFVar21);
          ::FString::ConcatFC(&local_1d0,&local_138,L" seconds.");
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogInterchangeEngine._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
          }
          pFVar19 = FText::AsLocalizable_Advanced_LocText
                              (&local_d8,L"Interchange",L"Asynchronous_import_end",L"Import Done");
          FText::operator=(&local_200,pFVar19);
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
        }
        pFVar20 = TSharedPtr<FAsyncTaskNotification,1>::operator->(&this->Notification);
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_b8,L"Interchange",L"Asynchronous_operation_completed",
                             L"Operation Completed.");
        FAsyncTaskNotification::SetProgressText(pFVar20,pFVar19);
        local_118.TextData.Reference = local_b8.TextData.Reference;
      }
      else {
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_128,L"Interchange",L"Asynchronous_import_canceled",
                             L"Import Canceled");
        FText::operator=(&local_200,pFVar19);
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        local_res18[0] = true;
        pFVar20 = TSharedPtr<FAsyncTaskNotification,1>::operator->(this_00);
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"Interchange",L"Asynchronous_operation_cancelled",
                             L"Operation was cancelled by user.");
        FAsyncTaskNotification::SetProgressText(pFVar20,pFVar19);
      }
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
      pFVar20 = TSharedPtr<FAsyncTaskNotification,1>::operator->(&this->Notification);
      FAsyncTaskNotification::SetComplete(pFVar20,&local_200,&local_1f0,local_res18[0]);
      local_1c0 = 0;
      FStack_1b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->Notification != (TSharedPtr<FAsyncTaskNotification,1> *)&local_1c0) {
        (this->Notification).Object = (FAsyncTaskNotification *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Notification).SharedReferenceCount,&FStack_1b8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_1b8.ReferenceController);
      if (local_1f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
      }
      if (local_200.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
      }
    }
    local_1a0 = &(this->ImportAllWithSamePipelines).field_0x10;
    iStack_1a8 = 0;
    iVar26 = *(int *)&(this->ImportAllWithSamePipelines).field_0x28;
    pTVar38 = &this->ImportAllWithSamePipelines;
    local_190 = 0;
    uStack_1a4 = 1;
    iStack_194 = 0;
    if (iVar26 != 0) {
      puVar35 = *(uint **)&(this->ImportAllWithSamePipelines).field_0x20;
      if (puVar35 == (uint *)0x0) {
        puVar35 = (uint *)local_1a0;
      }
      uVar30 = *puVar35;
      while (uVar30 == 0) {
        lVar37 = (longlong)iStack_1a8;
        local_190 = local_190 + 0x20;
        iStack_1a8 = iStack_1a8 + 1;
        if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8)
        goto LAB_14e502da5;
        uVar30 = puVar35[lVar37 + 1];
      }
      uStack_1a4 = -uVar30 & uVar30;
      uVar5 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar37 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_1dc = (int)lVar37;
      iStack_194 = local_1dc + -1 + local_190;
      if (iVar26 < iStack_194) {
LAB_14e502da5:
        iStack_194 = iVar26;
      }
    }
    puVar36 = &(this->ImportAllWithSamePipelines).field_0x10;
    uVar30 = *(uint *)&(this->ImportAllWithSamePipelines).field_0x28;
    uVar27 = uVar30 & 0xffffffe0;
    uStack_18c = local_5c;
    iStack_188 = *(int *)&(this->ImportAllWithSamePipelines).field_0x8 -
                 *(int *)&(this->ImportAllWithSamePipelines).field_0x34;
    uStack_198 = 0xffffffff;
    TStack_178.CurrentBitIndex = iStack_194;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    TStack_178._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
    iVar26 = (int)uVar30 >> 5;
    TStack_178._28_4_ = local_5c;
    TStack_178.BaseBitIndex = local_190;
    uStack_158 = CONCAT44(uStack_184,iStack_188);
    local_234 = uVar30;
    local_1d8 = pTVar38;
    local_1b0 = pTVar38;
    local_180 = pTVar38;
    TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1a0;
    if (((int)uVar30 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar8 = *(uint *)&(this->ImportAllWithSamePipelines).field_0x28;
    uVar14 = local_234;
    if (uVar30 != uVar8) {
      puVar11 = *(undefined1 **)&(this->ImportAllWithSamePipelines).field_0x20;
      puVar34 = puVar36;
      if (puVar11 != (undefined1 *)0x0) {
        puVar34 = puVar11;
      }
      uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar26 * 4);
      while (uVar30 == 0) {
        lVar37 = (longlong)iVar26;
        uVar27 = uVar27 + 0x20;
        iVar26 = iVar26 + 1;
        local_234 = uVar8;
        uVar14 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_14e502ec0;
        uVar30 = *(uint *)(puVar34 + lVar37 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
      lVar37 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_234 = (int)lVar37 + -1 + uVar27;
      uVar14 = local_234;
      if ((int)uVar8 < (int)local_234) {
        local_234 = uVar8;
        uVar14 = uVar8;
      }
    }
LAB_14e502ec0:
    while( true ) {
      pTVar15 = local_180;
      if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
        `TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_178.CurrentBitIndex == uVar14) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar36)) &&
         (pTVar15 == pTVar38)) break;
      lVar37 = *(longlong *)pTVar15;
      lVar33 = (longlong)TStack_178.CurrentBitIndex * 0x20;
      plVar25 = *(longlong **)(lVar33 + 8 + lVar37);
      iVar26 = *(int *)(lVar33 + 0x10 + lVar37);
      plVar4 = plVar25 + iVar26;
      while( true ) {
        if (*(int *)(lVar33 + 0x10 + lVar37) != iVar26) {
          `TCheckedPointerIterator<UInterchangePipelineBase_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_238);
        }
        if (plVar25 == plVar4) break;
        this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*plVar25 + 0xc));
        FUObjectItem::ClearRootFlags(this_01,Async);
        plVar25 = plVar25 + 1;
      }
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      pTVar38 = local_1d8;
    }
    pTVar38 = &this->ImportAllWithSamePipelines;
    bVar16 = 1 < *(int *)&(this->ImportAllWithSamePipelines).field_0x48;
    if (!bVar16) {
      TSet<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)pTVar38);
    }
    TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar38,0,*(int *)&(this->ImportAllWithSamePipelines).field_0x8);
    puVar36 = &(this->ImportAllWithSamePipelines).field_0xc;
    *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x8 = 0;
    if (*(int *)puVar36 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)pTVar38,0,(int *)puVar36);
    }
    *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x34 = 0;
    iVar26 = *(int *)&(this->ImportAllWithSamePipelines).field_0x2c;
    *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x28 = 0;
    if ((iVar26 < 0) || (0x80 < iVar26)) {
      *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ImportAllWithSamePipelines).field_0x10,0);
    }
    if (bVar16) {
      *(undefined4 *)&(this->ImportAllWithSamePipelines).field_0x48 = 1;
      TSet<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)pTVar38);
    }
    this->bImportCanceled = false;
  }
  else if (this_00->Object != (FAsyncTaskNotification *)0x0) {
    pFVar20 = TSharedPtr<FAsyncTaskNotification,1>::operator->(this_00);
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_98,L"Interchange",L"Asynchronous_pending_import_tasks",
                         L"Importing ({0})");
    pFVar22 = FTextFormat::FTextFormat(local_88,pFVar19,Default);
    pFVar19 = FText::Format<int>(&local_a8,pFVar22,iVar26);
    FAsyncTaskNotification::SetProgressText(pFVar20,pFVar19);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  StartQueuedTasks(this,false);
  pTVar24 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar24->WeakReferenceCount;
    aVar6 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar6 == (atomic<int>)0x1) {
      (**(code **)(pTVar24->_padding_ + 8))(pTVar24,1);
    }
  }
  return;
}

// RemoveImportTask @ 14e503310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInterchangeManager::RemoveImportTask(UInterchangeManager *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_res8 [8];
  longlong local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if (&this->ImportTasksLock == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ImportTasksLock);
  iVar8 = (this->ImportTasks).ArrayNum;
  pFVar10 = (this->ImportTasks).AllocatorInstance.Data;
  pFVar6 = pFVar10 + (longlong)iVar8 * 0x10;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  while( true ) {
    if ((this->ImportTasks).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    pTVar3 = pTStack_30;
    if (pFVar10 == pFVar6) goto LAB_14e5033eb;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    lVar5 = *(longlong *)pFVar10;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x14) == param_1)) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pFVar10 = pFVar10 + 0x10;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = lVar5;
  pTStack_30 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_14e5033eb:
  if (local_38 != 0) {
    pFVar10 = (this->ImportTasks).AllocatorInstance.Data;
    if ((pFVar10 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar10 + (longlong)(this->ImportTasks).ArrayMax * 0x10)) {
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
    iVar8 = (this->ImportTasks).ArrayNum;
    lVar5 = (longlong)iVar8;
    if (iVar8 != 0) {
      pFVar10 = (this->ImportTasks).AllocatorInstance.Data;
      iVar12 = 0;
      bVar4 = *(longlong *)pFVar10 != local_38;
      lVar11 = 0;
      iVar8 = 0;
      do {
        lVar11 = lVar11 + 1;
        iVar9 = iVar8 + 1;
        if (lVar11 < lVar5) {
          pFVar6 = pFVar10 + lVar11 * 0x10;
          do {
            if (bVar4 != (*(longlong *)pFVar6 != local_38)) break;
            iVar9 = iVar9 + 1;
            lVar11 = lVar11 + 1;
            pFVar6 = pFVar6 + 0x10;
          } while (lVar11 < lVar5);
        }
        iVar7 = iVar9 - iVar8;
        if (bVar4 == false) {
          DestructItems<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int>
                    ((TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *)
                     (pFVar10 + (longlong)iVar8 * 0x10),iVar7);
        }
        else {
          if (iVar12 != iVar8) {
            memmove(pFVar10 + (longlong)iVar12 * 0x10,pFVar10 + (longlong)iVar8 * 0x10,
                    (longlong)iVar7 << 4);
          }
          iVar12 = iVar12 + iVar7;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar11 < lVar5);
      (this->ImportTasks).ArrayNum = iVar12;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ImportTasksLock);
  return;
}

// RemoveImportTask @ 14e503590

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
UInterchangeManager::RemoveImportTask
          (UInterchangeManager *this,TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *_Dst;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->Object != (FImportAsyncHelper *)0x0) {
    pFVar2 = (this->ImportTasks).AllocatorInstance.Data;
    for (pFVar4 = pFVar2; pFVar4 != pFVar2 + (longlong)(this->ImportTasks).ArrayNum * 0x10;
        pFVar4 = pFVar4 + 0x10) {
      if (*(FImportAsyncHelper **)pFVar4 == param_1->Object) {
        iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 4);
        if (iVar3 != -1) {
          _Dst = (TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *)
                 (pFVar2 + (longlong)iVar3 * 0x10);
          DestructItems<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,int>(_Dst,1);
          memmove(_Dst,_Dst + 1,(longlong)(((this->ImportTasks).ArrayNum - iVar3) + -1) << 4);
          piVar1 = &(this->ImportTasks).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ResetReplaceExistingAlldialogAnswerSet @ 14e503720

void __cdecl UInterchangeManager::ResetReplaceExistingAlldialogAnswerSet(void)

{
  LOCK();
  UE::Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer =
       (TAtomic<signed_char>)0xff;
  UNLOCK();
  return;
}

// SanitizeNameInline @ 14e5037d0

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
UInterchangeManager::SanitizeNameInline
          (UInterchangeManager *this,FString *param_1,ESanitizeNameTypeFlags param_2)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(FString_&,ESanitizeNameTypeFlags),FDefaultTSDelegateUserPolicy>
  *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  wchar_t wVar8;
  uint uVar9;
  undefined *puVar10;
  longlong lVar11;
  wchar_t wVar12;
  uint uVar13;
  
  bVar5 = false;
  wVar12 = L'\"';
  wVar8 = L'\"';
  if ((param_2 & Name) != None) {
    puVar10 = &u________;
    do {
      ::FString::ReplaceCharInlineCaseSensitive(param_1,wVar8,L'_');
      wVar8 = *(wchar_t *)(puVar10 + 2);
      puVar10 = puVar10 + 2;
    } while (wVar8 != L'\0');
    bVar5 = true;
  }
  if ((param_2 & ObjectName) != None) {
    puVar10 = &u________________;
    wVar8 = L'\"';
    do {
      ::FString::ReplaceCharInlineCaseSensitive(param_1,wVar8,L'_');
      wVar8 = *(wchar_t *)(puVar10 + 2);
      puVar10 = puVar10 + 2;
    } while (wVar8 != L'\0');
    bVar5 = true;
  }
  if ((param_2 & ObjectPath) != None) {
    puVar10 = &u________________;
    do {
      ::FString::ReplaceCharInlineCaseSensitive(param_1,wVar12,L'_');
      wVar12 = *(wchar_t *)(puVar10 + 2);
      puVar10 = puVar10 + 2;
    } while (wVar12 != L'\0');
  }
  if ((param_2 & LongPackage) != None) {
    puVar10 = &u______<>________;
    wVar8 = L'\\';
    do {
      ::FString::ReplaceCharInlineCaseSensitive(param_1,wVar8,L'_');
      wVar8 = *(wchar_t *)(puVar10 + 2);
      puVar10 = puVar10 + 2;
    } while (wVar8 != L'\0');
  }
  if (bVar5) {
    this_00 = &this->OnSanitizeName;
    if (this_00 ==
        (TMulticastDelegate<void___cdecl(FString_&,ESanitizeNameTypeFlags),FDefaultTSDelegateUserPolicy>
         *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    puVar1 = &(this->OnSanitizeName).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar13 = *(int *)&(this->OnSanitizeName).field_0x30 - 1;
    if (-1 < (int)uVar13) {
      lVar11 = (longlong)(int)uVar13 << 4;
      bVar5 = false;
      do {
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&(this->OnSanitizeName).field_0x30) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar2 = *(longlong *)&(this->OnSanitizeName).field_0x28;
        if ((*(int *)(lVar2 + 8 + lVar11) == 0) ||
           (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) {
LAB_14e50399e:
          bVar5 = true;
        }
        else {
          cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2);
          if (cVar7 == '\0') goto LAB_14e50399e;
        }
        lVar11 = lVar11 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(this->OnSanitizeName).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

// ScriptedImportAssetAsync @ 14e504080

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
UInterchangeManager::ScriptedImportAssetAsync
          (UInterchangeManager *this,FString *param_1,UInterchangeSourceData *param_2,
          FImportAssetParameters *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar4;
  undefined1 local_28 [24];
  TReferenceControllerBase<1> *local_10;
  
  param_3->bRunSynchronous = false;
  pTVar4 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                *)local_28,param_1,param_2,param_3,ImportType_Asset);
  pTVar2 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x8;
  lVar3 = *(longlong *)pTVar4;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  iVar1 = *(int *)(lVar3 + 0x70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return iVar1 != 0;
}

// ScriptedImportSceneAsync @ 14e5042c0

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
UInterchangeManager::ScriptedImportSceneAsync
          (UInterchangeManager *this,FString *param_1,UInterchangeSourceData *param_2,
          FImportAssetParameters *param_3)

{
  bool bVar1;
  undefined1 local_28 [16];
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  param_3->bRunSynchronous = false;
  ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                       *)local_28,param_1,param_2,param_3,ImportType_Scene);
  if ((*(int *)(local_28._0_8_ + 0x70) == 0) || (*(int *)(local_18 + 0x70) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  return bVar1;
}

// ScriptedReimportAssetAsync @ 14e504330

/* WARNING: Removing unreachable block (ram,0x00014e50439f) */
/* WARNING: Removing unreachable block (ram,0x00014e5043a9) */
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
UInterchangeManager::ScriptedReimportAssetAsync
          (UInterchangeManager *this,UObject *param_1,FImportAssetParameters *param_2)

{
  atomic<UE::Interchange::FImportResult::EStatus> aVar1;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar2;
  FImportResult *pFVar3;
  FSharedReferencer<1> FVar4;
  FScopedSourceData local_res20;
  TOptional<FString>_u_0 local_58;
  FString local_48;
  TSharedRef<UE::Interchange::FImportResult,1> local_38;
  undefined1 local_28 [24];
  TReferenceControllerBase<1> *local_10;
  
  MakeShared<UE::Interchange::FImportResult,1>(&local_38);
  UE::Interchange::FImportResult::SetDone(local_38.Object);
  ValidateReimportParameter(this,(TOptional<FString> *)&local_58.TypedValue,param_1,param_2,false);
  if (local_58.TypedValue.Data.ArrayMax == -1) {
    pFVar3 = local_38.Object;
    FVar4.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    UE::Interchange::FScopedSourceData::FScopedSourceData(&local_res20,&local_58.TypedValue);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pTVar2 = ImportInternal(this,(TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                                  *)local_28,&local_48,
                            (UInterchangeSourceData *)local_res20.SourceDataPtr.Object,param_2,
                            ImportType_Asset);
    FVar4.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar2->field_0x8;
    pFVar3 = *(FImportResult **)pTVar2;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar4.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_28._8_8_);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_res20.SourceDataPtr.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res20.SourceDataPtr.Object);
    }
    if ((local_58.TypedValue.Data.ArrayMax != -1) &&
       (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  aVar1 = pFVar3->ImportStatus;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return aVar1 != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
}

// SetActiveMode @ 14e507140

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

void __thiscall UInterchangeManager::SetActiveMode(UInterchangeManager *this,bool param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FThreadSafeBool FVar7;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  undefined ***pppuVar9;
  undefined1 auStackY_a8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_78;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  UInterchangeManager *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if ((this->bIsActive != (FThreadSafeBool)0x0) != param_1) {
    pTVar2 = &this->NotificationTickHandle;
    LOCK();
    FVar7._1_3_ = 0;
    FVar7._0_1_ = param_1;
    this->bIsActive = FVar7;
    UNLOCK();
    if (this->bIsActive == (FThreadSafeBool)0x0) {
      local_78.Object = pTVar2->Object;
      local_78.WeakReferenceCount.ReferenceController =
           (this->NotificationTickHandle).WeakReferenceCount.ReferenceController;
      if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_78);
      if (pTVar2 != &local_58) {
        pTVar4 = (this->NotificationTickHandle).WeakReferenceCount.ReferenceController;
        pTVar2->Object = (FElement *)0x0;
        (this->NotificationTickHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
    else {
      if ((((pTVar2->Object != (FElement *)0x0) &&
           (pTVar4 = (this->NotificationTickHandle).WeakReferenceCount.ReferenceController,
           pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)
          ) && (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6687235758857647040>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                                   ,0xc40,"!NotificationTickHandle.IsValid()"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = FTSTicker::GetCoreTicker();
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UInterchangeManager::SetActiveMode'::`8'::<lambda_1>,1,0>::
                  _vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UInterchangeManager::SetActiveMode'::__l8::<lambda_1>,bool,float>
                    ::Call;
      local_20 = (undefined ***)0x0;
      local_30 = this;
      pTVar8 = FTSTicker::AddTicker
                         (this_00,&local_68,L"InterchangeManagerTickHandle",__real_3dcccccd,
                          (TUniqueFunction<bool___cdecl(float)> *)local_48);
      if (pTVar2 != pTVar8) {
        pTVar2->Object = pTVar8->Object;
        pTVar8->Object = (FElement *)0x0;
        pTVar4 = (this->NotificationTickHandle).WeakReferenceCount.ReferenceController;
        (this->NotificationTickHandle).WeakReferenceCount.ReferenceController =
             (pTVar8->WeakReferenceCount).ReferenceController;
        (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_68.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_48[0] != (code *)0x0) {
        pppuVar9 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar9 = local_20;
        }
        (*(code *)(*pppuVar9)[2])();
      }
    }
  }
  return;
}

// SetEditorUtilities @ 14e507b90

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UInterchangeManager::SetEditorUtilities(UInterchangeManager *this,UClass *param_1)

{
  TStrongObjectPtr<UInterchangeEditorUtilitiesBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  UPackage *pUVar2;
  UClass *pUVar3;
  UObjectBase *this_00;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  pUVar2 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UInterchangeEditorUtilitiesBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar3,param_1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,param_1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar2;
  this_00 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (this_00 != (UObjectBase *)0x0) {
    pTVar1 = &this->EditorUtilities;
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
      pTVar1->Object = (UObject *)0x0;
    }
    UObjectBase::AddRef(this_00);
    if (pTVar1 == (TStrongObjectPtr<UInterchangeEditorUtilitiesBase,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)&local_b0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
    }
    else {
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
      }
      pTVar1->Object = (UObject *)this_00;
    }
  }
  return;
}

// SetInterchangeImportEnabled @ 14e507cf0

void __cdecl UInterchangeManager::SetInterchangeImportEnabled(bool param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = CCvarInterchangeImportEnable._8_8_;
  local_2c = 0xe000000;
  local_28 = 0;
  lVar1 = *(longlong *)CCvarInterchangeImportEnable._8_8_;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0xf000000;
  local_14 = 0x1000000;
  uVar3 = (**(code **)(lVar1 + 0xa8))(CCvarInterchangeImportEnable._8_8_,local_38,&local_2c);
  puVar4 = &u_0;
  if (param_1) {
    puVar4 = &u_1;
  }
  (**(code **)(lVar1 + 0xb0))(uVar2,puVar4,uVar3);
  return;
}

// SetReplaceExistingAlldialogAnswer @ 14e508310

void __cdecl UInterchangeManager::SetReplaceExistingAlldialogAnswer(bool param_1)

{
  LOCK();
  UE::Interchange::Private::StaticHelpers::bReplaceExistingAllDialogAnswer =
       (TAtomic<signed_char>)param_1;
  UNLOCK();
  return;
}

// StartQueuedTasks @ 14e509440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInterchangeManager::StartQueuedTasks(UInterchangeManager *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<UE::Interchange::FImportAsyncHelper,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  UClass *pUVar4;
  TNode *pTVar5;
  FQueuedTaskData *pFVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  TNode *pTVar10;
  UObject *pUVar11;
  FElement *pFVar12;
  code *pcVar13;
  FImportAsyncHelper *pFVar14;
  FSharedReferencer<1> FVar15;
  FWeakObjectPtr FVar16;
  char cVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FTaskGraphInterface *pFVar23;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar24;
  TNode *pTVar25;
  TTuple<UClass_*,bool> *pTVar26;
  TReferenceControllerBase<1> *pTVar27;
  FInterchangeTaskSystem *pFVar28;
  ulong64 uVar29;
  FScriptContainerElement *pFVar30;
  undefined8 *puVar31;
  longlong lVar32;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar33;
  longlong lVar34;
  atomic<int> *paVar35;
  FImportAsyncHelper *pFVar36;
  LPCRITICAL_SECTION lpCriticalSection;
  TBitArray<FDefaultBitArrayAllocator> *pTVar37;
  uint uVar38;
  TReferenceControllerBase<1> *pTVar39;
  TReferenceControllerBase<1> *pTVar40;
  FInterchangeTaskBase *pFVar41;
  uchar *puVar42;
  bool bVar43;
  undefined1 local_res20 [8];
  undefined1 local_248 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_240;
  FImportAsyncHelper *local_230;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_228;
  FImportAsyncHelper *local_218;
  FSharedReferencer<1> local_210;
  UClass *pUStack_208;
  uint local_200;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  FLLMScope local_1f0 [2];
  undefined1 local_1e8 [16];
  FSharedReferencer<1> local_1d8;
  FImportAsyncHelper *local_1d0;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  FWeakObjectPtr local_1a8;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  undefined8 local_170;
  UObject *local_168;
  LPCRITICAL_SECTION local_160;
  FMemScope local_158;
  UInterchangeManager *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  FSharedReferencer<1> FStack_138;
  UClass *local_130;
  FImportAsyncHelper *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  FQueuedTaskData local_f8;
  TWeakPtr<UE::Interchange::FImportAsyncHelper,1> local_e0;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_d0;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_c0;
  undefined1 local_b0 [40];
  int local_88;
  undefined4 uStack_84;
  longlong local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  bVar43 = -1 < CpuChannel->Enabled;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1519,"UInterchangeManager::StartQueuedTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
               ,0x5ef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1519);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1521,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_1f0,LLMScope_Name1521,false,None,Default,true);
  FMemScope::FMemScope(&local_158,&LLMScope_Name1521,true);
  cVar17 = (**(code **)(*(longlong *)CCvarInterchangeImportEnable._8_8_ + 0xc0))();
  if ((cVar17 == '\0') &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6687235758857648653>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                          ,0x5f3,"IsInterchangeImportEnabled()"), bVar18)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  bVar18 = IsInGameThread();
  if (bVar18) {
    if (GIsGarbageCollecting == false) {
      local_148 = &local_170;
      this->bGCEndDelegateCancellAllTask = false;
      local_170 = 0;
      local_150 = this;
      pFVar23 = FTaskGraphInterface::Get();
      iVar19 = (**(code **)((longlong)*pFVar23 + 0x20))(pFVar23);
      local_190._padding_._0_4_ = 0;
      local_190._padding_._4_4_ = 1;
      pFVar36 = (FImportAsyncHelper *)&this->NonParallelTranslatorQueueTasks;
      local_190.UnvisitedBitMask = 0xffffffff;
      puVar2 = &(this->NonParallelTranslatorQueueTasks).field_0x10;
      local_190.CurrentBitIndex = 0;
      local_190.BaseBitIndex = 0;
      local_1b0 = 1;
      if (1 < iVar19 / 2) {
        local_1b0 = iVar19 / 2;
      }
      local_230 = pFVar36;
      local_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if (*(int *)&(this->NonParallelTranslatorQueueTasks).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
      }
      TStack_120._padding_ = CONCAT44(local_190._padding_._4_4_,(undefined4)local_190._padding_);
      TStack_120.CurrentBitIndex = local_190.CurrentBitIndex;
      TStack_120.UnvisitedBitMask = local_190.UnvisitedBitMask;
      TStack_120._28_4_ = local_190._28_4_;
      TStack_120.BaseBitIndex = local_190.BaseBitIndex;
      local_88 = *(int *)&(this->NonParallelTranslatorQueueTasks).field_0x8 -
                 *(int *)&(this->NonParallelTranslatorQueueTasks).field_0x34;
      local_b0._16_8_ = local_190.Array;
      uStack_100 = CONCAT44(uStack_84,local_88);
      TStack_120.Array = local_190.Array;
      local_128 = pFVar36;
      local_b0._0_8_ = pFVar36;
      local_b0._8_8_ = TStack_120._padding_;
      local_b0._24_8_ = TStack_120._16_8_;
      local_b0._32_8_ = TStack_120._24_8_;
      pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_b0,
                           (TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                           *(int *)&(this->NonParallelTranslatorQueueTasks).field_0x28);
      local_78 = pTVar24->_padding_;
      local_1f8 = pTVar24->Array;
      local_68._0_4_ = pTVar24->UnvisitedBitMask;
      local_68._4_4_ = pTVar24->CurrentBitIndex;
      uStack_60 = *(undefined8 *)&pTVar24->BaseBitIndex;
      local_200 = local_68._4_4_;
      pTStack_70 = local_1f8;
      while( true ) {
        pFVar14 = local_128;
        uVar38 = local_200;
        if ((int)local_128->_padding_ - (local_128->BaseNodeContainers).ArrayMax != (int)uStack_100)
        {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UClass_*,TArray<UInterchangeManager::FQueuedTaskData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_120.CurrentBitIndex == uVar38) && (TStack_120.Array == local_1f8)) &&
           (pFVar14 == pFVar36)) break;
        puVar31 = (undefined8 *)(pFVar14->_padding_ + (longlong)TStack_120.CurrentBitIndex * 0x20);
        iVar19 = *(int *)(puVar31 + 2);
        if (iVar19 != 0) {
          if (param_1) {
            pTVar27 = (TReferenceControllerBase<1> *)puVar31[1];
            local_1d8.ReferenceController =
                 (TReferenceControllerBase<1> *)((longlong)pTVar27 + (longlong)iVar19 * 0x18);
            while( true ) {
              FVar15.ReferenceController = local_1d8.ReferenceController;
              if (*(int *)(puVar31 + 2) != iVar19) {
                local_248[0] = 0;
                `TCheckedPointerIterator<UInterchangeManager::FQueuedTaskData,int,0>::operator!='::
                __l2::<lambda_1>::operator()(local_248);
              }
              if (pTVar27 == FVar15.ReferenceController) break;
              pTVar39 = *(TReferenceControllerBase<1> **)&pTVar27->SharedReferenceCount;
              pFVar36 = (FImportAsyncHelper *)pTVar27->_padding_;
              if (pTVar39 == (TReferenceControllerBase<1> *)0x0) {
                paVar35 = (atomic<int> *)&DAT_00000008;
              }
              else {
                paVar35 = &pTVar39->SharedReferenceCount;
                LOCK();
                *paVar35 = (atomic<int>)((int)*paVar35 + 1);
                UNLOCK();
              }
              pUVar4 = (UClass *)pTVar27[1]._padding_;
              pTVar25 = ::operator_new(0x20);
              if (pTVar25 != (TNode *)0x0) {
                pTVar25->NextNode = (TNode *)0x0;
                (pTVar25->Item).AsyncHelper.Object = pFVar36;
                (pTVar25->Item).AsyncHelper.SharedReferenceCount.ReferenceController = pTVar39;
                if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  *paVar35 = (atomic<int>)((int)*paVar35 + 1);
                  UNLOCK();
                }
                (pTVar25->Item).TranslatorClass = pUVar4;
                pTVar5 = (this->QueuedTasks).Head;
                (this->QueuedTasks).Head = pTVar25;
                pTVar5->NextNode = pTVar25;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar39);
              pTVar27 = (TReferenceControllerBase<1> *)&pTVar27[1].SharedReferenceCount;
            }
            pFVar6 = (FQueuedTaskData *)((ForAnyElementType *)(puVar31 + 1))->Data;
            if (*(int *)((longlong)puVar31 + 0x14) < 0) {
              DestructItems<UInterchangeManager::FQueuedTaskData,int>(pFVar6,*(int *)(puVar31 + 2));
              *(undefined4 *)(puVar31 + 2) = 0;
              pFVar36 = local_230;
              if (*(int *)((longlong)puVar31 + 0x14) != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,0,(ForAnyElementType *)(puVar31 + 1),0,
                           (int *)((longlong)puVar31 + 0x14));
                pFVar36 = local_230;
              }
            }
            else {
              DestructItems<UInterchangeManager::FQueuedTaskData,int>(pFVar6,*(int *)(puVar31 + 2));
              *(undefined4 *)(puVar31 + 2) = 0;
              pFVar36 = local_230;
            }
          }
          else {
            pTVar26 = TSet<TTuple<UClass_*,bool>,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UClass_*,bool>,TDefaultMapHashableKeyFuncs<UClass_*,bool,0>,FDefaultSetAllocator>
                              *)&this->NonParallelTranslatorLocks,(UClass *)*puVar31);
            if ((pTVar26 == (TTuple<UClass_*,bool> *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pFVar36 = local_230;
            if (pTVar26->field_0x8 == '\0') {
              if ((*(int *)(puVar31 + 2) < 1) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              puVar7 = (undefined8 *)puVar31[1];
              local_f8.AsyncHelper.Object = (FImportAsyncHelper *)*puVar7;
              local_f8.AsyncHelper.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)puVar7[1];
              if (local_f8.AsyncHelper.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_f8.AsyncHelper.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_f8.AsyncHelper.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              local_f8.TranslatorClass = (UClass *)puVar7[2];
              TQueue<UInterchangeManager::FQueuedTaskData,1>::Enqueue(&this->QueuedTasks,&local_f8);
              pTVar26->field_0x8 = 1;
              if ((*(int *)(puVar31 + 2) < 1) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pvVar8 = (void *)puVar31[1];
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (*(TReferenceControllerBase<1> **)((longlong)pvVar8 + 8));
              if (*(int *)(puVar31 + 2) + -1 != 0) {
                memmove(pvVar8,(void *)((longlong)pvVar8 + 0x18),
                        (longlong)(*(int *)(puVar31 + 2) + -1) * 0x18);
              }
              *(int *)(puVar31 + 2) = *(int *)(puVar31 + 2) + -1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8.AsyncHelper.SharedReferenceCount.ReferenceController);
              pFVar36 = local_230;
            }
          }
        }
        TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      }
      if (((this->QueuedTasks).Tail)->NextNode != (TNode *)0x0) {
        lpCriticalSection = (LPCRITICAL_SECTION)&this->ImportTasksLock;
        local_160 = lpCriticalSection;
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        do {
          EnterCriticalSection(lpCriticalSection);
          iVar19 = (this->ImportTasks).ArrayNum;
          LeaveCriticalSection(lpCriticalSection);
          if ((local_1b0 <= iVar19) && (!param_1)) break;
          local_218 = (FImportAsyncHelper *)0x0;
          local_210.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pUStack_208 = (UClass *)0x0;
          pTVar25 = ((this->QueuedTasks).Tail)->NextNode;
          if (pTVar25 != (TNode *)0x0) {
            pFVar6 = &pTVar25->Item;
            if ((FQueuedTaskData *)&local_218 != pFVar6) {
              local_218 = (pFVar6->AsyncHelper).Object;
              (pFVar6->AsyncHelper).Object = (FImportAsyncHelper *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_210,&(pTVar25->Item).AsyncHelper.SharedReferenceCount);
            }
            pUStack_208 = (pTVar25->Item).TranslatorClass;
            pTVar5 = (this->QueuedTasks).Tail;
            local_130 = (UClass *)0x0;
            (this->QueuedTasks).Tail = pTVar25;
            local_140 = 0;
            FStack_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar6 != (FQueuedTaskData *)&local_140) {
              (pFVar6->AsyncHelper).Object = (FImportAsyncHelper *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(pTVar25->Item).AsyncHelper.SharedReferenceCount,&FStack_138);
            }
            (pTVar25->Item).TranslatorClass = local_130;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_138.ReferenceController);
            if (pTVar5 != (TNode *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pTVar5->Item).AsyncHelper.SharedReferenceCount.ReferenceController);
              ::operator_delete(pTVar5,0x20);
            }
            iVar20 = this->QueueTaskCount + -1;
            iVar19 = 0x7fffffff;
            if (iVar20 < 0x7fffffff) {
              iVar19 = iVar20;
            }
            iVar20 = 0;
            if (0 < iVar19) {
              iVar20 = iVar19;
            }
            this->QueueTaskCount = iVar20;
            if ((local_218 == (FImportAsyncHelper *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("QueuedTaskData.AsyncHelper.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                                    ,0x668,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            FVar15.ReferenceController = local_210.ReferenceController;
            local_1d0 = local_218;
            local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)local_210.ReferenceController;
            local_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)local_210.ReferenceController;
            if ((TBitArray<FDefaultBitArrayAllocator> *)local_210.ReferenceController !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              LOCK();
              (local_210.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_210.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (local_218 != (FImportAsyncHelper *)0x0) {
              EnterCriticalSection(lpCriticalSection);
              pTVar3 = &this->ImportTasks;
              pFVar30 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar30 <= (FScriptContainerElement *)&local_1d0) &&
                  ((FScriptContainerElement *)&local_1d0 <
                   pFVar30 + (longlong)(this->ImportTasks).ArrayMax * 0x10)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar19 = (this->ImportTasks).ArrayNum;
              piVar1 = &(this->ImportTasks).ArrayMax;
              if (iVar19 == *piVar1) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar3->AllocatorInstance,piVar1);
              }
              pFVar30 = (pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
              (this->ImportTasks).ArrayNum = iVar19 + 1;
              *(FImportAsyncHelper **)pFVar30 = local_1d0;
              *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar30 + 8) = local_1c8;
              if (local_1c8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                LOCK();
                puVar42 = (local_1c8->AllocatorInstance).InlineData + 8;
                *(int *)puVar42 = *(int *)puVar42 + 1;
                UNLOCK();
              }
              LeaveCriticalSection(lpCriticalSection);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_1c8);
            SetActiveMode(this,true);
            `UInterchangeManager::StartQueuedTasks'::__l2::<lambda_1>::operator()(&local_150);
            pFVar36 = local_218;
            local_230 = local_218;
            if ((TBitArray<FDefaultBitArrayAllocator> *)FVar15.ReferenceController !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              LOCK();
              paVar35 = &(FVar15.ReferenceController)->WeakReferenceCount;
              *paVar35 = (atomic<int>)((int)*paVar35 + 1);
              UNLOCK();
            }
            if (param_1) {
              if ((local_218 == (FImportAsyncHelper *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              LOCK();
              local_218->bCancel = (atomic<bool>)0x1;
              UNLOCK();
            }
            uVar38 = 0;
            local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_240.ArrayNum = 0;
            local_240.ArrayMax = 0;
            if ((local_218 == (FImportAsyncHelper *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if ((local_218->TranslatorTasks).ArrayNum == 0) {
              if (((local_218->Translators).ArrayNum != (local_218->SourceDatas).ArrayNum) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("QueuedTaskData.AsyncHelper->Translators.Num() == QueuedTaskData.AsyncHelper->SourceDatas.Num()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                                      ,0x67a,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pTVar37 = local_1f8;
              lVar34 = 0;
              while( true ) {
                if ((local_218 == (FImportAsyncHelper *)0x0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar14 = local_218;
                if ((local_218->SourceDatas).ArrayNum <= (int)uVar38) break;
                if (3 < (byte)LogInterchangeEngine._0_1_) {
                  uVar21 = 0;
                  if ((int)uVar38 < (local_218->SourceDatas).ArrayNum) {
                    uVar21 = ~uVar38 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  lVar9 = *(longlong *)((pFVar14->SourceDatas).AllocatorInstance.Data + lVar34);
                  local_1c0.Data = (FScriptContainerElement *)0x0;
                  local_1b8 = *(int *)(lVar9 + 0x30);
                  lVar32 = (longlong)local_1b8;
                  pvVar8 = *(void **)(lVar9 + 0x28);
                  if (local_1b8 == 0) {
                    local_1b4 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_1b8,0,&local_1c0,local_1b8,&local_1b4);
                    memcpy(local_1c0.Data,pvVar8,lVar32 * 2);
                  }
                  UE::Logging::Private::BasicLog<4>
                            (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
                  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c0.Data);
                  }
                }
                pTVar27 = ::operator_new(0x88);
                if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
                  pTVar27 = (TReferenceControllerBase<1> *)0x0;
                  pFVar41 = (FInterchangeTaskBase *)&DAT_00000010;
                }
                else {
                  pTVar27->SharedReferenceCount = (atomic<int>)0x1;
                  pTVar27->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar27->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_VFTaskTranslator_Interchange_UE___00_SharedPointerInternals__6B_
                  ;
                  local_e0.WeakReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)pTVar37;
                  if (pTVar37 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    LOCK();
                    puVar42 = (pTVar37->AllocatorInstance).InlineData + 0xc;
                    *(int *)puVar42 = *(int *)puVar42 + 1;
                    UNLOCK();
                  }
                  local_e0.Object = pFVar36;
                  UE::Interchange::FTaskTranslator::FTaskTranslator
                            ((FTaskTranslator *)(pTVar27 + 1),uVar38,&local_e0);
                  pFVar41 = (FInterchangeTaskBase *)(pTVar27 + 1);
                  if ((pFVar41 == (FInterchangeTaskBase *)0x0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InObject != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x246,L""), bVar18)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  LOCK();
                  pTVar27->SharedReferenceCount =
                       (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar27);
                if ((local_218 == (FImportAsyncHelper *)0x0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar36 = local_218;
                pFVar28 = UE::Interchange::FInterchangeTaskSystem::Get();
                if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar27->SharedReferenceCount =
                       (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_d0.Object = pFVar41;
                local_d0.SharedReferenceCount.ReferenceController = pTVar27;
                local_1e8._0_8_ =
                     UE::Interchange::FInterchangeTaskSystem::AddTask(pFVar28,&local_d0);
                pTVar10 = (TNode *)(pFVar36->TranslatorTasks).AllocatorInstance.Data;
                if (((pTVar10 <= (TNode *)local_1e8) &&
                    (local_1e8 < &pTVar10->NextNode + (pFVar36->TranslatorTasks).ArrayMax)) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar21 = (pFVar36->TranslatorTasks).ArrayNum;
                piVar1 = &(pFVar36->TranslatorTasks).ArrayMax;
                if (uVar21 == *piVar1) {
                  uVar21 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&(pFVar36->TranslatorTasks).AllocatorInstance,piVar1);
                }
                pTVar10 = (TNode *)(pFVar36->TranslatorTasks).AllocatorInstance.Data;
                (pFVar36->TranslatorTasks).ArrayNum = uVar21 + 1;
                (&pTVar10->NextNode)[(int)uVar21] = (TNode *)local_1e8._0_8_;
                if ((local_218 == (FImportAsyncHelper *)0x0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar36 = local_218;
                uVar22 = 0;
                if ((int)uVar21 < (local_218->TranslatorTasks).ArrayNum) {
                  uVar22 = ~uVar21 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar30 = (FScriptContainerElement *)
                          (&((TNode *)(pFVar36->TranslatorTasks).AllocatorInstance.Data)->NextNode +
                          (int)uVar21);
                if (((local_240.AllocatorInstance.Data <= pFVar30) &&
                    (pFVar30 < local_240.AllocatorInstance.Data + (longlong)local_240.ArrayMax * 8))
                   && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar19 = local_240.ArrayNum;
                if (local_240.ArrayNum == local_240.ArrayMax) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_240.AllocatorInstance,&local_240.ArrayMax);
                }
                local_240.ArrayNum = iVar19 + 1;
                *(TNode **)(local_240.AllocatorInstance.Data + (longlong)iVar19 * 8) =
                     *(TNode **)pFVar30;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar27);
                uVar38 = uVar38 + 1;
                lVar34 = lVar34 + 8;
                pFVar36 = local_230;
              }
            }
            pTVar37 = local_1f8;
            pTVar39 = (TReferenceControllerBase<1> *)0x0;
            local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_228.ArrayNum = 0;
            local_228.ArrayMax = 0;
            pTVar27 = pTVar39;
            while( true ) {
              pTVar40 = (TReferenceControllerBase<1> *)0x0;
              uVar38 = (uint)pTVar39;
              local_200 = uVar38;
              local_1d8.ReferenceController = pTVar27;
              if ((local_218 == (FImportAsyncHelper *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lpCriticalSection = local_160;
              pFVar14 = local_218;
              if ((local_218->Pipelines).ArrayNum <= (int)uVar38) break;
              uVar21 = 0;
              if ((int)uVar38 < (local_218->Pipelines).ArrayNum) {
                uVar21 = ~uVar38 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pUVar11 = *(UObject **)
                         ((longlong)
                          &((TNode *)(pFVar14->Pipelines).AllocatorInstance.Data)->NextNode +
                         (longlong)&pTVar27->_padding_);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar11);
              }
              local_1a8.ObjectIndex = 0;
              local_1a8.ObjectSerialNumber = 0;
              local_168 = pUVar11;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar11);
              }
              FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_168);
              pTVar27 = ::operator_new(0x88);
              FVar16 = local_1a8;
              if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
                pFVar41 = (FInterchangeTaskBase *)&DAT_00000010;
              }
              else {
                pTVar27->SharedReferenceCount = (atomic<int>)0x1;
                pTVar27->WeakReferenceCount = (atomic<int>)0x1;
                pTVar27->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFTaskPipeline_Interchange_UE___00_SharedPointerInternals__6B_
                ;
                if (pTVar37 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  LOCK();
                  puVar42 = (pTVar37->AllocatorInstance).InlineData + 0xc;
                  *(int *)puVar42 = *(int *)puVar42 + 1;
                  UNLOCK();
                }
                pTVar27[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
                InitializeCriticalSectionAndSpinCount
                          ((LPCRITICAL_SECTION)&pTVar27[1].SharedReferenceCount,4000);
                pTVar27[5]._padding_ = 0;
                pTVar27[5].SharedReferenceCount = (atomic<int>)0x0;
                pTVar27[5].WeakReferenceCount = (atomic<int>)0x0;
                pTVar27[6]._padding_ = 0;
                pTVar27[6].SharedReferenceCount = (atomic<int>)0x0;
                pTVar27[6].WeakReferenceCount = (atomic<int>)0x0;
                pTVar27[1]._padding_ = (longlong)&___7FTaskPipeline_Interchange_UE__6B_;
                pTVar27[4]._padding_ = -1;
                *(undefined1 *)&pTVar27[4].SharedReferenceCount = 0;
                pTVar27[7]._padding_ = (longlong)FVar16;
                *(FImportAsyncHelper **)&pTVar27[7].SharedReferenceCount = pFVar36;
                pTVar27[8]._padding_ = (longlong)pTVar37;
                if (pTVar37 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  LOCK();
                  puVar42 = (pTVar37->AllocatorInstance).InlineData + 0xc;
                  *(int *)puVar42 = *(int *)puVar42 + 1;
                  UNLOCK();
                  LOCK();
                  puVar42 = (pTVar37->AllocatorInstance).InlineData + 0xc;
                  iVar19 = *(int *)puVar42;
                  *(int *)puVar42 = *(int *)puVar42 + -1;
                  UNLOCK();
                  if (iVar19 == 1) {
                    (**(code **)(*(longlong *)(pTVar37->AllocatorInstance).InlineData + 8))
                              (pTVar37,1);
                  }
                }
                pFVar41 = (FInterchangeTaskBase *)(pTVar27 + 1);
                if ((pFVar41 == (FInterchangeTaskBase *)0x0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                LOCK();
                pTVar27->SharedReferenceCount =
                     (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
                UNLOCK();
                pTVar40 = pTVar27;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar40);
              if ((local_218 == (FImportAsyncHelper *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar36 = local_218;
              pTVar33 = &local_218->PipelineTasks;
              pFVar28 = UE::Interchange::FInterchangeTaskSystem::Get();
              if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar40->SharedReferenceCount =
                     (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_c0.Object = pFVar41;
              local_c0.SharedReferenceCount.ReferenceController = pTVar40;
              local_1e8._8_8_ =
                   UE::Interchange::FInterchangeTaskSystem::AddTask(pFVar28,&local_c0,&local_240);
              pFVar12 = (FElement *)(pTVar33->AllocatorInstance).Data;
              if (((pFVar12 <= (FElement *)(local_1e8 + 8)) &&
                  (local_1e8 + 8 < &pFVar12->FireTime + (pFVar36->PipelineTasks).ArrayMax)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar38 = *(uint *)&((FWeakReferencer<1> *)&(pFVar36->PipelineTasks).ArrayNum)->
                                 ReferenceController;
              piVar1 = &(pFVar36->PipelineTasks).ArrayMax;
              if (uVar38 == *piVar1) {
                uVar38 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar33->AllocatorInstance,piVar1);
              }
              pFVar12 = (FElement *)(pTVar33->AllocatorInstance).Data;
              *(uint *)&((FWeakReferencer<1> *)&(pFVar36->PipelineTasks).ArrayNum)->
                        ReferenceController = uVar38 + 1;
              (&pFVar12->FireTime)[(int)uVar38] = (double)local_1e8._8_8_;
              if ((local_218 == (FImportAsyncHelper *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar36 = local_218;
              uVar21 = 0;
              if ((int)uVar38 <
                  *(int *)&((FWeakReferencer<1> *)&(local_218->PipelineTasks).ArrayNum)->
                           ReferenceController) {
                uVar21 = ~uVar38 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar30 = (FScriptContainerElement *)
                        (&((FElement *)(pFVar36->PipelineTasks).AllocatorInstance.Data)->FireTime +
                        (int)uVar38);
              if (((local_240.AllocatorInstance.Data <= pFVar30) &&
                  (pFVar30 < local_240.AllocatorInstance.Data + (longlong)local_240.ArrayMax * 8))
                 && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar19 = local_240.ArrayNum;
              if (local_240.ArrayNum == local_240.ArrayMax) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_240.AllocatorInstance,&local_240.ArrayMax);
              }
              local_240.ArrayNum = iVar19 + 1;
              *(double *)(local_240.AllocatorInstance.Data + (longlong)iVar19 * 8) =
                   *(double *)pFVar30;
              if ((local_218 == (FImportAsyncHelper *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar36 = local_218;
              uVar21 = 0;
              if ((int)uVar38 <
                  *(int *)&((FWeakReferencer<1> *)&(local_218->PipelineTasks).ArrayNum)->
                           ReferenceController) {
                uVar21 = ~uVar38 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar30 = (FScriptContainerElement *)
                        (&((FElement *)(pFVar36->PipelineTasks).AllocatorInstance.Data)->FireTime +
                        (int)uVar38);
              if (((local_228.AllocatorInstance.Data <= pFVar30) &&
                  (pFVar30 < local_228.AllocatorInstance.Data + (longlong)local_228.ArrayMax * 8))
                 && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar19 = local_228.ArrayNum;
              if (local_228.ArrayNum == local_228.ArrayMax) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_228.AllocatorInstance,&local_228.ArrayMax);
              }
              local_228.ArrayNum = iVar19 + 1;
              *(double *)(local_228.AllocatorInstance.Data + (longlong)iVar19 * 8) =
                   *(double *)pFVar30;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar40);
              pTVar39 = (TReferenceControllerBase<1> *)(ulonglong)(local_200 + 1);
              pTVar27 = (TReferenceControllerBase<1> *)
                        &(local_1d8.ReferenceController)->SharedReferenceCount;
              pFVar36 = local_230;
            }
            if (local_228.ArrayNum == 0) {
              lVar34 = (longlong)local_240.ArrayNum;
              if (local_240.ArrayNum != 0) {
                iVar19 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (8,8,local_240.ArrayNum,&local_228.AllocatorInstance,
                                    &local_228.ArrayNum,&local_228.ArrayMax);
                memcpy(local_228.AllocatorInstance.Data + (longlong)iVar19 * 8,
                       local_240.AllocatorInstance.Data,lVar34 << 3);
              }
            }
            pTVar27 = ::operator_new(0x88);
            pTVar37 = local_1f8;
            if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              pFVar28 = UE::Interchange::FInterchangeTaskSystem::Get();
              local_1a0.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_1a0.Object = (FInterchangeTaskBase *)&DAT_00000010;
              pTVar37 = local_1f8;
            }
            else {
              pTVar27->SharedReferenceCount = (atomic<int>)0x1;
              pTVar27->WeakReferenceCount = (atomic<int>)0x1;
              pTVar27->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFTaskParsing_Interchange_UE___00_SharedPointerInternals__6B_
              ;
              if (local_1f8 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                puVar42 = &DAT_0000000c;
              }
              else {
                puVar42 = (local_1f8->AllocatorInstance).InlineData + 0xc;
                LOCK();
                *(int *)puVar42 = *(int *)puVar42 + 1;
                UNLOCK();
              }
              pTVar27[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
              InitializeCriticalSectionAndSpinCount
                        ((LPCRITICAL_SECTION)&pTVar27[1].SharedReferenceCount,4000);
              pTVar27[5]._padding_ = 0;
              pTVar27[6]._padding_ = 0;
              pTVar27[6].SharedReferenceCount = (atomic<int>)0x0;
              pTVar27[6].WeakReferenceCount = (atomic<int>)0x0;
              pTVar27[1]._padding_ = (longlong)&___7FTaskParsing_Interchange_UE__6B_;
              pTVar27[5].SharedReferenceCount = (atomic<int>)0x0;
              pTVar27[5].WeakReferenceCount = (atomic<int>)0x0;
              pTVar27[7]._padding_ = (longlong)this;
              *(FImportAsyncHelper **)&pTVar27[7].SharedReferenceCount = local_230;
              pTVar27[4]._padding_ = -1;
              *(undefined1 *)&pTVar27[4].SharedReferenceCount = 0;
              pTVar27[8]._padding_ = (longlong)pTVar37;
              if (pTVar37 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                LOCK();
                *(int *)puVar42 = *(int *)puVar42 + 1;
                UNLOCK();
              }
              if ((pTVar27[7]._padding_ == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InterchangeManager",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskParsing.h"
                                      ,0x1a,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (pTVar37 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                LOCK();
                puVar42 = (pTVar37->AllocatorInstance).InlineData + 0xc;
                iVar19 = *(int *)puVar42;
                *(int *)puVar42 = *(int *)puVar42 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*(longlong *)(pTVar37->AllocatorInstance).InlineData + 8))(pTVar37,1)
                  ;
                }
              }
              if (((FInterchangeTaskBase *)(pTVar27 + 1) == (FInterchangeTaskBase *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar18)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              LOCK();
              pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar27);
              pFVar28 = UE::Interchange::FInterchangeTaskSystem::Get();
              LOCK();
              pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
              UNLOCK();
              local_1a0.Object = (FInterchangeTaskBase *)(pTVar27 + 1);
              local_1a0.SharedReferenceCount.ReferenceController = pTVar27;
            }
            FVar15.ReferenceController = local_1a0.SharedReferenceCount.ReferenceController;
            uVar29 = UE::Interchange::FInterchangeTaskSystem::AddTask(pFVar28,&local_1a0,&local_228)
            ;
            if ((local_218 == (FImportAsyncHelper *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar18)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_218->ParsingTask = uVar29;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar15.ReferenceController);
            if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.AllocatorInstance.Data);
            }
            if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.AllocatorInstance.Data);
            }
            if (pTVar37 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              LOCK();
              puVar42 = (pTVar37->AllocatorInstance).InlineData + 0xc;
              iVar19 = *(int *)puVar42;
              *(int *)puVar42 = *(int *)puVar42 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*(longlong *)(pTVar37->AllocatorInstance).InlineData + 8))(pTVar37,1);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_210.ReferenceController);
        } while (((this->QueuedTasks).Tail)->NextNode != (TNode *)0x0);
      }
      if (((this->QueuedTasks).Tail)->NextNode != (TNode *)0x0) {
        `UInterchangeManager::StartQueuedTasks'::__l2::<lambda_1>::operator()(&local_150);
      }
    }
    else if (param_1) {
      this->bGCEndDelegateCancellAllTask = true;
    }
  }
  else {
    bVar18 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6687235758857648652>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                        ,0x5f4,"IsInGameThread()");
    if (bVar18) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FMemScope::~FMemScope(&local_158);
  FLLMScope::~FLLMScope(local_1f0);
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StaticRegisterNativesUInterchangeManager @ 14e50aaa0

void __cdecl UInterchangeManager::StaticRegisterNativesUInterchangeManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateReimportParameter @ 14e50baf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TOptional<FString> * __thiscall
UInterchangeManager::ValidateReimportParameter
          (UInterchangeManager *this,TOptional<FString> *__return_storage_ptr__,UObject *param_1,
          FImportAssetParameters *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FString> *pTVar3;
  uint uVar4;
  uint uVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayMax = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  if ((param_1 == (UObject *)0x0) || (bVar2 = CanReimport(this,param_1,&local_18), !bVar2)) {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    uVar4 = 0;
    if (param_2->ReimportSourceIndex != -1) {
      uVar4 = param_2->ReimportSourceIndex;
    }
    if (((int)uVar4 < 0) || (local_18.ArrayNum <= (int)uVar4)) {
      (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
    }
    else {
      param_2->bRunSynchronous = param_3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      (param_2->ReimportAsset).field0_0x0.DebugPtr = param_1;
      uVar5 = 0;
      if ((int)uVar4 < local_18.ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOptional<FString> *)(*pcVar1)();
        return pTVar3;
      }
      ::FString::FString((FString *)__return_storage_ptr__,
                         (FString *)(local_18.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10))
      ;
      if ((*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOptional<FString> *)(*pcVar1)();
        return pTVar3;
      }
    }
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// WaitUntilAllTasksDone @ 14e50bc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInterchangeManager::WaitUntilAllTasksDone(UInterchangeManager *this,bool param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FImportAsyncHelper *this_00;
  code *pcVar6;
  bool bVar7;
  FInterchangeTaskSystem *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                         ,0xc1f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (param_1) {
    CancelAllTasks(this);
  }
  lpCriticalSection = &this->ImportTasksLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  do {
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar3 = (this->ImportTasks).ArrayNum;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (iVar3 == 0) {
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((this->ImportTasks).ArrayNum < 1) break;
      pFVar4 = (this->ImportTasks).AllocatorInstance.Data;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
      this_00 = *(FImportAsyncHelper **)pFVar4;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pTVar9 = pTVar5;
      if (this_00 == (FImportAsyncHelper *)0x0) goto LAB_14e50be67;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        UE::Interchange::FImportAsyncHelper::GetCompletionTaskGraphEvent(this_00,&local_28);
LAB_14e50bdd3:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar8 = UE::Interchange::FInterchangeTaskSystem::Get();
        UE::Interchange::FInterchangeTaskSystem::WaitUntilTasksComplete(pFVar8,&local_28);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_14e50bdf1;
      }
      else {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
        UE::Interchange::FImportAsyncHelper::GetCompletionTaskGraphEvent(this_00,&local_28);
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar5->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 != (atomic<int>)0x1) goto LAB_14e50bdd3;
        (**(code **)pTVar5->_padding_)();
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 != (atomic<int>)0x1) goto LAB_14e50bdd3;
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar8 = UE::Interchange::FInterchangeTaskSystem::Get();
        UE::Interchange::FInterchangeTaskSystem::WaitUntilTasksComplete(pFVar8,&local_28);
LAB_14e50bdf1:
        if ((0 < (int)pTVar5->SharedReferenceCount) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6687235758857647055>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                               ,0xc31,"!WeakAsyncHelper.IsValid()"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e50be67;
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 != (atomic<int>)0x1) goto LAB_14e50be67;
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_14e50be67:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  } while( true );
}

// WarnIfInterchangeIsActive @ 14e50bfa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UInterchangeManager::WarnIfInterchangeIsActive(UInterchangeManager *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FText *pFVar4;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> local_198;
  FText local_188;
  FNotificationInfo local_178;
  
  if (this->bIsActive == (FThreadSafeBool)0x0) {
    return false;
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_188,L"InterchangeManager",L"WarnCannotProceed",
                      L"An import process is currently underway. Please cancel it to proceed.");
  FNotificationInfo::FNotificationInfo(&local_178,pFVar4);
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  local_178.ExpireDuration = 5.0;
  this_00 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_00,&local_198,&local_178);
  if (local_198.Object != (SNotificationItem *)0x0) {
    if ((local_198.Object == (SNotificationItem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)(*(longlong *)local_198.Object + 0x280))(local_198.Object,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  FNotificationInfo::~FNotificationInfo(&local_178);
  return true;
}

// execCanReimport @ 14e50cb70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UInterchangeManager::execCanReimport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  UObject *local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  pTVar3 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CanReimport((UInterchangeManager *)param_1,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execCanTranslateSourceData @ 14e50cc80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execCanTranslateSourceData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  UInterchangeSourceData *local_res18 [2];
  
  local_res18[0] = (UInterchangeSourceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CanTranslateSourceData((UInterchangeManager *)param_1,local_res18[0],local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execCancelAllTasks @ 14e50cd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UInterchangeManager::execCancelAllTasks(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CancelAllTasks((UInterchangeManager *)param_1);
  return;
}

// execCreateSourceData @ 14e50cd80

void __cdecl
UInterchangeManager::execCreateSourceData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeSourceData *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateSourceData(&local_18);
  *(UInterchangeSourceData **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execExportAsset @ 14e50ce20

void __cdecl UInterchangeManager::execExportAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execExportScene @ 14e50cee0

void __cdecl UInterchangeManager::execExportScene(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetAssetImportData @ 14e50cfa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UInterchangeManager::execGetAssetImportData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  int iVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  UObjectBase *local_res18 [2];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_res18[0] = (UObjectBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UObjectBase *)0x0) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    GetObjectsWithOuter(local_res18[0],&local_38,true,RF_NoFlags,Borrowed);
    iVar5 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar7.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar7.Data == pFVar1) break;
      lVar4 = *(longlong *)FVar7.Data;
      if (lVar4 != 0) {
        pUVar6 = UInterchangeAssetImportData::StaticClass();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
          *(longlong *)param_3 = lVar4;
          return;
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetInterchangeManagerScripted @ 14e50d0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execGetInterchangeManagerScripted
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UInterchangeManager *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetInterchangeManager();
  *(UInterchangeManager **)param_3 = pUVar1;
  return;
}

// execGetRegisteredFactoryClass @ 14e50d5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execGetRegisteredFactoryClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  UClass *local_res10;
  
  local_res10 = (UClass *)0x0;
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
  pUVar2 = GetRegisteredFactoryClass((UInterchangeManager *)param_1,local_res10);
  *(UClass **)param_3 = pUVar2;
  return;
}

// execGetSupportedAssetTypeFormats @ 14e50d9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execGetSupportedAssetTypeFormats
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  EInterchangeTranslatorType local_res10 [8];
  EInterchangeTranslatorAssetType local_res18 [8];
  int local_res20 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Invalid;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSupportedAssetTypeFormats
                     ((UInterchangeManager *)param_1,&local_28,local_res18[0],local_res10[0],
                      local_res20[0] != 0);
  if (param_3 != pTVar2) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetSupportedFormats @ 14e50db40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execGetSupportedFormats(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  EInterchangeTranslatorType local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = Invalid;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSupportedFormats((UInterchangeManager *)param_1,&local_18,local_res10[0]);
  if (param_3 != pTVar2) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSupportedFormatsForObject @ 14e50dc40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execGetSupportedFormatsForObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  UObject *local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSupportedFormatsForObject
                     ((UInterchangeManager *)param_1,&local_28,local_res18[0],local_res10[0]);
  if (param_3 != pTVar2) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetTranslatorForSourceData @ 14e50dd70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execGetTranslatorForSourceData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeTranslatorBase *pUVar2;
  UInterchangeSourceData *local_res10;
  
  local_res10 = (UInterchangeSourceData *)0x0;
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
  pUVar2 = GetTranslatorForSourceData((UInterchangeManager *)param_1,local_res10);
  *(UInterchangeTranslatorBase **)param_3 = pUVar2;
  return;
}

// execImportAsset @ 14e50de90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UInterchangeManager::execImportAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  atomic<UE::Interchange::FImportResult::EStatus> aVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FImportResult *this;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *this_00;
  TObjectPtr<UObject>_u_0 *pTVar7;
  UInterchangeSourceData *local_res10;
  undefined1 local_178 [16];
  bool local_168;
  TReferenceControllerBase<1> *local_160;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_158;
  FString local_148;
  TObjectPtr<UObject>_u_0 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  FSoftObjectPath *local_128;
  undefined8 local_120;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  undefined2 local_100;
  FMRSWRecursiveAccessDetector local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  int local_d0;
  FMRSWRecursiveAccessDetector local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  int local_a0;
  FMRSWRecursiveAccessDetector local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  FMRSWRecursiveAccessDetector local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  int local_40;
  
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10 = (UInterchangeSourceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_138.DebugPtr = (UObject *)0x0;
  local_f8.State = (atomic<unsigned___int64>)0x0;
  uStack_f0 = 0;
  local_c8.State = (atomic<unsigned___int64>)0x0;
  uStack_c0 = 0;
  local_98.State = (atomic<unsigned___int64>)0x0;
  uStack_90 = 0;
  local_68.State = (atomic<unsigned___int64>)0x0;
  uStack_60 = 0;
  local_130 = 0xffffffff;
  local_12c = 0;
  local_128 = (FSoftObjectPath *)0x0;
  local_120 = 0;
  local_118 = 0;
  pvStack_110 = (void *)0x0;
  local_108 = 0;
  local_100 = 1;
  local_e8 = 0;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_58 = 0;
  local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  pTVar7 = &local_138;
  if ((TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    pTVar7 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  this_00 = &local_158;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(pTVar7 + 0x20) = 1;
  pTVar5 = ImportInternal((UInterchangeManager *)param_1,
                          (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                           *)local_178,&local_148,local_res10,
                          (FImportAssetParameters *)&pTVar7->ObjectPtr,ImportType_Asset);
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x8;
  this = *(FImportResult **)pTVar5;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._8_8_);
  UE::Interchange::FImportResult::WaitUntilDone(this,*(bool *)(pTVar7 + 0x20));
  pTVar6 = UE::Interchange::FImportResult::GetImportedObjects(this);
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar6);
  aVar2 = this->ImportStatus;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(bool *)param_3 = aVar2 != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_50,(FWriteAccessScope *)local_178);
  if ((local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_168 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_178._8_8_,(FDestructionSentinel *)local_178);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_178);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_168 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_178._8_8_,(FDestructionSentinel *)local_178);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)local_178);
  if ((local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_168 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_178._8_8_,(FDestructionSentinel *)local_178);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)local_178);
  if ((local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_168 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_178._8_8_,(FDestructionSentinel *)local_178);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8);
  if (pvStack_110 != (void *)0x0) {
    FMemory::Free(pvStack_110);
  }
  DestructItems<FSoftObjectPath,int>(local_128,(int)local_120);
  if (local_128 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// execImportScene @ 14e50e340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UInterchangeManager::execImportScene(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FImportResult *this;
  undefined1 uVar3;
  TObjectPtr<UObject>_u_0 *pTVar4;
  UInterchangeSourceData *local_res10;
  undefined1 local_168 [16];
  bool local_158;
  undefined7 uStack_157;
  TReferenceControllerBase<1> *local_150;
  FString local_148;
  TObjectPtr<UObject>_u_0 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  FSoftObjectPath *local_128;
  undefined8 local_120;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  undefined2 local_100;
  FMRSWRecursiveAccessDetector local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  int local_d0;
  FMRSWRecursiveAccessDetector local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  int local_a0;
  FMRSWRecursiveAccessDetector local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  FMRSWRecursiveAccessDetector local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  int local_40;
  
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10 = (UInterchangeSourceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_138.DebugPtr = (UObject *)0x0;
  local_f8.State = (atomic<unsigned___int64>)0x0;
  uStack_f0 = 0;
  local_c8.State = (atomic<unsigned___int64>)0x0;
  uStack_c0 = 0;
  local_98.State = (atomic<unsigned___int64>)0x0;
  uStack_90 = 0;
  local_68.State = (atomic<unsigned___int64>)0x0;
  uStack_60 = 0;
  local_130 = 0xffffffff;
  local_12c = 0;
  local_128 = (FSoftObjectPath *)0x0;
  local_120 = 0;
  local_118 = 0;
  pvStack_110 = (void *)0x0;
  local_108 = 0;
  local_100 = 1;
  local_e8 = 0;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_58 = 0;
  local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pTVar4 = &local_138;
  if ((TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    pTVar4 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(pTVar4 + 0x20) = 1;
  ImportInternal((UInterchangeManager *)param_1,
                 (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                  *)local_168,&local_148,local_res10,(FImportAssetParameters *)&pTVar4->ObjectPtr,
                 ImportType_Scene);
  UE::Interchange::FImportResult::WaitUntilDone
            ((FImportResult *)local_168._0_8_,*(bool *)(pTVar4 + 0x20));
  this = (FImportResult *)CONCAT71(uStack_157,local_158);
  UE::Interchange::FImportResult::WaitUntilDone(this,*(bool *)(pTVar4 + 0x20));
  if ((*(atomic<UE::Interchange::FImportResult::EStatus> *)(local_168._0_8_ + 0x70) ==
       (atomic<UE::Interchange::FImportResult::EStatus>)0x0) ||
     (this->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._8_8_);
  *(undefined1 *)param_3 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_50,(FWriteAccessScope *)local_168);
  if ((local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_168);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)local_168);
  if ((local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)local_168);
  if ((local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8);
  if (pvStack_110 != (void *)0x0) {
    FMemory::Free(pvStack_110);
  }
  DestructItems<FSoftObjectPath,int>(local_128,(int)local_120);
  if (local_128 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsInterchangeActive @ 14e50e780

void __cdecl
UInterchangeManager::execIsInterchangeActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(int *)&param_1[0x17].field_0x18 != 0;
  return;
}

// execIsObjectBeingImported @ 14e50e7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execIsObjectBeingImported(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
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
  bVar2 = IsObjectBeingImported((UInterchangeManager *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execReimportAsset @ 14e50e850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UInterchangeManager::execReimportAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FImportResult *this;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  uint uVar7;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  TObjectPtr<UObject>_u_0 *pTVar11;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *this_00;
  UObject *local_res10;
  FScopedSourceData local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_208;
  FString local_1f8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1e8;
  TObjectPtr<UObject>_u_0 local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  FSoftObjectPath *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  void *pvStack_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  FMRSWRecursiveAccessDetector local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  ForAnyElementType FStack_178;
  int local_170;
  FMRSWRecursiveAccessDetector local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  int local_140;
  FMRSWRecursiveAccessDetector local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  int local_110;
  FMRSWRecursiveAccessDetector local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  int local_e0;
  FString local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  undefined1 local_60 [24];
  TReferenceControllerBase<1> *local_48;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_1d8.DebugPtr = (UObject *)0x0;
  local_198.State = (atomic<unsigned___int64>)0x0;
  uStack_190 = 0;
  local_168.State = (atomic<unsigned___int64>)0x0;
  uStack_160 = 0;
  local_138.State = (atomic<unsigned___int64>)0x0;
  uStack_130 = 0;
  local_108.State = (atomic<unsigned___int64>)0x0;
  uStack_100 = 0;
  local_1d0 = 0xffffffff;
  local_1cc = 0;
  local_1c8 = (FSoftObjectPath *)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
  pvStack_1b0 = (void *)0x0;
  local_1a8 = 0;
  local_1a0 = 1;
  local_188 = 0;
  local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_128 = 0;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  pTVar11 = &local_1d8;
  if ((TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    pTVar11 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  pUVar5 = local_res10;
  this_00 = &local_1e8;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_208.ArrayMax = 0;
  local_208.ArrayNum = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((local_res10 != (UObject *)0x0) &&
     (bVar6 = CanReimport((UInterchangeManager *)param_1,local_res10,&local_208), bVar6)) {
    uVar10 = 0;
    if (*(int *)(pTVar11 + 1) != -1) {
      uVar10 = *(uint *)(pTVar11 + 1);
    }
    if ((-1 < (int)uVar10) && ((int)uVar10 < local_208.ArrayNum)) {
      *(undefined1 *)(pTVar11 + 0x20) = 1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      (pTVar11->ObjectPtr).field0_0x0.Handle = pUVar5;
      uVar7 = 0;
      if ((int)uVar10 < local_208.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
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
      ::FString::FString(&local_1f8,
                         (FString *)
                         (local_208.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10));
      if ((local_1f8.Data.ArrayMax == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14e50eb1c;
    }
  }
  local_1f8.Data.ArrayMax = -1;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14e50eb1c:
  DestructItems<FString,int>((FString *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  if (local_1f8.Data.ArrayMax == -1) {
    bVar6 = false;
  }
  else {
    UE::Interchange::FScopedSourceData::FScopedSourceData(local_res18,&local_1f8);
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pTVar8 = ImportInternal((UInterchangeManager *)param_1,
                            (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                             *)local_60,&local_d0,
                            (UInterchangeSourceData *)local_res18[0].SourceDataPtr.Object,
                            (FImportAssetParameters *)&pTVar11->ObjectPtr,ImportType_Asset);
    pTVar3 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x8;
    this = *(FImportResult **)pTVar8;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_60._8_8_);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    UE::Interchange::FImportResult::WaitUntilDone(this,*(bool *)(pTVar11 + 0x20));
    pTVar9 = UE::Interchange::FImportResult::GetImportedObjects(this);
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar9);
    bVar6 = this->ImportStatus != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (local_res18[0].SourceDataPtr.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res18[0].SourceDataPtr.Object);
    }
    if ((local_1f8.Data.ArrayMax != -1) &&
       (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar6;
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_c0);
  if ((local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_a8);
  if ((local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_90);
  if ((local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_180,(FWriteAccessScope *)&local_78);
  if ((local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_178.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
    local_170 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_178.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_198);
  if (pvStack_1b0 != (void *)0x0) {
    FMemory::Free(pvStack_1b0);
  }
  DestructItems<FSoftObjectPath,int>(local_1c8,(int)local_1c0);
  if (local_1c8 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_1c8);
  }
  return;
}

// execScriptedImportAssetAsync @ 14e50f340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execScriptedImportAssetAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  UInterchangeSourceData *local_res10;
  undefined1 local_168 [16];
  bool local_158;
  TReferenceControllerBase<1> *local_150;
  FString local_148;
  TObjectPtr<UObject>_u_0 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  FSoftObjectPath *local_128;
  undefined8 local_120;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  undefined2 local_100;
  FMRSWRecursiveAccessDetector local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  int local_d0;
  FMRSWRecursiveAccessDetector local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  int local_a0;
  FMRSWRecursiveAccessDetector local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  FMRSWRecursiveAccessDetector local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  int local_40;
  
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10 = (UInterchangeSourceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_138.DebugPtr = (UObject *)0x0;
  local_f8.State = (atomic<unsigned___int64>)0x0;
  uStack_f0 = 0;
  local_c8.State = (atomic<unsigned___int64>)0x0;
  uStack_c0 = 0;
  local_98.State = (atomic<unsigned___int64>)0x0;
  uStack_90 = 0;
  local_68.State = (atomic<unsigned___int64>)0x0;
  uStack_60 = 0;
  local_130 = 0xffffffff;
  local_12c = 0;
  local_128 = (FSoftObjectPath *)0x0;
  local_120 = 0;
  local_118 = 0;
  pvStack_110 = (void *)0x0;
  local_108 = 0;
  local_100 = 1;
  local_e8 = 0;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_58 = 0;
  local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pTVar7 = &local_138;
  if ((TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    pTVar7 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)(pTVar7 + 0x20) = false;
  pTVar6 = ImportInternal((UInterchangeManager *)param_1,
                          (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                           *)local_168,&local_148,local_res10,
                          (FImportAssetParameters *)&pTVar7->ObjectPtr,ImportType_Asset);
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x8;
  lVar5 = *(longlong *)pTVar6;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._8_8_);
  iVar2 = *(int *)(lVar5 + 0x70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(bool *)param_3 = iVar2 != 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_50,(FWriteAccessScope *)local_168);
  if ((local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_168);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)local_168);
  if ((local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)local_168);
  if ((local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8);
  if (pvStack_110 != (void *)0x0) {
    FMemory::Free(pvStack_110);
  }
  DestructItems<FSoftObjectPath,int>(local_128,(int)local_120);
  if (local_128 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// execScriptedImportSceneAsync @ 14e50f8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execScriptedImportSceneAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  undefined1 uVar4;
  UInterchangeSourceData *local_res10;
  undefined1 local_168 [16];
  bool local_158;
  undefined7 uStack_157;
  TReferenceControllerBase<1> *local_150;
  FString local_148;
  TObjectPtr<UObject>_u_0 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  FSoftObjectPath *local_128;
  undefined8 local_120;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  undefined2 local_100;
  FMRSWRecursiveAccessDetector local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  int local_d0;
  FMRSWRecursiveAccessDetector local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  int local_a0;
  FMRSWRecursiveAccessDetector local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  int local_70;
  FMRSWRecursiveAccessDetector local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  int local_40;
  
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10 = (UInterchangeSourceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_138.DebugPtr = (UObject *)0x0;
  local_f8.State = (atomic<unsigned___int64>)0x0;
  uStack_f0 = 0;
  local_c8.State = (atomic<unsigned___int64>)0x0;
  uStack_c0 = 0;
  local_98.State = (atomic<unsigned___int64>)0x0;
  uStack_90 = 0;
  local_68.State = (atomic<unsigned___int64>)0x0;
  uStack_60 = 0;
  local_130 = 0xffffffff;
  local_12c = 0;
  local_128 = (FSoftObjectPath *)0x0;
  local_120 = 0;
  local_118 = 0;
  pvStack_110 = (void *)0x0;
  local_108 = 0;
  local_100 = 1;
  local_e8 = 0;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_58 = 0;
  local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pTVar3 = &local_138;
  if ((TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)(pTVar3 + 0x20) = false;
  ImportInternal((UInterchangeManager *)param_1,
                 (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                  *)local_168,&local_148,local_res10,(FImportAssetParameters *)&pTVar3->ObjectPtr,
                 ImportType_Scene);
  if ((*(int *)(local_168._0_8_ + 0x70) == 0) ||
     (*(int *)(CONCAT71(uStack_157,local_158) + 0x70) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._8_8_);
  *(undefined1 *)param_3 = uVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_50,(FWriteAccessScope *)local_168);
  if ((local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)local_168);
  if ((local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)local_168);
  if ((local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)local_168);
  if ((local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_168._8_8_,(FDestructionSentinel *)local_168);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8);
  if (pvStack_110 != (void *)0x0) {
    FMemory::Free(pvStack_110);
  }
  DestructItems<FSoftObjectPath,int>(local_128,(int)local_120);
  if (local_128 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// execScriptedReimportAssetAsync @ 14e50fd10

/* WARNING: Removing unreachable block (ram,0x00014e50ffdf) */
/* WARNING: Removing unreachable block (ram,0x00014e50ffe9) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execScriptedReimportAssetAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<UE::Interchange::FImportResult::EStatus> aVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  uint uVar6;
  TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
  *pTVar7;
  uint uVar8;
  FImportResult *pFVar9;
  TObjectPtr<UObject>_u_0 *pTVar10;
  FSharedReferencer<1> FVar11;
  UObject *local_res10;
  FScopedSourceData local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1f8;
  FString local_1e8;
  TObjectPtr<UObject>_u_0 local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  FSoftObjectPath *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  void *pvStack_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  FMRSWRecursiveAccessDetector local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  ForAnyElementType FStack_178;
  int local_170;
  FMRSWRecursiveAccessDetector local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  int local_140;
  FMRSWRecursiveAccessDetector local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  int local_110;
  FMRSWRecursiveAccessDetector local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  int local_e0;
  FString local_d0;
  TSharedRef<UE::Interchange::FImportResult,1> local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  undefined1 local_50 [24];
  TReferenceControllerBase<1> *local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_1d8.DebugPtr = (UObject *)0x0;
  local_198.State = (atomic<unsigned___int64>)0x0;
  uStack_190 = 0;
  local_168.State = (atomic<unsigned___int64>)0x0;
  uStack_160 = 0;
  local_138.State = (atomic<unsigned___int64>)0x0;
  uStack_130 = 0;
  local_108.State = (atomic<unsigned___int64>)0x0;
  uStack_100 = 0;
  local_1d0 = 0xffffffff;
  local_1cc = 0;
  local_1c8 = (FSoftObjectPath *)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
  pvStack_1b0 = (void *)0x0;
  local_1a8 = 0;
  local_1a0 = 1;
  local_188 = 0;
  local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_128 = 0;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  pUVar4 = local_res10;
  pTVar10 = &local_1d8;
  if ((TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    pTVar10 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MakeShared<UE::Interchange::FImportResult,1>(&local_c0);
  UE::Interchange::FImportResult::SetDone(local_c0.Object);
  local_1f8.ArrayMax = 0;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  if ((pUVar4 != (UObject *)0x0) &&
     (bVar5 = CanReimport((UInterchangeManager *)param_1,pUVar4,&local_1f8), bVar5)) {
    uVar8 = 0;
    if (*(int *)(pTVar10 + 1) != -1) {
      uVar8 = *(uint *)(pTVar10 + 1);
    }
    if ((-1 < (int)uVar8) && ((int)uVar8 < local_1f8.ArrayNum)) {
      *(undefined1 *)(pTVar10 + 0x20) = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      (pTVar10->ObjectPtr).field0_0x0.Handle = pUVar4;
      uVar6 = 0;
      if ((int)uVar8 < local_1f8.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::FString(&local_1e8,
                         (FString *)(local_1f8.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10)
                        );
      if ((local_1e8.Data.ArrayMax == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14e50ffa8;
    }
  }
  local_1e8.Data.ArrayMax = -1;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14e50ffa8:
  DestructItems<FString,int>((FString *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  if (local_1e8.Data.ArrayMax == -1) {
    pFVar9 = local_c0.Object;
    FVar11.ReferenceController = local_c0.SharedReferenceCount.ReferenceController;
    if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    UE::Interchange::FScopedSourceData::FScopedSourceData(&local_res18,&local_1e8);
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pTVar7 = ImportInternal((UInterchangeManager *)param_1,
                            (TTuple<TSharedRef<UE::Interchange::FImportResult,1>,TSharedRef<UE::Interchange::FImportResult,1>_>
                             *)local_50,&local_d0,
                            (UInterchangeSourceData *)local_res18.SourceDataPtr.Object,
                            (FImportAssetParameters *)&pTVar10->ObjectPtr,ImportType_Asset);
    FVar11.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar7->field_0x8;
    pFVar9 = *(FImportResult **)pTVar7;
    if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar11.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_50._8_8_);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_res18.SourceDataPtr.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res18.SourceDataPtr.Object);
    }
    if ((local_1e8.Data.ArrayMax != -1) &&
       (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  aVar1 = pFVar9->ImportStatus;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  *(bool *)param_3 = aVar1 != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_b0);
  if ((local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_98);
  if ((local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_80);
  if ((local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_180,(FWriteAccessScope *)&local_68);
  if ((local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_178.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
    local_170 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_178.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_198);
  if (pvStack_1b0 != (void *)0x0) {
    FMemory::Free(pvStack_1b0);
  }
  DestructItems<FSoftObjectPath,int>(local_1c8,(int)local_1c0);
  if (local_1c8 != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_1c8);
  }
  return;
}

// execWaitUntilAllTasksDone @ 14e5117e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInterchangeManager::execWaitUntilAllTasksDone(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  WaitUntilAllTasksDone((UInterchangeManager *)param_1,local_res10[0] != 0);
  return;
}

// execWarnIfInterchangeIsActive @ 14e511870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UInterchangeManager::execWarnIfInterchangeIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FSlateNotificationManager *this;
  TSharedPtr<SNotificationItem,1> local_198;
  FText local_188;
  FNotificationInfo local_178;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[0x17].field_0x18 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_188,L"InterchangeManager",L"WarnCannotProceed",
                      L"An import process is currently underway. Please cancel it to proceed.");
  FNotificationInfo::FNotificationInfo(&local_178,pFVar3);
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  local_178.ExpireDuration = 5.0;
  this = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this,&local_198,&local_178);
  if (local_198.Object != (SNotificationItem *)0x0) {
    if ((local_198.Object == (SNotificationItem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(longlong *)local_198.Object + 0x280))(local_198.Object,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  FNotificationInfo::~FNotificationInfo(&local_178);
  *(undefined1 *)param_3 = 1;
  return;
}

// operator() @ 150597320

bool __thiscall `UInterchangeManager::ImportInternal'::__l212::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6687235758857648088>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6687235758857648088>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150597360

bool __thiscall `UInterchangeManager::ImportInternal'::__l226::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6687235758857648061>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6687235758857648061>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505973a0

bool __thiscall `UInterchangeManager::ImportInternal'::__l229::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6687235758857648055>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6687235758857648055>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

