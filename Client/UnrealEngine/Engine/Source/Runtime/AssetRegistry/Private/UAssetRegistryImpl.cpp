// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 173

// StaticClass @ 142b6d9b0

UClass * __cdecl UAssetRegistryImpl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistryImpl",
               &Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton,
               StaticRegisterNativesUAssetRegistryImpl,0x13d0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetRegistryImpl>,
               InternalVTableHelperCtorCaller<UAssetRegistryImpl>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 142b6ee90

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

Type __cdecl
`UAssetRegistryImpl::SetManageReferences'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FAssetIdentifier *param_1,FAssetIdentifier *param_2,FAssetIdentifier *param_3,
          EDependencyCategory param_4,EDependencyProperty param_5,Type param_6)

{
  return SetButDoNotRecurse;
}

// UAssetRegistryImpl @ 142b7ba30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UAssetRegistryImpl * __thiscall
UAssetRegistryImpl::UAssetRegistryImpl(UAssetRegistryImpl *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAssetRegistry__;
  UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryImpl(&this->GuardedData);
  (this->InterfaceLock).Mutex.Mutex.Mutex.Ptr = (void *)0x0;
  (this->InterfaceLock).HighPriorityWaitersCount = (atomic<int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GatheredDataProcessingLock,4000);
  *(undefined8 *)&(this->FilesBlockedEvent).field_0x18 = 2;
  *(undefined8 *)&this->FilesBlockedEvent = 0;
  *(undefined8 *)&(this->FilesBlockedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->FilesBlockedEvent).field_0x10 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PathsAddedEvent,4000);
  *(undefined8 *)&(this->PathsAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->PathsAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->PathsAddedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PathsRemovedEvent,4000);
  *(undefined8 *)&(this->PathsRemovedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->PathsRemovedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->PathsRemovedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PathAddedEvent,4000);
  *(undefined8 *)&(this->PathAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->PathAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->PathAddedEvent).field_0x38 = 2;
  *(undefined8 *)&this->PathRemovedEvent = 0;
  *(undefined8 *)&(this->PathRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PathRemovedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PathRemovedEvent).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetAddedEvent,4000);
  *(undefined8 *)&(this->AssetAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetAddedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetRemovedEvent,4000);
  *(undefined8 *)&(this->AssetRemovedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetRemovedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetRemovedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetRenamedEvent,4000);
  *(undefined8 *)&(this->AssetRenamedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetRenamedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetRenamedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetUpdatedEvent,4000);
  *(undefined8 *)&(this->AssetUpdatedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetUpdatedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetUpdatedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetUpdatedOnDiskEvent,4000);
  *(undefined8 *)&(this->AssetUpdatedOnDiskEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetUpdatedOnDiskEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetUpdatedOnDiskEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this->BatchedAssetEvents,4000);
  *(undefined8 *)&this->BatchedAssetEvents[0].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[0].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[0].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 1),4000);
  *(undefined8 *)&this->BatchedAssetEvents[1].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[1].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[1].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 2),4000);
  *(undefined8 *)&this->BatchedAssetEvents[2].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[2].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[2].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 3),4000);
  *(undefined8 *)&this->BatchedAssetEvents[3].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[3].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[3].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InMemoryAssetCreatedEvent,4000);
  *(undefined8 *)&(this->InMemoryAssetCreatedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->InMemoryAssetCreatedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->InMemoryAssetCreatedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InMemoryAssetDeletedEvent,4000);
  *(undefined8 *)&(this->InMemoryAssetDeletedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->InMemoryAssetDeletedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->InMemoryAssetDeletedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->VerseAddedEvent,4000);
  *(undefined8 *)&(this->VerseAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->VerseAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->VerseAddedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->VerseRemovedEvent,4000);
  *(undefined8 *)&(this->VerseRemovedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->VerseRemovedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->VerseRemovedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FileLoadedEvent,4000);
  *(undefined8 *)&(this->FileLoadedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->FileLoadedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->FileLoadedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->FileLoadProgressUpdatedEvent,4000);
  *(undefined8 *)&(this->FileLoadProgressUpdatedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->FileLoadProgressUpdatedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->FileLoadProgressUpdatedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ScanStartedEvent,4000);
  *(undefined8 *)&(this->ScanStartedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->ScanStartedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->ScanStartedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ScanEndedEvent,4000);
  *(undefined8 *)&(this->ScanEndedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->ScanEndedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->ScanEndedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->KnownGathersCompleteEvent,4000);
  *(undefined8 *)&(this->KnownGathersCompleteEvent).field_0x28 = 0;
  *(undefined8 *)&(this->KnownGathersCompleteEvent).field_0x30 = 0;
  *(undefined8 *)&(this->KnownGathersCompleteEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EnumerateAssetsEvent,4000);
  *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x28 = 0;
  *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x30 = 0;
  *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x38 = 2;
  (this->DeferredEvents).ProgressUpdateData.bIsSet = false;
  (this->DeferredEvents).PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).PathEvents.ArrayNum = 0;
  (this->DeferredEvents).PathEvents.ArrayMax = 0;
  (this->DeferredEvents).AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).AssetEvents.ArrayNum = 0;
  (this->DeferredEvents).AssetEvents.ArrayMax = 0;
  (this->DeferredEvents).VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).VerseEvents.ArrayNum = 0;
  (this->DeferredEvents).VerseEvents.ArrayMax = 0;
  (this->DeferredEvents).RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).RequiredLoads.ArrayNum = 0;
  (this->DeferredEvents).RequiredLoads.ArrayMax = 0;
  (this->DeferredEvents).BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).BlockedFiles.ArrayNum = 0;
  (this->DeferredEvents).BlockedFiles.ArrayMax = 0;
  (this->DeferredEvents).bFileLoadedEventBroadcast = false;
  (this->DeferredEvents).bScanStartedEventBroadcast = false;
  (this->DeferredEvents).bHasSentFileLoadedEventBroadcast = false;
  (this->DeferredEvents).bKnownGathersCompleteEventBroadcast = false;
  (this->TickRequestHandle).Object = (FElement *)0x0;
  (this->TickRequestHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->DeferredEventsCriticalSection,4000);
  return this;
}

// UAssetRegistryImpl @ 142b7bf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UAssetRegistryImpl * __thiscall
UAssetRegistryImpl::UAssetRegistryImpl(UAssetRegistryImpl *this,FObjectInitializer *param_1)

{
  atomic<int> *paVar1;
  FRWLockWithPriority *SRWLock;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  UAssetRegistryImpl *pUVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  bool bVar9;
  undefined1 auStackY_228 [32];
  FLLMScope local_1f8 [2];
  FMemScope local_1f0;
  TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  local_1e8;
  FScopedBootTiming local_1c8;
  undefined1 local_1a8 [152];
  undefined1 local_110 [24];
  undefined8 uStack_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [24];
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  ulonglong uStack_78;
  ulong64 local_70;
  bool local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined2 local_50;
  bool local_4e;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAssetRegistry__;
  UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryImpl(&this->GuardedData);
  SRWLock = &this->InterfaceLock;
  (SRWLock->Mutex).Mutex.Mutex.Ptr = (void *)0x0;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  *paVar1 = (atomic<int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GatheredDataProcessingLock,4000);
  *(undefined8 *)&(this->FilesBlockedEvent).field_0x18 = 2;
  *(undefined8 *)&this->FilesBlockedEvent = 0;
  *(undefined8 *)&(this->FilesBlockedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->FilesBlockedEvent).field_0x10 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PathsAddedEvent,4000);
  *(undefined8 *)&(this->PathsAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->PathsAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->PathsAddedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PathsRemovedEvent,4000);
  *(undefined8 *)&(this->PathsRemovedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->PathsRemovedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->PathsRemovedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PathAddedEvent,4000);
  *(undefined8 *)&(this->PathAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->PathAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->PathAddedEvent).field_0x38 = 2;
  *(undefined8 *)&this->PathRemovedEvent = 0;
  *(undefined8 *)&(this->PathRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PathRemovedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PathRemovedEvent).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetAddedEvent,4000);
  *(undefined8 *)&(this->AssetAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetAddedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetRemovedEvent,4000);
  *(undefined8 *)&(this->AssetRemovedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetRemovedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetRemovedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetRenamedEvent,4000);
  *(undefined8 *)&(this->AssetRenamedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetRenamedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetRenamedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetUpdatedEvent,4000);
  *(undefined8 *)&(this->AssetUpdatedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetUpdatedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetUpdatedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetUpdatedOnDiskEvent,4000);
  *(undefined8 *)&(this->AssetUpdatedOnDiskEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetUpdatedOnDiskEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetUpdatedOnDiskEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this->BatchedAssetEvents,4000);
  *(undefined8 *)&this->BatchedAssetEvents[0].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[0].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[0].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 1),4000);
  *(undefined8 *)&this->BatchedAssetEvents[1].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[1].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[1].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 2),4000);
  *(undefined8 *)&this->BatchedAssetEvents[2].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[2].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[2].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 3),4000);
  *(undefined8 *)&this->BatchedAssetEvents[3].field_0x28 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[3].field_0x30 = 0;
  *(undefined8 *)&this->BatchedAssetEvents[3].field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InMemoryAssetCreatedEvent,4000);
  *(undefined8 *)&(this->InMemoryAssetCreatedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->InMemoryAssetCreatedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->InMemoryAssetCreatedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InMemoryAssetDeletedEvent,4000);
  *(undefined8 *)&(this->InMemoryAssetDeletedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->InMemoryAssetDeletedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->InMemoryAssetDeletedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->VerseAddedEvent,4000);
  *(undefined8 *)&(this->VerseAddedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->VerseAddedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->VerseAddedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->VerseRemovedEvent,4000);
  *(undefined8 *)&(this->VerseRemovedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->VerseRemovedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->VerseRemovedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FileLoadedEvent,4000);
  *(undefined8 *)&(this->FileLoadedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->FileLoadedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->FileLoadedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->FileLoadProgressUpdatedEvent,4000);
  *(undefined8 *)&(this->FileLoadProgressUpdatedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->FileLoadProgressUpdatedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->FileLoadProgressUpdatedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ScanStartedEvent,4000);
  *(undefined8 *)&(this->ScanStartedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->ScanStartedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->ScanStartedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ScanEndedEvent,4000);
  *(undefined8 *)&(this->ScanEndedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->ScanEndedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->ScanEndedEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->KnownGathersCompleteEvent,4000);
  *(undefined8 *)&(this->KnownGathersCompleteEvent).field_0x28 = 0;
  *(undefined8 *)&(this->KnownGathersCompleteEvent).field_0x30 = 0;
  *(undefined8 *)&(this->KnownGathersCompleteEvent).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EnumerateAssetsEvent,4000);
  *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x28 = 0;
  *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x30 = 0;
  *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x38 = 2;
  (this->DeferredEvents).ProgressUpdateData.bIsSet = false;
  (this->DeferredEvents).PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).PathEvents.ArrayNum = 0;
  (this->DeferredEvents).PathEvents.ArrayMax = 0;
  (this->DeferredEvents).AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).AssetEvents.ArrayNum = 0;
  (this->DeferredEvents).AssetEvents.ArrayMax = 0;
  (this->DeferredEvents).VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).VerseEvents.ArrayNum = 0;
  (this->DeferredEvents).VerseEvents.ArrayMax = 0;
  (this->DeferredEvents).RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).RequiredLoads.ArrayNum = 0;
  (this->DeferredEvents).RequiredLoads.ArrayMax = 0;
  (this->DeferredEvents).BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredEvents).BlockedFiles.ArrayNum = 0;
  (this->DeferredEvents).BlockedFiles.ArrayMax = 0;
  (this->DeferredEvents).bFileLoadedEventBroadcast = false;
  (this->DeferredEvents).bScanStartedEventBroadcast = false;
  (this->DeferredEvents).bHasSentFileLoadedEventBroadcast = false;
  (this->DeferredEvents).bKnownGathersCompleteEventBroadcast = false;
  (this->TickRequestHandle).Object = (FElement *)0x0;
  (this->TickRequestHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->DeferredEventsCriticalSection,4000);
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId927,"UAssetRegistryImpl::UAssetRegistryImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x39f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId927);
  }
  FScopedBootTiming::FScopedBootTiming(&local_1c8,"UAssetRegistryImpl::UAssetRegistryImpl");
  local_1a8[0x18] = false;
  local_1a8._32_8_ = (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
  local_1a8._40_4_ = 0;
  local_1a8._44_4_ = 0;
  local_1a8._48_8_ = (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
  local_1a8._56_4_ = 0;
  local_1a8._60_4_ = 0;
  local_1a8._64_8_ = (FScriptContainerElement *)0x0;
  local_1a8._72_4_ = 0;
  local_1a8._76_4_ = 0;
  local_1a8._80_8_ = (FScriptContainerElement *)0x0;
  local_1a8._88_4_ = 0;
  local_1a8._92_4_ = 0;
  local_1a8._96_8_ = (FScriptContainerElement *)0x0;
  local_1a8._104_4_ = 0;
  local_1a8._108_4_ = 0;
  local_1a8[0x70] = false;
  local_1a8[0x71] = false;
  local_1a8[0x72] = false;
  local_1a8[0x73] = false;
  local_1a8._120_8_ = (FClassInheritanceBuffer *)0x0;
  local_1a8._136_8_ = (FAssetRegistryImpl *)0x0;
  local_1a8[0x90] = false;
  local_1a8[0x91] = false;
  local_70 = 0xffffffffffffffff;
  local_68 = true;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_50._0_1_ = false;
  local_50._1_1_ = false;
  local_4e = false;
  local_110._0_8_ = (FScriptContainerElement *)0x0;
  local_110._8_8_ = 0;
  local_f0 = (void *)0x0;
  local_d0 = (void *)0x0;
  uStack_c8 = 0;
  local_c0._0_8_ = (FScriptContainerElement *)0x0;
  local_c0._8_8_ = 0;
  local_a0 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  uStack_d8 = 0;
  uStack_e8 = ___xmm_00000000ffffffff0000008000000000;
  local_e0 = _UNK_150631d98;
  uStack_88 = 0;
  uStack_98 = ___xmm_00000000ffffffff0000008000000000;
  local_90 = _UNK_150631d98;
  local_110._16_8_ = 0;
  uStack_f8 = 0;
  local_c0._16_8_ = 0;
  uStack_a8 = 0;
  local_1a8._0_8_ = this;
  if (((this->_padding_ & 0x10) != 0) && (((uint)this->_padding_ >> 0x1a & 1) == 0)) {
    if (((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton != (IAssetRegistry *)0x0)
        || (IAssetRegistryInterface::Default != (IAssetRegistryInterface *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == nullptr && IAssetRegistryInterface::Default == nullptr"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x3a5,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UAssetRegistryImpl *)(*pcVar2)();
      return pUVar6;
    }
    IAssetRegistryInterface::Default = (IAssetRegistryInterface *)&GAssetRegistryInterface;
    UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton =
         (IAssetRegistry *)&this->_padding_;
  }
  FLLMScope::FLLMScope(local_1f8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_1f0,AssetRegistry,true);
  local_1e8.GuardWrapper.bIsSet = false;
  local_1e8.Priority = PriorityHigh;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_1e8.GuardWrapper.TypedValue.Mutex = SRWLock;
  local_1e8.Lock = SRWLock;
  if ((SRWLock == (FRWLockWithPriority *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UAssetRegistryImpl *)(*pcVar2)();
    return pUVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  uVar7 = GetRegisteredNativeClassesVersionNumber();
  uVar8 = GetRegisteredClassesVersionNumber();
  local_1a8._128_8_ = local_110;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            ((FClassInheritanceContext *)(local_1a8 + 0x78),&this->GuardedData,uVar7,uVar8);
  UE::AssetRegistry::FAssetRegistryImpl::Initialize
            (&this->GuardedData,&local_1e8,(FInitializeContext *)local_1a8);
  InitializeEvents(this,(FInitializeContext *)local_1a8);
  if (SRWLock != (FRWLockWithPriority *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_1f0);
  FLLMScope::~FLLMScope(local_1f8);
  Broadcast(this,(FEventContext *)(local_1a8 + 8),false);
  DestructItems<FString,int>((FString *)local_60.Data,(int)local_58);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c0,0,local_c0._8_4_);
  iVar3 = SUB84(local_c0._8_8_,4);
  local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
  }
  uVar4 = uStack_98._4_4_;
  local_90 = 0xffffffff;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_98 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  iVar3 = SUB84(local_110._8_8_,4);
  local_110._8_8_ = local_110._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_110,0,(int *)(local_110 + 0xc));
  }
  uVar4 = uStack_e8._4_4_;
  local_e0 = 0xffffffff;
  uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_e8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_110 + 0x10),0);
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_110._0_8_);
  }
  DestructItems<FString,int>((FString *)local_1a8._96_8_,local_1a8._104_4_);
  if ((FScriptContainerElement *)local_1a8._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._96_8_);
  }
  DestructItems<FString,int>((FString *)local_1a8._80_8_,local_1a8._88_4_);
  if ((FScriptContainerElement *)local_1a8._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._80_8_);
  }
  if ((FScriptContainerElement *)local_1a8._64_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._64_8_);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_1a8._48_8_,
             local_1a8._56_4_);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_1a8._48_8_ !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free((void *)local_1a8._48_8_);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_1a8._32_8_,
             local_1a8._40_4_);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_1a8._32_8_ !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free((void *)local_1a8._32_8_);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_1c8);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// ~UAssetRegistryImpl @ 142b7daa0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::~UAssetRegistryImpl(UAssetRegistryImpl *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAssetRegistry__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredEventsCriticalSection);
  pTVar3 = (this->TickRequestHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  UE::AssetRegistry::Impl::FEventContext::~FEventContext(&this->DeferredEvents);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EnumerateAssetsEvent).field_0x28,
             *(int *)&(this->EnumerateAssetsEvent).field_0x30);
  pvVar4 = *(void **)&(this->EnumerateAssetsEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EnumerateAssetsEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->KnownGathersCompleteEvent).field_0x28,
             *(int *)&(this->KnownGathersCompleteEvent).field_0x30);
  pvVar4 = *(void **)&(this->KnownGathersCompleteEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->KnownGathersCompleteEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ScanEndedEvent).field_0x28,*(int *)&(this->ScanEndedEvent).field_0x30);
  pvVar4 = *(void **)&(this->ScanEndedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ScanEndedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ScanStartedEvent).field_0x28,*(int *)&(this->ScanStartedEvent).field_0x30);
  pvVar4 = *(void **)&(this->ScanStartedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ScanStartedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->FileLoadProgressUpdatedEvent).field_0x28,
             *(int *)&(this->FileLoadProgressUpdatedEvent).field_0x30);
  pvVar4 = *(void **)&(this->FileLoadProgressUpdatedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FileLoadProgressUpdatedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->FileLoadedEvent).field_0x28,*(int *)&(this->FileLoadedEvent).field_0x30);
  pvVar4 = *(void **)&(this->FileLoadedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FileLoadedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->VerseRemovedEvent).field_0x28,*(int *)&(this->VerseRemovedEvent).field_0x30);
  pvVar4 = *(void **)&(this->VerseRemovedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->VerseRemovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->VerseAddedEvent).field_0x28,*(int *)&(this->VerseAddedEvent).field_0x30);
  pvVar4 = *(void **)&(this->VerseAddedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->VerseAddedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InMemoryAssetDeletedEvent).field_0x28,
             *(int *)&(this->InMemoryAssetDeletedEvent).field_0x30);
  pvVar4 = *(void **)&(this->InMemoryAssetDeletedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InMemoryAssetDeletedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InMemoryAssetCreatedEvent).field_0x28,
             *(int *)&(this->InMemoryAssetCreatedEvent).field_0x30);
  pvVar4 = *(void **)&(this->InMemoryAssetCreatedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InMemoryAssetCreatedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->BatchedAssetEvents[3].field_0x28,
             *(int *)&this->BatchedAssetEvents[3].field_0x30);
  pvVar4 = *(void **)&this->BatchedAssetEvents[3].field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 3));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->BatchedAssetEvents[2].field_0x28,
             *(int *)&this->BatchedAssetEvents[2].field_0x30);
  pvVar4 = *(void **)&this->BatchedAssetEvents[2].field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 2));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->BatchedAssetEvents[1].field_0x28,
             *(int *)&this->BatchedAssetEvents[1].field_0x30);
  pvVar4 = *(void **)&this->BatchedAssetEvents[1].field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this->BatchedAssetEvents + 1));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->BatchedAssetEvents[0].field_0x28,
             *(int *)&this->BatchedAssetEvents[0].field_0x30);
  pvVar4 = *(void **)&this->BatchedAssetEvents[0].field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this->BatchedAssetEvents);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AssetUpdatedOnDiskEvent).field_0x28,
             *(int *)&(this->AssetUpdatedOnDiskEvent).field_0x30);
  pvVar4 = *(void **)&(this->AssetUpdatedOnDiskEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AssetUpdatedOnDiskEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AssetUpdatedEvent).field_0x28,*(int *)&(this->AssetUpdatedEvent).field_0x30);
  pvVar4 = *(void **)&(this->AssetUpdatedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AssetUpdatedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AssetRenamedEvent).field_0x28,*(int *)&(this->AssetRenamedEvent).field_0x30);
  pvVar4 = *(void **)&(this->AssetRenamedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AssetRenamedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AssetRemovedEvent).field_0x28,*(int *)&(this->AssetRemovedEvent).field_0x30);
  pvVar4 = *(void **)&(this->AssetRemovedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AssetRemovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AssetAddedEvent).field_0x28,*(int *)&(this->AssetAddedEvent).field_0x30);
  pvVar4 = *(void **)&(this->AssetAddedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AssetAddedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PathRemovedEvent).field_0x8,*(int *)&(this->PathRemovedEvent).field_0x10);
  pvVar4 = *(void **)&(this->PathRemovedEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PathRemovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PathAddedEvent).field_0x28,*(int *)&(this->PathAddedEvent).field_0x30);
  pvVar4 = *(void **)&(this->PathAddedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PathAddedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PathsRemovedEvent).field_0x28,*(int *)&(this->PathsRemovedEvent).field_0x30);
  pvVar4 = *(void **)&(this->PathsRemovedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PathsRemovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PathsAddedEvent).field_0x28,*(int *)&(this->PathsAddedEvent).field_0x30);
  pvVar4 = *(void **)&(this->PathsAddedEvent).field_0x28;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PathsAddedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->FilesBlockedEvent).field_0x8,*(int *)&(this->FilesBlockedEvent).field_0x10);
  pvVar4 = *(void **)&(this->FilesBlockedEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FilesBlockedEvent);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GatheredDataProcessingLock);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->InterfaceLock);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->InterfaceLock);
  }
  UE::AssetRegistry::FAssetRegistryImpl::~FAssetRegistryImpl(&this->GuardedData);
  this->_padding_ = (longlong)&___7IAssetRegistry__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 142b7fca0

bool __thiscall
`UAssetRegistryImpl::GetAllCachedPaths'::__l2::<lambda_1>::operator()(void *this,FName param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FName local_res10 [3];
  FString local_18;
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  pFVar4 = ::FName::ToString(local_res10,&local_18);
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = (pFVar4->Data).ArrayNum;
  *(int *)(pFVar5 + 0xc) = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 142b7fd30

bool __thiscall
`UAssetRegistryImpl::GetInMemoryAssets'::__l2::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FAssetData *)pFVar2->Data <= param_1) &&
     (param_1 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_1);
  return true;
}

// operator() @ 142b7fdf0

bool __thiscall
`UAssetRegistryImpl::GetSubPaths'::__l2::<lambda_1>::operator()(void *this,FName param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FName local_res10 [3];
  FString local_18;
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  pFVar4 = ::FName::ToString(local_res10,&local_18);
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = (pFVar4->Data).ArrayNum;
  *(int *)(pFVar5 + 0xc) = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 142b804d0

bool __thiscall
`UAssetRegistryImpl::EnumerateAllCachedPaths'::__l3::<lambda_1>::operator()
          (void *this,FName param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FName local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if (((FName *)pFVar2->Data <= local_res10) &&
     (local_res10 < (FName *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FName *)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// operator() @ 142b80580

bool __thiscall
`UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>::operator()(void *this,FName param_1)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  FName local_res10 [3];
  
  FVar1 = *(ForElementType<FName> *)this;
  FVar6 = *(ForElementType<FName> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<FName> *)((longlong)FVar1 + 0x200) == (ForElementType<FName>)0x0) {
    FVar6 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 < (FName *)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar1 + 0x20c) * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x208);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x20c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,(ForElementType<FName> *)FVar1,(int *)((longlong)FVar1 + 0x20c));
  }
  *(int *)((longlong)FVar1 + 0x208) = iVar5 + 1;
  FVar6 = *(ForElementType<FName> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<FName> *)((longlong)FVar1 + 0x200) == (ForElementType<FName>)0x0) {
    FVar6 = FVar1;
  }
  *(FName *)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res10[0];
  return true;
}

// operator() @ 142b80660

bool __thiscall
`UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>::operator()(void *this,FName param_1)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  FName local_res10 [3];
  
  FVar1 = *(ForElementType<FName> *)this;
  FVar6 = *(ForElementType<FName> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<FName> *)((longlong)FVar1 + 0x200) == (ForElementType<FName>)0x0) {
    FVar6 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 < (FName *)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar1 + 0x20c) * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x208);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x20c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,(ForElementType<FName> *)FVar1,(int *)((longlong)FVar1 + 0x20c));
  }
  *(int *)((longlong)FVar1 + 0x208) = iVar5 + 1;
  FVar6 = *(ForElementType<FName> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<FName> *)((longlong)FVar1 + 0x200) == (ForElementType<FName>)0x0) {
    FVar6 = FVar1;
  }
  *(FName *)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res10[0];
  return true;
}

// operator() @ 142b80830

bool __thiscall
`UAssetRegistryImpl::GetAllAssets'::__l5::<lambda_1>::operator()(void *this,FAssetData *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FAssetData *)pFVar2->Data <= param_1) &&
     (param_1 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_1);
  return true;
}

// operator() @ 142b808f0

bool __thiscall
`UAssetRegistryImpl::GetAssets'::__l5::<lambda_1>::operator()(void *this,FAssetData *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FAssetData *)pFVar2->Data <= param_1) &&
     (param_1 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_1);
  return true;
}

// operator() @ 142b81000

void __thiscall `UAssetRegistryImpl::Broadcast'::__l57::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ForAnyElementType *pFVar11;
  longlong lVar12;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar13 = 0;
  lVar15 = 0;
  lVar14 = 0;
  do {
    iVar2 = *(int *)(*(longlong *)this + 8 + lVar15);
    if (iVar2 != 0) {
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                (*(longlong *)((longlong)this + 8) + lVar14);
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
      bVar6 = false;
      uVar10 = (this_00->InvocationList).ArrayNum - 1;
      if (-1 < (int)uVar10) {
        lVar12 = (longlong)(int)uVar10 << 4;
        do {
          uVar9 = 0;
          if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this_00->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar3 + lVar12 + 8) == 0) ||
              (plVar4 = *(longlong **)(pFVar3 + lVar12), plVar4 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar12 = lVar12 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
      pFVar11 = (ForAnyElementType *)(*(longlong *)this + lVar15);
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (*(int *)((longlong)&pFVar11[1].Data + 4) < 0) {
        DestructItems<FAssetData,int>((FAssetData *)pFVar11->Data,*(int *)&pFVar11[1].Data);
        iVar2 = *piVar1;
        *(undefined4 *)&pFVar11[1].Data = 0;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,0,pFVar11,0,piVar1);
        }
      }
      else {
        DestructItems<FAssetData,int>((FAssetData *)pFVar11->Data,*(int *)&pFVar11[1].Data);
        *(undefined4 *)&pFVar11[1].Data = 0;
      }
    }
    uVar13 = uVar13 + 1;
    lVar14 = lVar14 + 0x40;
    lVar15 = lVar15 + 0x10;
    if (3 < uVar13) {
      return;
    }
  } while( true );
}

// operator() @ 142b81660

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

Type __thiscall
`UAssetRegistryImpl::SetManageReferences'::__l2::<lambda_2>::operator()
          (void *this,FShouldSetManagerContext *param_1)

{
  undefined8 *puVar1;
  FAssetIdentifier *pFVar2;
  FAssetIdentifier *pFVar3;
  FAssetIdentifier *pFVar4;
  code *pcVar5;
  Type TVar6;
  undefined8 uVar7;
  longlong *plVar8;
  EDependencyProperty local_res8 [8];
  EDependencyCategory local_res10 [8];
  Type local_res18 [4];
  
  local_res18[0] = param_1->EdgeFlags;
  puVar1 = *(undefined8 **)this;
  pFVar2 = param_1->Target;
  pFVar3 = param_1->Source;
  pFVar4 = param_1->Manager;
  local_res8[0] = param_1->EdgeARProperties;
  local_res10[0] = param_1->EdgeARCategory;
  UE::Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar5 = (code *)*puVar1;
  plVar8 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar8 = (longlong *)puVar1[5];
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  TVar6 = (*pcVar5)(uVar7,pFVar4,pFVar3,pFVar2,local_res10,local_res8,local_res18);
  return TVar6;
}

// operator() @ 142b81700

bool __thiscall
`UAssetRegistryImpl::GetAllAssets'::__l6::<lambda_2>::operator()(void *this,FAssetData *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FAssetData *)pFVar2->Data <= param_1) &&
     (param_1 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_1);
  return true;
}

// operator() @ 142b818c0

bool __thiscall
`UAssetRegistryImpl::EnumerateAllAssets'::__l9::<lambda_2>::operator()
          (void *this,FAssetData *param_1)

{
  ForElementType<FAssetData> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FAssetData> FVar6;
  
  FVar1 = *(ForElementType<FAssetData> *)this;
  FVar6 = *(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400);
  if (*(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400) == (ForElementType<FAssetData>)0x0)
  {
    FVar6 = FVar1;
  }
  if (((ulonglong)FVar6 <= param_1) &&
     (param_1 < (FAssetData *)
                ((longlong)*(int *)((longlong)FVar1 + 0x340c) * 0x68 + (longlong)FVar6))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x3408);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x340c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_>
                      (0x868,(ForElementType<FAssetData> *)FVar1,(int *)((longlong)FVar1 + 0x340c));
  }
  *(int *)((longlong)FVar1 + 0x3408) = iVar5 + 1;
  FVar6 = *(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400);
  if (*(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400) == (ForElementType<FAssetData>)0x0)
  {
    FVar6 = FVar1;
  }
  FAssetData::FAssetData((FAssetData *)((longlong)FVar6 + (longlong)iVar5 * 0x68),param_1);
  return true;
}

// operator() @ 142b82160

void __thiscall
`UAssetRegistryImpl::EnumerateAllAssets'::__l12::<lambda_3>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x3408)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar1 + 0x3400);
  if (*(longlong *)(lVar1 + 0x3400) == 0) {
    lVar5 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b821f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)((longlong)this + 8))
            ((*(undefined8 **)((longlong)this + 8))[1],lVar5 + (longlong)param_1 * 0x68);
  return;
}

// AddPath @ 142b83310

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::AddPath(UAssetRegistryImpl *this,FString *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FLLMScope local_res8 [5];
  FMemScope local_res18;
  TStringView<wchar_t> local_d8;
  FEventContext local_c8;
  undefined4 local_4c;
  undefined4 local_3c;
  
  local_c8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.PathEvents.ArrayNum = 0;
  local_c8.PathEvents.ArrayMax = 0;
  local_c8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AssetEvents.ArrayNum = 0;
  local_c8.AssetEvents.ArrayMax = 0;
  local_c8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.VerseEvents.ArrayNum = 0;
  local_c8.VerseEvents.ArrayMax = 0;
  local_c8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.RequiredLoads.ArrayNum = 0;
  local_c8.RequiredLoads.ArrayMax = 0;
  local_c8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.BlockedFiles.ArrayNum = 0;
  local_c8.BlockedFiles.ArrayMax = 0;
  local_c8.bFileLoadedEventBroadcast = false;
  local_c8.bScanStartedEventBroadcast = false;
  local_c8.bHasSentFileLoadedEventBroadcast = false;
  local_c8.bKnownGathersCompleteEventBroadcast = false;
  local_c8.ProgressUpdateData.bIsSet = false;
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  iVar6 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  iVar6 = iVar7;
  if (1 < iVar7) {
    iVar6 = 1;
  }
  iVar8 = 0;
  if (0 < iVar6) {
    iVar8 = iVar6;
  }
  if ((iVar8 == 1) &&
     (iVar6 = wcsncmp(L"/",(wchar_t *)(pFVar2 + ((longlong)iVar7 - (longlong)iVar8) * 2),1),
     iVar6 == 0)) {
    iVar6 = iVar7;
    if (iVar7 + -1 < iVar7) {
      iVar6 = iVar7 + -1;
    }
    local_3c = local_4c;
    iVar7 = 0;
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
  }
  local_d8._12_4_ = local_3c;
  local_d8.Size = iVar7;
  local_d8.DataPtr = (wchar_t *)pFVar2;
  bVar4 = UE::AssetRegistry::FAssetRegistryImpl::AddPath
                    ((FAssetRegistryImpl *)&this->_padding_,&local_c8,&local_d8);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_c8,false);
  DestructItems<FString,int>
            ((FString *)local_c8.BlockedFiles.AllocatorInstance.Data,local_c8.BlockedFiles.ArrayNum)
  ;
  if (local_c8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_c8.RequiredLoads.AllocatorInstance.Data,
             local_c8.RequiredLoads.ArrayNum);
  if (local_c8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_c8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_c8.AssetEvents.AllocatorInstance.Data,local_c8.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_c8.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_c8.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_c8.PathEvents.AllocatorInstance.Data,local_c8.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_c8.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_c8.PathEvents.AllocatorInstance.Data);
  }
  return bVar4;
}

// AppendState @ 142b83c50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::AppendState
          (UAssetRegistryImpl *this,FAssetRegistryState *param_1,EAppendMode param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FEventContext local_98;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6436,"UAssetRegistryImpl::AppendState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1924);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6436);
  }
  local_98.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.PathEvents.ArrayNum = 0;
  local_98.PathEvents.ArrayMax = 0;
  local_98.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.AssetEvents.ArrayNum = 0;
  local_98.AssetEvents.ArrayMax = 0;
  local_98.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.VerseEvents.ArrayNum = 0;
  local_98.VerseEvents.ArrayMax = 0;
  local_98.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.RequiredLoads.ArrayNum = 0;
  local_98.RequiredLoads.ArrayMax = 0;
  local_98.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.BlockedFiles.ArrayNum = 0;
  local_98.BlockedFiles.ArrayMax = 0;
  local_98.bFileLoadedEventBroadcast = false;
  local_98.bScanStartedEventBroadcast = false;
  local_98.bHasSentFileLoadedEventBroadcast = false;
  local_98.bKnownGathersCompleteEventBroadcast = false;
  local_98.ProgressUpdateData.bIsSet = false;
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  UE::AssetRegistry::FAssetRegistryImpl::AppendState
            ((FAssetRegistryImpl *)&this->_padding_,&local_98,param_1,param_2,true);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_98,false);
  DestructItems<FString,int>
            ((FString *)local_98.BlockedFiles.AllocatorInstance.Data,local_98.BlockedFiles.ArrayNum)
  ;
  if (local_98.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_98.RequiredLoads.AllocatorInstance.Data,
             local_98.RequiredLoads.ArrayNum);
  if (local_98.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_98.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_98.AssetEvents.AllocatorInstance.Data,local_98.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_98.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_98.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_98.PathEvents.AllocatorInstance.Data,local_98.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_98.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_98.PathEvents.AllocatorInstance.Data);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AssetCreated @ 142b840b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::AssetCreated(UAssetRegistryImpl *this,UObject *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UPackage *pUVar5;
  FString *pFVar6;
  FName *pFVar7;
  TMulticastDelegate<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_00;
  wchar_t *pwVar8;
  undefined1 auStackY_248 [32];
  FLLMScope local_218 [5];
  FEventContext local_208;
  FName local_198;
  FMemScope local_190;
  longlong *local_188;
  FEventContext *local_180;
  code *local_178;
  longlong **local_170;
  FAssetData *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FString local_158;
  FName local_148;
  FString local_140;
  TArrayView<FAssetData_const_,int> local_128;
  FAssetData local_118;
  FAssetData local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (param_1 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8470630944661836399>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x126f,"NewAsset");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1);
    if (cVar4 != '\0') {
      pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
      if ((atomic<unsigned_int>)((uint)pUVar5->PackageFlagsPrivate | 1) !=
          pUVar5->PackageFlagsPrivate) {
        LOCK();
        pUVar5->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar5->PackageFlagsPrivate | 1);
        UNLOCK();
      }
      local_198 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_198,&local_158);
      local_208.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.PathEvents.ArrayNum = 0;
      local_208.PathEvents.ArrayMax = 0;
      local_208.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.AssetEvents.ArrayNum = 0;
      local_208.AssetEvents.ArrayMax = 0;
      local_208.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.VerseEvents.ArrayNum = 0;
      local_208.VerseEvents.ArrayMax = 0;
      local_208.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.RequiredLoads.ArrayNum = 0;
      local_208.RequiredLoads.ArrayMax = 0;
      local_208.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.BlockedFiles.ArrayNum = 0;
      local_208.BlockedFiles.ArrayMax = 0;
      local_208.bFileLoadedEventBroadcast = false;
      local_208.bScanStartedEventBroadcast = false;
      local_208.bHasSentFileLoadedEventBroadcast = false;
      local_208.bKnownGathersCompleteEventBroadcast = false;
      local_208.ProgressUpdateData.bIsSet = false;
      FLLMScope::FLLMScope(local_218,AssetRegistry,false,None,Default,true);
      FMemScope::FMemScope(&local_190,AssetRegistry,true);
      SRWLock = &(this->GuardedData).PackageRedirects;
      piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      pwVar8 = L"";
      if (SRWLock ==
          (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
           *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 &(this->GuardedData).DevelopmentSerializationOptions.AssetBundlesDenyList.Elements.
                  field_0x28,(FName)pUVar5->_padding_);
      pFVar6 = FPackageName::GetLongPackagePath(&local_140,&local_158);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(&local_148,pwVar8);
      local_180 = &local_208;
      local_170 = &local_188;
      local_178 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
                  ::Call;
      local_188 = &this->_padding_;
      FPathTree::CachePath
                ((FPathTree *)
                 &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
                 *pFVar7,(TFunctionRef<void___cdecl(FName)> *)&local_178);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (SRWLock !=
          (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
           *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      FMemScope::~FMemScope(&local_190);
      FLLMScope::~FLLMScope(local_218);
      Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_208,false);
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x128b,
                           L"AssetCreated is not yet implemented as callable from other threads");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FAssetData::FAssetData(&local_118,param_1,AllowBlueprintClass,AssetRegistryQuery);
      TMulticastDelegate<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
                  *)&(this->PathAddedEvent).field_0x38,&local_118);
      this_00 = (TMulticastDelegate<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
                 *)(**(code **)(this->_padding_ + 0x300))(this);
      FAssetData::FAssetData(&local_a8,&local_118);
      local_168 = &local_a8;
      uStack_160 = 1;
      local_128._12_4_ = uStack_15c;
      local_128.ArrayNum = 1;
      local_128.DataPtr = local_168;
      TMulticastDelegate<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
      ::Broadcast(this_00,&local_128);
      if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_a8.ChunkIDs.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_a8.TagsAndValues);
      TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy> *)
                 &this->BatchedAssetEvents[3].field_0x18,param_1);
      if (local_118.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_118.ChunkIDs.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_118.TagsAndValues);
      DestructItems<FString,int>
                ((FString *)local_208.BlockedFiles.AllocatorInstance.Data,
                 local_208.BlockedFiles.ArrayNum);
      if (local_208.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.BlockedFiles.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_208.RequiredLoads.AllocatorInstance.Data,
                 local_208.RequiredLoads.ArrayNum);
      if (local_208.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.RequiredLoads.AllocatorInstance.Data);
      }
      if (local_208.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.VerseEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_208.AssetEvents.AllocatorInstance.Data,local_208.AssetEvents.ArrayNum);
      if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_208.AssetEvents.AllocatorInstance.Data !=
          (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_208.AssetEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_208.PathEvents.AllocatorInstance.Data,local_208.PathEvents.ArrayNum);
      if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_208.PathEvents.AllocatorInstance.Data !=
          (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_208.PathEvents.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AssetDeleted @ 142b844a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::AssetDeleted(UAssetRegistryImpl *this,UObject *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  UPackage *pUVar6;
  TMulticastDelegate<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_00;
  undefined1 auStackY_188 [32];
  FLLMScope local_158;
  undefined1 local_154 [12];
  FMemScope local_148 [2];
  FAssetData *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  TArrayView<FAssetData_const_,int> local_128;
  FAssetData local_118;
  FAssetData local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0x129a,L"Updating the AssetRegistry is only available in editor");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8470630944661836443>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x129b,"DeletedAsset");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1);
  if (cVar4 == '\0') {
    return;
  }
  pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  if ((pUVar6 == (UPackage *)0x0) || (bVar3 = UPackage::IsEmptyPackage(pUVar6,param_1), !bVar3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  FLLMScope::FLLMScope(&local_158,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(local_148,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (bVar3) {
    local_154._4_8_ = pUVar6->_padding_;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &(this->GuardedData).DevelopmentSerializationOptions.AssetBundlesDenyList.Elements.
                field_0x28,(FName *)local_154,(bool *)(local_154 + 4));
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(local_148);
  FLLMScope::~FLLMScope(&local_158);
  FAssetData::FAssetData(&local_118,param_1,AllowBlueprintClass,AssetRegistryQuery);
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x12c1,
                         L"AssetDeleted is not yet implemented as callable from other threads"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TMulticastDelegate<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy> *)
             &(this->AssetAddedEvent).field_0x18,&local_118);
  this_00 = (TMulticastDelegate<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(this->_padding_ + 0x310))(this);
  FAssetData::FAssetData(&local_a8,&local_118);
  local_138 = &local_a8;
  uStack_130 = 1;
  local_128._12_4_ = uStack_12c;
  local_128.ArrayNum = 1;
  local_128.DataPtr = local_138;
  TMulticastDelegate<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>::
  Broadcast(this_00,&local_128);
  if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_a8.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_a8.TagsAndValues);
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy> *)
             &(this->InMemoryAssetCreatedEvent).field_0x18,param_1);
  if (local_118.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_118.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_118.TagsAndValues);
  return;
}

// AssetRenamed @ 142b84790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::AssetRenamed(UAssetRegistryImpl *this,UObject *param_1,FString *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  undefined1 *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  UPackage *pUVar9;
  FString *pFVar10;
  UPackage *pUVar11;
  FName *pFVar12;
  FAssetData *pFVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_208 [32];
  FLLMScope local_1d8 [2];
  FString local_1d0;
  FString local_1c0;
  FEventContext local_1a8;
  undefined1 local_138 [4];
  FName local_134;
  longlong local_128;
  FMemScope local_120;
  FString *local_118;
  FString local_110;
  FString local_100;
  longlong *local_f0;
  FEventContext *local_e8;
  code *local_e0;
  longlong **local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  FAssetData local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_118 = param_2;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0x12cd,L"Updating the AssetRegistry is only available in editor");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 == (UObject *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8470630944661836494>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x12ce,"RenamedAsset");
    if (!bVar5) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar6 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1);
  if (cVar6 == '\0') {
    return;
  }
  pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  local_134 = (FName)pUVar9->_padding_;
  ::FName::ToString(&local_134,&local_110);
  pFVar10 = FPackageName::GetAssetPackageExtension();
  FPackageName::LongPackageNameToFilename(&local_b8,&local_110,pFVar10);
  pUVar11 = (UPackage *)0x0;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.ArrayNum = 0;
  local_1d0.Data.ArrayMax = 0;
  local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.Data.ArrayNum = 0;
  local_1c0.Data.ArrayMax = 0;
  ::FString::FString(&local_100,L".");
  bVar5 = ::FString::Split(param_2,&local_100,&local_1d0,&local_1c0);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_1d0.Data.ArrayNum != 0) {
      FVar14.Data = local_1d0.Data.AllocatorInstance.Data;
    }
    pUVar11 = FindPackage((UObject *)0x0,(wchar_t *)FVar14.Data);
    if ((pUVar11 != (UPackage *)0x0) &&
       (bVar5 = UPackage::IsEmptyPackage(pUVar11,(UObject *)0x0), bVar5)) {
      bVar5 = true;
      goto LAB_142b84917;
    }
  }
  bVar5 = false;
LAB_142b84917:
  local_1a8.ProgressUpdateData.bIsSet = false;
  local_1a8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.PathEvents.ArrayNum = 0;
  local_1a8.PathEvents.ArrayMax = 0;
  local_1a8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AssetEvents.ArrayNum = 0;
  local_1a8.AssetEvents.ArrayMax = 0;
  local_1a8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.VerseEvents.ArrayNum = 0;
  local_1a8.VerseEvents.ArrayMax = 0;
  local_1a8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.RequiredLoads.ArrayNum = 0;
  local_1a8.RequiredLoads.ArrayMax = 0;
  local_1a8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.BlockedFiles.ArrayNum = 0;
  local_1a8.BlockedFiles.ArrayMax = 0;
  local_1a8.bFileLoadedEventBroadcast = false;
  local_1a8.bScanStartedEventBroadcast = false;
  local_1a8.bHasSentFileLoadedEventBroadcast = false;
  local_1a8.bKnownGathersCompleteEventBroadcast = false;
  FLLMScope::FLLMScope(local_1d8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_120,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &(this->GuardedData).DevelopmentSerializationOptions.AssetBundlesDenyList.Elements.
              field_0x28,(FName)pUVar9->_padding_);
  if (bVar5) {
    local_128 = pUVar11->_padding_;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &(this->GuardedData).DevelopmentSerializationOptions.AssetBundlesDenyList.Elements.
                field_0x28,(FName *)local_138,(bool *)&local_128);
  }
  pFVar10 = FPackageName::GetLongPackagePath(&local_c8,&local_110);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar12 = ::FName::FName(&local_d0,pwVar15);
  local_e8 = &local_1a8;
  local_d8 = &local_f0;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
             ::Call;
  local_f0 = &this->_padding_;
  FPathTree::CachePath
            ((FPathTree *)
             &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
             *pFVar12,(TFunctionRef<void___cdecl(FName)> *)&local_e0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_120);
  FLLMScope::~FLLMScope(local_1d8);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_1a8,false);
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x12f7,
                         L"AssetRenamed is not yet implemented as callable from other threads"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &(this->AssetRemovedEvent).field_0x18;
  pFVar13 = FAssetData::FAssetData(&local_a8,param_1,AllowBlueprintClass,AssetRegistryQuery);
  if ((this_00 == (undefined1 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  pFVar10 = local_118;
  puVar2 = &(this->AssetRenamedEvent).field_0x14;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  bVar5 = false;
  uVar17 = *(int *)&(this->AssetRenamedEvent).field_0x8 - 1;
  if (-1 < (int)uVar17) {
    lVar16 = (longlong)(int)uVar17 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar17 < *(int *)&(this->AssetRenamedEvent).field_0x8) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(int *)(lVar16 + 8 + *(longlong *)&this->AssetRenamedEvent) == 0) ||
          (plVar3 = *(longlong **)(lVar16 + *(longlong *)&this->AssetRenamedEvent),
          plVar3 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar3 + 0x68))(plVar3,pFVar13,pFVar10), cVar6 == '\0')) {
        bVar5 = true;
      }
      lVar16 = lVar16 + -0x10;
      uVar17 = uVar17 - 1;
    } while (-1 < (int)uVar17);
  }
  puVar2 = &(this->AssetRenamedEvent).field_0x14;
  *(int *)puVar2 = *(int *)puVar2 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_a8.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_a8.TagsAndValues);
  DestructItems<FString,int>
            ((FString *)local_1a8.BlockedFiles.AllocatorInstance.Data,
             local_1a8.BlockedFiles.ArrayNum);
  if (local_1a8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_1a8.RequiredLoads.AllocatorInstance.Data,
             local_1a8.RequiredLoads.ArrayNum);
  if (local_1a8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_1a8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1a8.AssetEvents.AllocatorInstance.Data,local_1a8.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1a8.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1a8.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1a8.PathEvents.AllocatorInstance.Data,local_1a8.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1a8.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1a8.PathEvents.AllocatorInstance.Data);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return;
}

// AssetTagsFinalized @ 142b85550

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::AssetTagsFinalized(UAssetRegistryImpl *this,UObject *param_1)

{
  return;
}

// AssetUpdateTags @ 142b85560

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::AssetUpdateTags
          (UAssetRegistryImpl *this,UObject *param_1,EAssetRegistryTagsCaller param_2)

{
  return;
}

// AssetsSaved @ 142b85570

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::AssetsSaved
          (UAssetRegistryImpl *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// Broadcast @ 142b85be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::Broadcast(UAssetRegistryImpl *this,FEventContext *param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  FWindowsRecursiveMutex *pFVar3;
  FAssetAddedEvent *lpCriticalSection;
  FVerseRemovedEvent *this_00;
  FFileLoadProgressUpdatedEvent *this_01;
  longlong lVar4;
  FName FVar5;
  code *pcVar6;
  undefined8 uVar7;
  WORD *pWVar8;
  ForAnyElementType FVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  PRTL_CRITICAL_SECTION_DEBUG p_Var21;
  int *piVar22;
  ForAnyElementType *pFVar23;
  FAssetData *pFVar24;
  ulonglong *puVar25;
  longlong *plVar26;
  FAssetData *pFVar27;
  byte bVar28;
  longlong *plVar29;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_02;
  TMulticastDelegate<void___cdecl(TArrayView<TStringView<wchar_t>_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_03;
  LPCRITICAL_SECTION p_Var30;
  uint *puVar31;
  FAssetData *pFVar32;
  TMulticastDelegate<void___cdecl(TArrayView<TStringView<wchar_t>_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_04;
  ulonglong uVar33;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar34;
  FScriptContainerElement *pFVar35;
  byte bVar36;
  FEventContext *pFVar37;
  bool bVar38;
  undefined1 auStackY_298 [32];
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined1 local_23a;
  undefined1 local_239;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  char local_235;
  ForAnyElementType local_230;
  undefined8 local_228;
  FAssetData *local_220;
  FAssetData *local_218;
  FScriptContainerElement *local_210;
  FEventContext *local_208;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *local_200;
  FAssetData *local_1f8;
  FEventContext local_1e8;
  longlong local_178;
  TStringView<wchar_t> local_170;
  ForAnyElementType *local_160;
  FAssetsEvent *local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148 [2];
  TStringView<wchar_t> *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TStringView<wchar_t> *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  TArrayView<TStringView<wchar_t>_const_,int> local_d8;
  TArrayView<TStringView<wchar_t>_const_,int> local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  ForAnyElementType local_98;
  int local_90 [10];
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_235 = param_2;
  local_208 = param_1;
  bVar11 = CanBroadcastEvents(this);
  if (bVar11) {
    if (param_1->bScanStartedEventBroadcast != false) {
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                 &this->ScanStartedEvent);
      param_1->bScanStartedEventBroadcast = false;
    }
    if ((param_1->PathEvents).ArrayNum != 0) {
      this_04 = (TMulticastDelegate<void___cdecl(TArrayView<TStringView<wchar_t>_const_,int>),FDefaultTSDelegateUserPolicy>
                 *)&this->PathsAddedEvent;
      bVar11 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_04);
      if ((((bVar11) ||
           (bVar11 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
                               ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                                &this->PathsRemovedEvent), bVar11)) ||
          (bVar11 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                               &this->PathAddedEvent), bVar11)) ||
         (bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                             ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                              &this->PathRemovedEvent), bVar11)) {
        pFVar37 = local_208;
        local_230.Data = (FScriptContainerElement *)0x0;
        local_228 = 0;
        if (((local_208->PathEvents).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar35 = (pFVar37->PathEvents).AllocatorInstance.Data;
        bVar11 = *(int *)(pFVar35 + 0x10) == 0;
        iVar15 = (pFVar37->PathEvents).ArrayNum;
        pFVar32 = (FAssetData *)(pFVar35 + (longlong)iVar15 * 0x18);
        local_218 = pFVar32;
        while( true ) {
          if ((pFVar37->PathEvents).ArrayNum != iVar15) {
            local_240 = 0;
            `TCheckedPointerIterator<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_240);
          }
          FVar9.Data = local_230.Data;
          iVar13 = (int)local_228;
          if ((FAssetData *)pFVar35 == pFVar32) break;
          bVar38 = *(int *)(pFVar35 + 0x10) == 0;
          if (bVar38 != bVar11) {
            this_03 = this_04;
            if (bVar11 == false) {
              this_03 = (TMulticastDelegate<void___cdecl(TArrayView<TStringView<wchar_t>_const_,int>),FDefaultTSDelegateUserPolicy>
                         *)&this->PathsRemovedEvent;
            }
            if (((int)local_228 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_138 = (TStringView<wchar_t> *)FVar9.Data;
            iStack_130 = iVar13;
            local_d8._12_4_ = uStack_12c;
            local_d8.ArrayNum = iVar13;
            local_d8.DataPtr = (TStringView<wchar_t> *)FVar9.Data;
            TMulticastDelegate<void___cdecl(TArrayView<TStringView<wchar_t>_const_,int>),FDefaultTSDelegateUserPolicy>
            ::Broadcast(this_03,&local_d8);
            uVar33 = local_228;
            uVar17 = local_228 >> 0x20;
            local_228 = local_228 & 0xffffffff00000000;
            pFVar32 = local_218;
            pFVar37 = local_208;
            bVar11 = bVar38;
            if (((longlong)uVar33 < 0) && ((int)uVar17 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,&local_230,0,(int *)((longlong)&local_228 + 4));
              pFVar32 = local_218;
              pFVar37 = local_208;
            }
          }
          local_170.DataPtr = *(wchar_t **)pFVar35;
          local_170.Size = *(int *)(pFVar35 + 8) + -1;
          if (*(int *)(pFVar35 + 8) == 0) {
            local_170.Size = 0;
          }
          if (((local_230.Data <= &local_170) &&
              (&local_170 <
               (TStringView<wchar_t> *)(local_230.Data + (longlong)local_228._4_4_ * 0x10))) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar38)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((int)local_228 == local_228._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_230,(int *)((longlong)&local_228 + 4));
            local_228 = CONCAT44(local_228._4_4_,iVar13);
          }
          lVar16 = (longlong)(int)local_228;
          pFVar35 = pFVar35 + 0x18;
          local_228 = CONCAT44(local_228._4_4_,(int)local_228 + 1);
          *(wchar_t **)&local_230.Data[lVar16 * 0x10].field_0x0 = local_170.DataPtr;
          *(ulonglong *)(local_230.Data + lVar16 * 0x10 + 8) =
               CONCAT44(local_170._12_4_,local_170.Size);
        }
        if ((int)local_228 != 0) {
          if (bVar11 == false) {
            this_04 = (TMulticastDelegate<void___cdecl(TArrayView<TStringView<wchar_t>_const_,int>),FDefaultTSDelegateUserPolicy>
                       *)&this->PathsRemovedEvent;
          }
          if (((int)local_228 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_128 = (TStringView<wchar_t> *)FVar9.Data;
          iStack_120 = iVar13;
          local_c8._12_4_ = uStack_11c;
          local_c8.ArrayNum = iVar13;
          local_c8.DataPtr = (TStringView<wchar_t> *)FVar9.Data;
          TMulticastDelegate<void___cdecl(TArrayView<TStringView<wchar_t>_const_,int>),FDefaultTSDelegateUserPolicy>
          ::Broadcast(this_04,&local_c8);
        }
        pFVar32 = (FAssetData *)&this->PathAddedEvent;
        local_218 = pFVar32;
        bVar11 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
                           ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)pFVar32);
        if ((bVar11) ||
           (bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                               ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                &this->PathRemovedEvent), bVar11)) {
          iVar15 = (pFVar37->PathEvents).ArrayNum;
          uVar17 = (ulonglong)iVar15;
          pFVar35 = (pFVar37->PathEvents).AllocatorInstance.Data;
          local_200 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                      CONCAT44(local_200._4_4_,iVar15);
          pFVar20 = pFVar35 + uVar17 * 0x18;
          local_210 = pFVar20;
          while( true ) {
            if ((pFVar37->PathEvents).ArrayNum != (int)uVar17) {
              local_23f = 0;
              `TCheckedPointerIterator<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_23f);
            }
            if (pFVar35 == pFVar20) break;
            if (*(int *)(pFVar35 + 0x10) == 0) {
              if ((pFVar32 == (FAssetData *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mutex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                      ,0x1b,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar32);
              puVar31 = &(pFVar32->TagsAndValues).field0_0x0.Fixed.PairBegin;
              *puVar31 = *puVar31 + 1;
              bVar11 = false;
              uVar19 = (pFVar32->ChunkArrayRegistryHandle).Index - 1;
              if (-1 < (int)uVar19) {
                lVar16 = (longlong)(int)uVar19 << 4;
                bVar11 = false;
                do {
                  uVar14 = 0;
                  if ((int)uVar19 < (pFVar32->ChunkArrayRegistryHandle).Index) {
                    uVar14 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar38)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  FVar5 = (pFVar32->AssetClassPath).AssetName;
                  if (((*(int *)(lVar16 + 8 + (longlong)FVar5) == 0) ||
                      (plVar26 = *(longlong **)(lVar16 + (longlong)FVar5),
                      plVar26 == (longlong *)0x0)) ||
                     (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                    bVar11 = true;
                  }
                  lVar16 = lVar16 + -0x10;
                  uVar19 = uVar19 - 1;
                } while (-1 < (int)uVar19);
              }
              puVar31 = &(pFVar32->TagsAndValues).field0_0x0.Fixed.PairBegin;
              *puVar31 = *puVar31 - 1;
              if (bVar11) {
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)pFVar32,false);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar32);
              pFVar20 = local_210;
            }
            else if (*(int *)(pFVar35 + 0x10) == 1) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &this->PathRemovedEvent,(FWriteAccessScope *)&local_108);
              puVar1 = &(this->PathRemovedEvent).field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              bVar11 = false;
              uVar19 = *(int *)&(this->PathRemovedEvent).field_0x10 - 1;
              if (-1 < (int)uVar19) {
                lVar16 = (longlong)(int)uVar19 << 4;
                do {
                  uVar14 = 0;
                  if ((int)uVar19 < *(int *)&(this->PathRemovedEvent).field_0x10) {
                    uVar14 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar38)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar4 = *(longlong *)&(this->PathRemovedEvent).field_0x8;
                  if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
                      (plVar26 = *(longlong **)(lVar16 + lVar4), plVar26 == (longlong *)0x0)) ||
                     (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                    bVar11 = true;
                  }
                  lVar16 = lVar16 + -0x10;
                  uVar19 = uVar19 - 1;
                  pFVar32 = local_218;
                } while (-1 < (int)uVar19);
              }
              puVar1 = &(this->PathRemovedEvent).field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              if (bVar11) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &this->PathRemovedEvent,false);
              }
              pFVar20 = local_210;
              if (local_108.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
                pFVar20 = local_210;
              }
            }
            uVar17 = (ulonglong)local_200 & 0xffffffff;
            pFVar35 = pFVar35 + 0x18;
            pFVar37 = local_208;
          }
        }
        if ((TStringView<wchar_t> *)local_230.Data != (TStringView<wchar_t> *)0x0) {
          FMemory::Free(local_230.Data);
        }
      }
      param_1 = local_208;
      DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 (local_208->PathEvents).AllocatorInstance.Data,(local_208->PathEvents).ArrayNum);
      (param_1->PathEvents).ArrayNum = 0;
      if ((param_1->PathEvents).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(param_1->PathEvents).AllocatorInstance,0,
                   &(param_1->PathEvents).ArrayMax);
      }
    }
    if ((param_1->AssetEvents).ArrayNum != 0) {
      lpCriticalSection = &this->AssetAddedEvent;
      if ((lpCriticalSection == (FAssetAddedEvent *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar15 = *(int *)&(this->AssetAddedEvent).field_0x30;
      plVar26 = *(longlong **)&(this->AssetAddedEvent).field_0x28;
      plVar29 = plVar26 + (longlong)iVar15 * 2;
      while( true ) {
        if (*(int *)&(this->AssetAddedEvent).field_0x30 != iVar15) {
          local_23e = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_23e);
        }
        if (plVar26 == plVar29) {
          if (lpCriticalSection != (FAssetAddedEvent *)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
          bVar11 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
                             ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                              &this->AssetRemovedEvent);
          if (((!bVar11) &&
              (bVar11 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
                                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                                   &this->AssetUpdatedEvent), !bVar11)) &&
             (bVar11 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::IsBound
                                 ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                                  &this->AssetUpdatedOnDiskEvent), !bVar11)) {
            uVar19 = 0;
            p_Var30 = (LPCRITICAL_SECTION)this->BatchedAssetEvents;
            do {
              if ((p_Var30 == (LPCRITICAL_SECTION)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mutex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                      ,0x1b,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              EnterCriticalSection(p_Var30);
              iVar15 = p_Var30[1].LockCount;
              p_Var21 = p_Var30[1].DebugInfo;
              pWVar8 = &p_Var21->Type;
              while( true ) {
                if (p_Var30[1].LockCount != iVar15) {
                  local_23d = 0;
                  `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_23d);
                }
                if (p_Var21 == (PRTL_CRITICAL_SECTION_DEBUG)(pWVar8 + (longlong)iVar15 * 8)) break;
                if ((*(int *)&p_Var21->CriticalSection != 0) &&
                   (lVar16._0_2_ = p_Var21->Type, lVar16._2_2_ = p_Var21->CreatorBackTraceIndex,
                   lVar16._4_4_ = *(undefined4 *)&p_Var21->field_0x4, lVar16 != 0)) {
                  LeaveCriticalSection(p_Var30);
                  goto LAB_142b86532;
                }
                p_Var21 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var21->ProcessLocksList;
              }
              LeaveCriticalSection(p_Var30);
              uVar19 = uVar19 + 1;
              p_Var30 = (LPCRITICAL_SECTION)&p_Var30[1].LockSemaphore;
            } while (uVar19 < 4);
            goto LAB_142b86455;
          }
          goto LAB_142b86532;
        }
        if (((int)plVar26[1] != 0) && (*plVar26 != 0)) break;
        plVar26 = plVar26 + 2;
      }
      if (lpCriticalSection != (FAssetAddedEvent *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
LAB_142b86532:
      iVar15 = (param_1->AssetEvents).ArrayNum;
      pFVar35 = (param_1->AssetEvents).AllocatorInstance.Data;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_98.Data = (FScriptContainerElement *)0x0;
      pFVar20 = pFVar35 + (longlong)iVar15 * 0x70;
      local_90[0] = 0;
      local_90[1] = 0;
      local_90[2] = 0;
      local_90[3] = 0;
      local_90[4] = 0;
      local_90[5] = 0;
      local_90[6] = 0;
      local_90[7] = 0;
      local_90[8] = 0;
      local_90[9] = 0;
      local_68 = 0;
      local_60 = 0;
      while( true ) {
        if ((param_1->AssetEvents).ArrayNum != iVar15) {
          local_23c = 0;
          `TCheckedPointerIterator<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_23c);
        }
        if (pFVar35 == pFVar20) break;
        local_a8[*(int *)(pFVar35 + 0x68)] = local_a8[*(int *)(pFVar35 + 0x68)] + 1;
        pFVar35 = pFVar35 + 0x70;
      }
      uVar19 = 0;
      puVar31 = local_a8;
      piVar22 = local_90 + 1;
      do {
        uVar14 = *puVar31;
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (*piVar22 < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,uVar14,(ForAnyElementType *)(piVar22 + -3),piVar22[-1],piVar22);
        }
        uVar19 = uVar19 + 1;
        piVar22 = piVar22 + 4;
        puVar31 = puVar31 + 1;
      } while (uVar19 < 4);
      if (((param_1->AssetEvents).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = (param_1->AssetEvents).ArrayNum;
      uVar17 = (ulonglong)iVar15;
      local_160 = &local_98;
      pFVar32 = (FAssetData *)(param_1->AssetEvents).AllocatorInstance.Data;
      local_158 = this->BatchedAssetEvents;
      uVar19 = pFVar32[1].PackageName.ComparisonIndex.Value;
      local_1f8 = (FAssetData *)((longlong)pFVar32 + uVar17 * 0x70);
      local_210 = (FScriptContainerElement *)CONCAT44(local_210._4_4_,iVar15);
      while( true ) {
        pFVar24 = local_1f8;
        uVar33 = 0;
        local_218 = pFVar32;
        if ((param_1->AssetEvents).ArrayNum != (int)uVar17) {
          local_23b = 0;
          `TCheckedPointerIterator<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_23b);
        }
        if (pFVar32 == pFVar24) break;
        uVar14 = pFVar32[1].PackageName.ComparisonIndex.Value;
        local_220 = (FAssetData *)CONCAT44(local_220._4_4_,uVar14);
        bVar11 = uVar19 == 1;
        uVar19 = uVar14;
        if ((uVar14 == 1) != bVar11) {
          local_200 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                      ((ulonglong)local_200 & 0xffffffff00000000);
          local_178 = 0;
          uVar17 = uVar33;
          do {
            lVar16 = local_178;
            iVar13 = (int)uVar17;
            iVar15 = *(int *)((longlong)&local_160[1].Data + uVar33);
            if (iVar15 != 0) {
              local_118 = *(undefined8 *)((longlong)&local_160->Data + uVar33);
              pTVar34 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                        (&local_158->field_0x0 + local_178);
              if ((iVar15 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iStack_110 = iVar15;
              if ((pTVar34 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mutex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                      ,0x1b,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              EnterCriticalSection((LPCRITICAL_SECTION)pTVar34);
              uVar10 = local_118;
              pTVar34->InvocationListLockCount = pTVar34->InvocationListLockCount + 1;
              bVar11 = false;
              uVar19 = (pTVar34->InvocationList).ArrayNum - 1;
              if (-1 < (int)uVar19) {
                uVar7 = CONCAT44(uStack_10c,iStack_110);
                lVar16 = (longlong)(int)uVar19 << 4;
                do {
                  uVar14 = 0;
                  if ((int)uVar19 < (pTVar34->InvocationList).ArrayNum) {
                    uVar14 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar38)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar35 = (pTVar34->InvocationList).AllocatorInstance.Data;
                  if ((*(int *)(pFVar35 + lVar16 + 8) == 0) ||
                     (plVar26 = *(longlong **)(pFVar35 + lVar16), plVar26 == (longlong *)0x0)) {
LAB_142b867f4:
                    bVar11 = true;
                  }
                  else {
                    local_b8 = uVar10;
                    uStack_b0 = uVar7;
                    cVar12 = (**(code **)(*plVar26 + 0x68))();
                    if (cVar12 == '\0') goto LAB_142b867f4;
                  }
                  lVar16 = lVar16 + -0x10;
                  uVar19 = uVar19 - 1;
                } while (-1 < (int)uVar19);
                lVar16 = local_178;
                iVar13 = (int)local_200;
              }
              pTVar34->InvocationListLockCount = pTVar34->InvocationListLockCount + -1;
              if (bVar11) {
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                          (pTVar34,false);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)pTVar34);
              pFVar23 = (ForAnyElementType *)((longlong)&local_160->Data + uVar33);
              piVar22 = (int *)((longlong)&pFVar23[1].Data + 4);
              if (*(int *)((longlong)&pFVar23[1].Data + 4) < 0) {
                DestructItems<FAssetData,int>((FAssetData *)pFVar23->Data,*(int *)&pFVar23[1].Data);
                *(undefined4 *)&pFVar23[1].Data = 0;
                if (*piVar22 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x68,8,0,pFVar23,0,piVar22);
                }
              }
              else {
                DestructItems<FAssetData,int>((FAssetData *)pFVar23->Data,*(int *)&pFVar23[1].Data);
                *(undefined4 *)&pFVar23[1].Data = 0;
              }
            }
            uVar19 = iVar13 + 1;
            uVar17 = (ulonglong)uVar19;
            local_178 = lVar16 + 0x40;
            uVar33 = uVar33 + 0x10;
            local_200 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                        CONCAT44(local_200._4_4_,uVar19);
          } while (uVar19 < 4);
          pFVar32 = local_218;
          param_1 = local_208;
          uVar19 = (uint)local_220;
        }
        lVar16 = (longlong)(int)uVar19;
        pFVar23 = &local_98 + lVar16 * 2;
        if ((((FAssetData *)pFVar23->Data <= pFVar32) &&
            (pFVar32 < (FAssetData *)pFVar23->Data + local_90[lVar16 * 4 + 1])) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar15 = local_90[lVar16 * 4];
        if (iVar15 == local_90[lVar16 * 4 + 1]) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x868,pFVar23,local_90 + lVar16 * 4 + 1);
        }
        local_90[lVar16 * 4] = iVar15 + 1;
        FAssetData::FAssetData((FAssetData *)(pFVar23->Data + (longlong)iVar15 * 0x68),pFVar32);
        uVar17 = (ulonglong)local_210 & 0xffffffff;
        pFVar32 = (FAssetData *)&pFVar32[1].PackagePath;
      }
      `UAssetRegistryImpl::Broadcast'::__l57::<lambda_1>::operator()(&local_160);
      iVar15 = (param_1->AssetEvents).ArrayNum;
      uVar17 = (ulonglong)iVar15;
      pFVar32 = (FAssetData *)(param_1->AssetEvents).AllocatorInstance.Data;
      pTVar34 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this->AssetAddedEvent;
      local_210 = (FScriptContainerElement *)CONCAT44(local_210._4_4_,iVar15);
      local_220 = (FAssetData *)((longlong)pFVar32 + uVar17 * 0x70);
      pFVar24 = local_220;
      local_200 = pTVar34;
      while( true ) {
        if ((local_208->AssetEvents).ArrayNum != (int)uVar17) {
          local_23a = 0;
          `TCheckedPointerIterator<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_23a);
        }
        if (pFVar32 == pFVar24) break;
        uVar19 = pFVar32[1].PackageName.ComparisonIndex.Value;
        if (uVar19 == 0) {
          if ((pTVar34 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pTVar34);
          pTVar34->InvocationListLockCount = pTVar34->InvocationListLockCount + 1;
          bVar11 = false;
          uVar19 = (pTVar34->InvocationList).ArrayNum - 1;
          if (-1 < (int)uVar19) {
            lVar16 = (longlong)(int)uVar19 << 4;
            do {
              uVar14 = 0;
              if ((int)uVar19 < (pTVar34->InvocationList).ArrayNum) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar38)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar35 = (pTVar34->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar35 + lVar16 + 8) == 0) ||
                  (plVar26 = *(longlong **)(pFVar35 + lVar16), plVar26 == (longlong *)0x0)) ||
                 (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                bVar11 = true;
              }
              lVar16 = lVar16 + -0x10;
              uVar19 = uVar19 - 1;
            } while (-1 < (int)uVar19);
          }
          pTVar34->InvocationListLockCount = pTVar34->InvocationListLockCount + -1;
          if (bVar11) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      (pTVar34,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pTVar34);
          pFVar24 = local_220;
LAB_142b86dd0:
          uVar17 = (ulonglong)local_210 & 0xffffffff;
          pFVar32 = (FAssetData *)&pFVar32[1].PackagePath;
        }
        else {
          if (uVar19 == 1) {
            this_02 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                      &this->AssetRemovedEvent;
            if ((this_02 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mutex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                    ,0x1b,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            EnterCriticalSection((LPCRITICAL_SECTION)this_02);
            puVar1 = &(this->AssetRemovedEvent).field_0x3c;
            *(int *)puVar1 = *(int *)puVar1 + 1;
            bVar11 = false;
            uVar19 = *(int *)&(this->AssetRemovedEvent).field_0x30 - 1;
            if (-1 < (int)uVar19) {
              lVar16 = (longlong)(int)uVar19 << 4;
              bVar11 = false;
              do {
                uVar14 = 0;
                if ((int)uVar19 < *(int *)&(this->AssetRemovedEvent).field_0x30) {
                  uVar14 = ~uVar19 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar4 = *(longlong *)&(this->AssetRemovedEvent).field_0x28;
                if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
                    (plVar26 = *(longlong **)(lVar4 + lVar16), plVar26 == (longlong *)0x0)) ||
                   (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                  bVar11 = true;
                }
                lVar16 = lVar16 + -0x10;
                uVar19 = uVar19 - 1;
                pTVar34 = local_200;
              } while (-1 < (int)uVar19);
            }
          }
          else if (uVar19 == 2) {
            this_02 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                      &this->AssetUpdatedEvent;
            if ((this_02 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mutex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                    ,0x1b,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            EnterCriticalSection((LPCRITICAL_SECTION)this_02);
            puVar1 = &(this->AssetUpdatedEvent).field_0x3c;
            *(int *)puVar1 = *(int *)puVar1 + 1;
            bVar11 = false;
            uVar19 = *(int *)&(this->AssetUpdatedEvent).field_0x30 - 1;
            if (-1 < (int)uVar19) {
              lVar16 = (longlong)(int)uVar19 << 4;
              bVar11 = false;
              do {
                uVar14 = 0;
                if ((int)uVar19 < *(int *)&(this->AssetUpdatedEvent).field_0x30) {
                  uVar14 = ~uVar19 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar4 = *(longlong *)&(this->AssetUpdatedEvent).field_0x28;
                if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
                    (plVar26 = *(longlong **)(lVar4 + lVar16), plVar26 == (longlong *)0x0)) ||
                   (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                  bVar11 = true;
                }
                lVar16 = lVar16 + -0x10;
                uVar19 = uVar19 - 1;
                pTVar34 = local_200;
              } while (-1 < (int)uVar19);
            }
          }
          else {
            if (uVar19 != 3) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                  ,0x2a1f,L"");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              goto LAB_142b86dd0;
            }
            this_02 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                      &this->AssetUpdatedOnDiskEvent;
            if ((this_02 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mutex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                    ,0x1b,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            EnterCriticalSection((LPCRITICAL_SECTION)this_02);
            puVar1 = &(this->AssetUpdatedOnDiskEvent).field_0x3c;
            *(int *)puVar1 = *(int *)puVar1 + 1;
            bVar11 = false;
            uVar19 = *(int *)&(this->AssetUpdatedOnDiskEvent).field_0x30 - 1;
            if (-1 < (int)uVar19) {
              lVar16 = (longlong)(int)uVar19 << 4;
              bVar11 = false;
              do {
                uVar14 = 0;
                if ((int)uVar19 < *(int *)&(this->AssetUpdatedOnDiskEvent).field_0x30) {
                  uVar14 = ~uVar19 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar4 = *(longlong *)&(this->AssetUpdatedOnDiskEvent).field_0x28;
                if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
                    (plVar26 = *(longlong **)(lVar4 + lVar16), plVar26 == (longlong *)0x0)) ||
                   (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                  bVar11 = true;
                }
                lVar16 = lVar16 + -0x10;
                uVar19 = uVar19 - 1;
                pTVar34 = local_200;
              } while (-1 < (int)uVar19);
            }
          }
          this_02->InvocationListLockCount = this_02->InvocationListLockCount + -1;
          if (bVar11) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      (this_02,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)this_02);
          uVar17 = (ulonglong)local_210 & 0xffffffff;
          pFVar32 = (FAssetData *)&pFVar32[1].PackagePath;
          pFVar24 = local_220;
        }
      }
      puVar25 = local_58;
      lVar16 = 4;
      do {
        puVar2 = puVar25 + -1;
        puVar25 = puVar25 + -2;
        lVar16 = lVar16 + -1;
        DestructItems<FAssetData,int>((FAssetData *)*puVar25,(int)*puVar2);
        if ((void *)*puVar25 != (void *)0x0) {
          FMemory::Free((void *)*puVar25);
        }
        param_1 = local_208;
      } while (lVar16 != 0);
LAB_142b86455:
      DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 (param_1->AssetEvents).AllocatorInstance.Data,(param_1->AssetEvents).ArrayNum);
      (param_1->AssetEvents).ArrayNum = 0;
      if ((param_1->AssetEvents).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,0,&(param_1->AssetEvents).AllocatorInstance,0,
                   &(param_1->AssetEvents).ArrayMax);
      }
    }
    if ((param_1->VerseEvents).ArrayNum != 0) {
      p_Var30 = (LPCRITICAL_SECTION)&this->VerseAddedEvent;
      if (((FVerseAddedEvent *)p_Var30 == (FVerseAddedEvent *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EnterCriticalSection(p_Var30);
      iVar15 = *(int *)&(this->VerseAddedEvent).field_0x30;
      plVar26 = *(longlong **)&(this->VerseAddedEvent).field_0x28;
      plVar29 = plVar26 + (longlong)iVar15 * 2;
      while( true ) {
        if (*(int *)&(this->VerseAddedEvent).field_0x30 != iVar15) {
          local_239 = 0;
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_239);
        }
        if (plVar26 == plVar29) {
          if ((FVerseAddedEvent *)p_Var30 != (FVerseAddedEvent *)0x0) {
            LeaveCriticalSection(p_Var30);
          }
          p_Var30 = (LPCRITICAL_SECTION)&this->VerseRemovedEvent;
          if (((FVerseRemovedEvent *)p_Var30 == (FVerseRemovedEvent *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          EnterCriticalSection(p_Var30);
          iVar15 = *(int *)&(this->VerseRemovedEvent).field_0x30;
          plVar26 = *(longlong **)&(this->VerseRemovedEvent).field_0x28;
          plVar29 = plVar26 + (longlong)iVar15 * 2;
          goto LAB_142b86e80;
        }
        if (((int)plVar26[1] != 0) && (*plVar26 != 0)) break;
        plVar26 = plVar26 + 2;
      }
LAB_142b86eb0:
      if (p_Var30 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(p_Var30);
      }
      iVar15 = (param_1->VerseEvents).ArrayNum;
      uVar17 = (ulonglong)iVar15;
      pFVar32 = (FAssetData *)&this->VerseAddedEvent;
      pFVar24 = (FAssetData *)(param_1->VerseEvents).AllocatorInstance.Data;
      local_210 = (FScriptContainerElement *)CONCAT44(local_210._4_4_,iVar15);
      local_218 = (FAssetData *)
                  ((longlong)(&(pFVar24->ChunkIDs).AllocatorInstance + -5) + uVar17 * 0xc);
      pFVar27 = local_218;
      local_1f8 = pFVar32;
      while( true ) {
        local_220 = pFVar24;
        if ((param_1->VerseEvents).ArrayNum != (int)uVar17) {
          local_237 = 0;
          `TCheckedPointerIterator<TTuple<FName,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_237);
        }
        if (pFVar24 == pFVar27) break;
        uVar19 = (pFVar24->PackagePath).ComparisonIndex.Value;
        if (uVar19 == 0) {
          if ((pFVar32 == (FAssetData *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar32);
          puVar31 = &(pFVar32->TagsAndValues).field0_0x0.Fixed.PairBegin;
          *puVar31 = *puVar31 + 1;
          bVar11 = false;
          uVar19 = (pFVar32->ChunkArrayRegistryHandle).Index - 1;
          if (-1 < (int)uVar19) {
            lVar16 = (longlong)(int)uVar19 << 4;
            bVar11 = false;
            do {
              uVar14 = 0;
              if ((int)uVar19 < (pFVar32->ChunkArrayRegistryHandle).Index) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar38)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar5 = (pFVar32->AssetClassPath).AssetName;
              if (((*(int *)((longlong)FVar5 + 8 + lVar16) == 0) ||
                  (plVar26 = *(longlong **)((longlong)FVar5 + lVar16), plVar26 == (longlong *)0x0))
                 || (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                bVar11 = true;
              }
              lVar16 = lVar16 + -0x10;
              uVar19 = uVar19 - 1;
              pFVar24 = local_220;
              param_1 = local_208;
            } while (-1 < (int)uVar19);
          }
          puVar31 = &(pFVar32->TagsAndValues).field0_0x0.Fixed.PairBegin;
          *puVar31 = *puVar31 - 1;
          if (bVar11) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)pFVar32,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar32);
          pFVar27 = local_218;
LAB_142b87130:
          uVar17 = (ulonglong)local_210 & 0xffffffff;
          pFVar24 = (FAssetData *)&(pFVar24->PackagePath).Number;
        }
        else {
          if (uVar19 != 1) goto LAB_142b87130;
          this_00 = &this->VerseRemovedEvent;
          if ((this_00 == (FVerseRemovedEvent *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)this_00);
          puVar1 = &(this->VerseRemovedEvent).field_0x3c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar11 = false;
          uVar19 = *(int *)&(this->VerseRemovedEvent).field_0x30 - 1;
          if (-1 < (int)uVar19) {
            lVar16 = (longlong)(int)uVar19 << 4;
            bVar11 = false;
            do {
              uVar14 = 0;
              if ((int)uVar19 < *(int *)&(this->VerseRemovedEvent).field_0x30) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar38)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar4 = *(longlong *)&(this->VerseRemovedEvent).field_0x28;
              if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
                  (plVar26 = *(longlong **)(lVar16 + lVar4), plVar26 == (longlong *)0x0)) ||
                 (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
                bVar11 = true;
              }
              lVar16 = lVar16 + -0x10;
              uVar19 = uVar19 - 1;
              pFVar24 = local_220;
              pFVar32 = local_1f8;
            } while (-1 < (int)uVar19);
          }
          puVar1 = &(this->VerseRemovedEvent).field_0x3c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar11) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
          uVar17 = (ulonglong)local_210 & 0xffffffff;
          pFVar24 = (FAssetData *)&(pFVar24->PackagePath).Number;
          pFVar27 = local_218;
          param_1 = local_208;
        }
      }
LAB_142b87154:
      piVar22 = &(param_1->VerseEvents).ArrayMax;
      (param_1->VerseEvents).ArrayNum = 0;
      if (*piVar22 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&(param_1->VerseEvents).AllocatorInstance,0,piVar22);
      }
    }
    iVar15 = (param_1->RequiredLoads).ArrayNum;
    if (iVar15 != 0) {
      pFVar35 = (param_1->RequiredLoads).AllocatorInstance.Data;
      pFVar20 = pFVar35 + (longlong)iVar15 * 0x10;
      while( true ) {
        if ((param_1->RequiredLoads).ArrayNum != iVar15) {
          local_236 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_236);
        }
        if (pFVar35 == pFVar20) break;
        if (*(int *)(pFVar35 + 8) == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *(wchar_t **)pFVar35;
        }
        LoadPackage((UPackage *)0x0,pwVar18,0,(FArchive *)0x0,(FLinkerInstancingContext *)0x0);
        pFVar35 = pFVar35 + 0x10;
      }
      DestructItems<FString,int>
                ((FString *)(param_1->RequiredLoads).AllocatorInstance.Data,
                 (param_1->RequiredLoads).ArrayNum);
      (param_1->RequiredLoads).ArrayNum = 0;
      if ((param_1->RequiredLoads).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(param_1->RequiredLoads).AllocatorInstance,0,
                   &(param_1->RequiredLoads).ArrayMax);
      }
    }
    if ((param_1->BlockedFiles).ArrayNum != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FilesBlockedEvent,
                 (FWriteAccessScope *)&local_f0);
      puVar1 = &(this->FilesBlockedEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar11 = false;
      uVar19 = *(int *)&(this->FilesBlockedEvent).field_0x10 - 1;
      if (-1 < (int)uVar19) {
        lVar16 = (longlong)(int)uVar19 << 4;
        bVar11 = false;
        do {
          uVar14 = 0;
          if ((int)uVar19 < *(int *)&(this->FilesBlockedEvent).field_0x10) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)&(this->FilesBlockedEvent).field_0x8;
          if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
              (plVar26 = *(longlong **)(lVar4 + lVar16), plVar26 == (longlong *)0x0)) ||
             (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
            bVar11 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      puVar1 = &(this->FilesBlockedEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->FilesBlockedEvent,
                   false);
      }
      if (local_f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
      }
      DestructItems<FString,int>
                ((FString *)(param_1->BlockedFiles).AllocatorInstance.Data,
                 (param_1->BlockedFiles).ArrayNum);
      (param_1->BlockedFiles).ArrayNum = 0;
      if ((param_1->BlockedFiles).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(param_1->BlockedFiles).AllocatorInstance,0,
                   &(param_1->BlockedFiles).ArrayMax);
      }
    }
    if ((param_1->ProgressUpdateData).bIsSet != false) {
      this_01 = &this->FileLoadProgressUpdatedEvent;
      if ((this_01 == (FFileLoadProgressUpdatedEvent *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_01);
      puVar1 = &(this->FileLoadProgressUpdatedEvent).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar11 = false;
      uVar19 = *(int *)&(this->FileLoadProgressUpdatedEvent).field_0x30 - 1;
      if (-1 < (int)uVar19) {
        lVar16 = (longlong)(int)uVar19 << 4;
        bVar11 = false;
        do {
          uVar14 = 0;
          if ((int)uVar19 < *(int *)&(this->FileLoadProgressUpdatedEvent).field_0x30) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)&(this->FileLoadProgressUpdatedEvent).field_0x28;
          if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
              (plVar26 = *(longlong **)(lVar4 + lVar16), plVar26 == (longlong *)0x0)) ||
             (cVar12 = (**(code **)(*plVar26 + 0x68))(), cVar12 == '\0')) {
            bVar11 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      puVar1 = &(this->FileLoadProgressUpdatedEvent).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_01,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
      if ((param_1->ProgressUpdateData).bIsSet != false) {
        (param_1->ProgressUpdateData).bIsSet = false;
      }
    }
    bVar28 = param_1->bFileLoadedEventBroadcast;
    if (((bool)bVar28 != false) || (param_1->bKnownGathersCompleteEventBroadcast != false)) {
      pFVar3 = &this->DeferredEventsCriticalSection;
      bVar36 = param_1->bKnownGathersCompleteEventBroadcast;
      if (local_235 == '\0') {
        if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
LAB_142b87814:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
        if ((param_1 == &this->DeferredEvents) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("&EventContext != &DeferredEvents",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                ,0x2a66,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UE::AssetRegistry::Impl::FEventContext::Append(&this->DeferredEvents,param_1);
        RequestTick(this);
        UE::AssetRegistry::Impl::FEventContext::Clear(param_1);
        if (((param_1->bFileLoadedEventBroadcast != false) ||
            (param_1->bKnownGathersCompleteEventBroadcast != false)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!EventContext.bFileLoadedEventBroadcast && !EventContext.bKnownGathersCompleteEventBroadcast"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                ,0x2a6a,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((((bool)bVar28 != false) && ((this->DeferredEvents).bFileLoadedEventBroadcast == false))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!bLocalFileLoadedEventBroadcast || DeferredEvents.bFileLoadedEventBroadcast"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                   ,0x2a6b,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((((bool)bVar36 != false) &&
            ((this->DeferredEvents).bKnownGathersCompleteEventBroadcast == false)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bLocalKnownGathersCompleteEventBroadcast || DeferredEvents.bKnownGathersCompleteEventBroadcast"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                ,0x2a6c,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      }
      else {
        local_1e8.ProgressUpdateData.bIsSet = false;
        local_1e8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.PathEvents.ArrayNum = 0;
        local_1e8.PathEvents.ArrayMax = 0;
        local_1e8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.AssetEvents.ArrayNum = 0;
        local_1e8.AssetEvents.ArrayMax = 0;
        local_1e8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.VerseEvents.ArrayNum = 0;
        local_1e8.VerseEvents.ArrayMax = 0;
        local_1e8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.RequiredLoads.ArrayNum = 0;
        local_1e8.RequiredLoads.ArrayMax = 0;
        local_1e8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.BlockedFiles.ArrayNum = 0;
        local_1e8.BlockedFiles.ArrayMax = 0;
        local_1e8.bFileLoadedEventBroadcast = false;
        local_1e8.bScanStartedEventBroadcast = false;
        local_1e8.bHasSentFileLoadedEventBroadcast = false;
        local_1e8.bKnownGathersCompleteEventBroadcast = false;
        if (pFVar3 == (FWindowsRecursiveMutex *)0x0) goto LAB_142b87814;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
        pFVar37 = &this->DeferredEvents;
        if ((param_1 == pFVar37) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("&EventContext != &DeferredEvents",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                                ,0x2a73,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UE::AssetRegistry::Impl::FEventContext::operator=(&local_1e8,pFVar37);
        UE::AssetRegistry::Impl::FEventContext::Clear(pFVar37);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
        bVar11 = local_1e8.bFileLoadedEventBroadcast;
        if ((((((local_1e8.bScanStartedEventBroadcast != false) ||
               (local_1e8.bFileLoadedEventBroadcast != false)) ||
              (local_1e8.bKnownGathersCompleteEventBroadcast != false)) ||
             ((local_1e8.ProgressUpdateData.bIsSet != false || (local_1e8.PathEvents.ArrayNum != 0))
             )) || (local_1e8.AssetEvents.ArrayNum != 0)) ||
           ((local_1e8.RequiredLoads.ArrayNum != 0 || (local_1e8.BlockedFiles.ArrayNum != 0)))) {
          bVar36 = bVar36 | local_1e8.bKnownGathersCompleteEventBroadcast;
          local_1e8._104_4_ = ((uint)local_1e8._104_4_ >> 8 & 0xffff) << 8;
          bVar28 = bVar28 | bVar11;
          Broadcast(this,&local_1e8,false);
        }
        if (bVar28 != 0) {
          QueryPerformanceCounter(&local_150);
          if (3 < (byte)LogAssetRegistry._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
          TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                     &this->FileLoadedEvent);
          TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                     &this->ScanEndedEvent);
          if (3 < (byte)LogAssetRegistry._0_1_) {
            QueryPerformanceCounter(local_148);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
          param_1->bHasSentFileLoadedEventBroadcast = true;
          param_1->bFileLoadedEventBroadcast = false;
        }
        if (bVar36 != 0) {
          TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                     &this->KnownGathersCompleteEvent);
          param_1->bKnownGathersCompleteEventBroadcast = false;
        }
        DestructItems<FString,int>
                  ((FString *)local_1e8.BlockedFiles.AllocatorInstance.Data,
                   local_1e8.BlockedFiles.ArrayNum);
        if (local_1e8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.BlockedFiles.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_1e8.RequiredLoads.AllocatorInstance.Data,
                   local_1e8.RequiredLoads.ArrayNum);
        if (local_1e8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.RequiredLoads.AllocatorInstance.Data);
        }
        if (local_1e8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.VerseEvents.AllocatorInstance.Data);
        }
        DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                  ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                   local_1e8.AssetEvents.AllocatorInstance.Data,local_1e8.AssetEvents.ArrayNum);
        if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
            local_1e8.AssetEvents.AllocatorInstance.Data !=
            (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
          FMemory::Free(local_1e8.AssetEvents.AllocatorInstance.Data);
        }
        DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                  ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                   local_1e8.PathEvents.AllocatorInstance.Data,local_1e8.PathEvents.ArrayNum);
        if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
            local_1e8.PathEvents.AllocatorInstance.Data !=
            (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
          FMemory::Free(local_1e8.PathEvents.AllocatorInstance.Data);
        }
      }
    }
  }
  else if (((((param_1->bScanStartedEventBroadcast != false) ||
             (param_1->bFileLoadedEventBroadcast != false)) ||
            (param_1->bKnownGathersCompleteEventBroadcast != false)) ||
           (((param_1->ProgressUpdateData).bIsSet != false || ((param_1->PathEvents).ArrayNum != 0))
           )) || (((param_1->AssetEvents).ArrayNum != 0 ||
                  (((param_1->RequiredLoads).ArrayNum != 0 ||
                   ((param_1->BlockedFiles).ArrayNum != 0)))))) {
    pFVar3 = &this->DeferredEventsCriticalSection;
    if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
    if ((param_1 == &this->DeferredEvents) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("&EventContext != &DeferredEvents",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                            ,0x298d,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UE::AssetRegistry::Impl::FEventContext::Append(&this->DeferredEvents,param_1);
    RequestTick(this);
    UE::AssetRegistry::Impl::FEventContext::Clear(param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
  }
  return;
LAB_142b86e80:
  if (*(int *)&(this->VerseRemovedEvent).field_0x30 != iVar15) {
    local_238 = 0;
    `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
    operator!='::__l2::<lambda_1>::operator()(&local_238);
  }
  if (plVar26 == plVar29) {
    if ((FVerseRemovedEvent *)p_Var30 != (FVerseRemovedEvent *)0x0) {
      LeaveCriticalSection(p_Var30);
    }
    goto LAB_142b87154;
  }
  if (((int)plVar26[1] != 0) && (*plVar26 != 0)) goto LAB_142b86eb0;
  plVar26 = plVar26 + 2;
  goto LAB_142b86e80;
}

// CanBroadcastEvents @ 142b88190

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::CanBroadcastEvents(UAssetRegistryImpl *this)

{
  bool bVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
    if (*(char *)(pFVar3 + 4) == '\0') {
      return true;
    }
  }
  return false;
}

// ClearGathererCache @ 142b887e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::ClearGathererCache(UAssetRegistryImpl *this)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FAssetDataGatherer *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  this_00 = *(FAssetDataGatherer **)
             &(this->GuardedData).CachedPathTree.ChildPathToParentPath.field_0x28;
  if (this_00 != (FAssetDataGatherer *)0x0) {
    FAssetDataGatherer::ClearCache(this_00);
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ClearRequestTick @ 142b888c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::ClearRequestTick(UAssetRegistryImpl *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->TickRequestHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickRequestHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickRequestHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->TickRequestHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->TickRequestHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142b8893f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          return;
        }
      }
    }
  }
  return;
}

// CompileFilter @ 142b89480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::CompileFilter
          (UAssetRegistryImpl *this,FARFilter *param_1,FARCompiledFilter *param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  undefined1 auStackY_158 [32];
  FClassInheritanceContext local_120;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_120.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_120.bInheritanceMapUpToDate = false;
  local_120.bCodeGeneratorClassesUpToDate = false;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  bVar3 = false;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 1;
  local_120.Buffer = (FClassInheritanceBuffer *)0x0;
  local_120.StackBuffer = (FClassInheritanceBuffer *)0x0;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (param_1->bRecursiveClasses == false) {
    UE::AssetRegistry::FAssetRegistryImpl::CompileFilter
              ((FAssetRegistryImpl *)&this->_padding_,&local_120,param_1,param_2);
  }
  else {
    uVar6 = GetRegisteredNativeClassesVersionNumber();
    uVar7 = GetRegisteredClassesVersionNumber();
    if ((((this->GuardedData).CachedParsedFilterRules.Rules.field_0x38 != '\0') &&
        (((this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x30 != '\0'
         || (*(ulong64 *)
              &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x28 !=
             uVar7)))) ||
       (*(ulong64 *)
         &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x38 != uVar6)
       ) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      bVar3 = true;
      if (SRWLock ==
          (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
           *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0xa2,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
    }
    local_120.StackBuffer = (FClassInheritanceBuffer *)local_f8;
    UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
              (&local_120,(FAssetRegistryImpl *)&this->_padding_,uVar6,uVar7);
    UE::AssetRegistry::FAssetRegistryImpl::CompileFilter
              ((FAssetRegistryImpl *)&this->_padding_,&local_120,param_1,param_2);
    if (bVar3) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      goto LAB_142b8968c;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
LAB_142b8968c:
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar4 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  iVar4 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c4 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return;
}

// ContainsDependency @ 142b8a450

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::ContainsDependency
          (UAssetRegistryImpl *this,FName param_1,FName param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAssetIdentifier local_68;
  FAssetIdentifier local_48;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_68.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_68.PrimaryAssetType.Name.Number = 0;
  local_68.ObjectName.ComparisonIndex.Value = 0;
  local_68.ObjectName.Number = 0;
  local_68.ValueName.ComparisonIndex.Value = 0;
  local_68.ValueName.Number = 0;
  local_48.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_48.PrimaryAssetType.Name.Number = 0;
  local_48.ObjectName.ComparisonIndex.Value = 0;
  local_48.ObjectName.Number = 0;
  local_48.ValueName.ComparisonIndex.Value = 0;
  local_48.ValueName.Number = 0;
  local_68.PackageName = param_2;
  local_48.PackageName = param_1;
  bVar3 = FAssetRegistryState::ContainsDependency
                    ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                     &local_48,&local_68,param_3,param_4);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// ContainsTag @ 142b8a550

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::ContainsTag(UAssetRegistryImpl *this,FName param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar6 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->GuardedData).State.CachedAssetsByClass.field_0x30 !=
      *(int *)&(this->GuardedData).State.CachedClassesByTag.field_0xc) {
    puVar8 = *(undefined1 **)&(this->GuardedData).State.CachedClassesByTag.field_0x18;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->GuardedData).State.CachedClassesByTag.field_0x10;
    }
    iVar7 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->GuardedData).State.CachedClassesByTag.field_0x20 - 1U
                              & param_1.Number + uVar6) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&(this->GuardedData).State.CachedAssetsByClass.field_0x28;
      do {
        if (*(FName *)((longlong)iVar7 * 0x60 + lVar2) == param_1) goto LAB_142b8a630;
        iVar7 = *(int *)((longlong)iVar7 * 0x60 + 0x58 + lVar2);
      } while (iVar7 != -1);
    }
  }
  iVar7 = -1;
LAB_142b8a630:
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return iVar7 != -1;
}

// DoesPackageExistOnDisk @ 142b8e200

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::DoesPackageExistOnDisk
          (UAssetRegistryImpl *this,FName param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  EPackageLocationFilter EVar6;
  TStringView<wchar_t> *pTVar7;
  FString *pFVar8;
  FAssetData *pFVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  FAssetData *pFVar13;
  FName local_res10;
  FPackagePath local_88;
  FString local_78;
  FAssetData *local_68;
  undefined8 local_60;
  FString local_58;
  FTopLevelAssetPath local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  local_68 = (FAssetData *)0x0;
  local_60 = 0;
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x18))();
  if ((int)local_60 == 0) {
    bVar4 = false;
    goto LAB_142b8e46b;
  }
  ::FName::ToString(&local_res10,&local_58);
  if (param_2 != (FString *)0x0) {
    iVar11 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar11);
  }
  pFVar9 = local_68;
  if (param_3 != (FString *)0x0) {
    lVar10 = (longlong)(int)local_60;
    if (((int)local_60 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    UE::AssetRegistry::GetClassPathObjectRedirector(&local_48);
    bVar12 = 0;
    bVar4 = false;
    pFVar13 = pFVar9 + lVar10;
    if (pFVar9 == pFVar13) goto LAB_142b8e3bd;
    do {
      bVar12 = bVar12 | (byte)(pFVar9->PackageFlags >> 0x11) & 1;
      if (((pFVar9->AssetClassPath).PackageName == local_48.PackageName) &&
         ((pFVar9->AssetClassPath).AssetName == local_48.AssetName)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      bVar4 = (bool)(bVar4 | bVar3);
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != pFVar13);
    if (bVar12 == 0) {
      if (!bVar4) {
LAB_142b8e3bd:
        pFVar8 = FPackageName::GetAssetPackageExtension();
        goto LAB_142b8e3c2;
      }
      local_88.PackageName.ComparisonIndex.Value = 0;
      local_88.PackageName.Number = 0;
      local_88.HeaderExtension = Unspecified;
      EVar6 = FPackageName::InternalDoesPackageExistEx(&local_58,Any,false,&local_88);
      if (EVar6 == None) goto LAB_142b8e3bd;
      pTVar7 = FPackagePath::GetExtensionString(&local_88,&local_28,Header);
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      pFVar8 = ::FString::ConstructFromPtrSize
                         (&local_38,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
      if (&local_78 != pFVar8) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar8 = FPackageName::GetMapPackageExtension();
LAB_142b8e3c2:
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar11 = (pFVar8->Data).ArrayNum;
      pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
      local_78.Data.ArrayNum = iVar11;
      if (iVar11 == 0) {
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)&local_78,iVar11,&local_78.Data.ArrayMax);
        memcpy(local_78.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar11 * 2);
      }
    }
    if (param_3 != &local_78) {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_3->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (param_3->Data).ArrayNum = local_78.Data.ArrayNum;
      (param_3->Data).ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = true;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_142b8e46b:
  DestructItems<FAssetData,int>(local_68,(int)local_60);
  if (local_68 != (FAssetData *)0x0) {
    FMemory::Free(local_68);
  }
  return bVar4;
}

// DumpState @ 142b8e870

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::DumpState
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  FAssetRegistryState::Dump
            ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,param_1,
             param_2,param_3);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// EnumerateAllAssets @ 142b8e950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::EnumerateAllAssets
          (UAssetRegistryImpl *this,TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_1,
          EEnumerateAssetsFlags param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  ForElementType<FAssetData> FVar8;
  ForElementType<FAssetData> FVar9;
  undefined1 auStackY_3558 [32];
  <lambda_1> local_3518;
  undefined1 local_3517 [7];
  TFunctionRef<bool___cdecl(FAssetData_const_&)> *local_3510;
  ForElementType<FAssetData> local_3508;
  code *local_3500;
  TFunctionRef<bool___cdecl(FAssetData_const_&)> **local_34f8;
  code *local_34f0;
  ForElementType<FAssetData> *local_34e8;
  ForElementType<FAssetData> local_34e0;
  TFunctionRef<bool___cdecl(FAssetData_const_&)> *local_34d8;
  TArrayView<std::nullptr_t,int> local_34d0;
  code *local_34c0;
  ForElementType<FAssetData> *local_34b8;
  undefined1 local_34a8 [32];
  void *local_3488;
  undefined4 local_3480;
  uint local_347c;
  undefined4 local_3478;
  undefined4 local_3474;
  ForElementType<FSetElementId> local_3468;
  int local_3460;
  undefined1 local_3458 [13312];
  ForElementType<FAssetData> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142b8e96d;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3558;
  local_347c = 0x80;
  local_34a8._0_8_ = (FScriptContainerElement *)0x0;
  local_34a8._8_8_ = 0;
  local_3488 = (void *)0x0;
  local_3480 = 0;
  local_3478 = 0xffffffff;
  local_3474 = 0;
  local_3468 = (ForElementType<FSetElementId>)0x0;
  local_3460 = 0;
  if ((param_2 & OnlyOnDiskAssets) == None) {
    local_34f8 = &local_3510;
    local_3500 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllAssets'::__l5::<lambda_1>,bool,FAssetData_&&>
                 ::Call;
    local_3510 = param_1;
    UE::AssetRegistry::Utils::EnumerateAllMemoryAssets
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_34a8,
               (bool *)&local_3518,(TFunctionRef<bool___cdecl(FAssetData_&&)> *)&local_3500);
    if (local_3518 != (<lambda_1>)0x0) goto LAB_142b8ec50;
  }
  SRWLock = &(this->GuardedData).PackageRedirects;
  local_58 = (ForElementType<FAssetData>)0x0;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_50 = 0;
  local_4c = 0x80;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar2 = (this->GuardedData).State.PreallocatedAssetDataBuffers.ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (local_4c < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_>
              (0x68,8,uVar2,(ForElementType<FAssetData> *)local_3458,local_50,&local_4c);
  }
  local_3508 = (ForElementType<FAssetData>)local_3458;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_34a8,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &(this->GuardedData).DevelopmentSerializationOptions.AssetBundlesDenyList.Elements.
              field_0x28);
  local_34f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllAssets'::__l9::<lambda_2>,bool,FAssetData_const_&>
               ::Call;
  local_34e8 = &local_3508;
  FAssetRegistryState::EnumerateAllAssets
            ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_34a8,
             (TFunctionRef<bool___cdecl(FAssetData_const_&)> *)&local_34f0,param_2);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  iVar4 = local_50;
  if ((param_2 & Parallel) != None) {
    local_34c0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllAssets'::__l12::<lambda_3>,void,int>
                 ::Call;
    local_34b8 = &local_34e0;
    local_34d0.DataPtr = (void **)0x0;
    local_34d0.ArrayNum = 0;
    local_34e0 = (ForElementType<FAssetData>)local_3458;
    local_34d8 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_50,1,(TFunctionRef<void___cdecl(int)> *)&local_34c0,
               local_3518,None,&local_34d0);
LAB_142b8eb57:
    FVar8 = (ForElementType<FAssetData>)local_3458;
    if (local_58 != (ForElementType<FAssetData>)0x0) {
      FVar8 = local_58;
    }
    DestructItems<FAssetData,int>((FAssetData *)FVar8,local_50);
    if (local_58 != (ForElementType<FAssetData>)0x0) {
      FMemory::Free((void *)local_58);
    }
    local_3460 = 0;
    if (local_3468 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3468);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_34a8);
    return true;
  }
  FVar8 = (ForElementType<FAssetData>)local_3458;
  if (local_58 != (ForElementType<FAssetData>)0x0) {
    FVar8 = local_58;
  }
  FVar9 = (ForElementType<FAssetData>)((longlong)local_50 * 0x68 + (longlong)FVar8);
  while( true ) {
    if (local_50 != iVar4) {
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3517);
    }
    if (FVar8 == FVar9) goto LAB_142b8eb57;
    cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,FVar8);
    if (cVar7 == '\0') break;
    FVar8 = (ForElementType<FAssetData>)((longlong)FVar8 + 0x68);
  }
  FVar8 = (ForElementType<FAssetData>)local_3458;
  if (local_58 != (ForElementType<FAssetData>)0x0) {
    FVar8 = local_58;
  }
  DestructItems<FAssetData,int>((FAssetData *)FVar8,local_50);
  if (local_58 != (ForElementType<FAssetData>)0x0) {
    FMemory::Free((void *)local_58);
  }
LAB_142b8ec50:
  local_3460 = 0;
  if (local_3468 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3468);
  }
  iVar4 = SUB84(local_34a8._8_8_,4);
  local_34a8._8_8_ = local_34a8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_34a8,0,(int *)(local_34a8 + 0xc));
  }
  local_3480 = 0;
  local_3474 = 0;
  local_3478 = 0xffffffff;
  if (0x80 < local_347c) {
    local_347c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_34a8 + 0x10),0);
  }
  if (local_3488 != (void *)0x0) {
    FMemory::Free(local_3488);
  }
  if ((FScriptContainerElement *)local_34a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_34a8._0_8_);
  }
  return true;
}

// EnumerateAllCachedPaths @ 142b8ecf0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::EnumerateAllCachedPaths
          (UAssetRegistryImpl *this,TFunctionRef<bool___cdecl(FName)> *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  ForAnyElementType *local_res18;
  undefined8 local_res20;
  ForAnyElementType local_38;
  undefined8 local_30;
  code *local_28;
  ForAnyElementType **local_20;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar9 = (int)(this->GuardedData).TempCachedInheritanceBuffer.SavedAllClassesVersionNumber -
          *(int *)&(this->GuardedData).CachedPathTree.ParentPathToChildPaths.field_0xc;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (local_30._4_4_ < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar9,&local_38,(int)local_30,(int *)((longlong)&local_30 + 4));
  }
  local_res18 = &local_38;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllCachedPaths'::__l3::<lambda_1>,bool,FName>
             ::Call;
  FPathTree::EnumerateAllPaths
            ((FPathTree *)
             &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
             (TFunctionRef<bool___cdecl(FName)> *)&local_28);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  iVar4 = (int)local_30;
  uVar7 = (ulonglong)(int)local_30;
  pFVar2 = local_38.Data + uVar7 * 8;
  FVar8.Data = local_38.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar2) break;
    local_res20 = *(undefined8 *)FVar8.Data;
    cVar6 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20);
    if (cVar6 == '\0') break;
    uVar7 = local_30 & 0xffffffff;
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// EnumerateAllCachedPaths @ 142b8ee60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::EnumerateAllCachedPaths
          (UAssetRegistryImpl *this,TFunctionRef<bool___cdecl(FString)> *param_1)

{
  TFunctionRef<bool___cdecl(FString)> *local_res8 [4];
  code *local_18;
  TFunctionRef<bool___cdecl(FString)> **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllCachedPaths'::__l2::<lambda_1>,bool,FName>
             ::Call;
  local_res8[0] = param_1;
  (**(code **)(this->_padding_ + 0x150))(this,&local_18);
  return;
}

// EnumerateAllPackages @ 142b8f130

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::EnumerateAllPackages
          (UAssetRegistryImpl *this,
          TFunctionRef<void___cdecl(FName,FAssetPackageData_const_&)> *param_1,
          EEnumeratePackagesFlags param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  <lambda_1> local_res18 [8];
  int local_res20;
  undefined8 local_f8;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *local_f0;
  undefined1 *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  longlong *local_88;
  TFunctionRef<void___cdecl(FName,FAssetPackageData_const_&)> *local_80;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  longlong **local_60;
  undefined4 local_3c;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_f0 = SRWLock;
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  iVar14 = 0;
  puVar2 = &(this->GuardedData).State.CachedDependsNodes.field_0x28;
  if ((param_2 & Parallel) == None) {
    iVar5 = *(int *)&(this->GuardedData).State.CachedPackageData;
    local_d8 = &(this->GuardedData).State.CachedDependsNodes.field_0x38;
    uStack_dc = 1;
    local_c8 = 0;
    iStack_cc = iVar14;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(this->GuardedData).State.CachedDependsNodes.field_0x48;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)local_d8;
      }
      uVar13 = *puVar16;
      local_c8 = 0;
      iVar14 = 0;
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        local_c8 = local_c8 + 0x20;
        iVar14 = iVar14 + 1;
        iStack_cc = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142b8f2a3;
        uVar13 = puVar16[lVar10 + 1];
      }
      uStack_dc = -uVar13 & uVar13;
      uVar4 = (ulonglong)uStack_dc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_cc = local_c8 + -1 + local_res20;
      if (iVar5 < iStack_cc) {
        iStack_cc = iVar5;
      }
    }
LAB_142b8f2a3:
    uVar13 = *(uint *)&(this->GuardedData).State.CachedPackageData;
    uStack_c4 = local_3c;
    puVar17 = &(this->GuardedData).State.CachedDependsNodes.field_0x38;
    iStack_c0 = *(int *)&(this->GuardedData).State.CachedDependsNodes.field_0x30 -
                *(int *)&(this->GuardedData).State.CachedPackageData.field_0xc;
    uStack_d0 = 0xffffffff;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_b0.CurrentBitIndex = iStack_cc;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0._padding_ = CONCAT44(uStack_dc,iVar14);
    iVar11 = (int)uVar13 >> 5;
    TStack_b0._28_4_ = local_3c;
    TStack_b0.BaseBitIndex = local_c8;
    uStack_90 = CONCAT44(uStack_bc,iStack_c0);
    local_e8 = puVar2;
    iStack_e0 = iVar14;
    local_b8 = (longlong *)puVar2;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar6 = *(uint *)&(this->GuardedData).State.CachedPackageData;
    if (uVar13 != uVar6) {
      puVar15 = *(undefined1 **)&(this->GuardedData).State.CachedDependsNodes.field_0x48;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar17;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_142b8f3b0;
        uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar12;
      if ((int)uVar6 < (int)uVar13) {
        uVar13 = uVar6;
      }
    }
LAB_142b8f3b0:
    while( true ) {
      plVar8 = local_b8;
      if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FAssetPackageData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_b0.CurrentBitIndex == uVar13) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) &&
         (SRWLock = local_f0, plVar8 == (longlong *)puVar2)) break;
      puVar3 = (undefined8 *)(*plVar8 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
      local_f8 = *puVar3;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_f8,puVar3[1]);
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
  }
  else {
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllPackages'::__l5::<lambda_1>,void,int>
               ::Call;
    local_60 = &local_88;
    local_78.DataPtr = (void **)0x0;
    local_78.ArrayNum = 0;
    local_88 = (longlong *)puVar2;
    local_80 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",*(int *)&(this->GuardedData).State.CachedDependsNodes.field_0x30,
               1,(TFunctionRef<void___cdecl(int)> *)&local_68,local_res18[0],None,&local_78);
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// EnumerateAssets @ 142b8f470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::EnumerateAssets
          (UAssetRegistryImpl *this,FARCompiledFilter *param_1,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_2,EEnumerateAssetsFlags param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FAssetData *pFVar7;
  FAssetData *pFVar8;
  undefined1 auStackY_3538 [32];
  bool local_34f8;
  undefined1 local_34f7 [7];
  TFunctionRef<bool___cdecl(FAssetData_const_&)> *local_34f0;
  FAssetData *local_34e8;
  code *local_34e0;
  TFunctionRef<bool___cdecl(FAssetData_const_&)> **local_34d8;
  code *local_34d0;
  FAssetData **local_34c8;
  undefined1 local_34b8 [32];
  void *local_3498;
  undefined4 local_3490;
  uint local_348c;
  undefined4 local_3488;
  undefined4 local_3484;
  ForElementType<FSetElementId> local_3478;
  int local_3470;
  FAssetData local_3468 [128];
  FAssetData *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3538;
  if (((((((*(int *)&(param_1->TagsAndValues).field_0x8 ==
            *(int *)&(param_1->TagsAndValues).field_0x34 &&
           *(int *)&(param_1->ClassPaths).Elements.field_0x8 ==
           *(int *)&(param_1->ClassPaths).Elements.field_0x34) &&
          *(int *)&(param_1->SoftObjectPaths).Elements.field_0x8 ==
          *(int *)&(param_1->SoftObjectPaths).Elements.field_0x34) &&
         *(int *)&(param_1->PackagePaths).Elements.field_0x8 ==
         *(int *)&(param_1->PackagePaths).Elements.field_0x34) &&
        *(int *)&(param_1->PackageNames).Elements.field_0x8 ==
        *(int *)&(param_1->PackageNames).Elements.field_0x34) && param_1->WithPackageFlags == 0) &&
       param_1->WithoutPackageFlags == 0) ||
     (bVar4 = UE::AssetRegistry::Utils::IsFilterValid(param_1), !bVar4)) {
    return false;
  }
  TMulticastDelegate<void___cdecl(FARCompiledFilter_const_&,enum_UE::AssetRegistry::EEnumerateAssetsFlags),FDefaultTSDelegateUserPolicy>
  ::Broadcast(&(this->KnownGathersCompleteEvent).field_0x18,param_1,param_3);
  local_348c = 0x80;
  local_34b8._0_8_ = (FScriptContainerElement *)0x0;
  local_34b8._8_8_ = 0;
  local_3498 = (void *)0x0;
  local_3490 = 0;
  local_3488 = 0xffffffff;
  local_3484 = 0;
  local_3478 = (ForElementType<FSetElementId>)0x0;
  local_3470 = 0;
  if (param_1->bIncludeOnlyOnDiskAssets == false) {
    local_34d8 = &local_34f0;
    local_34e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAssets'::__l8::<lambda_1>,bool,FAssetData_&&>
                 ::Call;
    local_34f0 = param_2;
    UE::AssetRegistry::Utils::EnumerateMemoryAssets
              (param_1,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_34b8,
               &local_34f8,(FRWLockWithPriority *)&(this->GuardedData).PackageRedirects,
               (FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
               (TFunctionRef<bool___cdecl(FAssetData_&&)> *)&local_34e0,
               (bool)(~(byte)(param_3 >> 2) & 1));
    if (local_34f8 != false) {
      local_3470 = 0;
      if (local_3478 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3478);
      }
      iVar3 = SUB84(local_34b8._8_8_,4);
      local_34b8._8_8_ = local_34b8._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_34b8,0,(int *)(local_34b8 + 0xc));
      }
      local_3488 = 0xffffffff;
      local_3484 = 0;
      local_3490 = 0;
      if (0x80 < local_348c) {
        local_348c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_34b8 + 0x10),0);
      }
      if (local_3498 != (void *)0x0) {
        FMemory::Free(local_3498);
      }
      if ((FScriptContainerElement *)local_34b8._0_8_ == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free((void *)local_34b8._0_8_);
      return true;
    }
  }
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_68 = (FAssetData *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_34e8 = local_3468;
  local_34c8 = &local_34e8;
  local_34d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAssets'::__l12::<lambda_2>,bool,FAssetData_const_&>
               ::Call;
  UE::AssetRegistry::FAssetRegistryImpl::EnumerateDiskAssets
            ((FAssetRegistryImpl *)&this->_padding_,param_1,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_34b8,
             (TFunctionRef<bool___cdecl(FAssetData_const_&)> *)&local_34d0,param_3);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  iVar3 = local_60;
  pFVar7 = local_3468;
  if (local_68 != (FAssetData *)0x0) {
    pFVar7 = local_68;
  }
  pFVar8 = pFVar7 + local_60;
  while( true ) {
    if (local_60 != iVar3) {
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_34f7);
    }
    if ((pFVar7 == pFVar8) ||
       (cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar7), cVar6 == '\0'))
    break;
    pFVar7 = pFVar7 + 1;
  }
  pFVar7 = local_3468;
  if (local_68 != (FAssetData *)0x0) {
    pFVar7 = local_68;
  }
  DestructItems<FAssetData,int>(pFVar7,local_60);
  if (local_68 != (FAssetData *)0x0) {
    FMemory::Free(local_68);
  }
  local_3470 = 0;
  if (local_3478 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3478);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_34b8);
  return true;
}

// EnumerateAssets @ 142b8f7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::EnumerateAssets
          (UAssetRegistryImpl *this,FARFilter *param_1,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_2,EEnumerateAssetsFlags param_3)

{
  undefined1 uVar1;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  FARCompiledFilter local_268;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  FARCompiledFilter::FARCompiledFilter(&local_268);
  (**(code **)(this->_padding_ + 0x1a8))(this,param_1,&local_268);
  local_278 = *(undefined8 *)param_2;
  local_270 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)(this->_padding_ + 0x68))(this,&local_268,&local_278,param_3);
  FARCompiledFilter::~FARCompiledFilter(&local_268);
  return (bool)uVar1;
}

// EnumerateSubPaths @ 142b90af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::EnumerateSubPaths
          (UAssetRegistryImpl *this,FString *param_1,TFunctionRef<bool___cdecl(FString)> *param_2,
          bool param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  FName *pFVar8;
  FString *pFVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [8];
  FName *local_290;
  FName local_288;
  code *local_280;
  FName **local_278;
  FName local_270;
  FString local_268;
  FName local_258 [64];
  FName *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_4c = 0x40;
  SRWLock = &(this->GuardedData).PackageRedirects;
  local_58 = (FName *)0x0;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_50 = 0;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pwVar11 = L"";
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_290 = local_258;
  local_278 = &local_290;
  local_280 = UE::Core::Private::Function::
              TFunctionRefCaller<`UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>,bool,FName>
              ::Call;
  if ((param_1->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(&local_270,pwVar11);
  FPathTree::EnumerateSubPaths
            ((FPathTree *)
             &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
             *pFVar8,(TFunctionRef<bool___cdecl(FName)> *)&local_280,param_3);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  uVar5 = local_50;
  uVar10 = (ulonglong)(int)local_50;
  pFVar8 = local_258;
  if (local_58 != (FName *)0x0) {
    pFVar8 = local_58;
  }
  pFVar2 = pFVar8 + uVar10;
  while( true ) {
    if ((uint)uVar10 != uVar5) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_298);
    }
    if (pFVar8 == pFVar2) break;
    local_288 = *pFVar8;
    pFVar9 = ::FName::ToString(&local_288,&local_268);
    cVar7 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar9);
    pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (cVar7 == '\0') break;
    uVar10 = (ulonglong)local_50;
    pFVar8 = pFVar8 + 1;
  }
  if (local_58 != (FName *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// EnumerateSubPaths @ 142b90cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::EnumerateSubPaths
          (UAssetRegistryImpl *this,FName param_1,TFunctionRef<bool___cdecl(FName)> *param_2,
          bool param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_298 [32];
  undefined1 local_278 [8];
  undefined8 *local_270;
  undefined8 local_268;
  code *local_260;
  undefined8 **local_258;
  undefined8 local_248 [64];
  undefined8 *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_3c = 0x40;
  SRWLock = &(this->GuardedData).PackageRedirects;
  local_48 = (undefined8 *)0x0;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_40 = 0;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_270 = local_248;
  local_258 = &local_270;
  local_260 = UE::Core::Private::Function::
              TFunctionRefCaller<`UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>,bool,FName>
              ::Call;
  FPathTree::EnumerateSubPaths
            ((FPathTree *)
             &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
             param_1,(TFunctionRef<bool___cdecl(FName)> *)&local_260,param_3);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  uVar4 = local_40;
  uVar7 = (ulonglong)(int)local_40;
  puVar8 = local_248;
  if (local_48 != (undefined8 *)0x0) {
    puVar8 = local_48;
  }
  puVar2 = puVar8 + uVar7;
  while( true ) {
    if ((uint)uVar7 != uVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    if (puVar8 == puVar2) break;
    local_268 = *puVar8;
    cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_268);
    if (cVar6 == '\0') break;
    uVar7 = (ulonglong)local_40;
    puVar8 = puVar8 + 1;
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// FinishDestroy @ 142b91b10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::FinishDestroy(UAssetRegistryImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRWLockWithPriority *SRWLock;
  FPathAddedEvent *this_00;
  FAssetAddedEvent *this_01;
  FAssetRemovedEvent *this_02;
  FAssetRenamedEvent *this_03;
  FAssetUpdatedEvent *pFVar1;
  FInMemoryAssetCreatedEvent *this_04;
  FInMemoryAssetDeletedEvent *this_05;
  FFilesLoadedEvent *this_06;
  FFileLoadProgressUpdatedEvent *this_07;
  atomic<int> *paVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  IPluginManager *pIVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_08;
  IAssetRegistry *pIVar7;
  FScriptContainerElement *this_09;
  ForAnyElementType *pFVar8;
  ForAnyElementType *pFVar9;
  FScriptContainerElement *pFVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76 [2];
  FLLMScope local_74;
  FMemScope local_70;
  FDestructionSentinel local_68;
  
  FLLMScope::FLLMScope(&local_74,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_70,AssetRegistry,true);
  lpCriticalSection = &this->DeferredEventsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ClearRequestTick(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SRWLock = &this->InterfaceLock;
  paVar2 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar2 != (atomic<int> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  if ((SRWLock == (FRWLockWithPriority *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (paVar2 != (atomic<int> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FPackageName::OnContentPathMountedEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FPackageName::OnContentPathDismountedEvent,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  pIVar6 = IPluginManager::Get();
  this_08 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar6 + 0x30))(pIVar6);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_08,this);
  if (((this->_padding_ & 0x10) != 0) && (((uint)this->_padding_ >> 0x1a & 1) == 0)) {
    pIVar7 = (IAssetRegistry *)&this->_padding_;
    if (this == (UAssetRegistryImpl *)0x0) {
      pIVar7 = (IAssetRegistry *)0x0;
    }
    if (((UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton != pIVar7) ||
        (IAssetRegistryInterface::Default != (IAssetRegistryInterface *)&GAssetRegistryInterface))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == this && IAssetRegistryInterface::Default == &GAssetRegistryInterface"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                              ,0x886,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton = (IAssetRegistry *)0x0;
    IAssetRegistryInterface::Default = (IAssetRegistryInterface *)0x0;
  }
  this_00 = &this->PathAddedEvent;
  if ((this_00 == (FPathAddedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar3 = *(int *)&(this->PathAddedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->PathAddedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->PathAddedEvent).field_0x30 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    local_81 = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
  if (this_00 != (FPathAddedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PathRemovedEvent,
             (FWriteAccessScope *)&local_68);
  iVar3 = *(int *)&(this->PathRemovedEvent).field_0x10;
  pFVar8 = *(ForAnyElementType **)&(this->PathRemovedEvent).field_0x8;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->PathRemovedEvent).field_0x10 != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar9) break;
    local_80 = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PathRemovedEvent,false);
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  this_01 = &this->AssetAddedEvent;
  if ((this_01 == (FAssetAddedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_01);
  iVar3 = *(int *)&(this->AssetAddedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->AssetAddedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->AssetAddedEvent).field_0x30 != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar9) break;
    local_7f = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_01,false);
  if (this_01 != (FAssetAddedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
  }
  this_02 = &this->AssetRemovedEvent;
  if ((this_02 == (FAssetRemovedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_02);
  iVar3 = *(int *)&(this->AssetRemovedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->AssetRemovedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->AssetRemovedEvent).field_0x30 != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    local_7e = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_02,false);
  if (this_02 != (FAssetRemovedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_02);
  }
  this_03 = &this->AssetRenamedEvent;
  if ((this_03 == (FAssetRenamedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_03);
  iVar3 = *(int *)&(this->AssetRenamedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->AssetRenamedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->AssetRenamedEvent).field_0x30 != iVar3) {
      local_88 = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_88);
    }
    if (pFVar8 == pFVar9) break;
    local_7d = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_03,false);
  if (this_03 != (FAssetRenamedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_03);
  }
  pFVar1 = &this->AssetUpdatedEvent;
  if ((pFVar1 == (FAssetUpdatedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  iVar3 = *(int *)&(this->AssetUpdatedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->AssetUpdatedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->AssetUpdatedEvent).field_0x30 != iVar3) {
      local_87 = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_87);
    }
    if (pFVar8 == pFVar9) break;
    local_7c = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)pFVar1,false);
  if (pFVar1 != (FAssetUpdatedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  pFVar1 = &this->AssetUpdatedOnDiskEvent;
  if ((pFVar1 == (FAssetUpdatedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  iVar3 = *(int *)&(this->AssetUpdatedOnDiskEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->AssetUpdatedOnDiskEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->AssetUpdatedOnDiskEvent).field_0x30 != iVar3) {
      local_86 = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_86);
    }
    if (pFVar8 == pFVar9) break;
    local_7b = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)pFVar1,false);
  if (pFVar1 != (FAssetUpdatedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  for (this_10 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this->BatchedAssetEvents;
      this_10 !=
      (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&this->InMemoryAssetCreatedEvent;
      this_10 = this_10 + 1) {
    if ((this_10 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_10);
    iVar3 = (this_10->InvocationList).ArrayNum;
    this_09 = (this_10->InvocationList).AllocatorInstance.Data;
    pFVar10 = this_09 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((this_10->InvocationList).ArrayNum != iVar3) {
        local_85 = 0;
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_85);
      }
      if (this_09 == pFVar10) break;
      local_7a = 0;
      if ((*(int *)&this_09[8].field_0x0 != 0) &&
         (*(undefined8 **)&this_09->field_0x0 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)&this_09->field_0x0)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)this_09,0,0,0x10);
        *(undefined4 *)&this_09[8].field_0x0 = 0;
      }
      this_09 = this_09 + 0x10;
    }
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_10,false);
    if (this_10 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)this_10);
    }
  }
  this_04 = &this->InMemoryAssetCreatedEvent;
  if ((this_04 == (FInMemoryAssetCreatedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_04);
  iVar3 = *(int *)&(this->InMemoryAssetCreatedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->InMemoryAssetCreatedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->InMemoryAssetCreatedEvent).field_0x30 != iVar3) {
      local_84 = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_84);
    }
    if (pFVar8 == pFVar9) break;
    local_79 = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_04,false);
  if (this_04 != (FInMemoryAssetCreatedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_04);
  }
  this_05 = &this->InMemoryAssetDeletedEvent;
  if ((this_05 == (FInMemoryAssetDeletedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_05);
  iVar3 = *(int *)&(this->InMemoryAssetDeletedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->InMemoryAssetDeletedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->InMemoryAssetDeletedEvent).field_0x30 != iVar3) {
      local_83 = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_83);
    }
    if (pFVar8 == pFVar9) break;
    local_78 = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_05,false);
  if (this_05 != (FInMemoryAssetDeletedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_05);
  }
  this_06 = &this->FileLoadedEvent;
  if ((this_06 == (FFilesLoadedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_06);
  iVar3 = *(int *)&(this->FileLoadedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->FileLoadedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->FileLoadedEvent).field_0x30 != iVar3) {
      local_82 = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_82);
    }
    if (pFVar8 == pFVar9) break;
    local_77 = 0;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_06,false);
  if (this_06 != (FFilesLoadedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_06);
  }
  this_07 = &this->FileLoadProgressUpdatedEvent;
  if ((this_07 == (FFileLoadProgressUpdatedEvent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_07);
  iVar3 = *(int *)&(this->FileLoadProgressUpdatedEvent).field_0x30;
  pFVar8 = *(ForAnyElementType **)&(this->FileLoadProgressUpdatedEvent).field_0x28;
  pFVar9 = pFVar8 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->FileLoadProgressUpdatedEvent).field_0x30 != iVar3) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_76);
    }
    if (pFVar8 == pFVar9) break;
    if ((*(int *)&pFVar8[1].Data != 0) && (pFVar8->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)pFVar8->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(pFVar8,0,0,0x10);
      *(undefined4 *)&pFVar8[1].Data = 0;
    }
    pFVar8 = pFVar8 + 2;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_07,false);
  if (this_07 != (FFileLoadProgressUpdatedEvent *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_07);
  }
  if (SRWLock != (FRWLockWithPriority *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  UObject::FinishDestroy((UObject *)this);
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(&local_74);
  return;
}

// Get @ 142b925a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UAssetRegistryImpl * __cdecl UAssetRegistryImpl::Get(void)

{
  code *pcVar1;
  bool bVar2;
  UAssetRegistryImpl *pUVar3;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x8a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UAssetRegistryImpl *)(*pcVar1)();
      return pUVar3;
    }
    if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
      return (UAssetRegistryImpl *)0x0;
    }
  }
  return (UAssetRegistryImpl *)(UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton + -5)
  ;
}

// GetAllAssets @ 142b926a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAllAssets
          (UAssetRegistryImpl *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 auStackY_108 [32];
  bool local_d8 [8];
  LARGE_INTEGER local_d0;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_c8;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_c0;
  LARGE_INTEGER local_b8;
  code *local_b0;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_a8;
  code *local_a0;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  QueryPerformanceCounter(&local_d0);
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if (!param_2) {
    local_a8 = &local_c8;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAssetRegistryImpl::GetAllAssets'::__l5::<lambda_1>,bool,FAssetData_&&>
               ::Call;
    local_c8 = param_1;
    UE::AssetRegistry::Utils::EnumerateAllMemoryAssets
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,local_d8,
               (TFunctionRef<bool___cdecl(FAssetData_&&)> *)&local_b0);
  }
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_c0 = param_1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &(this->GuardedData).DevelopmentSerializationOptions.AssetBundlesDenyList.Elements.
              field_0x28);
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::GetAllAssets'::__l6::<lambda_2>,bool,FAssetData_const_&>
             ::Call;
  local_98 = &local_c0;
  FAssetRegistryState::EnumerateAllAssets
            ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,
             (TFunctionRef<bool___cdecl(FAssetData_const_&)> *)&local_a0,None);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (6 < (byte)LogAssetRegistry._0_1_) {
    QueryPerformanceCounter(&local_b8);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return true;
}

// GetAllCachedPaths @ 142b928f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::GetAllCachedPaths
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_18;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_10;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar4 = ((int)(this->GuardedData).TempCachedInheritanceBuffer.SavedAllClassesVersionNumber -
          *(int *)&(this->GuardedData).CachedPathTree.ParentPathToChildPaths.field_0xc) +
          param_1->ArrayNum;
  if (-1 < (int)uVar4) {
    if (param_1->ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar4,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAssetRegistryImpl::GetAllCachedPaths'::__l2::<lambda_1>,bool,FName>
               ::Call;
    local_res8 = param_1;
    FPathTree::EnumerateAllPaths
              ((FPathTree *)
               &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
               (TFunctionRef<bool___cdecl(FName)> *)&local_18);
    if (SRWLock !=
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// GetAllocatedSize @ 142b937c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall UAssetRegistryImpl::GetAllocatedSize(UAssetRegistryImpl *this,bool param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulong64 local_res8;
  ulong64 local_res18;
  ulong64 local_res20;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_res20 = 0;
  local_res8 = 0;
  local_res18 = 0;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  UE::AssetRegistry::FAssetRegistryImpl::GetAllocatedSize
            ((FAssetRegistryImpl *)&this->_padding_,param_1,&local_res20,&local_res8,&local_res18);
  lVar5 = local_res8 + 0x13d0;
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  uVar4 = local_res18;
  if ((param_1) && (4 < (byte)LogAssetRegistry._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  return uVar4 + lVar5 + local_res20;
}

// GetAncestorClassNames @ 142b93ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAncestorClassNames
          (UAssetRegistryImpl *this,FTopLevelAssetPath *param_1,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined1 auStackY_168 [32];
  FClassInheritanceContext local_128;
  FTopLevelAssetPath local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_128.Buffer = (FClassInheritanceBuffer *)0x0;
  local_128.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_128.bInheritanceMapUpToDate = false;
  local_128.bCodeGeneratorClassesUpToDate = false;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  bVar3 = false;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar7 = GetRegisteredNativeClassesVersionNumber();
  uVar8 = GetRegisteredClassesVersionNumber();
  if ((((this->GuardedData).CachedParsedFilterRules.Rules.field_0x38 != '\0') &&
      (((this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x30 != '\0' ||
       (*(ulong64 *)
         &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x28 != uVar8)
       ))) || (*(ulong64 *)
                &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x38 !=
               uVar7)) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    bVar3 = true;
    if (SRWLock ==
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
  }
  local_128.StackBuffer = (FClassInheritanceBuffer *)local_f8;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_128,(FAssetRegistryImpl *)&this->_padding_,uVar7,uVar8);
  local_108.PackageName = param_1->PackageName;
  local_108.AssetName = param_1->AssetName;
  bVar5 = UE::AssetRegistry::FAssetRegistryImpl::GetAncestorClassNames
                    ((FAssetRegistryImpl *)&this->_padding_,&local_128,&local_108,param_2);
  if (bVar3) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar4 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  iVar4 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return bVar5;
}

// GetAssetAvailability @ 142b93e70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

Type __thiscall
UAssetRegistryImpl::GetAssetAvailability(UAssetRegistryImpl *this,FAssetData *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  Type TVar4;
  IPlatformChunkInstall *pIVar5;
  int iVar6;
  int *piVar7;
  TArrayView<int_const_,int> local_18;
  
  pIVar5 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  iVar6 = 0;
  FAssetData::GetChunkIDs(param_1,&local_18);
  piVar7 = local_18.DataPtr;
  if (local_18.DataPtr != local_18.DataPtr + local_18.ArrayNum) {
    do {
      iVar3 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,*piVar7);
      if (iVar3 == 3) {
        return LocalFast;
      }
      if (iVar6 < iVar3) {
        iVar6 = iVar3;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != local_18.DataPtr + local_18.ArrayNum);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        return NotAvailable;
      }
      if (iVar6 != 2) {
        if ((iVar6 != 3) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                               ,0x1106,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          TVar4 = (*pcVar1)();
          return TVar4;
        }
        return LocalFast;
      }
      return LocalSlow;
    }
  }
  return DoesNotExist;
}

// GetAssetAvailabilityProgress @ 142b94010

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UAssetRegistryImpl::GetAssetAvailabilityProgress
          (UAssetRegistryImpl *this,FAssetData *param_1,Type param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  IPlatformChunkInstall *pIVar4;
  int *piVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  TArrayView<int_const_,int> local_48 [4];
  
  if ((PercentageComplete < param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReportType == EAssetAvailabilityProgressReportingType::PercentageComplete || ReportType == EAssetAvailabilityProgressReportingType::ETA"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x111a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar7 = (float)(*pcVar1)();
    return fVar7;
  }
  pIVar4 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  if (param_2 == ETA) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
    if ((param_2 != PercentageComplete) && (1 < (byte)LogAssetRegistry._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  fVar7 = __real_7f7fffff;
  FAssetData::GetChunkIDs(param_1,local_48);
  fVar2 = __real_42c80000;
  piVar5 = local_48[0].DataPtr;
  do {
    if (piVar5 == local_48[0].DataPtr + local_48[0].ArrayNum) {
LAB_142b94122:
      if (cVar6 != '\0') {
        return fVar2 - fVar7;
      }
      return fVar7;
    }
    fVar8 = (float)(**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,*piVar5,cVar6);
    if (cVar6 != '\0') {
      fVar8 = fVar2 - fVar8;
    }
    if (fVar8 <= 0.0) {
      fVar7 = 0.0;
      goto LAB_142b94122;
    }
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    piVar5 = piVar5 + 1;
    fVar7 = fVar8;
  } while( true );
}

// GetAssetAvailabilityProgressTypeSupported @ 142b942c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssetAvailabilityProgressTypeSupported(UAssetRegistryImpl *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  IPlatformChunkInstall *pIVar2;
  undefined8 uVar3;
  
  pIVar2 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x20);
  if (param_1 == ETA) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if ((param_1 != PercentageComplete) && (1 < (byte)LogAssetRegistry._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b94331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,uVar3);
  return (bool)uVar1;
}

// GetAssetByObjectPath @ 142b943c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetData * __thiscall
UAssetRegistryImpl::GetAssetByObjectPath
          (UAssetRegistryImpl *this,FAssetData *__return_storage_ptr__,FSoftObjectPath *param_1,
          bool param_2,bool param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FAssetData *pFVar7;
  FCachedAssetKey *pFVar8;
  FAssetData **ppFVar9;
  int iVar10;
  undefined1 auStack_9c8 [48];
  wchar_t *local_998;
  int iStack_990;
  undefined4 uStack_98c;
  TStringView<wchar_t> local_988;
  FCachedAssetKey local_978;
  FCachedAssetKey local_968;
  FAssetData local_958;
  FAssetData local_8f0;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_9c8;
  iVar10 = 0;
  if (!param_2) {
    local_888.Base = local_868;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.CurPos = local_868;
    local_888.End = local_52;
    FSoftObjectPath::ToString(param_1,&local_888);
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'\0';
    local_998 = local_888.Base;
    if (local_888.Base != (wchar_t *)0x0) {
      sVar4 = wcslen(local_888.Base);
      iVar10 = (int)sVar4;
    }
    iStack_990 = iVar10;
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    local_988._12_4_ = uStack_98c;
    local_988.Size = iStack_990;
    local_988.DataPtr = local_998;
    pUVar6 = StaticFindObject(pUVar5,(UObject *)0x0,&local_988,None);
    if (pUVar6 != (UObject *)0x0) {
      if ((param_3) && (bVar3 = UE::AssetRegistry::FFiltering::ShouldSkipAsset(pUVar6), bVar3)) {
        (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
        (__return_storage_ptr__->PackageName).Number = 0;
        (__return_storage_ptr__->PackagePath).ComparisonIndex = 0;
        (__return_storage_ptr__->PackagePath).Number = 0;
        (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
        (__return_storage_ptr__->AssetName).Number = 0;
        (__return_storage_ptr__->AssetClass).ComparisonIndex = 0;
        (__return_storage_ptr__->AssetClass).Number = 0;
        (__return_storage_ptr__->AssetClassPath).PackageName.ComparisonIndex = 0;
        (__return_storage_ptr__->AssetClassPath).PackageName.Number = 0;
        (__return_storage_ptr__->AssetClassPath).AssetName.ComparisonIndex = 0;
        (__return_storage_ptr__->AssetClassPath).AssetName.Number = 0;
        (__return_storage_ptr__->ChunkArrayRegistryHandle).Index = -1;
        __return_storage_ptr__->PackageFlags = 0;
        (__return_storage_ptr__->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
        (__return_storage_ptr__->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
        (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData =
             (ForElementType<int>)0x0;
        (__return_storage_ptr__->ChunkIDs).ArrayNum = 0;
        (__return_storage_ptr__->ChunkIDs).ArrayMax = 2;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
        return __return_storage_ptr__;
      }
      FAssetData::FAssetData(__return_storage_ptr__,pUVar6,None,AssetRegistryQuery);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
      return __return_storage_ptr__;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  }
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FAssetData *)(*pcVar2)();
    return pFVar7;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  pFVar8 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_968,param_1);
  local_978.OuterPath = pFVar8->OuterPath;
  local_978.ObjectName = pFVar8->ObjectName;
  ppFVar9 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
            ::Find((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                    *)&(this->GuardedData).AssetCollisionEvent.field_0x18,&local_978);
  if (((ppFVar9 == (FAssetData **)0x0) || (pFVar7 = *ppFVar9, pFVar7 == (FAssetData *)0x0)) ||
     (bVar3 = FAssetRegistryState::IsPackageUnmountedAndFiltered
                        ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                         pFVar7->PackageName), bVar3)) {
    local_958.PackageName.ComparisonIndex.Value = 0;
    local_958.PackageName.Number = 0;
    local_958.PackagePath.ComparisonIndex.Value = 0;
    local_958.PackagePath.Number = 0;
    local_958.AssetName.ComparisonIndex.Value = 0;
    local_958.AssetName.Number = 0;
    local_958.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
    local_958.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
    local_958.AssetClass.ComparisonIndex.Value = 0;
    local_958.AssetClass.Number = 0;
    local_958.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
    local_958.AssetClassPath.PackageName.Number = 0;
    local_958.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
    local_958.AssetClassPath.AssetName.Number = 0;
    local_958.ChunkArrayRegistryHandle.Index = -1;
    local_958.PackageFlags = 0;
    local_958.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_958.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_958.ChunkIDs.ArrayNum = 0;
    local_958.ChunkIDs.ArrayMax = 2;
    FAssetData::FAssetData(__return_storage_ptr__,&local_958);
    if (local_958.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_958.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_958.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    pFVar7 = &local_958;
  }
  else {
    pFVar7 = FAssetData::FAssetData(&local_8f0,pFVar7);
    FAssetData::FAssetData(__return_storage_ptr__,pFVar7);
    if (local_8f0.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_8f0.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f0.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    pFVar7 = &local_8f0;
  }
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&pFVar7->TagsAndValues);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// GetAssetByObjectPath @ 142b946a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetData * __thiscall
UAssetRegistryImpl::GetAssetByObjectPath
          (UAssetRegistryImpl *this,FAssetData *__return_storage_ptr__,FName param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  FName local_res18;
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  pcVar2 = *(code **)(this->_padding_ + 0x78);
  local_res18 = param_1;
  pFVar3 = ::FName::ToString(&local_res18,&local_38);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  local_48.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_48);
  (*pcVar2)(this,__return_storage_ptr__,&local_28,param_2,1);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAssetPackageDataCopy @ 142b94e10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TOptional<FAssetPackageData> * __thiscall
UAssetRegistryImpl::GetAssetPackageDataCopy
          (UAssetRegistryImpl *this,TOptional<FAssetPackageData> *__return_storage_ptr__,
          FName param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<FAssetPackageData> *pTVar5;
  FAssetPackageData *pFVar6;
  undefined1 local_178 [88];
  void *local_120;
  undefined4 local_118;
  ForAnyElementType local_110;
  bool local_d8 [16];
  undefined1 local_c8 [88];
  void *local_70;
  undefined4 local_68;
  void *local_60;
  char local_28;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TOptional<FAssetPackageData> *)(*pcVar3)();
      return pTVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  pFVar6 = FAssetRegistryState::GetAssetPackageData
                     ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                      param_1);
  bVar4 = pFVar6 == (FAssetPackageData *)0x0;
  if (bVar4) {
    local_28 = '\0';
    pFVar6 = (FAssetPackageData *)(local_d8 + 0x10);
  }
  else {
    FAssetPackageData::FAssetPackageData((FAssetPackageData *)local_178,pFVar6);
    pFVar6 = (FAssetPackageData *)local_178;
    local_d8[0] = true;
  }
  bVar2 = pFVar6[1].CookedHash.bIsValid;
  __return_storage_ptr__->bIsSet = bVar2;
  if (bVar2 != false) {
    FAssetPackageData::FAssetPackageData(&__return_storage_ptr__->TypedValue,pFVar6);
  }
  if ((bVar4) && (local_28 != '\0')) {
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_d8 + 0x28));
  }
  if ((!bVar4) && (local_d8[0] != false)) {
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    local_118 = 0;
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_178 + 0x18));
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// GetAssetPackageDatasCopy @ 142b94fb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TArray<TOptional<FAssetPackageData>,TSizedDefaultAllocator<32>_> * __thiscall
UAssetRegistryImpl::GetAssetPackageDatasCopy
          (UAssetRegistryImpl *this,
          TArray<TOptional<FAssetPackageData>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FName,int> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FName *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<TOptional<FAssetPackageData>,TSizedDefaultAllocator<32>_> *pTVar9;
  FAssetPackageData *pFVar10;
  FAssetPackageData *this_00;
  FName *pFVar11;
  undefined1 local_d8 [88];
  void *local_80;
  undefined4 local_78;
  ForAnyElementType local_70;
  bool local_38;
  
  uVar4 = param_1->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,uVar4,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar2 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<TOptional<FAssetPackageData>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  pFVar11 = param_1->DataPtr;
  pFVar3 = pFVar11 + (int)uVar4;
  do {
    if (pFVar11 == pFVar3) {
      if (SRWLock !=
          (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
           *)0x0) {
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      }
      return __return_storage_ptr__;
    }
    pFVar10 = FAssetRegistryState::GetAssetPackageData
                        ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                         *pFVar11);
    if (pFVar10 == (FAssetPackageData *)0x0) {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_38 = false;
      if (((pFVar5 <= (FScriptContainerElement *)local_d8) &&
          ((FScriptContainerElement *)local_d8 < pFVar5 + (longlong)*piVar1 * 0xa8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<TOptional<FAssetPackageData>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a8,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar10 = (FAssetPackageData *)
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0xa8);
      pFVar10[1].CookedHash.bIsValid = false;
      pFVar10[1].CookedHash.bIsValid = local_38;
      if (local_38 != false) {
        FAssetPackageData::FAssetPackageData(pFVar10,(FAssetPackageData *)local_d8);
      }
      if (local_38 != false) {
        if (local_70.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data);
        }
        local_78 = 0;
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_d8 + 0x18));
      }
    }
    else {
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a8,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      this_00 = (FAssetPackageData *)
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0xa8);
      FAssetPackageData::FAssetPackageData(this_00,pFVar10);
      this_00[1].CookedHash.bIsValid = true;
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// GetAssets @ 142b95240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssets
          (UAssetRegistryImpl *this,FARCompiledFilter *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  EEnumerateAssetsFlags EVar6;
  bool bVar7;
  undefined1 auStackY_118 [32];
  bool local_d8 [8];
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_d0;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_c8;
  code *local_c0;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_b8;
  code *local_b0;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2761,"UAssetRegistryImpl::GetAssets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0xac9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2761);
  }
  EVar6 = (param_3 ^ 1) << 2;
  TMulticastDelegate<void___cdecl(FARCompiledFilter_const_&,enum_UE::AssetRegistry::EEnumerateAssetsFlags),FDefaultTSDelegateUserPolicy>
  ::Broadcast(&(this->KnownGathersCompleteEvent).field_0x18,param_1,EVar6);
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  if (param_1->bIncludeOnlyOnDiskAssets == false) {
    local_b8 = &local_d0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAssetRegistryImpl::GetAssets'::__l5::<lambda_1>,bool,FAssetData_&&>
               ::Call;
    local_d0 = param_2;
    UE::AssetRegistry::Utils::EnumerateMemoryAssets
              (param_1,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
               local_d8,(FRWLockWithPriority *)&(this->GuardedData).PackageRedirects,
               (FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
               (TFunctionRef<bool___cdecl(FAssetData_&&)> *)&local_c0,param_3);
  }
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_a8 = &local_c8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::GetAssets'::__l6::<lambda_2>,bool,FAssetData_const_&>
             ::Call;
  local_c8 = param_2;
  UE::AssetRegistry::FAssetRegistryImpl::EnumerateDiskAssets
            ((FAssetRegistryImpl *)&this->_padding_,param_1,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
             (TFunctionRef<bool___cdecl(FAssetData_const_&)> *)&local_b0,EVar6);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
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
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetAssets @ 142b954a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssets
          (UAssetRegistryImpl *this,FARFilter *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 auStack_298 [32];
  FARCompiledFilter local_278;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  FARCompiledFilter::FARCompiledFilter(&local_278);
  (**(code **)(this->_padding_ + 0x1a8))(this,param_1,&local_278);
  if ((((((local_278.TagsAndValues._8_4_ != local_278.TagsAndValues._52_4_ ||
          local_278.ClassPaths.Elements._8_4_ != local_278.ClassPaths.Elements._52_4_) ||
         local_278.SoftObjectPaths.Elements._8_4_ != local_278.SoftObjectPaths.Elements._52_4_) ||
        local_278.PackagePaths.Elements._8_4_ != local_278.PackagePaths.Elements._52_4_) ||
       local_278.PackageNames.Elements._8_4_ != local_278.PackageNames.Elements._52_4_) ||
      local_278.WithPackageFlags != 0) || local_278.WithoutPackageFlags != 0) {
    bVar1 = UE::AssetRegistry::Utils::IsFilterValid(&local_278);
    if (bVar1) {
      uVar2 = (**(code **)(this->_padding_ + 0x48))(this,&local_278,param_2,param_3);
      goto LAB_142b95568;
    }
  }
  uVar2 = 0;
LAB_142b95568:
  FARCompiledFilter::~FARCompiledFilter(&local_278);
  return (bool)uVar2;
}

// GetAssetsByClass @ 142b955a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssetsByClass
          (UAssetRegistryImpl *this,FTopLevelAssetPath *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FTopLevelAssetPath *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 auStack_1d8 [32];
  FTopLevelAssetPath *local_1b8;
  FTopLevelAssetPath *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FARFilter::FARFilter(&local_188);
  if ((local_188.ClassPaths.AllocatorInstance.Data <= param_1) &&
     (param_1 < (FTopLevelAssetPath *)
                (local_188.ClassPaths.AllocatorInstance.Data +
                (longlong)local_188.ClassPaths.ArrayMax * 0x10))) {
    local_1a0 = (longlong)local_188.ClassPaths.ArrayNum;
    local_198 = 0x10;
    local_1b0 = (FTopLevelAssetPath *)local_188.ClassPaths.AllocatorInstance.Data;
    local_1b8 = param_1;
    local_1a8 = (longlong)local_188.ClassPaths.ArrayMax;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  if (local_188.ClassPaths.ArrayNum == local_188.ClassPaths.ArrayMax) {
    local_188.ClassPaths.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_188.ClassPaths.AllocatorInstance,&local_188.ClassPaths.ArrayMax);
  }
  uVar3 = (param_1->PackageName).Number;
  uVar4 = (param_1->AssetName).ComparisonIndex.Value;
  uVar5 = (param_1->AssetName).Number;
  pFVar1 = (FTopLevelAssetPath *)
           ((longlong)local_188.ClassPaths.AllocatorInstance.Data +
           (longlong)local_188.ClassPaths.ArrayNum * 0x10);
  (pFVar1->PackageName).ComparisonIndex.Value = (param_1->PackageName).ComparisonIndex.Value;
  (pFVar1->PackageName).Number = uVar3;
  (pFVar1->AssetName).ComparisonIndex.Value = uVar4;
  (pFVar1->AssetName).Number = uVar5;
  local_188.ClassPaths.ArrayNum = local_188.ClassPaths.ArrayNum + 1;
  local_188.bRecursiveClasses = param_3;
  uVar7 = (**(code **)(this->_padding_ + 0x50))(this,&local_188,param_2,1);
  FARFilter::~FARFilter(&local_188);
  return (bool)uVar7;
}

// GetAssetsByPackageName @ 142b956f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssetsByPackageName
          (UAssetRegistryImpl *this,FName param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res10 [3];
  undefined1 auStack_1c8 [32];
  FName *local_1a8;
  FName *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  FARFilter local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_res10[0] = param_1;
  FARFilter::FARFilter(&local_178);
  if ((local_178.PackageNames.AllocatorInstance.Data <= local_res10) &&
     (local_res10 <
      (FName *)(local_178.PackageNames.AllocatorInstance.Data +
               (longlong)local_178.PackageNames.ArrayMax * 8))) {
    local_190 = (longlong)local_178.PackageNames.ArrayNum;
    local_188 = 8;
    local_1a8 = local_res10;
    local_1a0 = (FName *)local_178.PackageNames.AllocatorInstance.Data;
    local_198 = (longlong)local_178.PackageNames.ArrayMax;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (local_178.PackageNames.ArrayNum == local_178.PackageNames.ArrayMax) {
    local_178.PackageNames.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,(ForAnyElementType *)&local_178,&local_178.PackageNames.ArrayMax);
  }
  *(FName *)((longlong)local_178.PackageNames.AllocatorInstance.Data +
            (longlong)local_178.PackageNames.ArrayNum * 8) = local_res10[0];
  local_178.PackageNames.ArrayNum = local_178.PackageNames.ArrayNum + 1;
  local_178.bIncludeOnlyOnDiskAssets = param_3;
  uVar3 = (**(code **)(this->_padding_ + 0x50))(this,&local_178,param_2,param_4);
  FARFilter::~FARFilter(&local_178);
  return (bool)uVar3;
}

// GetAssetsByPath @ 142b95830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssetsByPath
          (UAssetRegistryImpl *this,FName param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res10 [3];
  undefined1 auStack_1c8 [32];
  FName *local_1a8;
  FName *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  FARFilter local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_res10[0] = param_1;
  FARFilter::FARFilter(&local_178);
  local_178.bRecursivePaths = param_3;
  if ((local_178.PackagePaths.AllocatorInstance.Data <= local_res10) &&
     (local_res10 <
      (FName *)(local_178.PackagePaths.AllocatorInstance.Data +
               (longlong)local_178.PackagePaths.ArrayMax * 8))) {
    local_190 = (longlong)local_178.PackagePaths.ArrayNum;
    local_188 = 8;
    local_1a8 = local_res10;
    local_1a0 = (FName *)local_178.PackagePaths.AllocatorInstance.Data;
    local_198 = (longlong)local_178.PackagePaths.ArrayMax;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (local_178.PackagePaths.ArrayNum == local_178.PackagePaths.ArrayMax) {
    local_178.PackagePaths.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_178.PackagePaths.AllocatorInstance,&local_178.PackagePaths.ArrayMax
                   );
  }
  *(FName *)((longlong)local_178.PackagePaths.AllocatorInstance.Data +
            (longlong)local_178.PackagePaths.ArrayNum * 8) = local_res10[0];
  local_178.bIncludeOnlyOnDiskAssets = param_4;
  local_178.PackagePaths.ArrayNum = local_178.PackagePaths.ArrayNum + 1;
  uVar3 = (**(code **)(this->_padding_ + 0x50))(this,&local_178,param_2,1);
  FARFilter::~FARFilter(&local_178);
  return (bool)uVar3;
}

// GetAssetsByPaths @ 142b95980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssetsByPaths
          (UAssetRegistryImpl *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  undefined1 auStack_1a8 [32];
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FARFilter::FARFilter(&local_188);
  local_188.bRecursivePaths = param_3;
  if (&local_188.PackagePaths != param_1) {
    if (local_188.PackagePaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.PackagePaths.AllocatorInstance.Data);
    }
    local_188.PackagePaths.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_188.PackagePaths.ArrayNum = param_1->ArrayNum;
    local_188.PackagePaths.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  local_188.bIncludeOnlyOnDiskAssets = param_4;
  uVar2 = (**(code **)(this->_padding_ + 0x50))(this,&local_188,param_2,1);
  FARFilter::~FARFilter(&local_188);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (bool)uVar2;
}

// GetAssetsByTagValues @ 142b95a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssetsByTagValues
          (UAssetRegistryImpl *this,
          TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
          *param_1,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong lVar9;
  int iVar10;
  FName *pFVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 auStack_248 [32];
  undefined1 local_228 [8];
  TOptional<FString>_u_0 local_220;
  TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
  *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  int local_1dc;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_1d8;
  TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FARFilter local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_1d8 = param_2;
  FARFilter::FARFilter(&local_198);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_208 = 0;
  uStack_204 = 1;
  local_1f0 = 0;
  iStack_1f4 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_208;
      local_1f0 = local_1f0 + 0x20;
      iStack_208 = iStack_208 + 1;
      iStack_1f4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208) goto LAB_142b95b1f;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_204 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_204 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1e0 = (int)lVar9;
    iStack_1f4 = local_1f0 + -1 + local_1e0;
    if (iVar3 < iStack_1f4) {
      iStack_1f4 = iVar3;
    }
  }
LAB_142b95b1f:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_1e8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_1f8 = 0xffffffff;
  TStack_1c8._padding_ = CONCAT44(uStack_204,iStack_208);
  TStack_1c8.CurrentBitIndex = iStack_1f4;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_1c8._28_4_ = iStack_1f4;
  TStack_1c8.BaseBitIndex = local_1f0;
  uStack_1a8 = CONCAT44(uStack_1e4,iStack_1e8);
  local_210 = param_1;
  local_200 = puVar1;
  iStack_1ec = iStack_1f4;
  local_1d0 = param_1;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142b95c30;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_1dc = (int)lVar9;
    uVar13 = local_1dc + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_142b95c30:
  while( true ) {
    pTVar6 = local_1d0;
    if (*(int *)&local_1d0->field_0x8 - *(int *)&local_1d0->field_0x34 != (int)uStack_1a8) {
      local_228[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_228);
    }
    if (((TStack_1c8.CurrentBitIndex == uVar13) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1)
       ) break;
    pFVar11 = (FName *)(*(longlong *)pTVar6 + (longlong)TStack_1c8.CurrentBitIndex * 0x20);
    ::FString::FString(&local_220.TypedValue,(FString *)(pFVar11 + 1));
    if ((local_220.TypedValue.Data.ArrayMax == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
    ::Emplace<FName_const_&,TOptional<FString>_>
              ((TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
                *)&local_198.TagsAndValues,pFVar11,(TOptional<FString> *)&local_220.TypedValue);
    if ((local_220.TypedValue.Data.ArrayMax != -1) &&
       (local_220.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_220.TypedValue.Data.AllocatorInstance.Data);
    }
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  }
  uVar8 = (**(code **)(this->_padding_ + 0x50))(this,&local_198,local_1d8,1);
  FARFilter::~FARFilter(&local_198);
  return (bool)uVar8;
}

// GetAssetsByTags @ 142b95d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetAssetsByTags
          (UAssetRegistryImpl *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  int iVar2;
  undefined1 uVar3;
  FName *pFVar4;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  FARFilter::FARFilter(&local_188);
  pFVar4 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_198);
    }
    if (pFVar4 == pFVar1) break;
    TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
    ::Emplace<FName_const_&>
              ((TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
                *)&local_188.TagsAndValues,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  uVar3 = (**(code **)(this->_padding_ + 0x50))(this,&local_188,param_2,1);
  FARFilter::~FARFilter(&local_188);
  return (bool)uVar3;
}

// GetCachedEmptyPackagesCopy @ 142b96b80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UAssetRegistryImpl::GetCachedEmptyPackagesCopy
          (UAssetRegistryImpl *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (__return_storage_ptr__,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &(this->GuardedData).DevelopmentSerializationOptions.AssetBundlesDenyList.Elements.
              field_0x28);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// GetDependencies @ 142b96f60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetDependencies
          (UAssetRegistryImpl *this,FAssetIdentifier *param_1,
          TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  bVar3 = FAssetRegistryState::GetDependencies
                    ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                     param_1,param_2,param_3,param_4);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// GetDependencies @ 142b97030

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetDependencies
          (UAssetRegistryImpl *this,FAssetIdentifier *param_1,
          TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  bVar3 = FAssetRegistryState::GetDependencies
                    ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                     param_1,param_2,param_3,param_4);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// GetDependencies @ 142b97100

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetDependencies
          (UAssetRegistryImpl *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2
          ,EDependencyCategory param_3,FDependencyQuery *param_4)

{
  char cVar1;
  TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> local_38;
  FName local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_20 = 0;
  local_10 = 0;
  local_28 = param_1;
  cVar1 = (**(code **)(this->_padding_ + 0xd8))(this,&local_28,&local_38,param_3,param_4);
  if (cVar1 != '\0') {
    ConvertAssetIdentifiersToPackageNames(&local_38,param_2);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return cVar1 != '\0';
}

// GetDerivedClassNames @ 142b97190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::GetDerivedClassNames
          (UAssetRegistryImpl *this,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
          *param_2,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
                   *param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  undefined1 auStackY_178 [32];
  FClassInheritanceContext local_130;
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  void *local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_130.Buffer = (FClassInheritanceBuffer *)0x0;
  local_130.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_130.bInheritanceMapUpToDate = false;
  local_130.bCodeGeneratorClassesUpToDate = false;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (void *)0x0;
  bVar3 = false;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffffffffffff;
  local_60 = 1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar6 = GetRegisteredNativeClassesVersionNumber();
  uVar7 = GetRegisteredClassesVersionNumber();
  if ((((this->GuardedData).CachedParsedFilterRules.Rules.field_0x38 != '\0') &&
      (((this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x30 != '\0' ||
       (*(ulong64 *)
         &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x28 != uVar7)
       ))) || (*(ulong64 *)
                &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x38 !=
               uVar6)) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    bVar3 = true;
    if (SRWLock ==
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
  }
  local_130.StackBuffer = (FClassInheritanceBuffer *)local_108;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_130,(FAssetRegistryImpl *)&this->_padding_,uVar6,uVar7);
  UE::AssetRegistry::FAssetRegistryImpl::GetSubClasses
            ((FAssetRegistryImpl *)&this->_padding_,&local_130,param_1,param_2,param_3);
  if (bVar3) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,0,local_b8._8_4_);
  iVar4 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  local_c0 = 0;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  iVar4 = SUB84(local_108._8_8_,4);
  local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  return;
}

// GetFirstPackageByName @ 142b974c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
UAssetRegistryImpl::GetFirstPackageByName(UAssetRegistryImpl *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  param_1->DataPtr = (wchar_t *)0x0;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (((2 < (byte)LogAssetRegistry._0_1_) &&
      (*(char *)&(this->GuardedData).PersistentMountPoints.Hash.SecondaryData != '\0')) &&
     ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 == '\0')) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  FVar4 = FAssetRegistryState::GetFirstPackageByName
                    ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                     (TStringView<wchar_t> *)&stack0x00000008);
  param_1->DataPtr = *(wchar_t **)FVar4;
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (FName)param_1;
}

// GetInMemoryAssets @ 142b975f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetInMemoryAssets
          (UAssetRegistryImpl *this,FARCompiledFilter *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  undefined1 auStackY_c8 [32];
  bool local_88 [8];
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *local_80;
  code *local_78;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> **local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_70 = &local_80;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::GetInMemoryAssets'::__l2::<lambda_1>,bool,FAssetData_&&>
             ::Call;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_80 = param_2;
  UE::AssetRegistry::Utils::EnumerateMemoryAssets
            (param_1,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68,local_88,
             (FRWLockWithPriority *)&(this->GuardedData).PackageRedirects,
             (FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
             (TFunctionRef<bool___cdecl(FAssetData_&&)> *)&local_78,param_3);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return true;
}

// GetInMemoryAssets @ 142b97730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetInMemoryAssets
          (UAssetRegistryImpl *this,FARFilter *param_1,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 auStack_298 [32];
  FARCompiledFilter local_278;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  FARCompiledFilter::FARCompiledFilter(&local_278);
  (**(code **)(this->_padding_ + 0x1a8))(this,param_1,&local_278);
  if ((((((local_278.TagsAndValues._8_4_ != local_278.TagsAndValues._52_4_ ||
          local_278.ClassPaths.Elements._8_4_ != local_278.ClassPaths.Elements._52_4_) ||
         local_278.SoftObjectPaths.Elements._8_4_ != local_278.SoftObjectPaths.Elements._52_4_) ||
        local_278.PackagePaths.Elements._8_4_ != local_278.PackagePaths.Elements._52_4_) ||
       local_278.PackageNames.Elements._8_4_ != local_278.PackageNames.Elements._52_4_) ||
      local_278.WithPackageFlags != 0) || local_278.WithoutPackageFlags != 0) {
    bVar1 = UE::AssetRegistry::Utils::IsFilterValid(&local_278);
    if (bVar1) {
      uVar2 = (**(code **)(this->_padding_ + 0x58))(this,&local_278,param_2,param_3);
      goto LAB_142b977f8;
    }
  }
  uVar2 = 0;
LAB_142b977f8:
  FARCompiledFilter::~FARCompiledFilter(&local_278);
  return (bool)uVar2;
}

// GetInheritanceContextWithRequiredLock @ 142b97830

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::GetInheritanceContextWithRequiredLock
          (UAssetRegistryImpl *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1,FClassInheritanceContext *param_2,FClassInheritanceBuffer *param_3)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = GetRegisteredNativeClassesVersionNumber();
  uVar2 = GetRegisteredClassesVersionNumber();
  param_2->StackBuffer = param_3;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (param_2,&this->GuardedData,uVar1,uVar2);
  return;
}

// GetInheritanceContextWithRequiredLock @ 142b97890

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::GetInheritanceContextWithRequiredLock
          (UAssetRegistryImpl *this,FRWScopeLockWithPriority *param_1,
          FClassInheritanceContext *param_2,FClassInheritanceBuffer *param_3)

{
  FRWLockWithPriority *pFVar1;
  FRWLockWithPriority *SRWLock;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  atomic<int> *paVar6;
  
  uVar4 = GetRegisteredNativeClassesVersionNumber();
  uVar5 = GetRegisteredClassesVersionNumber();
  if (((((this->GuardedData).bIsTempCachingEnabled != false) &&
       (((this->GuardedData).TempCachedInheritanceBuffer.bDirty != false ||
        ((this->GuardedData).TempCachedInheritanceBuffer.SavedAllClassesVersionNumber != uVar5))))
      || ((this->GuardedData).SavedGeneratorClassesVersionNumber != uVar4)) &&
     (param_1->LockType == SLT_ReadOnly)) {
    if ((param_1->GuardWrapper).bIsSet != false) {
      pFVar1 = (param_1->GuardWrapper).TypedValue.Mutex;
      if ((param_1->GuardWrapper).TypedValue.LockType == SLT_ReadOnly) {
        ReleaseSRWLockShared((PSRWLOCK)pFVar1);
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
      }
      (param_1->GuardWrapper).bIsSet = false;
    }
    paVar6 = (atomic<int> *)0x0;
    if (param_1->Priority == PriorityHigh) {
      paVar6 = &param_1->Lock->HighPriorityWaitersCount;
    }
    if (paVar6 != (atomic<int> *)0x0) {
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    pFVar1 = param_1->Lock;
    if ((param_1->GuardWrapper).bIsSet != false) {
      SRWLock = (param_1->GuardWrapper).TypedValue.Mutex;
      if ((param_1->GuardWrapper).TypedValue.LockType == SLT_ReadOnly) {
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
    }
    (param_1->GuardWrapper).TypedValue.Mutex = pFVar1;
    (param_1->GuardWrapper).TypedValue.LockType = SLT_Write;
    if (pFVar1 == (FRWLockWithPriority *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->GuardWrapper).TypedValue.Mutex;
    if ((param_1->GuardWrapper).TypedValue.LockType == SLT_ReadOnly) {
      AcquireSRWLockShared((PSRWLOCK)pFVar1);
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    }
    (param_1->GuardWrapper).bIsSet = true;
    if (paVar6 != (atomic<int> *)0x0) {
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + -1);
      UNLOCK();
    }
    param_1->LockType = SLT_Write;
  }
  param_2->StackBuffer = param_3;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (param_2,&this->GuardedData,uVar4,uVar5);
  return;
}

// GetPackagesByName @ 142b97fb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::GetPackagesByName
          (UAssetRegistryImpl *this,TStringView<wchar_t> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  TStringView<wchar_t> local_18;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (((2 < (byte)LogAssetRegistry._0_1_) &&
      (*(char *)&(this->GuardedData).PersistentMountPoints.Hash.SecondaryData != '\0')) &&
     ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 == '\0')) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FAssetRegistryState::GetPackagesByName
            ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,&local_18,
             param_2);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// GetPrivateStaticClass @ 142b98300

UClass * __cdecl UAssetRegistryImpl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistryImpl",
               &Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton,
               StaticRegisterNativesUAssetRegistryImpl,0x13d0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetRegistryImpl>,
               InternalVTableHelperCtorCaller<UAssetRegistryImpl>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistryImpl.InnerSingleton;
}

// GetRedirectedObjectPath @ 142b983e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSoftObjectPath * __thiscall
UAssetRegistryImpl::GetRedirectedObjectPath
          (UAssetRegistryImpl *this,FSoftObjectPath *__return_storage_ptr__,FSoftObjectPath *param_1
          )

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FSoftObjectPath *pFVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *pTVar8;
  undefined1 auStackY_238 [32];
  FLLMScope local_208 [5];
  FEventContext local_1f8;
  FMemScope local_188;
  TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  local_180;
  TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  local_160;
  FClassInheritanceContext local_140;
  FSoftObjectPath local_120;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 != '\0') &&
     ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x3 == '\0')) {
    pTVar8 = &(this->GuardedData).PackageRedirects;
    local_160.Priority = PriorityHigh;
    piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_160.GuardWrapper.TypedValue.Mutex = (FRWLockWithPriority *)pTVar8;
    local_160.Lock = (FRWLockWithPriority *)pTVar8;
    if ((pTVar8 == (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSoftObjectPath *)(*pcVar2)();
      return pFVar5;
    }
    AcquireSRWLockShared((PSRWLOCK)pTVar8);
    local_160.GuardWrapper.bIsSet = true;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if ((char)(this->GuardedData).PersistentMountPoints.HashSize != '\0') {
      UE::AssetRegistry::FAssetRegistryImpl::
      GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TReadScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>
                ((FAssetRegistryImpl *)&this->_padding_,__return_storage_ptr__,&local_160,param_1,
                 (FEventContext *)0x0,(FClassInheritanceContext *)0x0);
      if (pTVar8 == (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        return __return_storage_ptr__;
      }
      ReleaseSRWLockShared((PSRWLOCK)pTVar8);
      return __return_storage_ptr__;
    }
    if (pTVar8 != (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)pTVar8);
      local_160.GuardWrapper.TypedValue.Mutex = (FRWLockWithPriority *)0x0;
    }
  }
  pTVar8 = &(this->GuardedData).PackageRedirects;
  local_1f8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Buffer = (FClassInheritanceBuffer *)0x0;
  local_140.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_1f8.ProgressUpdateData.bIsSet = false;
  local_1f8.PathEvents.ArrayNum = 0;
  local_1f8.PathEvents.ArrayMax = 0;
  local_1f8.AssetEvents.ArrayNum = 0;
  local_1f8.AssetEvents.ArrayMax = 0;
  local_1f8.VerseEvents.ArrayNum = 0;
  local_1f8.VerseEvents.ArrayMax = 0;
  local_1f8.RequiredLoads.ArrayNum = 0;
  local_1f8.RequiredLoads.ArrayMax = 0;
  local_1f8.BlockedFiles.ArrayNum = 0;
  local_1f8.BlockedFiles.ArrayMax = 0;
  local_1f8.bFileLoadedEventBroadcast = false;
  local_1f8.bScanStartedEventBroadcast = false;
  local_1f8.bHasSentFileLoadedEventBroadcast = false;
  local_1f8.bKnownGathersCompleteEventBroadcast = false;
  local_140.bInheritanceMapUpToDate = false;
  local_140.bCodeGeneratorClassesUpToDate = false;
  local_f8._8_8_ = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_a8._8_8_ = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_58 = 0xffffffffffffffff;
  local_50 = 1;
  FLLMScope::FLLMScope(local_208,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_188,AssetRegistry,true);
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  local_180.Priority = PriorityHigh;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_180.GuardWrapper.TypedValue.Mutex = (FRWLockWithPriority *)pTVar8;
  local_180.Lock = (FRWLockWithPriority *)pTVar8;
  if ((pTVar8 == (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
                  *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FSoftObjectPath *)(*pcVar2)();
    return pFVar5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)pTVar8);
  local_180.GuardWrapper.bIsSet = true;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar6 = GetRegisteredNativeClassesVersionNumber();
  uVar7 = GetRegisteredClassesVersionNumber();
  local_140.StackBuffer = (FClassInheritanceBuffer *)local_f8;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_140,(FAssetRegistryImpl *)&this->_padding_,uVar6,uVar7);
  UE::AssetRegistry::FAssetRegistryImpl::
  GetRedirectedObjectPath<UE::AssetRegistry::TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>_>
            ((FAssetRegistryImpl *)&this->_padding_,&local_120,&local_180,param_1,&local_1f8,
             &local_140);
  if ((local_180.GuardWrapper.bIsSet != false) &&
     (local_180.GuardWrapper.TypedValue.Mutex != (FRWLockWithPriority *)0x0)) {
    ReleaseSRWLockExclusive((PSRWLOCK)local_180.GuardWrapper.TypedValue.Mutex);
  }
  FMemScope::~FMemScope(&local_188);
  FLLMScope::~FLLMScope(local_208);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_1f8,false);
  (__return_storage_ptr__->AssetPath).PackageName = local_120.AssetPath.PackageName;
  (__return_storage_ptr__->AssetPath).AssetName = local_120.AssetPath.AssetName;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       local_120.SubPathString.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = local_120.SubPathString.Data.ArrayNum;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = local_120.SubPathString.Data.ArrayMax;
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar3 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  iVar3 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  DestructItems<FString,int>
            ((FString *)local_1f8.BlockedFiles.AllocatorInstance.Data,
             local_1f8.BlockedFiles.ArrayNum);
  if (local_1f8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_1f8.RequiredLoads.AllocatorInstance.Data,
             local_1f8.RequiredLoads.ArrayNum);
  if (local_1f8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_1f8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1f8.AssetEvents.AllocatorInstance.Data,local_1f8.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1f8.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1f8.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1f8.PathEvents.AllocatorInstance.Data,local_1f8.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1f8.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1f8.PathEvents.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetReferencers @ 142b98ba0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetReferencers
          (UAssetRegistryImpl *this,FAssetIdentifier *param_1,
          TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  bVar3 = FAssetRegistryState::GetReferencers
                    ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                     param_1,param_2,param_3,param_4);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// GetReferencers @ 142b98c70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetReferencers
          (UAssetRegistryImpl *this,FAssetIdentifier *param_1,
          TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  bVar3 = FAssetRegistryState::GetReferencers
                    ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                     param_1,param_2,param_3,param_4);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// GetReferencers @ 142b98d40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetReferencers
          (UAssetRegistryImpl *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2
          ,EDependencyCategory param_3,FDependencyQuery *param_4)

{
  char cVar1;
  TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> local_38;
  FName local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_20 = 0;
  local_10 = 0;
  local_28 = param_1;
  cVar1 = (**(code **)(this->_padding_ + 0x100))(this,&local_28,&local_38,param_3,param_4);
  if (cVar1 != '\0') {
    ConvertAssetIdentifiersToPackageNames(&local_38,param_2);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return cVar1 != '\0';
}

// GetSubPaths @ 142b99210

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::GetSubPaths
          (UAssetRegistryImpl *this,FName *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_20;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::GetSubPaths'::__l2::<lambda_1>,bool,FName>::
             Call;
  local_res8 = param_2;
  FPathTree::EnumerateSubPaths
            ((FPathTree *)
             &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
             *param_1,(TFunctionRef<bool___cdecl(FName)> *)&local_28,param_3);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// GetSubPaths @ 142b992f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::GetSubPaths
          (UAssetRegistryImpl *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  wchar_t *pwVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8;
  FName local_res10;
  code *local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_30;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  pwVar5 = L"";
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::GetSubPaths'::__l2::<lambda_1>,bool,FName>::
             Call;
  if ((param_1->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_res8 = param_2;
  pFVar4 = ::FName::FName(&local_res10,pwVar5);
  FPathTree::EnumerateSubPaths
            ((FPathTree *)
             &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
             *pFVar4,(TFunctionRef<bool___cdecl(FName)> *)&local_38,param_3);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// GetTemporaryCachingMode @ 142b993e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::GetTemporaryCachingMode(UAssetRegistryImpl *this)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar4 = (this->GuardedData).CachedParsedFilterRules.Rules.field_0x38;
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (bool)uVar4;
}

// GetVerseFilesByPath @ 142b9a030

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::GetVerseFilesByPath
          (UAssetRegistryImpl *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2
          ,bool param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  bVar3 = UE::AssetRegistry::FAssetRegistryImpl::GetVerseFilesByPath
                    ((FAssetRegistryImpl *)&this->_padding_,param_1,param_2,param_3);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// HasAssets @ 142b9a180

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::HasAssets(UAssetRegistryImpl *this,FName param_1,bool param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 local_res8 [8];
  longlong *local_38;
  undefined1 *local_30;
  code *local_28;
  longlong **local_20;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_res8[0] =
       FAssetRegistryState::HasAssets
                 ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,param_1
                  ,true);
  if ((!(bool)local_res8[0]) && (param_2)) {
    local_30 = local_res8;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::HasAssets'::__l5::<lambda_1>,bool,FName>
               ::Call;
    local_38 = &this->_padding_;
    FPathTree::EnumerateSubPaths
              ((FPathTree *)
               &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x48,
               param_1,(TFunctionRef<bool___cdecl(FName)> *)&local_28,true);
  }
  uVar4 = local_res8[0];
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (bool)uVar4;
}

// HasSerializedDiscoveryCache @ 142b9a3b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::HasSerializedDiscoveryCache(UAssetRegistryImpl *this)

{
  bool bVar1;
  
  bVar1 = FAssetDataGatherer::HasSerializedDiscoveryCache
                    (*(FAssetDataGatherer **)
                      &(this->GuardedData).CachedPathTree.ChildPathToParentPath.field_0x28);
  return bVar1;
}

// HasVerseFiles @ 142b9a3d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::HasVerseFiles(UAssetRegistryImpl *this,FName param_1,bool param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  bVar3 = UE::AssetRegistry::FAssetRegistryImpl::GetVerseFilesByPath
                    ((FAssetRegistryImpl *)&this->_padding_,param_1,
                     (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0,param_2);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// InitializeEvents @ 142b9ab60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::InitializeEvents(UAssetRegistryImpl *this,FInitializeContext *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  longlong lVar6;
  UAssetRegistryImpl *local_res10 [3];
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_c8 [40];
  FMRSWRecursiveAccessDetector *local_a0;
  char local_98;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  undefined1 local_70 [24];
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  uVar2 = uStack_f0._4_4_;
  if (param_1->bRedirectorsNeedSubscribe != false) {
    local_c8._0_8_ = OnResolveRedirect;
    local_c8._12_4_ = local_c8._28_4_;
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    local_c8._8_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_90);
    local_78 = &local_e0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_e0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBVFString__AEAV1__ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAssetRegistryImpl____A6A_NAEBVFString__AEAV2__ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAssetRegistryImpl *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UAssetRegistryImpl *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_res10);
      puVar4[4] = local_c8._0_8_;
      puVar4[5] = CONCAT44(local_c8._12_4_,local_c8._8_4_);
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (((FCoreDelegates::PackageNameResolvers.AllocatorInstance.Data <=
          (FScriptContainerElement *)local_e8) &&
        ((FScriptContainerElement *)local_e8 <
         FCoreDelegates::PackageNameResolvers.AllocatorInstance.Data +
         (longlong)FCoreDelegates::PackageNameResolvers.ArrayMax * 0x18)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (FCoreDelegates::PackageNameResolvers.ArrayNum ==
        FCoreDelegates::PackageNameResolvers.ArrayMax) {
      FCoreDelegates::PackageNameResolvers.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&FCoreDelegates::PackageNameResolvers.AllocatorInstance,
                      &FCoreDelegates::PackageNameResolvers.ArrayMax);
    }
    lVar6 = (longlong)FCoreDelegates::PackageNameResolvers.ArrayNum;
    FCoreDelegates::PackageNameResolvers.ArrayNum =
         FCoreDelegates::PackageNameResolvers.ArrayNum + 1;
    TDelegate<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy> *)
               (FCoreDelegates::PackageNameResolvers.AllocatorInstance.Data + lVar6 * 0x18),
               (TDelegate<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy> *)
               local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)(local_c8 + 0x20));
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_98 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_a0,(FDestructionSentinel *)(local_c8 + 0x20));
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e8);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UAssetRegistryImpl>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(UAssetRegistryImpl *)(local_res10 + 1),(pmf_33f53f64 *)this
            );
  uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
  local_58 = OnContentPathMounted;
  lStack_50 = uStack_f0;
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UAssetRegistryImpl>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              *)&FPackageName::OnContentPathMountedEvent,(UAssetRegistryImpl *)(local_res10 + 2),
             (pmf_dfdbbfba *)this);
  uStack_f0 = (ulonglong)uVar2 << 0x20;
  local_48 = OnContentPathDismounted;
  lStack_40 = uStack_f0;
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UAssetRegistryImpl>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              *)&FPackageName::OnContentPathDismountedEvent,(UAssetRegistryImpl *)local_70,
             (pmf_dfdbbfba *)this);
  uStack_f0 = (ulonglong)uVar2 << 0x20;
  local_38 = OnPostEngineInit;
  lStack_30 = uStack_f0;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UAssetRegistryImpl>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(UAssetRegistryImpl *)(local_70 + 8),
             (pmf_33f53f64 *)this);
  IPluginManager::Get();
  bVar3 = IsEngineStartupModuleLoadingComplete();
  if (bVar3) {
    OnInitialPluginLoadingComplete(this);
    return;
  }
  uStack_f0 = (ulonglong)uVar2 << 0x20;
  local_c8._16_8_ = OnInitialPluginLoadingComplete;
  local_c8._24_8_ = uStack_f0;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UAssetRegistryImpl>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnAllModuleLoadingPhasesComplete,(UAssetRegistryImpl *)local_c8,
             (pmf_33f53f64 *)this);
  return;
}

// InitializeSerializationOptions @ 142b9b320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::InitializeSerializationOptions
          (UAssetRegistryImpl *this,FAssetRegistrySerializationOptions *param_1,
          ITargetPlatform *param_2,ESerializationTarget param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FModuleManager *this_00;
  FName *pFVar5;
  longlong lVar6;
  undefined1 auStackY_d8 [32];
  FName local_a8 [2];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulong64 local_48;
  bool local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (param_2 == (ITargetPlatform *)0x0) {
    SRWLock = &(this->GuardedData).PackageRedirects;
    piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (SRWLock ==
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    lVar6 = 0x358;
    if (param_3 != ForGame) {
      lVar6 = 0x4a8;
    }
    FAssetRegistrySerializationOptions::operator=
              (param_1,(FAssetRegistrySerializationOptions *)((longlong)&this->_padding_ + lVar6));
    if (SRWLock !=
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  else {
    local_6c = 0x80;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = false;
    if (bIsEngineModuleAvaliable) {
      bVar4 = true;
    }
    else {
      this_00 = FModuleManager::Get();
      pFVar5 = ::FName::FName(local_a8,L"Engine");
      bVar4 = FModuleManager::IsModuleLoaded(this_00,*pFVar5);
      bIsEngineModuleAvaliable = bVar4;
    }
    UE::AssetRegistry::Utils::InitializeSerializationOptionsFromIni
              (param_1,(FFilterTagRules *)local_98,param_2,param_3,(bool)(bVar4 ^ 1));
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::AssetRegistry::Impl::FParsedFilterTagRules>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,0,local_98._8_4_);
    iVar3 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
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
  }
  return;
}

// InitializeTemporaryAssetRegistryState @ 142b9c260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::InitializeTemporaryAssetRegistryState
          (UAssetRegistryImpl *this,FAssetRegistryState *param_1,
          FAssetRegistrySerializationOptions *param_2,bool param_3,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_4,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_5)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 auStackY_148 [32];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_100;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  puVar5 = &(this->GuardedData).AssetCollisionEvent.field_0x18;
  if ((*(int *)&(param_4->Elements).field_0x8 == *(int *)&(param_4->Elements).field_0x34) &&
     (*(int *)&(param_5->Elements).field_0x8 == *(int *)&(param_5->Elements).field_0x34)) {
    FAssetRegistryState::InitializeFromExisting
              (param_1,(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                        *)puVar5,
               (TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                *)&(this->GuardedData).State.CachedClassesByTag.field_0x28,
               (TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
                *)&(this->GuardedData).State.CachedDependsNodes.field_0x28,param_2,(uint)param_3,
               (FAssetRegistryAppendResult *)0x0);
  }
  else if (param_3) {
    FAssetRegistryState::InitializeFromExisting
              (param_1,(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                        *)puVar5,
               (TMap<FAssetIdentifier,FDependsNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>_>
                *)&(this->GuardedData).State.CachedClassesByTag.field_0x28,
               (TMap<FName,FAssetPackageData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>_>
                *)&(this->GuardedData).State.CachedDependsNodes.field_0x28,param_2,
               OnlyUpdateExisting,(FAssetRegistryAppendResult *)0x0);
    FAssetRegistryState::PruneAssetData(param_1,param_4,param_5,param_2);
  }
  else {
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_100.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_100.Elements._48_8_ = _UNK_150631d98;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    local_100.Elements._0_8_ = 0;
    local_100.Elements._8_8_ = 0;
    local_100.Elements._32_8_ = 0;
    local_100.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_100.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_100,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8);
    FAssetRegistryState::InitializeFromExistingAndPrune
              (param_1,(FAssetRegistryState *)puVar5,param_4,param_5,&local_100,param_2);
    FAssetRegistryState::Shrink(param_1);
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    iVar3 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// IsAssetExcludedByFilter @ 142b9c4c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::IsAssetExcludedByFilter
          (UAssetRegistryImpl *this,FAssetData *param_1,FARCompiledFilter *param_2)

{
  bool bVar1;
  
  if ((((((*(int *)&(param_2->TagsAndValues).field_0x8 ==
           *(int *)&(param_2->TagsAndValues).field_0x34 &&
          *(int *)&(param_2->ClassPaths).Elements.field_0x8 ==
          *(int *)&(param_2->ClassPaths).Elements.field_0x34) &&
         *(int *)&(param_2->SoftObjectPaths).Elements.field_0x8 ==
         *(int *)&(param_2->SoftObjectPaths).Elements.field_0x34) &&
        *(int *)&(param_2->PackagePaths).Elements.field_0x8 ==
        *(int *)&(param_2->PackagePaths).Elements.field_0x34) &&
       *(int *)&(param_2->PackageNames).Elements.field_0x8 ==
       *(int *)&(param_2->PackageNames).Elements.field_0x34) && param_2->WithPackageFlags == 0) &&
      param_2->WithoutPackageFlags == 0) {
    return false;
  }
  bVar1 = UE::AssetRegistry::Utils::RunAssetThroughFilter_Unchecked(param_1,param_2,false);
  return !bVar1;
}

// IsAssetIncludedByFilter @ 142b9c550

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::IsAssetIncludedByFilter
          (UAssetRegistryImpl *this,FAssetData *param_1,FARCompiledFilter *param_2)

{
  bool bVar1;
  
  if ((((((*(int *)&(param_2->TagsAndValues).field_0x8 ==
           *(int *)&(param_2->TagsAndValues).field_0x34 &&
          *(int *)&(param_2->ClassPaths).Elements.field_0x8 ==
          *(int *)&(param_2->ClassPaths).Elements.field_0x34) &&
         *(int *)&(param_2->SoftObjectPaths).Elements.field_0x8 ==
         *(int *)&(param_2->SoftObjectPaths).Elements.field_0x34) &&
        *(int *)&(param_2->PackagePaths).Elements.field_0x8 ==
        *(int *)&(param_2->PackagePaths).Elements.field_0x34) &&
       *(int *)&(param_2->PackageNames).Elements.field_0x8 ==
       *(int *)&(param_2->PackageNames).Elements.field_0x34) && param_2->WithPackageFlags == 0) &&
      param_2->WithoutPackageFlags == 0) {
    return true;
  }
  bVar1 = UE::AssetRegistry::Utils::RunAssetThroughFilter_Unchecked(param_1,param_2,true);
  return bVar1;
}

// IsGathering @ 142b9c760

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::IsGathering(UAssetRegistryImpl *this)

{
  if (((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 != '\0') &&
     ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x3 == '\0')) {
    return false;
  }
  return true;
}

// IsLoadingAssets @ 142b9c7a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::IsLoadingAssets(UAssetRegistryImpl *this)

{
  return (this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 == '\0';
}

// IsPathBeautificationNeeded @ 142b9c7c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::IsPathBeautificationNeeded(UAssetRegistryImpl *this,FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  
  pwVar2 = FPackagePath::GetExternalActorsFolderName();
  if (pwVar2 != (wchar_t *)0x0) {
    sVar3 = wcslen(pwVar2);
    iVar1 = ::FString::Find(param_1,pwVar2,(int)sVar3,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) {
      return true;
    }
  }
  pwVar2 = FPackagePath::GetExternalObjectsFolderName();
  if (pwVar2 != (wchar_t *)0x0) {
    sVar3 = wcslen(pwVar2);
    iVar1 = ::FString::Find(param_1,pwVar2,(int)sVar3,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) {
      return true;
    }
  }
  return false;
}

// IsSearchAllAssets @ 142b9ca20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::IsSearchAllAssets(UAssetRegistryImpl *this)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  iVar3 = (this->GuardedData).PersistentMountPoints.HashSize;
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (bool)(char)iVar3;
}

// IsSearchAsync @ 142b9cab0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::IsSearchAsync(UAssetRegistryImpl *this)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar4 = *(undefined1 *)&(this->GuardedData).PersistentMountPoints.Hash.SecondaryData;
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (bool)uVar4;
}

// LoadPackageRegistryData @ 142b9d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::LoadPackageRegistryData
          (UAssetRegistryImpl *this,FArchive *param_1,FLoadPackageRegistryData *param_2)

{
  bool bVar1;
  undefined1 auStack_2f8 [32];
  TStringView<wchar_t> local_2d8;
  FPackageReader local_2c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FPackageReader::FPackageReader(&local_2c8);
  local_2d8.DataPtr = (wchar_t *)0x0;
  local_2d8.Size = 0;
  local_2d8._12_4_ = 0;
  bVar1 = FPackageReader::OpenPackageFile(&local_2c8,param_1,&local_2d8,(EOpenPackageResult *)0x0);
  if (bVar1) {
    UE::AssetRegistry::Utils::ReadAssetFile(&local_2c8,param_2);
  }
  FPackageReader::~FPackageReader(&local_2c8);
  return;
}

// LoadPackageRegistryData @ 142b9d570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::LoadPackageRegistryData
          (UAssetRegistryImpl *this,FString *param_1,FLoadPackageRegistryData *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_2f8 [32];
  TStringView<wchar_t> local_2d8;
  FPackageReader local_2c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FPackageReader::FPackageReader(&local_2c8);
  local_2d8.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_2d8.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_2d8.Size = 0;
  }
  bVar2 = FPackageReader::OpenPackageFile(&local_2c8,&local_2d8,(EOpenPackageResult *)0x0);
  if (bVar2) {
    UE::AssetRegistry::Utils::ReadAssetFile(&local_2c8,param_2);
  }
  FPackageReader::~FPackageReader(&local_2c8);
  return;
}

// OnAssetAdded @ 142b9e3e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetAddedEvent * __thiscall UAssetRegistryImpl::OnAssetAdded(UAssetRegistryImpl *this)

{
  return (FAssetAddedEvent *)&(this->PathAddedEvent).field_0x38;
}

// OnAssetCollision_Private @ 142b9e400

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FAssetData_&,FAssetData_&,FAssetData_*_&),FDefaultTSDelegateUserPolicy>
* __thiscall UAssetRegistryImpl::OnAssetCollision_Private(UAssetRegistryImpl *this)

{
  return (TMulticastDelegate<void___cdecl(FAssetData_&,FAssetData_&,FAssetData_*_&),FDefaultTSDelegateUserPolicy>
          *)&this->_padding_;
}

// OnAssetRemoved @ 142b9e410

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetRemovedEvent * __thiscall UAssetRegistryImpl::OnAssetRemoved(UAssetRegistryImpl *this)

{
  return (FAssetRemovedEvent *)&(this->AssetAddedEvent).field_0x18;
}

// OnAssetRenamed @ 142b9e420

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetRenamedEvent * __thiscall UAssetRegistryImpl::OnAssetRenamed(UAssetRegistryImpl *this)

{
  return (FAssetRenamedEvent *)&(this->AssetRemovedEvent).field_0x18;
}

// OnAssetUpdated @ 142b9e430

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetUpdatedEvent * __thiscall UAssetRegistryImpl::OnAssetUpdated(UAssetRegistryImpl *this)

{
  return (FAssetUpdatedEvent *)&(this->AssetRenamedEvent).field_0x18;
}

// OnAssetUpdatedOnDisk @ 142b9e440

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetUpdatedEvent * __thiscall UAssetRegistryImpl::OnAssetUpdatedOnDisk(UAssetRegistryImpl *this)

{
  return (FAssetUpdatedEvent *)&(this->AssetUpdatedEvent).field_0x18;
}

// OnAssetsAdded @ 142b9e450

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetsEvent * __thiscall UAssetRegistryImpl::OnAssetsAdded(UAssetRegistryImpl *this)

{
  return (FAssetsEvent *)&(this->AssetUpdatedOnDiskEvent).field_0x18;
}

// OnAssetsRemoved @ 142b9e460

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetsEvent * __thiscall UAssetRegistryImpl::OnAssetsRemoved(UAssetRegistryImpl *this)

{
  return (FAssetsEvent *)&this->BatchedAssetEvents[0].field_0x18;
}

// OnAssetsUpdated @ 142b9e470

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetsEvent * __thiscall UAssetRegistryImpl::OnAssetsUpdated(UAssetRegistryImpl *this)

{
  return (FAssetsEvent *)&this->BatchedAssetEvents[1].field_0x18;
}

// OnAssetsUpdatedOnDisk @ 142b9e480

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAssetsEvent * __thiscall UAssetRegistryImpl::OnAssetsUpdatedOnDisk(UAssetRegistryImpl *this)

{
  return (FAssetsEvent *)&this->BatchedAssetEvents[2].field_0x18;
}

// OnContentPathDismounted @ 142b9f140

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::OnContentPathDismounted
          (UAssetRegistryImpl *this,FString *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  FRWLockWithPriority *SRWLock;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FString local_a8;
  FEventContext local_98;
  
  local_a8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_a8.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a8.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_a8.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  bVar3 = ::FString::EndsWith(&local_a8,L"/",1,CaseSensitive);
  if (bVar3) {
    iVar4 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (iVar4 + -1 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    ::FString::RemoveAt(&local_a8,iVar5,1,No);
  }
  local_98.ProgressUpdateData.bIsSet = false;
  local_98.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.PathEvents.ArrayNum = 0;
  local_98.PathEvents.ArrayMax = 0;
  local_98.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.AssetEvents.ArrayNum = 0;
  local_98.AssetEvents.ArrayMax = 0;
  local_98.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.VerseEvents.ArrayNum = 0;
  local_98.VerseEvents.ArrayMax = 0;
  local_98.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.RequiredLoads.ArrayNum = 0;
  local_98.RequiredLoads.ArrayMax = 0;
  local_98.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.BlockedFiles.ArrayNum = 0;
  local_98.BlockedFiles.ArrayMax = 0;
  local_98.bFileLoadedEventBroadcast = false;
  local_98.bScanStartedEventBroadcast = false;
  local_98.bHasSentFileLoadedEventBroadcast = false;
  local_98.bKnownGathersCompleteEventBroadcast = false;
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  SRWLock = &this->InterfaceLock;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (SRWLock == (FRWLockWithPriority *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  UE::AssetRegistry::FAssetRegistryImpl::OnContentPathDismounted
            (&this->GuardedData,&local_98,param_1,&local_a8,param_2);
  if (SRWLock != (FRWLockWithPriority *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  Broadcast(this,&local_98,false);
  DestructItems<FString,int>
            ((FString *)local_98.BlockedFiles.AllocatorInstance.Data,local_98.BlockedFiles.ArrayNum)
  ;
  if (local_98.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_98.RequiredLoads.AllocatorInstance.Data,
             local_98.RequiredLoads.ArrayNum);
  if (local_98.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_98.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_98.AssetEvents.AllocatorInstance.Data,local_98.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_98.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_98.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_98.PathEvents.AllocatorInstance.Data,local_98.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_98.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_98.PathEvents.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnContentPathMounted @ 142b9f680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::OnContentPathMounted(UAssetRegistryImpl *this,FString *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  FRWLockWithPriority *SRWLock;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_228 [32];
  FString local_1e8;
  FLLMScope local_1d8 [2];
  FString local_1d0;
  FEventContext local_1b8;
  FMemScope local_148;
  TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  local_140;
  FClassInheritanceContext local_120;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  bVar4 = ::FString::EndsWith(param_1,L"/",1,CaseSensitive);
  if (bVar4) {
    if (&local_1e8 != param_1) {
      iVar2 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_1e8.Data.ArrayNum = iVar2;
      if ((iVar2 != 0) || (local_1e8.Data.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_1e8.Data.ArrayMax,(ForAnyElementType *)&local_1e8,iVar2,
                   &local_1e8.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_1e8.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
      }
    }
  }
  else {
    ::FString::ConcatFC(&local_1d0,param_1,L"/");
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    local_1e8.Data.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
    local_1e8.Data.ArrayNum = local_1d0.Data.ArrayNum;
    local_1e8.Data.ArrayMax = local_1d0.Data.ArrayMax;
    local_1d0.Data.ArrayNum = 0;
    local_1d0.Data.ArrayMax = 0;
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  local_1b8.ProgressUpdateData.bIsSet = false;
  local_1b8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.PathEvents.ArrayNum = 0;
  local_1b8.PathEvents.ArrayMax = 0;
  local_1b8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AssetEvents.ArrayNum = 0;
  local_1b8.AssetEvents.ArrayMax = 0;
  local_1b8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.VerseEvents.ArrayNum = 0;
  local_1b8.VerseEvents.ArrayMax = 0;
  local_1b8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.RequiredLoads.ArrayNum = 0;
  local_1b8.RequiredLoads.ArrayMax = 0;
  local_1b8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.BlockedFiles.ArrayNum = 0;
  local_1b8.BlockedFiles.ArrayMax = 0;
  local_1b8.bFileLoadedEventBroadcast = false;
  local_1b8.bScanStartedEventBroadcast = false;
  local_1b8.bHasSentFileLoadedEventBroadcast = false;
  local_1b8.bKnownGathersCompleteEventBroadcast = false;
  FLLMScope::FLLMScope(local_1d8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_148,AssetRegistry,true);
  SRWLock = &this->InterfaceLock;
  local_140.Priority = PriorityHigh;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_140.GuardWrapper.TypedValue.Mutex = SRWLock;
  local_140.Lock = SRWLock;
  if (SRWLock == (FRWLockWithPriority *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  local_140.GuardWrapper.bIsSet = true;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  local_120.Buffer = (FClassInheritanceBuffer *)0x0;
  local_120.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_120.bInheritanceMapUpToDate = false;
  local_120.bCodeGeneratorClassesUpToDate = false;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 1;
  uVar5 = GetRegisteredNativeClassesVersionNumber();
  uVar6 = GetRegisteredClassesVersionNumber();
  local_120.StackBuffer = (FClassInheritanceBuffer *)local_f8;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_120,&this->GuardedData,uVar5,uVar6);
  UE::AssetRegistry::FAssetRegistryImpl::OnContentPathMounted
            (&this->GuardedData,&local_140,&local_1b8,&local_120,param_1,&local_1e8,param_2);
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar2 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  iVar2 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  if ((local_140.GuardWrapper.bIsSet != false) &&
     (local_140.GuardWrapper.TypedValue.Mutex != (FRWLockWithPriority *)0x0)) {
    ReleaseSRWLockExclusive((PSRWLOCK)local_140.GuardWrapper.TypedValue.Mutex);
  }
  FMemScope::~FMemScope(&local_148);
  FLLMScope::~FLLMScope(local_1d8);
  Broadcast(this,&local_1b8,false);
  DestructItems<FString,int>
            ((FString *)local_1b8.BlockedFiles.AllocatorInstance.Data,
             local_1b8.BlockedFiles.ArrayNum);
  if (local_1b8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_1b8.RequiredLoads.AllocatorInstance.Data,
             local_1b8.RequiredLoads.ArrayNum);
  if (local_1b8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_1b8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1b8.AssetEvents.AllocatorInstance.Data,local_1b8.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1b8.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1b8.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1b8.PathEvents.AllocatorInstance.Data,local_1b8.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1b8.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1b8.PathEvents.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnEnumerateAssetsEvent @ 142b9fb60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FEnumerateAssetsEvent * __thiscall
UAssetRegistryImpl::OnEnumerateAssetsEvent(UAssetRegistryImpl *this)

{
  return (FEnumerateAssetsEvent *)&(this->KnownGathersCompleteEvent).field_0x18;
}

// OnFileLoadProgressUpdated @ 142b9fb70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FFileLoadProgressUpdatedEvent * __thiscall
UAssetRegistryImpl::OnFileLoadProgressUpdated(UAssetRegistryImpl *this)

{
  return (FFileLoadProgressUpdatedEvent *)&(this->FileLoadedEvent).field_0x18;
}

// OnFilesBlocked @ 142b9fb80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FFilesBlockedEvent * __thiscall UAssetRegistryImpl::OnFilesBlocked(UAssetRegistryImpl *this)

{
  return (FFilesBlockedEvent *)&this->GatheredDataProcessingLock;
}

// OnFilesLoaded @ 142b9fb90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FFilesLoadedEvent * __thiscall UAssetRegistryImpl::OnFilesLoaded(UAssetRegistryImpl *this)

{
  return (FFilesLoadedEvent *)&(this->VerseRemovedEvent).field_0x18;
}

// OnInMemoryAssetCreated @ 142b9fba0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FInMemoryAssetCreatedEvent * __thiscall
UAssetRegistryImpl::OnInMemoryAssetCreated(UAssetRegistryImpl *this)

{
  return (FInMemoryAssetCreatedEvent *)&this->BatchedAssetEvents[3].field_0x18;
}

// OnInMemoryAssetDeleted @ 142b9fbb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FInMemoryAssetDeletedEvent * __thiscall
UAssetRegistryImpl::OnInMemoryAssetDeleted(UAssetRegistryImpl *this)

{
  return (FInMemoryAssetDeletedEvent *)&(this->InMemoryAssetCreatedEvent).field_0x18;
}

// OnInitialPluginLoadingComplete @ 142b9fbc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::OnInitialPluginLoadingComplete(UAssetRegistryImpl *this)

{
  atomic<int> *paVar1;
  FRWLockWithPriority *SRWLock;
  code *pcVar2;
  bool bVar3;
  FModuleManager *this_00;
  FName *pFVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FName local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  SRWLock = &this->InterfaceLock;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (SRWLock == (FRWLockWithPriority *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  if (bIsEngineModuleAvaliable == false) {
    this_00 = FModuleManager::Get();
    pFVar4 = ::FName::FName(local_res18,L"Engine");
    bVar3 = FModuleManager::IsModuleLoaded(this_00,*pFVar4);
    bIsEngineModuleAvaliable = bVar3;
  }
  else {
    bVar3 = true;
  }
  UE::AssetRegistry::Utils::UpdateSerializationOptions
            (&(this->GuardedData).SerializationOptions,&(this->GuardedData).CachedParsedFilterRules,
             (bool)(bVar3 ^ 1));
  if ((this->GuardedData).GlobalGatherer.Ptr != (FAssetDataGatherer *)0x0) {
    UE::AssetRegistry::FAssetRegistryImpl::ReadScriptPackages(&this->GuardedData);
  }
  if (SRWLock != (FRWLockWithPriority *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnAllModuleLoadingPhasesComplete,this);
  return;
}

// OnKnownGathersComplete @ 142b9fdc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FKnownGathersCompleteEvent * __thiscall
UAssetRegistryImpl::OnKnownGathersComplete(UAssetRegistryImpl *this)

{
  return (FKnownGathersCompleteEvent *)&(this->ScanEndedEvent).field_0x18;
}

// OnPathAdded @ 142b9fe20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPathAddedEvent * __thiscall UAssetRegistryImpl::OnPathAdded(UAssetRegistryImpl *this)

{
  return (FPathAddedEvent *)&(this->PathsRemovedEvent).field_0x18;
}

// OnPathRemoved @ 142b9fe30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPathRemovedEvent * __thiscall UAssetRegistryImpl::OnPathRemoved(UAssetRegistryImpl *this)

{
  return (FPathRemovedEvent *)&(this->PathAddedEvent).field_0x18;
}

// OnPathsAdded @ 142b9fe40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPathsEvent * __thiscall UAssetRegistryImpl::OnPathsAdded(UAssetRegistryImpl *this)

{
  return (FPathsEvent *)((this->GatheredDataProcessingLock).CriticalSection.Opaque3 + 2);
}

// OnPathsRemoved @ 142b9fe50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPathsEvent * __thiscall UAssetRegistryImpl::OnPathsRemoved(UAssetRegistryImpl *this)

{
  return (FPathsEvent *)&(this->PathsAddedEvent).field_0x18;
}

// OnPostEngineInit @ 142b9fe80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::OnPostEngineInit(UAssetRegistryImpl *this)

{
  atomic<int> *paVar1;
  FRWLockWithPriority *SRWLock;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  SRWLock = &this->InterfaceLock;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (SRWLock == (FRWLockWithPriority *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  UE::AssetRegistry::FAssetRegistryImpl::CollectCodeGeneratorClasses(&this->GuardedData);
  (this->GuardedData).TempCachedInheritanceBuffer.bDirty = true;
  if (SRWLock != (FRWLockWithPriority *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnPreExit @ 142b9ff60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::OnPreExit(UAssetRegistryImpl *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FRWLockWithPriority *SRWLock;
  TUniquePtr<FAssetDataGatherer,TDefaultDelete<FAssetDataGatherer>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FAssetDataGatherer *pFVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  longlong local_28 [2];
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  pFVar5 = (FAssetDataGatherer *)0x0;
  lpCriticalSection = &this->GatheredDataProcessingLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SRWLock = &this->InterfaceLock;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (SRWLock == (FRWLockWithPriority *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  pTVar2 = &(this->GuardedData).GlobalGatherer;
  if ((TUniquePtr<FAssetDataGatherer,TDefaultDelete<FAssetDataGatherer>_> *)local_28 != pTVar2) {
    pFVar5 = pTVar2->Ptr;
    pTVar2->Ptr = (FAssetDataGatherer *)0x0;
    if (pFVar5 != (FAssetDataGatherer *)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
    }
  }
  if (SRWLock != (FRWLockWithPriority *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pFVar5 != (FAssetDataGatherer *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnResolveRedirect @ 142ba00a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::OnResolveRedirect(UAssetRegistryImpl *this,FString *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  FRWLockWithPriority *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &this->InterfaceLock;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (SRWLock == (FRWLockWithPriority *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  bVar3 = UE::AssetRegistry::FAssetRegistryImpl::ResolveRedirect(&this->GuardedData,param_1,param_2)
  ;
  if (SRWLock != (FRWLockWithPriority *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// OnScanEnded @ 142ba0160

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FScanEndedEvent * __thiscall UAssetRegistryImpl::OnScanEnded(UAssetRegistryImpl *this)

{
  return (FScanEndedEvent *)&(this->ScanStartedEvent).field_0x18;
}

// OnScanStarted @ 142ba0170

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FScanStartedEvent * __thiscall UAssetRegistryImpl::OnScanStarted(UAssetRegistryImpl *this)

{
  return (FScanStartedEvent *)&(this->FileLoadProgressUpdatedEvent).field_0x18;
}

// OnVerseAdded @ 142ba0180

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FVerseAddedEvent * __thiscall UAssetRegistryImpl::OnVerseAdded(UAssetRegistryImpl *this)

{
  return (FVerseAddedEvent *)&(this->InMemoryAssetDeletedEvent).field_0x18;
}

// OnVerseRemoved @ 142ba0190

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FVerseRemovedEvent * __thiscall UAssetRegistryImpl::OnVerseRemoved(UAssetRegistryImpl *this)

{
  return (FVerseRemovedEvent *)&(this->VerseAddedEvent).field_0x18;
}

// PackageDeleted @ 142ba01a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::PackageDeleted(UAssetRegistryImpl *this,UPackage *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FEventContext local_88;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0x1384,L"Updating the AssetRegistry is only available in editor");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_88.ProgressUpdateData.bIsSet = false;
  local_88.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.PathEvents.ArrayNum = 0;
  local_88.PathEvents.ArrayMax = 0;
  local_88.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AssetEvents.ArrayNum = 0;
  local_88.AssetEvents.ArrayMax = 0;
  local_88.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.VerseEvents.ArrayNum = 0;
  local_88.VerseEvents.ArrayMax = 0;
  local_88.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.RequiredLoads.ArrayNum = 0;
  local_88.RequiredLoads.ArrayMax = 0;
  local_88.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.BlockedFiles.ArrayNum = 0;
  local_88.BlockedFiles.ArrayMax = 0;
  local_88.bFileLoadedEventBroadcast = false;
  local_88.bScanStartedEventBroadcast = false;
  local_88.bHasSentFileLoadedEventBroadcast = false;
  local_88.bKnownGathersCompleteEventBroadcast = false;
  if (param_1 == (UPackage *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8470630944661836678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x1386,"DeletedPackage");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,AssetRegistry,true);
    SRWLock = &(this->GuardedData).PackageRedirects;
    piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (SRWLock ==
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    UE::AssetRegistry::FAssetRegistryImpl::RemovePackageData
              ((FAssetRegistryImpl *)&this->_padding_,&local_88,(FName)param_1->_padding_);
    if (SRWLock !=
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
  }
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_88,false);
  DestructItems<FString,int>
            ((FString *)local_88.BlockedFiles.AllocatorInstance.Data,local_88.BlockedFiles.ArrayNum)
  ;
  if (local_88.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.RequiredLoads.AllocatorInstance.Data,
             local_88.RequiredLoads.ArrayNum);
  if (local_88.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_88.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_88.AssetEvents.AllocatorInstance.Data,local_88.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_88.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_88.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_88.PathEvents.AllocatorInstance.Data,local_88.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_88.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_88.PathEvents.AllocatorInstance.Data);
  }
  return;
}

// PathExists @ 142ba0ff0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::PathExists(UAssetRegistryImpl *this,FString *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x208);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res8,pwVar4);
  uVar2 = (*pcVar1)(this,*pFVar3);
  return (bool)uVar2;
}

// PathExists @ 142ba1040

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::PathExists(UAssetRegistryImpl *this,FName param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  bVar3 = FPathTree::PathExists
                    ((FPathTree *)
                     &(this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.
                      field_0x48,param_1);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// PrioritizeAssetInstall @ 142ba1560

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::PrioritizeAssetInstall(UAssetRegistryImpl *this,FAssetData *param_1)

{
  code *pcVar1;
  bool bVar2;
  IPlatformChunkInstall *pIVar3;
  TArrayView<int_const_,int> local_18;
  
  pIVar3 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  FAssetData::GetChunkIDs(param_1,&local_18);
  if (local_18.ArrayNum != 0) {
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x40);
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*pcVar1)(pIVar3,*local_18.DataPtr,0);
  }
  return;
}

// PrioritizeSearchPath @ 142ba16a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::PrioritizeSearchPath(UAssetRegistryImpl *this,FString *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FAssetDataGatherer *this_00;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  this_00 = *(FAssetDataGatherer **)
             &(this->GuardedData).CachedPathTree.ChildPathToParentPath.field_0x28;
  if (this_00 != (FAssetDataGatherer *)0x0) {
    FAssetDataGatherer::PrioritizeSearchPath(this_00,param_1);
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ReadLockEnumerateAllTagToAssetDatas @ 142ba2160

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::ReadLockEnumerateAllTagToAssetDatas
          (UAssetRegistryImpl *this,
          TFunctionRef<bool___cdecl(FName,TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)>)>
          *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  TFunctionRef<bool___cdecl(FName,TFunctionRef<bool___cdecl(TFunctionRef<bool___cdecl(FAssetData_const_*)>)>)>
  local_18;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  FAssetRegistryState::EnumerateTagToAssetDatas
            ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,&local_18);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// RemovePath @ 142ba48e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::RemovePath(UAssetRegistryImpl *this,FString *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FLLMScope local_res8 [5];
  FMemScope local_res18;
  FName local_res20;
  FEventContext local_e8;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 local_4c;
  
  local_e8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.PathEvents.ArrayNum = 0;
  local_e8.PathEvents.ArrayMax = 0;
  local_e8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AssetEvents.ArrayNum = 0;
  local_e8.AssetEvents.ArrayMax = 0;
  local_e8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.VerseEvents.ArrayNum = 0;
  local_e8.VerseEvents.ArrayMax = 0;
  local_e8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.RequiredLoads.ArrayNum = 0;
  local_e8.RequiredLoads.ArrayMax = 0;
  local_e8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.BlockedFiles.ArrayNum = 0;
  local_e8.BlockedFiles.ArrayMax = 0;
  local_e8.bFileLoadedEventBroadcast = false;
  local_e8.bScanStartedEventBroadcast = false;
  local_e8.bHasSentFileLoadedEventBroadcast = false;
  local_e8.bKnownGathersCompleteEventBroadcast = false;
  local_e8.ProgressUpdateData.bIsSet = false;
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  iVar6 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
  uStack_6c = local_4c;
  iVar6 = iVar9;
  if (1 < iVar9) {
    iVar6 = 1;
  }
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  local_78 = pFVar2;
  iStack_70 = iVar9;
  pFVar10 = pFVar2;
  iVar6 = iVar9;
  if ((iVar7 == 1) &&
     (iVar7 = wcsncmp(L"/",(wchar_t *)(pFVar2 + ((longlong)iVar9 - (longlong)iVar7) * 2),1),
     pFVar10 = local_78, iVar6 = iStack_70, iVar7 == 0)) {
    if (iVar9 + -1 < iVar9) {
      iVar9 = iVar9 + -1;
    }
    local_68 = pFVar2;
    iStack_60 = 0;
    pFVar10 = pFVar2;
    iVar6 = 0;
    if (0 < iVar9) {
      iStack_60 = iVar9;
      iVar6 = iVar9;
    }
  }
  pFVar8 = ::FName::FName(&local_res20,iVar6,(wchar_t *)pFVar10,FNAME_Add);
  bVar4 = UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath
                    ((FAssetRegistryImpl *)&this->_padding_,&local_e8,*pFVar8,false);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_e8,false);
  DestructItems<FString,int>
            ((FString *)local_e8.BlockedFiles.AllocatorInstance.Data,local_e8.BlockedFiles.ArrayNum)
  ;
  if (local_e8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_e8.RequiredLoads.AllocatorInstance.Data,
             local_e8.RequiredLoads.ArrayNum);
  if (local_e8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_e8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_e8.AssetEvents.AllocatorInstance.Data,local_e8.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_e8.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_e8.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_e8.PathEvents.AllocatorInstance.Data,local_e8.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_e8.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_e8.PathEvents.AllocatorInstance.Data);
  }
  return bVar4;
}

// RequestPauseBackgroundProcessing @ 142ba4ef0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::RequestPauseBackgroundProcessing(UAssetRegistryImpl *this)

{
  return;
}

// RequestResumeBackgroundProcessing @ 142ba4f10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::RequestResumeBackgroundProcessing(UAssetRegistryImpl *this)

{
  return;
}

// RequestTick @ 142ba4f20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::RequestTick(UAssetRegistryImpl *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTSTicker *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  TWeakPtr<FTSTicker::FElement,1> *pTVar7;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pTVar2 = &this->TickRequestHandle;
  if (((pTVar2->Object == (FElement *)0x0) ||
      (pTVar4 = (this->TickRequestHandle).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    this_00 = FTSTicker::GetCoreTicker();
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`UAssetRegistryImpl::RequestTick'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar5[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar7 = FTSTicker::AddTicker
                       (this_00,&local_68,
                        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,0.0);
    if (pTVar2 != pTVar7) {
      pTVar2->Object = pTVar7->Object;
      pTVar7->Object = (FElement *)0x0;
      pTVar4 = (this->TickRequestHandle).WeakReferenceCount.ReferenceController;
      (this->TickRequestHandle).WeakReferenceCount.ReferenceController =
           (pTVar7->WeakReferenceCount).ReferenceController;
      (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// RunAssetsThroughFilter @ 142ba7e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::RunAssetsThroughFilter
          (UAssetRegistryImpl *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          FARFilter *param_2)

{
  undefined1 auStack_288 [32];
  FARCompiledFilter local_268;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_288;
  if ((((((*(int *)&(param_2->TagsAndValues).field_0x8 !=
           *(int *)&(param_2->TagsAndValues).field_0x34 || (param_2->ClassPaths).ArrayNum != 0) ||
         (param_2->SoftObjectPaths).ArrayNum != 0) || (param_2->PackagePaths).ArrayNum != 0) ||
       (param_2->PackageNames).ArrayNum != 0) || param_2->WithPackageFlags != 0) ||
      param_2->WithoutPackageFlags != 0) {
    FARCompiledFilter::FARCompiledFilter(&local_268);
    (**(code **)(this->_padding_ + 0x1a8))(this,param_2);
    UE::AssetRegistry::Utils::RunAssetsThroughFilter(param_1,&local_268,Inclusive);
    FARCompiledFilter::~FARCompiledFilter(&local_268);
  }
  return;
}

// ScanFilesSynchronous @ 142ba80f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::ScanFilesSynchronous
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ScanPathsSynchronousInternal
            ((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_18,param_1,
             param_2 + WaitForInMemoryObjects);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// ScanModifiedAssetFiles @ 142ba8ad0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::ScanModifiedAssetFiles
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142ba8ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x270))(this,param_1,0);
  return;
}

// ScanModifiedAssetFiles @ 142ba8af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::ScanModifiedAssetFiles
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          EScanFlags param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  undefined1 auStackY_1e8 [32];
  FLLMScope local_1b8 [5];
  FEventContext local_1a8;
  FMemScope local_138;
  TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  local_130;
  FClassInheritanceContext local_110;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
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
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1a8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.PathEvents.ArrayNum = 0;
  local_1a8.PathEvents.ArrayMax = 0;
  local_1a8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.AssetEvents.ArrayNum = 0;
  local_1a8.AssetEvents.ArrayMax = 0;
  local_1a8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.VerseEvents.ArrayNum = 0;
  local_1a8.VerseEvents.ArrayMax = 0;
  local_1a8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.RequiredLoads.ArrayNum = 0;
  local_1a8.RequiredLoads.ArrayMax = 0;
  local_1a8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.BlockedFiles.ArrayNum = 0;
  local_1a8.BlockedFiles.ArrayMax = 0;
  local_1a8.bFileLoadedEventBroadcast = false;
  local_1a8.bScanStartedEventBroadcast = false;
  local_1a8.bHasSentFileLoadedEventBroadcast = false;
  local_1a8.bKnownGathersCompleteEventBroadcast = false;
  local_1a8.ProgressUpdateData.bIsSet = false;
  FLLMScope::FLLMScope(local_1b8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_138,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  local_130.Priority = PriorityHigh;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_130.GuardWrapper.TypedValue.Mutex = (FRWLockWithPriority *)SRWLock;
  local_130.Lock = (FRWLockWithPriority *)SRWLock;
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  local_130.GuardWrapper.bIsSet = true;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_110.Buffer = (FClassInheritanceBuffer *)0x0;
  local_110.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_110.bInheritanceMapUpToDate = false;
  local_110.bCodeGeneratorClassesUpToDate = false;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.NumBits = 0;
  local_d8.MaxBits = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 1;
  uVar6 = GetRegisteredNativeClassesVersionNumber();
  uVar7 = GetRegisteredClassesVersionNumber();
  local_110.StackBuffer = (FClassInheritanceBuffer *)&local_e8;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_110,(FAssetRegistryImpl *)&this->_padding_,uVar6,uVar7);
  UE::AssetRegistry::FAssetRegistryImpl::ScanModifiedAssetFiles
            ((FAssetRegistryImpl *)&this->_padding_,&local_130,&local_1a8,&local_110,param_1,param_2
            );
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
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
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  uVar4 = local_e0 >> 0x20;
  local_e0 = local_e0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_d8.NumBits = 0;
  if (0x80 < (uint)local_d8.MaxBits) {
    local_d8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
  }
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if ((local_130.GuardWrapper.bIsSet != false) &&
     (local_130.GuardWrapper.TypedValue.Mutex != (FRWLockWithPriority *)0x0)) {
    ReleaseSRWLockExclusive((PSRWLOCK)local_130.GuardWrapper.TypedValue.Mutex);
  }
  FMemScope::~FMemScope(&local_138);
  FLLMScope::~FLLMScope(local_1b8);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_1a8,false);
  DestructItems<FString,int>
            ((FString *)local_1a8.BlockedFiles.AllocatorInstance.Data,
             local_1a8.BlockedFiles.ArrayNum);
  if (local_1a8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_1a8.RequiredLoads.AllocatorInstance.Data,
             local_1a8.RequiredLoads.ArrayNum);
  if (local_1a8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_1a8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1a8.AssetEvents.AllocatorInstance.Data,local_1a8.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1a8.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1a8.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_1a8.PathEvents.AllocatorInstance.Data,local_1a8.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_1a8.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_1a8.PathEvents.AllocatorInstance.Data);
  }
  return;
}

// ScanPathsSynchronous @ 142bab050

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::ScanPathsSynchronous
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3)

{
  EScanFlags EVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  EVar1 = param_2 + WaitForInMemoryObjects | IgnoreDenyListScanFilters;
  if (!param_3) {
    EVar1 = param_2 + WaitForInMemoryObjects;
  }
  ScanPathsSynchronousInternal
            ((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,param_1,&local_18,EVar1);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// ScanPathsSynchronousInternal @ 142bab0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142bab380) */
/* WARNING: Removing unreachable block (ram,0x000142bab38a) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::ScanPathsSynchronousInternal
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,EScanFlags param_3)

{
  atomic<int> *paVar1;
  FAsyncConsumer *pFVar2;
  atomic<bool> aVar3;
  atomic<bool> aVar4;
  int iVar5;
  FEvent *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  wchar_t *pwVar11;
  bool bVar12;
  bool bVar13;
  FTrackedActivity *pFVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  FTelemetryRouter *this_00;
  ForAnyElementType FVar17;
  bool bVar18;
  undefined1 auStackY_568 [32];
  FLLMScope local_524;
  EScanFlags local_520;
  TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  local_518;
  FString local_4f8;
  FString local_4e8;
  FScriptContainerElement *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  FEventContext local_4c8;
  LARGE_INTEGER local_450;
  FMemScope local_448;
  LARGE_INTEGER local_440;
  FTrackedActivityScope local_438;
  FClassInheritanceContext local_430;
  FScanPathContext local_408;
  TMemoryView<void_const_> local_398;
  FScriptContainerElement *local_388;
  undefined8 uStack_380;
  FScriptContainerElement *local_378;
  undefined8 uStack_370;
  EScanFlags local_368;
  int local_364;
  double local_360;
  undefined1 local_358;
  atomic<bool> local_357;
  atomic<bool> local_356;
  FGuid local_348;
  undefined1 local_338 [32];
  void *local_318;
  undefined4 local_310;
  uint local_30c;
  undefined4 local_308;
  undefined4 local_304;
  void *local_2f8;
  undefined4 local_2f0;
  undefined1 local_2e8 [32];
  void *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  void *local_2a8;
  undefined4 local_2a0;
  ulong64 local_298;
  bool local_290;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [256];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_288.Base = local_268;
  local_288.CurPos = local_268;
  local_288.End = (wchar_t *)local_68;
  local_288.bIsDynamic = false;
  local_288.bIsExternal = false;
  local_520 = param_3;
  local_288.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_268,10,"Scan Paths",10);
  if (local_288.End < local_288.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_288,1);
  }
  pwVar11 = local_288.Base;
  *local_288.CurPos = L'\0';
  pFVar14 = FTrackedActivity::GetIOActivity();
  FTrackedActivityScope::FTrackedActivityScope(&local_438,pFVar14,pwVar11,false,Inherit);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4628,"UAssetRegistryImpl::ScanPathsSynchronousInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1214);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4628);
  }
  QueryPerformanceCounter(&local_450);
  local_4c8.ProgressUpdateData.bIsSet = false;
  local_4c8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.PathEvents.ArrayNum = 0;
  local_4c8.PathEvents.ArrayMax = 0;
  dVar10 = (double)local_450.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  local_4c8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.AssetEvents.ArrayNum = 0;
  local_4c8.AssetEvents.ArrayMax = 0;
  local_4c8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.VerseEvents.ArrayNum = 0;
  local_4c8.VerseEvents.ArrayMax = 0;
  local_4c8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.RequiredLoads.ArrayNum = 0;
  local_4c8.RequiredLoads.ArrayMax = 0;
  local_4c8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.BlockedFiles.ArrayNum = 0;
  local_4c8.BlockedFiles.ArrayMax = 0;
  local_4c8.bFileLoadedEventBroadcast = false;
  local_4c8.bScanStartedEventBroadcast = false;
  local_4c8.bHasSentFileLoadedEventBroadcast = false;
  local_4c8.bKnownGathersCompleteEventBroadcast = false;
  local_430.Buffer = (FClassInheritanceBuffer *)0x0;
  local_430.StackBuffer = (FClassInheritanceBuffer *)0x0;
  local_430.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_430.bInheritanceMapUpToDate = false;
  local_430.bCodeGeneratorClassesUpToDate = false;
  local_338._0_8_ = (FScriptContainerElement *)0x0;
  local_338._8_8_ = 0;
  local_318 = (void *)0x0;
  local_310 = 0;
  local_30c = 0x80;
  local_308 = 0xffffffff;
  local_304 = 0;
  local_2f8 = (void *)0x0;
  local_2f0 = 0;
  local_2e8._0_8_ = (FScriptContainerElement *)0x0;
  local_2e8._8_8_ = 0;
  local_2c8 = (void *)0x0;
  local_2c0 = 0;
  local_2bc = 0x80;
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2a8 = (void *)0x0;
  local_2a0 = 0;
  local_298 = 0xffffffffffffffff;
  local_290 = true;
  UE::AssetRegistry::Impl::FScanPathContext::FScanPathContext
            (&local_408,&local_4c8,&local_430,param_1,param_2,param_3,
             (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)0x0);
  FLLMScope::FLLMScope(&local_524,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_448,AssetRegistry,true);
  local_518.GuardWrapper.TypedValue.Mutex = &this->InterfaceLock;
  paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_518.Priority = PriorityHigh;
  local_518.GuardWrapper.bIsSet = false;
  local_518.Lock = local_518.GuardWrapper.TypedValue.Mutex;
  if ((local_518.GuardWrapper.TypedValue.Mutex == (FRWLockWithPriority *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)local_518.GuardWrapper.TypedValue.Mutex);
  local_518.GuardWrapper.bIsSet = true;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  uVar15 = GetRegisteredNativeClassesVersionNumber();
  uVar16 = GetRegisteredClassesVersionNumber();
  local_430.StackBuffer = (FClassInheritanceBuffer *)local_338;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_430,&this->GuardedData,uVar15,uVar16);
  bVar12 = (this->GuardedData).bInitialSearchStarted;
  aVar3 = (this->GuardedData).bInitialSearchCompleted;
  aVar4 = (this->GuardedData).bAdditionalMountSearchInProgress;
  iVar5 = (this->GuardedData).AsyncConsumer.ReferenceCount;
  if (iVar5 != 0) {
    (this->GuardedData).AsyncConsumer.ReferenceCount = iVar5 + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)local_518.Lock);
    if (((this->GuardedData).AsyncConsumer.Consumed == (FEvent *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Consumed != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                            ,0x2d2,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (this->GuardedData).AsyncConsumer.Consumed;
    (**(code **)(pFVar6->_padding_ + 0x20))(pFVar6,0xffffffff,0);
    AcquireSRWLockExclusive((PSRWLOCK)local_518.Lock);
    pFVar2 = &(this->GuardedData).AsyncConsumer;
    pFVar2->ReferenceCount = pFVar2->ReferenceCount + -1;
    if (pFVar2->ReferenceCount == 0) {
      if (((this->GuardedData).AsyncConsumer.Consumed == (FEvent *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Consumed != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                              ,0x2da,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FGenericPlatformProcess::ReturnSynchEventToPool((this->GuardedData).AsyncConsumer.Consumed);
      (this->GuardedData).AsyncConsumer.Consumed = (FEvent *)0x0;
    }
  }
  UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous
            (&this->GuardedData,&local_518,&local_408);
  if ((local_518.GuardWrapper.bIsSet != false) &&
     (local_518.GuardWrapper.TypedValue.Mutex != (FRWLockWithPriority *)0x0)) {
    ReleaseSRWLockExclusive((PSRWLOCK)local_518.GuardWrapper.TypedValue.Mutex);
    local_518.GuardWrapper.TypedValue.Mutex = (FRWLockWithPriority *)0x0;
  }
  FMemScope::~FMemScope(&local_448);
  FLLMScope::~FLLMScope(&local_524);
  if (local_408.LocalPaths.ArrayNum != 0) {
    Broadcast(this,&local_4c8,false);
    if (local_408.LocalPaths.ArrayNum < 2) {
      if ((local_408.LocalPaths.ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ::FString::PrintfImpl(&local_4e8,L"\'%s\'");
      FVar17.Data = local_4e8.Data.AllocatorInstance.Data;
      local_4e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.Data.ArrayNum = 0;
      local_4e8.Data.ArrayMax = 0;
    }
    else {
      ::FString::PrintfImpl(&local_4f8,L"\'%s\' and %d other paths");
      FVar17.Data = local_4f8.Data.AllocatorInstance.Data;
      local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f8.Data.ArrayNum = 0;
      local_4f8.Data.ArrayMax = 0;
    }
    QueryPerformanceCounter(&local_440);
    local_4d8 = (param_1->AllocatorInstance).Data;
    iStack_4d0 = param_1->ArrayNum;
    dVar9 = (double)local_440.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if ((iStack_4d0 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (param_2->AllocatorInstance).Data;
    uStack_380 = CONCAT44(uStack_4cc,iStack_4d0);
    iVar5 = param_2->ArrayNum;
    local_388 = local_4d8;
    local_4d8 = pFVar7;
    if ((iVar5 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_368 = local_520;
    local_364 = local_408.NumFoundAssets;
    uStack_370 = CONCAT44(uStack_4cc,iVar5);
    local_378 = local_4d8;
    iStack_4d0 = iVar5;
    local_360 = dVar9 - dVar10;
    local_358 = bVar12;
    local_357 = aVar3;
    local_356 = aVar4;
    this_00 = FTelemetryRouter::Get();
    local_398.Data = &local_388;
    local_398.Size = 0x38;
    local_348 = UE::Telemetry::AssetRegistry::FSynchronousScanTelemetry::TelemetryID;
    FTelemetryRouter::ProvideTelemetryInternal(this_00,&local_348,&local_398);
    if (5 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    if (FVar17.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar17.Data);
    }
  }
  DestructItems<FString,int>
            ((FString *)local_408.LocalPaths.AllocatorInstance.Data,local_408.LocalPaths.ArrayNum);
  if (local_408.LocalPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.LocalPaths.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_408.LocalFiles.AllocatorInstance.Data,local_408.LocalFiles.ArrayNum);
  if (local_408.LocalFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.LocalFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_408.PackageFiles.AllocatorInstance.Data,
             local_408.PackageFiles.ArrayNum);
  if (local_408.PackageFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.PackageFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_408.LocalDirs.AllocatorInstance.Data,local_408.LocalDirs.ArrayNum);
  if (local_408.LocalDirs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.LocalDirs.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_408.PackageDirs.AllocatorInstance.Data,local_408.PackageDirs.ArrayNum)
  ;
  if (local_408.PackageDirs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.PackageDirs.AllocatorInstance.Data);
  }
  local_2a0 = 0;
  if (local_2a8 != (void *)0x0) {
    FMemory::Free(local_2a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2e8,0,local_2e8._8_4_);
  iVar5 = SUB84(local_2e8._8_8_,4);
  local_2e8._8_8_ = local_2e8._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_2e8,0,(int *)(local_2e8 + 0xc));
  }
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2c0 = 0;
  if (0x80 < local_2bc) {
    local_2bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10),0);
  }
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  if ((FScriptContainerElement *)local_2e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e8._0_8_);
  }
  local_2f0 = 0;
  if (local_2f8 != (void *)0x0) {
    FMemory::Free(local_2f8);
  }
  iVar5 = SUB84(local_338._8_8_,4);
  local_338._8_8_ = local_338._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_338,0,(int *)(local_338 + 0xc));
  }
  local_304 = 0;
  local_310 = 0;
  local_308 = 0xffffffff;
  if (0x80 < local_30c) {
    local_30c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_338 + 0x10),0);
  }
  if (local_318 != (void *)0x0) {
    FMemory::Free(local_318);
  }
  if ((FScriptContainerElement *)local_338._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_338._0_8_);
  }
  DestructItems<FString,int>
            ((FString *)local_4c8.BlockedFiles.AllocatorInstance.Data,
             local_4c8.BlockedFiles.ArrayNum);
  if (local_4c8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_4c8.RequiredLoads.AllocatorInstance.Data,
             local_4c8.RequiredLoads.ArrayNum);
  if (local_4c8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_4c8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_4c8.AssetEvents.AllocatorInstance.Data,local_4c8.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_4c8.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_4c8.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_4c8.PathEvents.AllocatorInstance.Data,local_4c8.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_4c8.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_4c8.PathEvents.AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FTrackedActivityScope::~FTrackedActivityScope(&local_438);
  return;
}

// ScanSynchronous @ 142baba60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::ScanSynchronous
          (UAssetRegistryImpl *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,EScanFlags param_3)

{
  ScanPathsSynchronousInternal
            ((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,param_1,param_2,param_3);
  return;
}

// SearchAllAssets @ 142babeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::SearchAllAssets(UAssetRegistryImpl *this,bool param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  ForElementType<FSetElementId> *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  bool bVar9;
  undefined1 auStackY_1c8 [32];
  FLLMScope local_198 [5];
  FEventContext local_188;
  FMemScope local_110;
  FClassInheritanceContext local_108;
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
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2288,"UAssetRegistryImpl::SearchAllAssets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x8f0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2288);
  }
  if (param_1) {
    (**(code **)(this->_padding_ + 0x248))(this);
  }
  local_188.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.PathEvents.ArrayNum = 0;
  local_188.PathEvents.ArrayMax = 0;
  local_188.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.AssetEvents.ArrayNum = 0;
  local_188.AssetEvents.ArrayMax = 0;
  local_188.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.VerseEvents.ArrayNum = 0;
  local_188.VerseEvents.ArrayMax = 0;
  local_188.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.RequiredLoads.ArrayNum = 0;
  local_188.RequiredLoads.ArrayMax = 0;
  local_188.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.BlockedFiles.ArrayNum = 0;
  local_188.BlockedFiles.ArrayMax = 0;
  local_188.bFileLoadedEventBroadcast = false;
  local_188.bScanStartedEventBroadcast = false;
  local_188.bHasSentFileLoadedEventBroadcast = false;
  local_188.bKnownGathersCompleteEventBroadcast = false;
  local_188.ProgressUpdateData.bIsSet = false;
  FLLMScope::FLLMScope(local_198,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_110,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_108.Buffer = (FClassInheritanceBuffer *)0x0;
  local_108.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_108.bInheritanceMapUpToDate = false;
  local_108.bCodeGeneratorClassesUpToDate = false;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 1;
  uVar7 = GetRegisteredNativeClassesVersionNumber();
  uVar8 = GetRegisteredClassesVersionNumber();
  local_108.StackBuffer = (FClassInheritanceBuffer *)local_e8;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_108,(FAssetRegistryImpl *)&this->_padding_,uVar7,uVar8);
  if ((param_1) &&
     (iVar3 = *(int *)(this->GuardedData).ClassGeneratorNames.Hash.InlineData, iVar3 != 0)) {
    *(int *)(this->GuardedData).ClassGeneratorNames.Hash.InlineData = iVar3 + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (((this->GuardedData).ClassGeneratorNames.Hash.SecondaryData ==
         (ForElementType<FSetElementId>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Consumed != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x2d2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar4 = (this->GuardedData).ClassGeneratorNames.Hash.SecondaryData;
    (**(code **)(*(longlong *)FVar4 + 0x20))(FVar4,0xffffffff,0);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar2 = &(this->GuardedData).ClassGeneratorNames.Hash;
    *(int *)pFVar2->InlineData = *(int *)pFVar2->InlineData + -1;
    if (*(int *)pFVar2->InlineData == 0) {
      if (((this->GuardedData).ClassGeneratorNames.Hash.SecondaryData ==
           (ForElementType<FSetElementId>)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Consumed != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                             ,0x2da,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FGenericPlatformProcess::ReturnSynchEventToPool
                ((FEvent *)(this->GuardedData).ClassGeneratorNames.Hash.SecondaryData);
      (this->GuardedData).ClassGeneratorNames.Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
    }
  }
  UE::AssetRegistry::FAssetRegistryImpl::SearchAllAssets
            ((FAssetRegistryImpl *)&this->_padding_,&local_188,&local_108,param_1);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
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
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  iVar3 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
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
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_110);
  FLLMScope::~FLLMScope(local_198);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_188,false);
  if (param_1) {
    (**(code **)(this->_padding_ + 0x248))(this);
  }
  DestructItems<FString,int>
            ((FString *)local_188.BlockedFiles.AllocatorInstance.Data,
             local_188.BlockedFiles.ArrayNum);
  if (local_188.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_188.RequiredLoads.AllocatorInstance.Data,
             local_188.RequiredLoads.ArrayNum);
  if (local_188.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_188.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_188.AssetEvents.AllocatorInstance.Data,local_188.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_188.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_188.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_188.PathEvents.AllocatorInstance.Data,local_188.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_188.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_188.PathEvents.AllocatorInstance.Data);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Serialize @ 142bac6c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::Serialize(UAssetRegistryImpl *this,FArchive *param_1)

{
  atomic<int> *paVar1;
  FRWLockWithPriority *SRWLock;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res10 [2];
  FAssetRegistryLoadOptions local_res18;
  FAssetRegistryImpl *local_res20;
  FEventContext local_c8;
  FMemScope local_58;
  code *local_50;
  FAssetRegistryImpl **local_48;
  
  if ((param_1->field_0x2b & 1) == 0) {
    local_c8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.PathEvents.ArrayNum = 0;
    local_c8.PathEvents.ArrayMax = 0;
    local_c8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.AssetEvents.ArrayNum = 0;
    local_c8.AssetEvents.ArrayMax = 0;
    local_c8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.VerseEvents.ArrayNum = 0;
    local_c8.VerseEvents.ArrayMax = 0;
    local_c8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.RequiredLoads.ArrayNum = 0;
    local_c8.RequiredLoads.ArrayMax = 0;
    local_c8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.BlockedFiles.ArrayNum = 0;
    local_c8.BlockedFiles.ArrayMax = 0;
    local_c8.bFileLoadedEventBroadcast = false;
    local_c8.bScanStartedEventBroadcast = false;
    local_c8.bHasSentFileLoadedEventBroadcast = false;
    local_c8.bKnownGathersCompleteEventBroadcast = false;
    local_c8.ProgressUpdateData.bIsSet = false;
    FLLMScope::FLLMScope(local_res10,AssetRegistry,false,None,Default,true);
    FMemScope::FMemScope(&local_58,AssetRegistry,true);
    SRWLock = &this->InterfaceLock;
    paVar1 = &(this->InterfaceLock).HighPriorityWaitersCount;
    if (paVar1 != (atomic<int> *)0x0) {
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    if (SRWLock == (FRWLockWithPriority *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (paVar1 != (atomic<int> *)0x0) {
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
    }
    if ((param_1->field_0x2b & 1) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsObjectReferenceCollector()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x1912,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1->field_0x28 & 1) == 0) {
      if ((param_1->field_0x28 & 4) != 0) {
        FAssetRegistryState::Save
                  (&(this->GuardedData).State,param_1,&(this->GuardedData).SerializationOptions);
      }
    }
    else {
      local_res18.bLoadDependencies = true;
      local_res18.bLoadPackageData = true;
      local_res18._2_2_ = 0;
      local_res18.ParallelWorkers = 0;
      FAssetRegistryState::Load(&(this->GuardedData).State,param_1,&local_res18,(Type *)0x0);
      UE::AssetRegistry::FAssetRegistryImpl::CachePathsFromState
                (&this->GuardedData,&local_c8,&(this->GuardedData).State);
      local_48 = &local_res20;
      local_50 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints'::__l2::<lambda_1>,void,FName>
                 ::Call;
      local_res20 = &this->GuardedData;
      FAssetRegistryState::EnumerateAllPaths
                (&(this->GuardedData).State,(TFunctionRef<void___cdecl(FName)> *)&local_50);
    }
    if (SRWLock != (FRWLockWithPriority *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    FMemScope::~FMemScope(&local_58);
    FLLMScope::~FLLMScope(local_res10);
    Broadcast(this,&local_c8,false);
    DestructItems<FString,int>
              ((FString *)local_c8.BlockedFiles.AllocatorInstance.Data,
               local_c8.BlockedFiles.ArrayNum);
    if (local_c8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.BlockedFiles.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_c8.RequiredLoads.AllocatorInstance.Data,
               local_c8.RequiredLoads.ArrayNum);
    if (local_c8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.RequiredLoads.AllocatorInstance.Data);
    }
    if (local_c8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.VerseEvents.AllocatorInstance.Data);
    }
    DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
               local_c8.AssetEvents.AllocatorInstance.Data,local_c8.AssetEvents.ArrayNum);
    if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
        local_c8.AssetEvents.AllocatorInstance.Data !=
        (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free(local_c8.AssetEvents.AllocatorInstance.Data);
    }
    DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
               local_c8.PathEvents.AllocatorInstance.Data,local_c8.PathEvents.ArrayNum);
    if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
        local_c8.PathEvents.AllocatorInstance.Data !=
        (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free(local_c8.PathEvents.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 142bac920

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::Serialize(UAssetRegistryImpl *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// Serialize`adjustor{40}' @ 142bac950

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* [thunk]:public: virtual void __cdecl UAssetRegistryImpl::Serialize`adjustor{40}' (class FArchive
   & __ptr64) __ptr64 */

void __thiscall
UAssetRegistryImpl::Serialize_adjustor_40__(UAssetRegistryImpl *this,FArchive *param_1)

{
  Serialize((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,param_1);
  return;
}

// Serialize`adjustor{40}' @ 142bac960

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* [thunk]:public: virtual void __cdecl UAssetRegistryImpl::Serialize`adjustor{40}' (class
   FStructuredArchiveRecord) __ptr64 */

void __thiscall
UAssetRegistryImpl::Serialize_adjustor_40__
          (UAssetRegistryImpl *this,FStructuredArchiveRecord param_1)

{
  Serialize((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,param_1);
  return;
}

// SetManageReferences @ 142bae270

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::SetManageReferences
          (UAssetRegistryImpl *this,FSetManageReferencesContext *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences
            ((FAssetRegistryImpl *)&this->_padding_,param_1);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetManageReferences @ 142bae340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::SetManageReferences
          (UAssetRegistryImpl *this,
          TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
          *param_1,bool param_2,EDependencyCategory param_3,
          TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *param_4,
          TFunction<EAssetSetManagerResult::Type___cdecl(FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,EAssetSetManagerFlags::Type)>
          *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  TFunction<EAssetSetManagerResult::Type___cdecl(FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,EAssetSetManagerFlags::Type)>
  *local_98;
  TMultiMap<FAssetIdentifier,FAssetIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FAssetIdentifier,1>_>
  *local_90;
  undefined1 local_88;
  EDependencyCategory local_87;
  code *local_80;
  TFunction<EAssetSetManagerResult::Type___cdecl(FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,EAssetSetManagerFlags::Type)>
  **local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (*(longlong *)param_5 == 0) {
    local_68 = *(longlong *)param_5;
    uVar2 = *(undefined8 *)&param_5->field_0x8;
    local_58 = *(longlong *)&param_5->field_0x10;
    uStack_50 = *(undefined8 *)&param_5->field_0x18;
    uVar1 = *(undefined8 *)&param_5->field_0x20;
    plStack_40 = *(longlong **)&param_5->field_0x28;
    *(code **)param_5 =
         UE::Core::Private::Function::
         TFunctionRefCaller<enum_EAssetSetManagerResult::Type_(__cdecl*)(FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,enum_EAssetSetManagerFlags::Type),enum_EAssetSetManagerResult::Type,FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,enum_EAssetSetManagerFlags::Type>
         ::Call;
    *(undefined8 *)&param_5->field_0x8 = uStack_60;
    *(undefined4 *)&param_5->field_0x10 = 0x509ac038;
    *(undefined4 *)&param_5->field_0x14 = 1;
    *(undefined4 *)&param_5->field_0x18 = 0x42b6ee90;
    *(undefined4 *)&param_5->field_0x1c = 1;
    *(undefined4 *)&param_5->field_0x20 = (undefined4)local_48;
    *(undefined4 *)&param_5->field_0x24 = local_48._4_4_;
    *(undefined4 *)&param_5->field_0x28 = 0;
    *(undefined4 *)&param_5->field_0x2c = 0;
    local_48 = uVar1;
    uStack_60 = uVar2;
    if (local_68 != 0) {
      plVar3 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar3 = plStack_40;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  local_98 = param_5;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAssetRegistryImpl::SetManageReferences'::__l2::<lambda_2>,enum_EAssetSetManagerResult::Type,UE::AssetRegistry::FShouldSetManagerContext_&>
             ::Call;
  local_78 = &local_98;
  local_70 = 0;
  local_90 = param_1;
  local_88 = param_2;
  local_87 = param_3;
  (**(code **)(this->_padding_ + 0x438))(this,&local_90);
  if (local_70 != 0) {
    (**(code **)(local_70 + -0x10))(local_70 + -0x10);
  }
  if (*(longlong *)param_5 != 0) {
    plVar3 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// SetPrimaryAssetIdForObjectPath @ 142bae870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142bae9fb) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UAssetRegistryImpl::SetPrimaryAssetIdForObjectPath
          (UAssetRegistryImpl *this,FSoftObjectPath *param_1,FPrimaryAssetId *param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  FAssetData *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  FCachedAssetKey *pFVar7;
  FAssetData **ppFVar8;
  TTuple<FName,FString> *pTVar9;
  FString *pFVar10;
  FAssetDataTagMapSharedView *pFVar11;
  undefined1 auStackY_1d8 [32];
  FLLMScope local_1a8 [2];
  FString local_1a0;
  FEventContext local_188;
  FAssetDataTagMap local_118;
  FAssetDataTagMapSharedView local_100;
  FMemScope local_f8 [2];
  FName local_e8;
  FName FStack_e0;
  FCachedAssetKey local_d8;
  FString local_c8;
  FCachedAssetKey local_b8;
  FAssetData local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_188.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.PathEvents.ArrayNum = 0;
  local_188.PathEvents.ArrayMax = 0;
  local_188.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.AssetEvents.ArrayNum = 0;
  local_188.AssetEvents.ArrayMax = 0;
  local_188.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.VerseEvents.ArrayNum = 0;
  local_188.VerseEvents.ArrayMax = 0;
  local_188.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.RequiredLoads.ArrayNum = 0;
  local_188.RequiredLoads.ArrayMax = 0;
  local_188.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.BlockedFiles.ArrayNum = 0;
  local_188.BlockedFiles.ArrayMax = 0;
  local_188.bFileLoadedEventBroadcast = false;
  local_188.bScanStartedEventBroadcast = false;
  local_188.bHasSentFileLoadedEventBroadcast = false;
  local_188.bKnownGathersCompleteEventBroadcast = false;
  local_188.ProgressUpdateData.bIsSet = false;
  FLLMScope::FLLMScope(local_1a8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(local_f8,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_e8 = (param_2->PrimaryAssetType).Name;
  FStack_e0 = param_2->PrimaryAssetName;
  pFVar7 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_b8,param_1);
  local_d8.OuterPath = pFVar7->OuterPath;
  local_d8.ObjectName = pFVar7->ObjectName;
  ppFVar8 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
            ::Find((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                    *)&(this->GuardedData).AssetCollisionEvent.field_0x18,&local_d8);
  if ((ppFVar8 == (FAssetData **)0x0) || (pFVar2 = *ppFVar8, pFVar2 == (FAssetData *)0x0)) {
    bVar5 = false;
  }
  else {
    FAssetDataTagMapSharedView::CopyMap(&pFVar2->TagsAndValues,&local_118);
    ::FName::ToString(&local_e8,&local_1a0);
    pTVar9 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
             AllocateMemoryForEmplace<FName_const_&>
                       ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                        &local_118,&FPrimaryAssetId::PrimaryAssetTypeTag);
    uVar4 = FPrimaryAssetId::PrimaryAssetTypeTag.Number;
    *(uint *)&pTVar9->field_0x0 = FPrimaryAssetId::PrimaryAssetTypeTag.ComparisonIndex.Value;
    *(uint *)&pTVar9->field_0x4 = uVar4;
    *(undefined8 *)&pTVar9->field_0x8 = 0;
    *(FScriptContainerElement **)&pTVar9->field_0x8 = local_1a0.Data.AllocatorInstance.Data;
    *(int *)&pTVar9->field_0x10 = local_1a0.Data.ArrayNum;
    *(int *)&pTVar9->field_0x14 = local_1a0.Data.ArrayMax;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10 = ::FName::ToString(&FStack_e0,&local_c8);
    pTVar9 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
             AllocateMemoryForEmplace<FName_const_&>
                       ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                        &local_118,&FPrimaryAssetId::PrimaryAssetNameTag);
    uVar4 = FPrimaryAssetId::PrimaryAssetNameTag.Number;
    *(uint *)&pTVar9->field_0x0 = FPrimaryAssetId::PrimaryAssetNameTag.ComparisonIndex.Value;
    *(uint *)&pTVar9->field_0x4 = uVar4;
    *(undefined8 *)&pTVar9->field_0x8 = 0;
    *(FScriptContainerElement **)&pTVar9->field_0x8 = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar9->field_0x10 = (pFVar10->Data).ArrayNum;
    *(int *)&pTVar9->field_0x14 = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    FAssetData::FAssetData(&local_a8,pFVar2);
    pFVar11 = FAssetDataTagMapSharedView::FAssetDataTagMapSharedView(&local_100,&local_118);
    FAssetDataTagMapSharedView::operator=(&local_a8.TagsAndValues,pFVar11);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_100);
    UE::AssetRegistry::FAssetRegistryImpl::UpdateAssetData
              ((FAssetRegistryImpl *)&this->_padding_,&local_188,pFVar2,&local_a8,false);
    if (local_a8.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_a8.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_a8.TagsAndValues);
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_118._padding_,(int)local_118._padding_);
    if ((TTuple<FName,FString> *)local_118._padding_ != (TTuple<FName,FString> *)0x0) {
      FMemory::Free((void *)local_118._padding_);
    }
    bVar5 = true;
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(local_f8);
  FLLMScope::~FLLMScope(local_1a8);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_188,false);
  DestructItems<FString,int>
            ((FString *)local_188.BlockedFiles.AllocatorInstance.Data,
             local_188.BlockedFiles.ArrayNum);
  if (local_188.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_188.RequiredLoads.AllocatorInstance.Data,
             local_188.RequiredLoads.ArrayNum);
  if (local_188.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_188.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_188.AssetEvents.AllocatorInstance.Data,local_188.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_188.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_188.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_188.PathEvents.AllocatorInstance.Data,local_188.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_188.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_188.PathEvents.AllocatorInstance.Data);
  }
  return bVar5;
}

// SetTemporaryCachingMode @ 142baed50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::SetTemporaryCachingMode(UAssetRegistryImpl *this,bool param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x24c3,
                       L"Changing Caching mode is only available on the game thread because it affects behavior on all threads"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  UE::AssetRegistry::FAssetRegistryImpl::SetTemporaryCachingMode
            ((FAssetRegistryImpl *)&this->_padding_,param_1);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetTemporaryCachingModeInvalidated @ 142baee60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::SetTemporaryCachingModeInvalidated(UAssetRegistryImpl *this)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x24df,
                       L"Invalidating temporary cache is only available on the game thread because it affects behavior on all threads"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  (this->GuardedData).TempCachedInheritanceBuffer.ReverseInheritanceMap.field_0x30 = 1;
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShouldUpdateDiskCacheAfterLoad @ 142baf8d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::ShouldUpdateDiskCacheAfterLoad(UAssetRegistryImpl *this)

{
  return false;
}

// StaticRegisterNativesUAssetRegistryImpl @ 142bafee0

void __cdecl UAssetRegistryImpl::StaticRegisterNativesUAssetRegistryImpl(void)

{
  return;
}

// Tick @ 142bafef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::Tick(UAssetRegistryImpl *this,float param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *lpCriticalSection;
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  undefined1 *this_00;
  undefined1 *puVar2;
  FEventContext *pFVar3;
  bool *pbVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  BOOL BVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  longlong *plVar16;
  char cVar17;
  EGatherStatus EVar18;
  float fVar19;
  undefined1 auStackY_338 [32];
  EGatherStatus local_308;
  undefined1 local_2f8 [64];
  FScriptContainerElement *local_2b8;
  ForAnyElementType local_2b0;
  FScriptContainerElement *local_2a8;
  ForAnyElementType local_2a0;
  FScriptContainerElement *local_298;
  undefined4 local_290;
  FLLMScope local_288 [2];
  LARGE_INTEGER local_280;
  FMemScope local_278;
  LARGE_INTEGER local_270;
  FClassInheritanceContext local_268;
  undefined1 local_248 [64];
  void *local_208;
  undefined4 local_200;
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1f8;
  void *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198 [104];
  longlong *local_130;
  bool local_128;
  FAssetRegistryImpl *local_118;
  FEventContext *local_110;
  FClassInheritanceContext *local_108;
  TOptional<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_u_0 local_100;
  double local_b0;
  int local_a8;
  undefined4 local_a4;
  bool local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_338;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                          ,0x13ff,
                          L"The tick function executes deferred loads and events and must be on the game thread to do so."
                         ), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5120,"Asset Registry Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1400);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5120);
  }
  dVar10 = __real_bff0000000000000;
  dVar7 = __real_4170000000000000;
  EVar18 = TickActiveGatherActive;
  local_308 = TickActiveGatherActive;
  dVar6 = __real_bff0000000000000;
  if (0.0 <= param_1) {
    QueryPerformanceCounter(&local_280);
    dVar6 = (double)local_280.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  }
  fVar19 = UE::AssetRegistry::Impl::MaxSecondsPerFrame;
  lpCriticalSection = &(this->DeferredEvents).BlockedFiles;
  if (lpCriticalSection != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ClearRequestTick((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar9 = _UNK_150631d98;
    uVar8 = ___xmm_00000000ffffffff0000008000000000;
    do {
      cVar17 = '\0';
      local_2f8._24_8_ = (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
      local_2f8[0x10] = false;
      local_2f8._32_4_ = 0;
      local_2f8._36_4_ = 0;
      local_2f8._40_8_ = (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
      local_2f8._48_4_ = 0;
      local_2f8._52_4_ = 0;
      local_2f8._56_8_ = (FScriptContainerElement *)0x0;
      local_2b8 = (FScriptContainerElement *)0x0;
      local_2b0.Data = (FScriptContainerElement *)0x0;
      local_2a8 = (FScriptContainerElement *)0x0;
      local_2a0.Data = (FScriptContainerElement *)0x0;
      local_298 = (FScriptContainerElement *)0x0;
      local_290 = 0;
      BVar13 = TryEnterCriticalSection((LPCRITICAL_SECTION)&(this->GuardedData).AsyncConsumer);
      if (BVar13 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        UE::AssetRegistry::Impl::FEventContext::Append
                  ((FEventContext *)local_2f8,
                   (FEventContext *)&(this->EnumerateAssetsEvent).field_0x18);
        UE::AssetRegistry::Impl::FEventContext::Clear
                  ((FEventContext *)&(this->EnumerateAssetsEvent).field_0x18);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        UE::AssetRegistry::FAssetRegistryImpl::ProcessGameThreadRequestedClasses
                  ((FAssetRegistryImpl *)&this->_padding_);
      }
      else {
        FLLMScope::FLLMScope(local_288,AssetRegistry,false,None,Default,true);
        FMemScope::FMemScope(&local_278,AssetRegistry,true);
        piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
        SRWLock = &(this->GuardedData).PackageRedirects;
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        if ((SRWLock ==
             (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
              *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                ,0x43,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        local_248._44_4_ = 0x80;
        local_268.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
        local_268.Buffer = (FClassInheritanceBuffer *)0x0;
        local_268.StackBuffer = (FClassInheritanceBuffer *)0x0;
        local_268.bInheritanceMapUpToDate = false;
        local_268.bCodeGeneratorClassesUpToDate = false;
        local_248._0_8_ = 0;
        local_248._8_8_ = 0;
        local_248._32_8_ = 0;
        local_248._40_4_ = 0;
        local_248._52_4_ = 0;
        local_208 = (void *)0x0;
        local_200 = 0;
        local_1f8._0_8_ = 0;
        local_1f8._8_8_ = 0;
        local_1f8._32_8_ = 0;
        local_1f8._40_4_ = 0;
        local_1f8._52_4_ = 0;
        local_1b8 = (void *)0x0;
        local_1b0 = 0;
        local_248._48_4_ = 0xffffffff;
        local_1f8._44_4_ = 0x80;
        local_1f8._48_4_ = 0xffffffff;
        local_1a8 = 0xffffffffffffffff;
        local_1a0 = 1;
        uVar14 = GetRegisteredNativeClassesVersionNumber();
        uVar15 = GetRegisteredClassesVersionNumber();
        local_268.StackBuffer = (FClassInheritanceBuffer *)local_248;
        plVar16 = &this->_padding_;
        UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
                  (&local_268,(FAssetRegistryImpl *)plVar16,uVar14,uVar15);
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        this_00 = &(this->EnumerateAssetsEvent).field_0x18;
        if (this_00 != local_2f8) {
          if ((this->EnumerateAssetsEvent).field_0x28 == '\0') {
            if (local_2f8[0x10] != false) {
              local_2f8[0x10] = false;
            }
          }
          else {
            local_2f8._0_4_ = *(int *)&(this->EnumerateAssetsEvent).field_0x18;
            local_2f8._4_4_ = *(int *)&(this->EnumerateAssetsEvent).field_0x1c;
            local_2f8._8_4_ = *(int *)&(this->EnumerateAssetsEvent).field_0x20;
            local_2f8[0xc] = (bool)(this->EnumerateAssetsEvent).field_0x24;
            local_2f8._13_3_ = *(undefined3 *)&(this->EnumerateAssetsEvent).field_0x25;
            local_2f8[0x10] = true;
          }
        }
        puVar2 = &(this->EnumerateAssetsEvent).field_0x30;
        if (local_2f8 + 0x18 != puVar2) {
          DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                    ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                     local_2f8._24_8_,local_2f8._32_4_);
          if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_2f8._24_8_ !=
              (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
            FMemory::Free((void *)local_2f8._24_8_);
          }
          local_2f8._24_8_ = *(undefined8 *)puVar2;
          *(undefined8 *)puVar2 = 0;
          local_2f8._32_4_ = *(undefined4 *)&(this->EnumerateAssetsEvent).field_0x38;
          local_2f8._36_4_ = *(undefined4 *)&(this->EnumerateAssetsEvent).field_0x3c;
          *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x38 = 0;
        }
        pFVar3 = &this->DeferredEvents;
        if ((FEventContext *)(local_2f8 + 0x28) != pFVar3) {
          DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                    ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                     local_2f8._40_8_,local_2f8._48_4_);
          if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_2f8._40_8_
              != (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
            FMemory::Free((void *)local_2f8._40_8_);
          }
          local_2f8._40_8_ = *(undefined8 *)&(pFVar3->ProgressUpdateData).TypedValue;
          (pFVar3->ProgressUpdateData).TypedValue.NumTotalAssets = 0;
          (pFVar3->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry = 0;
          local_2f8._48_8_ =
               *(undefined8 *)
                &(this->DeferredEvents).ProgressUpdateData.TypedValue.NumAssetsPendingDataLoad;
          (this->DeferredEvents).ProgressUpdateData.TypedValue.NumAssetsPendingDataLoad = 0;
          (this->DeferredEvents).ProgressUpdateData.TypedValue.bIsDiscoveringAssetFiles = false;
          *(undefined3 *)&(this->DeferredEvents).ProgressUpdateData.TypedValue.field_0xd = 0;
        }
        pbVar4 = &(this->DeferredEvents).ProgressUpdateData.bIsSet;
        if ((bool *)(local_2f8 + 0x38) != pbVar4) {
          if ((FScriptContainerElement *)local_2f8._56_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_2f8._56_8_);
          }
          local_2f8._56_8_ = *(undefined8 *)pbVar4;
          *(undefined8 *)pbVar4 = 0;
          local_2b8 = (this->DeferredEvents).PathEvents.AllocatorInstance.Data;
          (this->DeferredEvents).PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        piVar1 = &(this->DeferredEvents).PathEvents.ArrayNum;
        if ((int *)(local_2f8 + 0x48) != piVar1) {
          DestructItems<FString,int>((FString *)local_2b0.Data,(int)local_2a8);
          if (local_2b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data);
          }
          local_2b0.Data = *(FScriptContainerElement **)piVar1;
          (this->DeferredEvents).PathEvents.ArrayNum = 0;
          (this->DeferredEvents).PathEvents.ArrayMax = 0;
          local_2a8 = (this->DeferredEvents).AssetEvents.AllocatorInstance.Data;
          (this->DeferredEvents).AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
        }
        piVar1 = &(this->DeferredEvents).AssetEvents.ArrayNum;
        if ((int *)(local_2f8 + 0x58) != piVar1) {
          DestructItems<FString,int>((FString *)local_2a0.Data,(int)local_298);
          if (local_2a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a0.Data);
          }
          local_2a0.Data = *(FScriptContainerElement **)piVar1;
          (this->DeferredEvents).AssetEvents.ArrayNum = 0;
          (this->DeferredEvents).AssetEvents.ArrayMax = 0;
          local_298 = (this->DeferredEvents).VerseEvents.AllocatorInstance.Data;
          (this->DeferredEvents).VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
        }
        local_290 = (this->DeferredEvents).VerseEvents.ArrayNum;
        UE::AssetRegistry::Impl::FEventContext::Clear((FEventContext *)this_00);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (((((local_290._1_1_ == false) && (local_290._0_1_ == false)) &&
             (local_290._3_1_ == false)) && ((local_2f8[0x10] == false && (local_2f8._32_4_ == 0))))
           && ((local_2f8._48_4_ == 0 && (((int)local_2a8 == 0 && ((int)local_298 == 0)))))) {
          fVar19 = (this->GuardedData).StoreGatherResultsTimeSeconds;
          local_110 = (FEventContext *)local_2f8;
          local_b0 = dVar10;
          local_198._16_4_ = 0;
          local_198._20_4_ = 0;
          local_198._24_4_ = 0;
          local_198._28_4_ = 0;
          local_108 = &local_268;
          local_198._56_8_ = (undefined8)fVar19;
          local_198[0] = false;
          local_198[1] = false;
          local_198._8_8_ = (FScriptContainerElement *)0x0;
          local_198[0x20] = false;
          local_198._64_8_ = 0;
          local_130 = (longlong *)0x0;
          local_128 = false;
          local_100._0_8_ = 0;
          local_100._8_4_ = 0;
          local_100._12_4_ = -1;
          local_100._32_8_ = 0;
          local_100._40_8_ = uVar8;
          local_100._48_8_ = uVar9;
          local_100.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_100.TypedValue.HashSize = 0;
          local_a8 = 0;
          local_a4._0_1_ = true;
          local_a4._1_1_ = true;
          local_a4._2_1_ = true;
          local_a4._3_1_ = false;
          local_a0 = false;
          local_198._48_8_ = dVar6;
          local_118 = (FAssetRegistryImpl *)plVar16;
          local_308 = UE::AssetRegistry::FAssetRegistryImpl::TickGatherer
                                ((FAssetRegistryImpl *)plVar16,(FTickContext *)local_198);
          cVar17 = local_128;
          if (local_100._12_4_ != -1) {
            local_100.TypedValue.HashSize = 0;
            if (local_100.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_100.TypedValue.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_100.TypedValue.Elements);
          }
          if (local_198._64_8_ != 0) {
            plVar16 = (longlong *)(local_198 + 0x50);
            if (local_130 != (longlong *)0x0) {
              plVar16 = local_130;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if ((FScriptContainerElement *)local_198._8_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_198._8_8_);
          }
        }
        else {
          cVar17 = '\x01';
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&(this->GuardedData).AsyncConsumer);
        local_1b0 = 0;
        if (local_1b8 != (void *)0x0) {
          FMemory::Free(local_1b8);
        }
        TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1f8);
        local_200 = 0;
        if (local_208 != (void *)0x0) {
          FMemory::Free(local_208);
        }
        TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_248);
        if (SRWLock !=
            (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
             *)0x0) {
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        }
        FMemScope::~FMemScope(&local_278);
        FLLMScope::~FLLMScope(local_288);
        EVar18 = local_308;
      }
      if (CpuChannel->Enabled < 0) {
        Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,
                  (FEventContext *)local_2f8,true);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId5251,"Asset Registry Event Broadcast",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                   ,0x1483);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5251);
        Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,
                  (FEventContext *)local_2f8,true);
        FCpuProfilerTrace::OutputEndEvent();
      }
      DestructItems<FString,int>((FString *)local_2a0.Data,(int)local_298);
      if (local_2a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data);
      }
      DestructItems<FString,int>((FString *)local_2b0.Data,(int)local_2a8);
      if (local_2b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data);
      }
      if ((FScriptContainerElement *)local_2f8._56_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2f8._56_8_);
      }
      DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_2f8._40_8_,local_2f8._48_4_);
      if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_2f8._40_8_ !=
          (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free((void *)local_2f8._40_8_);
      }
      DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_2f8._24_8_,
                 local_2f8._32_4_);
      if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_2f8._24_8_ !=
          (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free((void *)local_2f8._24_8_);
      }
    } while (((cVar17 != '\0') || (EVar18 == WaitingForEvents)) &&
            ((dVar6 < 0.0 ||
             (QueryPerformanceCounter(&local_270),
             ((double)local_270.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7) - dVar6 <=
             (double)fVar19))));
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickOnBackgroundThread @ 142bb2040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EGatherStatus __thiscall UAssetRegistryImpl::TickOnBackgroundThread(UAssetRegistryImpl *this)

{
  FAssetRegistryImpl *this_00;
  FRWLockWithPriority *SRWLock;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  double dVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  bool bVar10;
  EGatherStatus EVar11;
  BOOL BVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  undefined1 auStackY_498 [32];
  FLLMScope local_468 [5];
  FEventContext local_458;
  LARGE_INTEGER local_3e8;
  FMemScope local_3e0;
  FClassInheritanceContext local_3d8;
  UAssetRegistryImpl *local_3b8;
  undefined1 local_3a0;
  TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *local_398;
  undefined8 local_390;
  TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *local_388;
  undefined8 local_380;
  void *local_378;
  undefined8 local_370;
  FString *local_368;
  undefined8 local_360;
  FString *local_358;
  undefined8 local_350;
  undefined4 local_348;
  FClassInheritanceContext local_340;
  undefined1 local_320 [24];
  undefined8 uStack_308;
  void *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  void *local_2e0;
  ulonglong uStack_2d8;
  undefined1 local_2d0 [24];
  undefined8 uStack_2b8;
  void *local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  void *local_290;
  ulonglong uStack_288;
  undefined8 local_280;
  undefined1 local_278;
  FString *local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined1 local_25e;
  ForAnyElementType local_258;
  undefined8 local_250;
  TBitArray<FDefaultBitArrayAllocator> local_248;
  undefined4 local_228;
  undefined4 local_224;
  void *local_218;
  undefined4 local_210;
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  void *local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8 [64];
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158 [3];
  longlong *plStack_140;
  bool local_138;
  FAssetRegistryImpl *local_128;
  FEventContext *local_120;
  FClassInheritanceContext *local_118;
  undefined1 local_110 [80];
  double local_c0;
  int local_b8;
  bool local_b4;
  bool local_b3;
  undefined2 local_b2;
  bool local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  longlong local_98 [3];
  longlong *plStack_80;
  code *local_78;
  undefined **local_68;
  UAssetRegistryImpl *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  FLLMScope::FLLMScope(local_468,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_3e0,AssetRegistry,true);
  BVar12 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->GatheredDataProcessingLock);
  if (BVar12 != 0) {
    local_320._0_8_ = (FScriptContainerElement *)0x0;
    local_320._8_8_ = 0;
    local_300 = (void *)0x0;
    local_2e0 = (void *)0x0;
    uStack_2d8 = 0;
    local_2d0._0_8_ = (FScriptContainerElement *)0x0;
    uStack_2e8 = 0;
    local_2d0._8_8_ = 0;
    uStack_298 = 0;
    local_2b0 = (void *)0x0;
    uStack_2f8 = ___xmm_00000000ffffffff0000008000000000;
    local_2f0 = _UNK_150631d98;
    uStack_2a8 = ___xmm_00000000ffffffff0000008000000000;
    local_2a0 = _UNK_150631d98;
    local_290 = (void *)0x0;
    uStack_288 = 0;
    local_458.ProgressUpdateData.bIsSet = false;
    local_458.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.PathEvents.ArrayNum = 0;
    local_458.PathEvents.ArrayMax = 0;
    local_458.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.AssetEvents.ArrayNum = 0;
    local_458.AssetEvents.ArrayMax = 0;
    local_458.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.VerseEvents.ArrayNum = 0;
    local_458.VerseEvents.ArrayMax = 0;
    local_458.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.RequiredLoads.ArrayNum = 0;
    local_458.RequiredLoads.ArrayMax = 0;
    local_458.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.BlockedFiles.ArrayNum = 0;
    local_458.BlockedFiles.ArrayMax = 0;
    local_458.bFileLoadedEventBroadcast = false;
    local_458.bScanStartedEventBroadcast = false;
    local_458.bHasSentFileLoadedEventBroadcast = false;
    local_458.bKnownGathersCompleteEventBroadcast = false;
    local_3d8.Buffer = (FClassInheritanceBuffer *)0x0;
    local_3d8.StackBuffer = (FClassInheritanceBuffer *)0x0;
    local_3d8.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
    local_3d8.bInheritanceMapUpToDate = false;
    local_3d8.bCodeGeneratorClassesUpToDate = false;
    local_3a0 = 0;
    local_398 = (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
    local_390 = 0;
    local_388 = (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
    local_380 = 0;
    local_378 = (void *)0x0;
    local_370 = 0;
    local_368 = (FString *)0x0;
    local_360 = 0;
    local_358 = (FString *)0x0;
    local_350 = 0;
    local_348 = 0;
    local_340.Buffer = (FClassInheritanceBuffer *)0x0;
    local_340.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
    local_340.bInheritanceMapUpToDate = false;
    local_340.bCodeGeneratorClassesUpToDate = false;
    local_320._16_8_ = 0;
    uStack_308 = 0;
    local_280 = 0xffffffffffffffff;
    local_2d0._16_8_ = 0;
    uStack_2b8 = 0;
    local_278 = 1;
    local_270 = (FString *)0x0;
    local_268 = 0;
    local_260 = 0;
    local_25e = 0;
    local_258.Data = (FScriptContainerElement *)0x0;
    local_250 = 0;
    local_248.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_248.NumBits = 0;
    local_248.MaxBits = 0x80;
    local_228 = 0xffffffff;
    local_224 = 0;
    local_218 = (void *)0x0;
    local_210 = 0;
    local_208._0_8_ = (FScriptContainerElement *)0x0;
    local_208._8_8_ = 0;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    local_1dc = 0x80;
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1c8 = (void *)0x0;
    SRWLock = &this->InterfaceLock;
    local_1b8 = 0xffffffffffffffff;
    local_1b0 = 1;
    local_3b8 = this;
    if (SRWLock == (FRWLockWithPriority *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        EVar11 = (*pcVar1)();
        return EVar11;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    uVar13 = GetRegisteredNativeClassesVersionNumber();
    uVar14 = GetRegisteredClassesVersionNumber();
    local_340.StackBuffer = (FClassInheritanceBuffer *)local_320;
    this_00 = &this->GuardedData;
    UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
              (&local_340,this_00,uVar13,uVar14);
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAssetRegistryImpl::TickOnBackgroundThread'::`7'::<lambda_2>,0,0>
                ::_vftable_;
    local_50 = (undefined ***)0x0;
    local_1a8._16_4_ = 0;
    local_1a8._20_4_ = 0;
    local_1a8._24_4_ = 0;
    local_1a8._28_4_ = 0;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAssetRegistryImpl::TickOnBackgroundThread'::__l7::<lambda_2>,bool>
               ::Call;
    local_120 = &local_458;
    local_118 = &local_3d8;
    local_110._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_110._48_8_ = _UNK_150631d98;
    local_c0 = __real_bff0000000000000;
    local_1a8[0] = false;
    local_1a8[1] = false;
    local_1a8._8_8_ = (FScriptContainerElement *)0x0;
    local_1a8[0x20] = false;
    local_168 = 0;
    plStack_140 = (longlong *)0x0;
    local_138 = false;
    local_110._0_8_ = (void *)0x0;
    local_110._8_4_ = 0;
    local_110._12_4_ = -1;
    local_110._32_8_ = (void *)0x0;
    local_110._64_8_ = (ForElementType<FSetElementId>)0x0;
    local_110._72_4_ = 0;
    local_b8 = 0;
    local_b4 = false;
    local_b2._0_1_ = true;
    local_b2._1_1_ = false;
    local_b0 = false;
    dVar2 = (double)UE::AssetRegistry::Impl::MaxSecondsPerTickBackgroundThread;
    local_128 = this_00;
    local_60 = this;
    QueryPerformanceCounter(&local_3e8);
    local_a8 = local_78;
    plStack_80 = (longlong *)0x0;
    local_1a8._48_8_ =
         (double)local_3e8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    local_1a8._56_8_ = dVar2;
    if (local_78 != (code *)0x0) {
      pppuVar17 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar17 = local_50;
      }
      (*(code *)**pppuVar17)(local_1a8._48_8_,local_98);
    }
    plVar16 = plStack_140;
    lVar8 = local_158[2];
    uVar7 = uStack_160;
    lVar6 = local_168;
    local_168 = (longlong)local_a8;
    uStack_160 = uStack_a0;
    local_158[2] = local_98[2];
    plStack_140 = plStack_80;
    local_a8 = (code *)lVar6;
    uStack_a0 = uVar7;
    local_98[0]._0_4_ = (undefined4)local_158[0];
    local_98[0]._4_4_ = local_158[0]._4_4_;
    local_98[1]._0_4_ = (undefined4)local_158[1];
    local_98[1]._4_4_ = local_158[1]._4_4_;
    local_98[2] = lVar8;
    plStack_80 = plVar16;
    if (lVar6 != 0) {
      plVar15 = local_98;
      if (plVar16 != (longlong *)0x0) {
        plVar15 = plVar16;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    local_b3 = true;
    UE::AssetRegistry::FAssetRegistryImpl::TickGatherer(this_00,(FTickContext *)local_1a8);
    if (((((local_458.bScanStartedEventBroadcast != false) ||
          (local_458.bFileLoadedEventBroadcast != false)) ||
         (local_458.bKnownGathersCompleteEventBroadcast != false)) ||
        ((local_458.ProgressUpdateData.bIsSet != false || (local_458.PathEvents.ArrayNum != 0)))) ||
       ((local_458.AssetEvents.ArrayNum != 0 ||
        ((local_458.RequiredLoads.ArrayNum != 0 || (local_458.BlockedFiles.ArrayNum != 0)))))) {
      lpCriticalSection = &this->DeferredEventsCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      UE::AssetRegistry::Impl::FEventContext::Append(&this->DeferredEvents,&local_458);
      UE::AssetRegistry::Impl::FEventContext::Clear(&local_458);
      RequestTick(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (local_110._12_4_ != -1) {
      local_110._72_4_ = 0;
      if ((ForElementType<FSetElementId>)local_110._64_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_110._64_8_);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_110,0,local_110._8_4_);
      local_110._8_4_ = 0;
      if (local_110._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_110,0,(int *)(local_110 + 0xc));
      }
      uVar9 = local_110._44_4_;
      local_110._48_8_ = 0xffffffff;
      local_110._40_8_ = (ulonglong)(uint)local_110._44_4_ << 0x20;
      if (0x80 < (uint)uVar9) {
        local_110._40_8_ = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_110 + 0x10),0);
      }
      if ((void *)local_110._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_110._32_8_);
      }
      if ((void *)local_110._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_110._0_8_);
      }
    }
    if ((code *)local_168 != (code *)0x0) {
      plVar16 = (longlong *)(local_1a8 + 0x50);
      if (plStack_140 != (longlong *)0x0) {
        plVar16 = plStack_140;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if ((FScriptContainerElement *)local_1a8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1a8._8_8_);
    }
    if (local_78 != (code *)0x0) {
      pppuVar17 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar17 = local_50;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    if (SRWLock != (FRWLockWithPriority *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    local_1c0 = 0;
    if (local_1c8 != (void *)0x0) {
      FMemory::Free(local_1c8);
    }
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_208,0,local_208._8_4_);
    iVar3 = SUB84(local_208._8_8_,4);
    local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
    }
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1e0 = 0;
    if (0x80 < local_1dc) {
      local_1dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
    }
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_208._0_8_);
    }
    local_210 = 0;
    if (local_218 != (void *)0x0) {
      FMemory::Free(local_218);
    }
    uVar4 = local_250 >> 0x20;
    local_250 = local_250 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,0,&local_258,0,(int *)((longlong)&local_250 + 4));
    }
    local_228 = 0xffffffff;
    local_224 = 0;
    local_248.NumBits = 0;
    if (0x80 < (uint)local_248.MaxBits) {
      local_248.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_248,0);
    }
    if (local_248.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_248.AllocatorInstance.SecondaryData);
    }
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data);
    }
    DestructItems<FString,int>(local_270,(int)local_268);
    if (local_270 != (FString *)0x0) {
      FMemory::Free(local_270);
    }
    uStack_288 = uStack_288 & 0xffffffff00000000;
    if (local_290 != (void *)0x0) {
      FMemory::Free(local_290);
    }
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_2d0,0,local_2d0._8_4_);
    iVar3 = SUB84(local_2d0._8_8_,4);
    local_2d0._8_8_ = local_2d0._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_2d0,0,(int *)(local_2d0 + 0xc));
    }
    uVar5 = uStack_2a8._4_4_;
    local_2a0 = 0xffffffff;
    uStack_2a8 = (ulonglong)uStack_2a8._4_4_ << 0x20;
    if (0x80 < uVar5) {
      uStack_2a8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2d0 + 0x10),0);
    }
    if (local_2b0 != (void *)0x0) {
      FMemory::Free(local_2b0);
    }
    if ((FScriptContainerElement *)local_2d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2d0._0_8_);
    }
    uStack_2d8 = uStack_2d8 & 0xffffffff00000000;
    if (local_2e0 != (void *)0x0) {
      FMemory::Free(local_2e0);
    }
    iVar3 = SUB84(local_320._8_8_,4);
    local_320._8_8_ = local_320._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,0,(ForAnyElementType *)local_320,0,(int *)(local_320 + 0xc));
    }
    uVar5 = uStack_2f8._4_4_;
    local_2f0 = 0xffffffff;
    uStack_2f8 = (ulonglong)uStack_2f8._4_4_ << 0x20;
    if (0x80 < uVar5) {
      uStack_2f8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_320 + 0x10),0);
    }
    if (local_300 != (void *)0x0) {
      FMemory::Free(local_300);
    }
    if ((FScriptContainerElement *)local_320._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_320._0_8_);
    }
    DestructItems<FString,int>(local_358,(int)local_350);
    if (local_358 != (FString *)0x0) {
      FMemory::Free(local_358);
    }
    DestructItems<FString,int>(local_368,(int)local_360);
    if (local_368 != (FString *)0x0) {
      FMemory::Free(local_368);
    }
    if (local_378 != (void *)0x0) {
      FMemory::Free(local_378);
    }
    DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              (local_388,(int)local_380);
    if (local_388 != (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free(local_388);
    }
    DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              (local_398,(int)local_390);
    if (local_398 != (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free(local_398);
    }
    DestructItems<FString,int>
              ((FString *)local_458.BlockedFiles.AllocatorInstance.Data,
               local_458.BlockedFiles.ArrayNum);
    if (local_458.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.BlockedFiles.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_458.RequiredLoads.AllocatorInstance.Data,
               local_458.RequiredLoads.ArrayNum);
    if (local_458.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.RequiredLoads.AllocatorInstance.Data);
    }
    if (local_458.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.VerseEvents.AllocatorInstance.Data);
    }
    DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
               local_458.AssetEvents.AllocatorInstance.Data,local_458.AssetEvents.ArrayNum);
    if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
        local_458.AssetEvents.AllocatorInstance.Data !=
        (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free(local_458.AssetEvents.AllocatorInstance.Data);
    }
    DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
               local_458.PathEvents.AllocatorInstance.Data,local_458.PathEvents.ArrayNum);
    if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
        local_458.PathEvents.AllocatorInstance.Data !=
        (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free(local_458.PathEvents.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->GatheredDataProcessingLock);
  }
  FMemScope::~FMemScope(&local_3e0);
  FLLMScope::~FLLMScope(local_468);
  return UnableToProgress;
}

// TryGetAssetByObjectPath @ 142bb2d50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EExists __thiscall
UAssetRegistryImpl::TryGetAssetByObjectPath
          (UAssetRegistryImpl *this,FSoftObjectPath *param_1,FAssetData *param_2)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  EExists EVar4;
  FCachedAssetKey *pFVar5;
  FAssetData **ppFVar6;
  FCachedAssetKey local_28;
  FCachedAssetKey local_18;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if ((((char)(this->GuardedData).PersistentMountPoints.HashSize == '\0') ||
      ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 == '\0')) ||
     ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x3 != '\0')) {
    EVar4 = Unknown;
  }
  else {
    EVar4 = DoesNotExist;
  }
  pFVar5 = UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey(&local_18,param_1);
  local_28.OuterPath = pFVar5->OuterPath;
  local_28.ObjectName = pFVar5->ObjectName;
  ppFVar6 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
            ::Find((TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                    *)&(this->GuardedData).AssetCollisionEvent.field_0x18,&local_28);
  if ((ppFVar6 != (FAssetData **)0x0) && (*ppFVar6 != (FAssetData *)0x0)) {
    FAssetData::operator=(param_2,*ppFVar6);
    EVar4 = Exists;
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return EVar4;
}

// TryGetAssetPackageData @ 142bb2e60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EExists __thiscall
UAssetRegistryImpl::TryGetAssetPackageData
          (UAssetRegistryImpl *this,FName param_1,FAssetPackageData *param_2)

{
  EExists EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 0x98))();
  return EVar1;
}

// TryGetAssetPackageData @ 142bb2e90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EExists __thiscall
UAssetRegistryImpl::TryGetAssetPackageData
          (UAssetRegistryImpl *this,FName param_1,FAssetPackageData *param_2,FName *param_3)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  EExists EVar4;
  FAssetPackageData *pFVar5;
  
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (SRWLock ==
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 == '\0') ||
     ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x3 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((char)(this->GuardedData).PersistentMountPoints.HashSize == '\0') || (bVar3)) {
    EVar4 = Unknown;
  }
  else {
    EVar4 = DoesNotExist;
  }
  pFVar5 = FAssetRegistryState::GetAssetPackageData
                     ((FAssetRegistryState *)&(this->GuardedData).AssetCollisionEvent.field_0x18,
                      param_1,param_3);
  if (pFVar5 == (FAssetPackageData *)0x0) goto LAB_142bb2f93;
  if ((byte)(pFVar5->Flags >> 0x1e) == 1) {
    if (!bVar3) {
      bVar3 = IsEngineStartupModuleLoadingComplete();
      if (bVar3) goto LAB_142bb2f83;
    }
    EVar4 = Unknown;
  }
  else {
LAB_142bb2f83:
    FAssetPackageData::operator=(param_2,pFVar5);
    EVar4 = Exists;
  }
LAB_142bb2f93:
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return EVar4;
}

// UseFilterToExcludeAssets @ 142bb6380

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::UseFilterToExcludeAssets
          (UAssetRegistryImpl *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          FARCompiledFilter *param_2)

{
  UE::AssetRegistry::Utils::RunAssetsThroughFilter(param_1,param_2,Exclusive);
  return;
}

// UseFilterToExcludeAssets @ 142bb63a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UAssetRegistryImpl::UseFilterToExcludeAssets
          (UAssetRegistryImpl *this,TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          FARFilter *param_2)

{
  undefined1 auStack_288 [32];
  FARCompiledFilter local_268;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_288;
  if ((((((*(int *)&(param_2->TagsAndValues).field_0x8 !=
           *(int *)&(param_2->TagsAndValues).field_0x34 || (param_2->ClassPaths).ArrayNum != 0) ||
         (param_2->SoftObjectPaths).ArrayNum != 0) || (param_2->PackagePaths).ArrayNum != 0) ||
       (param_2->PackageNames).ArrayNum != 0) || param_2->WithPackageFlags != 0) ||
      param_2->WithoutPackageFlags != 0) {
    FARCompiledFilter::FARCompiledFilter(&local_268);
    (**(code **)(this->_padding_ + 0x1a8))(this,param_2,&local_268);
    (**(code **)(this->_padding_ + 0x188))(this,param_1,&local_268);
    FARCompiledFilter::~FARCompiledFilter(&local_268);
  }
  return;
}

// VerseCreated @ 142bb6450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::VerseCreated(UAssetRegistryImpl *this,FString *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  void *pvVar8;
  TStringView<wchar_t> *pTVar9;
  FName *pFVar10;
  ulong64 uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStackY_9b8 [32];
  FLLMScope local_988 [2];
  FString local_980;
  FEventContext local_968;
  FMemScope local_8f8 [2];
  FScriptContainerElement *local_8e8;
  int iStack_8e0;
  undefined4 uStack_8dc;
  TStringView<wchar_t> local_8d8;
  FName local_8c8 [2];
  TStringView<wchar_t> local_8b8;
  TStringView<wchar_t> local_8a8;
  wchar_t *local_898;
  undefined8 uStack_890;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0x134a,L"Updating the AssetRegistry is only available in editor");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_8e8 = (param_1->Data).AllocatorInstance.Data;
  iVar12 = (param_1->Data).ArrayNum;
  iVar13 = 0;
  iStack_8e0 = iVar12 + -1;
  if (iVar12 == 0) {
    iStack_8e0 = iVar13;
  }
  local_8b8._12_4_ = uStack_8dc;
  local_8b8.Size = iStack_8e0;
  local_8b8.DataPtr = (wchar_t *)local_8e8;
  bVar7 = FAssetDataGatherer::IsVerseFile(&local_8b8);
  bVar5 = false;
  if (bVar7) {
    local_980.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_980.Data.ArrayNum = 0;
    local_980.Data.ArrayMax = 0;
    bVar5 = FPackageName::TryConvertFilenameToLongPackageName
                      (param_1,&local_980,(FString *)0x0,AllowDots);
    FVar4.Data = local_980.Data.AllocatorInstance.Data;
    if (bVar5) {
      local_888.Base = local_868;
      local_888.End = local_52;
      local_888.CurPos = local_868;
      iVar12 = local_980.Data.ArrayNum + -1;
      if (local_980.Data.ArrayNum == 0) {
        iVar12 = iVar13;
      }
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      uVar11 = (ulong64)iVar12;
      if (local_52 < local_868 + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,uVar11);
      }
      if (iVar12 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_888.CurPos,FVar4.Data,uVar11 * 2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
      }
      local_8d8.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar12 = (param_1->Data).ArrayNum;
      local_8d8.Size = iVar12 + -1;
      if (iVar12 == 0) {
        local_8d8.Size = iVar13;
      }
      pTVar9 = FPathViews::GetExtension(&local_8a8,&local_8d8,true);
      pwVar3 = pTVar9->DataPtr;
      uStack_890 = *(undefined8 *)&pTVar9->Size;
      iVar12 = (int)*(undefined8 *)&pTVar9->Size;
      uVar11 = (ulong64)iVar12;
      local_898 = pwVar3;
      if (local_888.End < local_888.CurPos + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,uVar11);
      }
      if (iVar12 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_888.CurPos,pwVar3,uVar11 * 2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
      }
      local_968.ProgressUpdateData.bIsSet = false;
      local_968.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.PathEvents.ArrayNum = 0;
      local_968.PathEvents.ArrayMax = 0;
      local_968.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.AssetEvents.ArrayNum = 0;
      local_968.AssetEvents.ArrayMax = 0;
      local_968.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.VerseEvents.ArrayNum = 0;
      local_968.VerseEvents.ArrayMax = 0;
      local_968.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.RequiredLoads.ArrayNum = 0;
      local_968.RequiredLoads.ArrayMax = 0;
      local_968.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.BlockedFiles.ArrayNum = 0;
      local_968.BlockedFiles.ArrayMax = 0;
      local_968.bFileLoadedEventBroadcast = false;
      local_968.bScanStartedEventBroadcast = false;
      local_968.bHasSentFileLoadedEventBroadcast = false;
      local_968.bKnownGathersCompleteEventBroadcast = false;
      FLLMScope::FLLMScope(local_988,AssetRegistry,false,None,Default,true);
      FMemScope::FMemScope(local_8f8,AssetRegistry,true);
      SRWLock = &(this->GuardedData).PackageRedirects;
      piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if ((SRWLock ==
           (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
            *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if (local_888.End < local_888.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,1);
      }
      *local_888.CurPos = L'\0';
      pFVar10 = ::FName::FName(local_8c8,local_888.Base);
      UE::AssetRegistry::FAssetRegistryImpl::AddVerseFile
                ((FAssetRegistryImpl *)&this->_padding_,&local_968,*pFVar10);
      if (SRWLock !=
          (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
           *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      FMemScope::~FMemScope(local_8f8);
      FLLMScope::~FLLMScope(local_988);
      Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_968,false);
      bVar5 = true;
      DestructItems<FString,int>
                ((FString *)local_968.BlockedFiles.AllocatorInstance.Data,
                 local_968.BlockedFiles.ArrayNum);
      if (local_968.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.BlockedFiles.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_968.RequiredLoads.AllocatorInstance.Data,
                 local_968.RequiredLoads.ArrayNum);
      if (local_968.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.RequiredLoads.AllocatorInstance.Data);
      }
      if (local_968.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.VerseEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_968.AssetEvents.AllocatorInstance.Data,local_968.AssetEvents.ArrayNum);
      if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_968.AssetEvents.AllocatorInstance.Data !=
          (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_968.AssetEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_968.PathEvents.AllocatorInstance.Data,local_968.PathEvents.ArrayNum);
      if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_968.PathEvents.AllocatorInstance.Data !=
          (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_968.PathEvents.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    }
    else {
      bVar5 = false;
    }
    if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_980.Data.AllocatorInstance.Data);
    }
  }
  return bVar5;
}

// VerseDeleted @ 142bb6800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UAssetRegistryImpl::VerseDeleted(UAssetRegistryImpl *this,FString *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  void *pvVar8;
  TStringView<wchar_t> *pTVar9;
  FName *pFVar10;
  ulong64 uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStackY_9b8 [32];
  FLLMScope local_988 [2];
  FString local_980;
  FEventContext local_968;
  FMemScope local_8f8 [2];
  FScriptContainerElement *local_8e8;
  int iStack_8e0;
  undefined4 uStack_8dc;
  TStringView<wchar_t> local_8d8;
  FName local_8c8 [2];
  TStringView<wchar_t> local_8b8;
  TStringView<wchar_t> local_8a8;
  wchar_t *local_898;
  undefined8 uStack_890;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                     ,0x1367,L"Updating the AssetRegistry is only available in editor");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_8e8 = (param_1->Data).AllocatorInstance.Data;
  iVar12 = (param_1->Data).ArrayNum;
  iVar13 = 0;
  iStack_8e0 = iVar12 + -1;
  if (iVar12 == 0) {
    iStack_8e0 = iVar13;
  }
  local_8b8._12_4_ = uStack_8dc;
  local_8b8.Size = iStack_8e0;
  local_8b8.DataPtr = (wchar_t *)local_8e8;
  bVar7 = FAssetDataGatherer::IsVerseFile(&local_8b8);
  bVar5 = false;
  if (bVar7) {
    local_980.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_980.Data.ArrayNum = 0;
    local_980.Data.ArrayMax = 0;
    bVar5 = FPackageName::TryConvertFilenameToLongPackageName
                      (param_1,&local_980,(FString *)0x0,AllowDots);
    FVar4.Data = local_980.Data.AllocatorInstance.Data;
    if (bVar5) {
      local_888.Base = local_868;
      local_888.End = local_52;
      local_888.CurPos = local_868;
      iVar12 = local_980.Data.ArrayNum + -1;
      if (local_980.Data.ArrayNum == 0) {
        iVar12 = iVar13;
      }
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      uVar11 = (ulong64)iVar12;
      if (local_52 < local_868 + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,uVar11);
      }
      if (iVar12 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_888.CurPos,FVar4.Data,uVar11 * 2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
      }
      local_8d8.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar12 = (param_1->Data).ArrayNum;
      local_8d8.Size = iVar12 + -1;
      if (iVar12 == 0) {
        local_8d8.Size = iVar13;
      }
      pTVar9 = FPathViews::GetExtension(&local_8a8,&local_8d8,true);
      pwVar3 = pTVar9->DataPtr;
      uStack_890 = *(undefined8 *)&pTVar9->Size;
      iVar12 = (int)*(undefined8 *)&pTVar9->Size;
      uVar11 = (ulong64)iVar12;
      local_898 = pwVar3;
      if (local_888.End < local_888.CurPos + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,uVar11);
      }
      if (iVar12 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_888.CurPos,pwVar3,uVar11 * 2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
      }
      local_968.ProgressUpdateData.bIsSet = false;
      local_968.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.PathEvents.ArrayNum = 0;
      local_968.PathEvents.ArrayMax = 0;
      local_968.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.AssetEvents.ArrayNum = 0;
      local_968.AssetEvents.ArrayMax = 0;
      local_968.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.VerseEvents.ArrayNum = 0;
      local_968.VerseEvents.ArrayMax = 0;
      local_968.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.RequiredLoads.ArrayNum = 0;
      local_968.RequiredLoads.ArrayMax = 0;
      local_968.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_968.BlockedFiles.ArrayNum = 0;
      local_968.BlockedFiles.ArrayMax = 0;
      local_968.bFileLoadedEventBroadcast = false;
      local_968.bScanStartedEventBroadcast = false;
      local_968.bHasSentFileLoadedEventBroadcast = false;
      local_968.bKnownGathersCompleteEventBroadcast = false;
      FLLMScope::FLLMScope(local_988,AssetRegistry,false,None,Default,true);
      FMemScope::FMemScope(local_8f8,AssetRegistry,true);
      SRWLock = &(this->GuardedData).PackageRedirects;
      piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if ((SRWLock ==
           (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
            *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if (local_888.End < local_888.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,1);
      }
      *local_888.CurPos = L'\0';
      pFVar10 = ::FName::FName(local_8c8,local_888.Base);
      UE::AssetRegistry::FAssetRegistryImpl::RemoveVerseFile
                ((FAssetRegistryImpl *)&this->_padding_,&local_968,*pFVar10);
      if (SRWLock !=
          (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
           *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      FMemScope::~FMemScope(local_8f8);
      FLLMScope::~FLLMScope(local_988);
      Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_968,false);
      bVar5 = true;
      DestructItems<FString,int>
                ((FString *)local_968.BlockedFiles.AllocatorInstance.Data,
                 local_968.BlockedFiles.ArrayNum);
      if (local_968.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.BlockedFiles.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_968.RequiredLoads.AllocatorInstance.Data,
                 local_968.RequiredLoads.ArrayNum);
      if (local_968.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.RequiredLoads.AllocatorInstance.Data);
      }
      if (local_968.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.VerseEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_968.AssetEvents.AllocatorInstance.Data,local_968.AssetEvents.ArrayNum);
      if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_968.AssetEvents.AllocatorInstance.Data !=
          (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_968.AssetEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_968.PathEvents.AllocatorInstance.Data,local_968.PathEvents.ArrayNum);
      if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_968.PathEvents.AllocatorInstance.Data !=
          (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_968.PathEvents.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    }
    else {
      bVar5 = false;
    }
    if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_980.Data.AllocatorInstance.Data);
    }
  }
  return bVar5;
}

// WaitForCompletion @ 142bb6e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::WaitForCompletion(UAssetRegistryImpl *this)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  TArray<FString,TSizedDefaultAllocator<32>_> *lpCriticalSection;
  undefined1 *this_00;
  undefined1 *puVar2;
  FEventContext *pFVar3;
  bool *pbVar4;
  FAssetDataGatherer *pFVar5;
  code *pcVar6;
  float fVar7;
  longlong lVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  bool bVar15;
  EGatherStatus EVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  FThreadHeartBeat *pFVar19;
  uint *puVar20;
  FTlsAutoCleanup *pFVar21;
  longlong *plVar22;
  int *piVar23;
  bool bVar24;
  undefined1 auStackY_428 [32];
  byte local_3f8;
  byte local_3f7;
  char local_3f6;
  char local_3f5;
  undefined1 local_3f4;
  undefined1 local_3f3 [11];
  undefined1 local_3e8 [64];
  FScriptContainerElement *local_3a8;
  ForAnyElementType local_3a0;
  FScriptContainerElement *local_398;
  ForAnyElementType local_390;
  FScriptContainerElement *local_388;
  undefined4 local_380;
  FLLMScope local_378;
  FLLMScope local_374;
  FMemScope local_370;
  FMemScope local_368;
  FClassInheritanceContext local_360;
  code *local_340;
  undefined1 *local_338;
  code *local_330;
  undefined1 *local_328;
  FClassInheritanceContext local_320;
  byte *local_300;
  undefined1 *local_2f8;
  byte *local_2f0;
  undefined1 local_2e8 [104];
  longlong *local_280;
  bool local_278;
  FAssetRegistryImpl *local_268;
  FEventContext *local_260;
  FClassInheritanceContext *local_258;
  undefined1 local_250 [80];
  double local_200;
  int local_1f8;
  undefined4 local_1f4;
  bool local_1f0;
  undefined1 local_1e8 [64];
  void *local_1a8;
  undefined4 local_1a0;
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_198;
  void *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_138 [64];
  void *local_f8;
  undefined4 local_f0;
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  void *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_428;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2394,"UAssetRegistryImpl::WaitForCompletion",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x95a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2394);
  }
  FLLMScope::FLLMScope(&local_378,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_370,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_1e8._44_4_ = 0x80;
  local_320.Buffer = (FClassInheritanceBuffer *)0x0;
  local_320.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_320.bInheritanceMapUpToDate = false;
  local_320.bCodeGeneratorClassesUpToDate = false;
  local_1e8._0_8_ = 0;
  local_1e8._8_8_ = 0;
  local_1e8._32_8_ = 0;
  local_1e8._40_4_ = 0;
  local_1e8._52_4_ = 0;
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  local_198._0_8_ = 0;
  local_198._8_8_ = 0;
  local_198._32_8_ = 0;
  local_198._40_4_ = 0;
  local_198._52_4_ = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_1e8._48_4_ = 0xffffffff;
  local_198._44_4_ = 0x80;
  local_198._48_4_ = 0xffffffff;
  local_148 = 0xffffffffffffffff;
  local_140 = 1;
  uVar17 = GetRegisteredNativeClassesVersionNumber();
  uVar18 = GetRegisteredClassesVersionNumber();
  local_320.StackBuffer = (FClassInheritanceBuffer *)local_1e8;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_320,(FAssetRegistryImpl *)&this->_padding_,uVar17,uVar18);
  pFVar5 = *(FAssetDataGatherer **)
            &(this->GuardedData).CachedPathTree.ChildPathToParentPath.field_0x28;
  if (pFVar5 != (FAssetDataGatherer *)0x0) {
    FAssetDataGatherer::WaitForIdle(pFVar5,__real_3dcccccd);
  }
  local_3f5 = *(char *)&(this->GuardedData).PersistentMountPoints.Hash.SecondaryData;
  local_3f7 = (this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2;
  pFVar5 = *(FAssetDataGatherer **)
            &(this->GuardedData).CachedPathTree.ChildPathToParentPath.field_0x28;
  if (pFVar5 != (FAssetDataGatherer *)0x0) {
    bVar15 = FAssetDataGatherer::IsAsyncEnabled(pFVar5);
    local_3f6 = '\x01';
    if (bVar15) goto LAB_142bb7067;
  }
  local_3f6 = '\0';
LAB_142bb7067:
  local_150 = 0;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198);
  local_1a0 = 0;
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1e8);
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_370);
  FLLMScope::~FLLMScope(&local_378);
  dVar13 = _UNK_15076c718;
  dVar12 = ___xmm_bff0000000000000bff0000000000000;
  dVar11 = __real_bff0000000000000;
  fVar10 = __real_bf800000;
  uVar9 = _UNK_150631d98;
  lVar8 = ___xmm_00000000ffffffff0000008000000000;
  fVar7 = __real_3c23d70a;
  local_3f8 = local_3f7;
  do {
    piVar23 = &(this->GuardedData).PackageRedirects.ArrayNum;
    local_3e8[0x10] = false;
    local_3e8._24_8_ = (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
    local_3e8._32_4_ = 0;
    local_3e8._36_4_ = 0;
    local_3e8._40_8_ = (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0;
    local_3e8._48_4_ = 0;
    local_3e8._52_4_ = 0;
    local_3e8._56_8_ = (FScriptContainerElement *)0x0;
    local_3a8 = (FScriptContainerElement *)0x0;
    local_3a0.Data = (FScriptContainerElement *)0x0;
    local_398 = (FScriptContainerElement *)0x0;
    local_390.Data = (FScriptContainerElement *)0x0;
    local_388 = (FScriptContainerElement *)0x0;
    local_380 = 0;
    FLLMScope::FLLMScope(&local_374,AssetRegistry,false,None,Default,true);
    FMemScope::FMemScope(&local_368,AssetRegistry,true);
    if (piVar23 != (int *)0x0) {
      LOCK();
      *piVar23 = *piVar23 + 1;
      UNLOCK();
    }
    if ((SRWLock ==
         (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
          *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (piVar23 != (int *)0x0) {
      LOCK();
      *piVar23 = *piVar23 + -1;
      UNLOCK();
    }
    local_360.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
    local_360.Buffer = (FClassInheritanceBuffer *)0x0;
    local_360.StackBuffer = (FClassInheritanceBuffer *)0x0;
    local_360.bInheritanceMapUpToDate = false;
    local_360.bCodeGeneratorClassesUpToDate = false;
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
    local_98 = 0xffffffffffffffff;
    local_90 = 1;
    uVar17 = GetRegisteredNativeClassesVersionNumber();
    uVar18 = GetRegisteredClassesVersionNumber();
    local_360.StackBuffer = (FClassInheritanceBuffer *)local_138;
    UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
              (&local_360,(FAssetRegistryImpl *)&this->_padding_,uVar17,uVar18);
    bVar15 = IsInGameThread();
    if (bVar15) {
      lpCriticalSection = &(this->DeferredEvents).BlockedFiles;
      if (lpCriticalSection == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_00 = &(this->EnumerateAssetsEvent).field_0x18;
      if (this_00 != local_3e8) {
        if ((this->EnumerateAssetsEvent).field_0x28 == '\0') {
          if (local_3e8[0x10] != false) {
            local_3e8[0x10] = false;
          }
        }
        else {
          local_3e8._0_4_ = *(int *)&(this->EnumerateAssetsEvent).field_0x18;
          local_3e8._4_4_ = *(int *)&(this->EnumerateAssetsEvent).field_0x1c;
          local_3e8._8_4_ = *(int *)&(this->EnumerateAssetsEvent).field_0x20;
          local_3e8[0xc] = (bool)(this->EnumerateAssetsEvent).field_0x24;
          local_3e8._13_3_ = *(undefined3 *)&(this->EnumerateAssetsEvent).field_0x25;
          local_3e8[0x10] = true;
        }
      }
      puVar2 = &(this->EnumerateAssetsEvent).field_0x30;
      if (local_3e8 + 0x18 != puVar2) {
        DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                  ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                   local_3e8._24_8_,local_3e8._32_4_);
        if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._24_8_ !=
            (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
          FMemory::Free((void *)local_3e8._24_8_);
        }
        local_3e8._24_8_ = *(undefined8 *)puVar2;
        *(undefined8 *)puVar2 = 0;
        local_3e8._32_4_ = *(undefined4 *)&(this->EnumerateAssetsEvent).field_0x38;
        local_3e8._36_4_ = *(undefined4 *)&(this->EnumerateAssetsEvent).field_0x3c;
        *(undefined8 *)&(this->EnumerateAssetsEvent).field_0x38 = 0;
      }
      pFVar3 = &this->DeferredEvents;
      if ((FEventContext *)(local_3e8 + 0x28) != pFVar3) {
        DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                  ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                   local_3e8._40_8_,local_3e8._48_4_);
        if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._40_8_ !=
            (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
          FMemory::Free((void *)local_3e8._40_8_);
        }
        local_3e8._40_8_ = *(undefined8 *)&(pFVar3->ProgressUpdateData).TypedValue;
        (pFVar3->ProgressUpdateData).TypedValue.NumTotalAssets = 0;
        (pFVar3->ProgressUpdateData).TypedValue.NumAssetsProcessedByAssetRegistry = 0;
        local_3e8._48_8_ =
             *(undefined8 *)
              &(this->DeferredEvents).ProgressUpdateData.TypedValue.NumAssetsPendingDataLoad;
        (this->DeferredEvents).ProgressUpdateData.TypedValue.NumAssetsPendingDataLoad = 0;
        (this->DeferredEvents).ProgressUpdateData.TypedValue.bIsDiscoveringAssetFiles = false;
        *(undefined3 *)&(this->DeferredEvents).ProgressUpdateData.TypedValue.field_0xd = 0;
      }
      pbVar4 = &(this->DeferredEvents).ProgressUpdateData.bIsSet;
      if ((bool *)(local_3e8 + 0x38) != pbVar4) {
        if ((FScriptContainerElement *)local_3e8._56_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_3e8._56_8_);
        }
        local_3e8._56_8_ = *(undefined8 *)pbVar4;
        *(undefined8 *)pbVar4 = 0;
        local_3a8 = (this->DeferredEvents).PathEvents.AllocatorInstance.Data;
        (this->DeferredEvents).PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      piVar23 = &(this->DeferredEvents).PathEvents.ArrayNum;
      if ((int *)(local_3e8 + 0x48) != piVar23) {
        DestructItems<FString,int>((FString *)local_3a0.Data,(int)local_398);
        if (local_3a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Data);
        }
        local_3a0.Data = *(FScriptContainerElement **)piVar23;
        (this->DeferredEvents).PathEvents.ArrayNum = 0;
        (this->DeferredEvents).PathEvents.ArrayMax = 0;
        local_398 = (this->DeferredEvents).AssetEvents.AllocatorInstance.Data;
        (this->DeferredEvents).AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      piVar23 = &(this->DeferredEvents).AssetEvents.ArrayNum;
      if ((int *)(local_3e8 + 0x58) != piVar23) {
        DestructItems<FString,int>((FString *)local_390.Data,(int)local_388);
        if (local_390.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.Data);
        }
        local_390.Data = *(FScriptContainerElement **)piVar23;
        (this->DeferredEvents).AssetEvents.ArrayNum = 0;
        (this->DeferredEvents).AssetEvents.ArrayMax = 0;
        local_388 = (this->DeferredEvents).VerseEvents.AllocatorInstance.Data;
        (this->DeferredEvents).VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_380 = (this->DeferredEvents).VerseEvents.ArrayNum;
      UE::AssetRegistry::Impl::FEventContext::Clear((FEventContext *)this_00);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pFVar5 = *(FAssetDataGatherer **)
              &(this->GuardedData).CachedPathTree.ChildPathToParentPath.field_0x28;
    if ((pFVar5 != (FAssetDataGatherer *)0x0) &&
       (bVar15 = FAssetDataGatherer::IsSynchronous(pFVar5), bVar15)) {
      FAssetDataGatherer::WaitForIdle
                (*(FAssetDataGatherer **)
                  &(this->GuardedData).CachedPathTree.ChildPathToParentPath.field_0x28,fVar10);
    }
    local_260 = (FEventContext *)local_3e8;
    local_200 = dVar11;
    local_258 = &local_360;
    local_2e8[0] = false;
    local_2e8[1] = false;
    local_2e8._8_8_ = (FScriptContainerElement *)0x0;
    local_2e8._16_4_ = 0;
    local_2e8._20_4_ = 0;
    local_2e8._24_4_ = 0;
    local_2e8._28_4_ = 0;
    local_2e8[0x20] = false;
    local_2e8._48_8_ = dVar12;
    local_2e8._56_8_ = dVar13;
    local_2e8._64_8_ = 0;
    local_280 = (longlong *)0x0;
    local_278 = false;
    local_250._0_8_ = (void *)0x0;
    local_250._8_4_ = 0;
    local_250._12_4_ = -1;
    local_250._32_8_ = (void *)0x0;
    local_250._40_8_ = lVar8;
    local_250._48_8_ = uVar9;
    local_250._64_8_ = (ForElementType<FSetElementId>)0x0;
    local_250._72_4_ = 0;
    local_1f8 = 0;
    local_1f4._0_1_ = true;
    local_1f4._1_1_ = true;
    local_1f4._2_1_ = true;
    local_1f4._3_1_ = false;
    local_1f0 = false;
    local_268 = (FAssetRegistryImpl *)&this->_padding_;
    EVar16 = UE::AssetRegistry::FAssetRegistryImpl::TickGatherer
                       ((FAssetRegistryImpl *)&this->_padding_,(FTickContext *)local_2e8);
    if (local_250._12_4_ != -1) {
      local_250._72_4_ = 0;
      if ((ForElementType<FSetElementId>)local_250._64_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_250._64_8_);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_250,0,local_250._8_4_);
      local_250._8_4_ = 0;
      if (local_250._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_250,0,(int *)(local_250 + 0xc));
      }
      uVar14 = local_250._44_4_;
      local_250._48_8_ = 0xffffffff;
      local_250._40_8_ = (ulonglong)(uint)local_250._44_4_ << 0x20;
      if (0x80 < (uint)uVar14) {
        local_250._40_8_ = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_250 + 0x10),0);
      }
      if ((void *)local_250._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_250._32_8_);
      }
      if ((void *)local_250._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_250._0_8_);
      }
    }
    if (local_2e8._64_8_ != 0) {
      plVar22 = (longlong *)(local_2e8 + 0x50);
      if (local_280 != (longlong *)0x0) {
        plVar22 = local_280;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if ((FScriptContainerElement *)local_2e8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2e8._8_8_);
    }
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8);
    local_f0 = 0;
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
    if (SRWLock !=
        (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
         *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    FMemScope::~FMemScope(&local_368);
    FLLMScope::~FLLMScope(&local_374);
    Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,
              (FEventContext *)local_3e8,true);
    local_3f8 = local_3f8 | local_380._2_1_;
    if ((EVar16 & ~TickGameThreadActiveGatherIdle) == TickActiveGatherActive) {
LAB_142bb7775:
      pFVar19 = FThreadHeartBeat::Get();
      FThreadHeartBeat::HeartBeat(pFVar19);
      if ((EVar16 == TickActiveGatherActive) && (local_3f6 != '\0')) {
        FWindowsPlatformProcess::SleepNoStats(fVar7);
      }
    }
    else {
      if (EVar16 != TickActiveGatherIdle) {
        if (EVar16 == WaitingForEvents) {
          bVar15 = IsInGameThread();
          if (bVar15) {
            puVar20 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
            local_338 = &local_3f4;
            local_340 = UE::Core::Private::Function::
                        TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                        ::Call;
            pFVar21 = FThreadSingletonInitializer::Get
                                ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_340,puVar20
                                );
            if (*(char *)(pFVar21 + 4) == '\0') goto LAB_142bb7775;
          }
          bVar15 = IsInGameThread();
          if (bVar15) {
            puVar20 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
            local_328 = local_3f3;
            local_330 = UE::Core::Private::Function::
                        TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                        ::Call;
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_330,puVar20);
          }
          if (2 < (byte)LogAssetRegistry._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
        }
        else if (EVar16 == UnableToProgress) {
          if (3 < (byte)LogAssetRegistry._0_1_) {
            IsEngineStartupModuleLoadingComplete();
            IsInGameThread();
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          }
        }
        else if ((EVar16 == Complete) && (local_3f5 != '\0')) {
          if (piVar1 != (int *)0x0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          if ((SRWLock ==
               (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
                *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                  ,0x43,L""), bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
          if (piVar1 != (int *)0x0) {
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          if ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 == '\0') {
            if (1 < (byte)LogAssetRegistry._0_1_) {
              IsInGameThread();
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry)
              ;
            }
          }
          else if (((local_3f8 == 0) && (local_3f7 == 0)) && (bVar15 = IsInGameThread(), bVar15)) {
            local_300 = &local_3f8;
            local_2f8 = local_3e8;
            local_2f0 = &local_3f7;
            `UAssetRegistryImpl::WaitForCompletion'::__l60::<lambda_1>::operator()(&local_300);
          }
          if (SRWLock !=
              (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
               *)0x0) {
            ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
          }
        }
        DestructItems<FString,int>((FString *)local_390.Data,(int)local_388);
        if (local_390.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.Data);
        }
        DestructItems<FString,int>((FString *)local_3a0.Data,(int)local_398);
        if (local_3a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Data);
        }
        if ((FScriptContainerElement *)local_3e8._56_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_3e8._56_8_);
        }
        DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                  ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                   local_3e8._40_8_,local_3e8._48_4_);
        if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._40_8_ !=
            (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
          FMemory::Free((void *)local_3e8._40_8_);
        }
        DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                  ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                   local_3e8._24_8_,local_3e8._32_4_);
        if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._24_8_ !=
            (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
          FMemory::Free((void *)local_3e8._24_8_);
        }
        if (bVar24) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      pFVar19 = FThreadHeartBeat::Get();
      FThreadHeartBeat::HeartBeat(pFVar19);
    }
    DestructItems<FString,int>((FString *)local_390.Data,(int)local_388);
    if (local_390.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data);
    }
    DestructItems<FString,int>((FString *)local_3a0.Data,(int)local_398);
    if (local_3a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data);
    }
    if ((FScriptContainerElement *)local_3e8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3e8._56_8_);
    }
    DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._40_8_
               ,local_3e8._48_4_);
    if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._40_8_ !=
        (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free((void *)local_3e8._40_8_);
    }
    DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
              ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._24_8_,
               local_3e8._32_4_);
    if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)local_3e8._24_8_ !=
        (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
      FMemory::Free((void *)local_3e8._24_8_);
    }
  } while( true );
}

// WaitForPackage @ 142bb7b30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::WaitForPackage(UAssetRegistryImpl *this,FString *param_1)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  FString local_d8;
  FEventContext local_c8;
  TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
  local_58;
  FString local_38;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2587,"UAssetRegistryImpl::WaitForPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0xa1b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2587);
  }
  if (((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x2 == '\0') ||
     ((this->GuardedData).PersistentMountPoints.Hash.SecondaryData.field_0x3 != '\0')) {
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    ::FString::FString(&local_38,L"");
    bVar3 = FPackageName::TryConvertLongPackageNameToFilename(param_1,&local_d8,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      local_c8.ProgressUpdateData.bIsSet = false;
      local_c8.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.PathEvents.ArrayNum = 0;
      local_c8.PathEvents.ArrayMax = 0;
      local_c8.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.AssetEvents.ArrayNum = 0;
      local_c8.AssetEvents.ArrayMax = 0;
      local_c8.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.VerseEvents.ArrayNum = 0;
      local_c8.VerseEvents.ArrayMax = 0;
      local_c8.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.RequiredLoads.ArrayNum = 0;
      local_c8.RequiredLoads.ArrayMax = 0;
      local_c8.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.BlockedFiles.ArrayNum = 0;
      local_c8.BlockedFiles.ArrayMax = 0;
      local_c8.bFileLoadedEventBroadcast = false;
      local_c8.bScanStartedEventBroadcast = false;
      local_c8.bHasSentFileLoadedEventBroadcast = false;
      local_c8.bKnownGathersCompleteEventBroadcast = false;
      FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
      FMemScope::FMemScope(&local_res18,AssetRegistry,true);
      SRWLock = &(this->GuardedData).PackageRedirects;
      local_58.Priority = PriorityHigh;
      piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_58.GuardWrapper.TypedValue.Mutex = (FRWLockWithPriority *)SRWLock;
      local_58.Lock = (FRWLockWithPriority *)SRWLock;
      if ((SRWLock ==
           (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
            *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      local_58.GuardWrapper.bIsSet = true;
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      UE::AssetRegistry::FAssetRegistryImpl::TickGatherPackage
                ((FAssetRegistryImpl *)&this->_padding_,&local_58,&local_c8,param_1,&local_d8);
      if ((local_58.GuardWrapper.bIsSet != false) &&
         (local_58.GuardWrapper.TypedValue.Mutex != (FRWLockWithPriority *)0x0)) {
        ReleaseSRWLockExclusive((PSRWLOCK)local_58.GuardWrapper.TypedValue.Mutex);
      }
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res8);
      Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_c8,false);
      DestructItems<FString,int>
                ((FString *)local_c8.BlockedFiles.AllocatorInstance.Data,
                 local_c8.BlockedFiles.ArrayNum);
      if (local_c8.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.BlockedFiles.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_c8.RequiredLoads.AllocatorInstance.Data,
                 local_c8.RequiredLoads.ArrayNum);
      if (local_c8.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.RequiredLoads.AllocatorInstance.Data);
      }
      if (local_c8.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.VerseEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_c8.AssetEvents.AllocatorInstance.Data,local_c8.AssetEvents.ArrayNum);
      if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_c8.AssetEvents.AllocatorInstance.Data !=
          (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_c8.AssetEvents.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
                ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
                 local_c8.PathEvents.AllocatorInstance.Data,local_c8.PathEvents.ArrayNum);
      if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
          local_c8.PathEvents.AllocatorInstance.Data !=
          (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
        FMemory::Free(local_c8.PathEvents.AllocatorInstance.Data);
      }
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForPremadeAssetRegistry @ 142bb7df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UAssetRegistryImpl::WaitForPremadeAssetRegistry(UAssetRegistryImpl *this)

{
  int *piVar1;
  TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
  *SRWLock;
  ForElementType<FSetElementId> *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  bool bVar9;
  undefined1 auStackY_1b8 [32];
  FLLMScope local_188 [5];
  FEventContext local_178;
  FMemScope local_100;
  FClassInheritanceContext local_f8;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2550,"UAssetRegistryImpl::WaitForPremadeAssetRegistry",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x9f6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2550);
  }
  local_178.PathEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.PathEvents.ArrayNum = 0;
  local_178.PathEvents.ArrayMax = 0;
  local_178.AssetEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.AssetEvents.ArrayNum = 0;
  local_178.AssetEvents.ArrayMax = 0;
  local_178.VerseEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.VerseEvents.ArrayNum = 0;
  local_178.VerseEvents.ArrayMax = 0;
  local_178.RequiredLoads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.RequiredLoads.ArrayNum = 0;
  local_178.RequiredLoads.ArrayMax = 0;
  local_178.BlockedFiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.BlockedFiles.ArrayNum = 0;
  local_178.BlockedFiles.ArrayMax = 0;
  local_178.bFileLoadedEventBroadcast = false;
  local_178.bScanStartedEventBroadcast = false;
  local_178.bHasSentFileLoadedEventBroadcast = false;
  local_178.bKnownGathersCompleteEventBroadcast = false;
  local_178.ProgressUpdateData.bIsSet = false;
  FLLMScope::FLLMScope(local_188,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_100,AssetRegistry,true);
  SRWLock = &(this->GuardedData).PackageRedirects;
  piVar1 = &(this->GuardedData).PackageRedirects.ArrayNum;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((SRWLock ==
       (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
        *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  local_f8.Buffer = (FClassInheritanceBuffer *)0x0;
  local_f8.AssetRegistryImpl = (FAssetRegistryImpl *)0x0;
  local_f8.bInheritanceMapUpToDate = false;
  local_f8.bCodeGeneratorClassesUpToDate = false;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 1;
  uVar7 = GetRegisteredNativeClassesVersionNumber();
  uVar8 = GetRegisteredClassesVersionNumber();
  local_f8.StackBuffer = (FClassInheritanceBuffer *)local_d8;
  UE::AssetRegistry::Impl::FClassInheritanceContext::SelectBuffer
            (&local_f8,(FAssetRegistryImpl *)&this->_padding_,uVar7,uVar8);
  iVar3 = *(int *)(this->GuardedData).ClassGeneratorNames.Hash.InlineData;
  if (iVar3 != 0) {
    *(int *)(this->GuardedData).ClassGeneratorNames.Hash.InlineData = iVar3 + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (((this->GuardedData).ClassGeneratorNames.Hash.SecondaryData ==
         (ForElementType<FSetElementId>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Consumed != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x2d2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar4 = (this->GuardedData).ClassGeneratorNames.Hash.SecondaryData;
    (**(code **)(*(longlong *)FVar4 + 0x20))(FVar4,0xffffffff,0);
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pFVar2 = &(this->GuardedData).ClassGeneratorNames.Hash;
    *(int *)pFVar2->InlineData = *(int *)pFVar2->InlineData + -1;
    if (*(int *)pFVar2->InlineData == 0) {
      if (((this->GuardedData).ClassGeneratorNames.Hash.SecondaryData ==
           (ForElementType<FSetElementId>)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Consumed != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                             ,0x2da,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FGenericPlatformProcess::ReturnSynchEventToPool
                ((FEvent *)(this->GuardedData).ClassGeneratorNames.Hash.SecondaryData);
      (this->GuardedData).ClassGeneratorNames.Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
    }
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  iVar3 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  if (SRWLock !=
      (TArray<UE::AssetRegistry::FAssetRegistryImpl::FAssetRegistryPackageRedirect,TSizedDefaultAllocator<32>_>
       *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_188);
  Broadcast((UAssetRegistryImpl *)&this[-1].DeferredEventsCriticalSection,&local_178,false);
  DestructItems<FString,int>
            ((FString *)local_178.BlockedFiles.AllocatorInstance.Data,
             local_178.BlockedFiles.ArrayNum);
  if (local_178.BlockedFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.BlockedFiles.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_178.RequiredLoads.AllocatorInstance.Data,
             local_178.RequiredLoads.ArrayNum);
  if (local_178.RequiredLoads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.RequiredLoads.AllocatorInstance.Data);
  }
  if (local_178.VerseEvents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VerseEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FAssetData,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_178.AssetEvents.AllocatorInstance.Data,local_178.AssetEvents.ArrayNum);
  if ((TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_178.AssetEvents.AllocatorInstance.Data !=
      (TTuple<FAssetData,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_178.AssetEvents.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,enum_UE::AssetRegistry::Impl::FEventContext::EEvent>,int>
            ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
             local_178.PathEvents.AllocatorInstance.Data,local_178.PathEvents.ArrayNum);
  if ((TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)
      local_178.PathEvents.AllocatorInstance.Data !=
      (TTuple<FString,UE::AssetRegistry::Impl::FEventContext::EEvent> *)0x0) {
    FMemory::Free(local_178.PathEvents.AllocatorInstance.Data);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// _getUObject @ 142bb8460

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall UAssetRegistryImpl::_getUObject(UAssetRegistryImpl *this)

{
  return (UObject *)&this[-1].DeferredEventsCriticalSection;
}

// operator() @ 150498240

bool __thiscall `UAssetRegistryImpl::WaitForCompletion'::__l60::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8470630944661834183>);
  if (bVar2) {
    IsInGameThread();
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8470630944661834183>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

