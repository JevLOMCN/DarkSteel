// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 174

// `dynamic_initializer_for_'CVarPreferLocalForNonAssets'' @ 141167740

void __cdecl _dynamic_initializer_for__CVarPreferLocalForNonAssets__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPreferLocalForNonAssets,L"s.PreferLocalForNonAssets",&GPreferLocalForNonAssets,
             L"Set to true to look at the local file sytem for files before loading from StorageServer"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPreferLocalForNonAssets__);
  return;
}

// `dynamic_initializer_for_'CVar_StorageServerIoDispatcherBatchSize'' @ 141167790

void __cdecl _dynamic_initializer_for__CVar_StorageServerIoDispatcherBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_StorageServerIoDispatcherBatchSize,L"s.StorageServerIoDispatcherBatchSize",
             &GStorageServerIoDispatcherBatchSize,L"StorageServer IoDispatcher batch size.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_StorageServerIoDispatcherBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVar_StorageServerIoDispatcherMaxActiveBatchCount'' @ 1411677e0

void __cdecl _dynamic_initializer_for__CVar_StorageServerIoDispatcherMaxActiveBatchCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_StorageServerIoDispatcherMaxActiveBatchCount,
             L"s.StorageServerIoDispatcherMaxActiveBatchCount",
             &GStorageServerIoDispatcherMaxActiveBatchCount,
             L"StorageServer IoDispatcher max submitted batches count.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_StorageServerIoDispatcherMaxActiveBatchCount__);
  return;
}

// `dynamic_initializer_for_'GAssumedImmutableTimeStamp'' @ 141167830

void __cdecl _dynamic_initializer_for__GAssumedImmutableTimeStamp__(void)

{
  FDateTime::Now();
  return;
}

// `dynamic_initializer_for_'GStorageServerEngineStartupPrecache'' @ 141167850

void __cdecl _dynamic_initializer_for__GStorageServerEngineStartupPrecache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GStorageServerEngineStartupPrecache__);
  return;
}

// `dynamic_initializer_for_'LogCacheJournal'' @ 141167870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCacheJournal__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCacheJournal,L"LogCacheJournal",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCacheJournal__);
  return;
}

// `dynamic_initializer_for_'LogStorageServerConnection'' @ 1411678b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStorageServerConnection__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStorageServerConnection,L"LogStorageServerConnection",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStorageServerConnection__);
  return;
}

// `dynamic_initializer_for_'LogStorageServerPlatformBackend'' @ 1411678f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStorageServerPlatformBackend__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStorageServerPlatformBackend,L"LogStorageServerPlatformBackend"
             ,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStorageServerPlatformBackend__);
  return;
}

// `dynamic_initializer_for_'LogStorageServerPlatformFile'' @ 141167930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStorageServerPlatformFile__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStorageServerPlatformFile,L"LogStorageServerPlatformFile",Log,
             All);
  atexit(_dynamic_atexit_destructor_for__LogStorageServerPlatformFile__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStorageServerClient'' @ 141167970

void __cdecl _dynamic_initializer_for__ModuleRegistrantStorageServerClient__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StorageServerClient";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StorageServerClient",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStorageServerClientModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h__Script_StorageServerClient_4181736074'' @ 1411679c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h__Script_StorageServerClient_4181736074__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StorageServerClient",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h__Script_StorageServerClient_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StorageServerClient'' @ 141167a00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StorageServerClient__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbf79720c;
  local_res8[0].DeclarationsHash = 0x3206b730;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StorageServerClient,L"/Script/StorageServerClient",
             &Z_Registration_Info_UPackage__Script_StorageServerClient,local_res8);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterBackBuffer'' @ 141167a40

void __cdecl _dynamic_initializer_for____GTraceCounterBackBuffer__(void)

{
  __GTraceCounterBackBuffer.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/BlockingStorage/BackBuffer",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterBackBuffer.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterBackBuffer__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterFrontBuffer'' @ 141167a80

void __cdecl _dynamic_initializer_for____GTraceCounterFrontBuffer__(void)

{
  __GTraceCounterFrontBuffer.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/BlockingStorage/FrontBuffer",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterFrontBuffer.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterFrontBuffer__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterStorageServerCache_HitRatioBytes'' @ 141167ac0

void __cdecl _dynamic_initializer_for____GTraceCounterStorageServerCache_HitRatioBytes__(void)

{
  __GTraceCounterStorageServerCache_HitRatioBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/FileCache/HitRatio",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterStorageServerCache_HitRatioBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterStorageServerCache_HitRatioBytes__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenCacheHit'' @ 141167b00

void __cdecl _dynamic_initializer_for____GTraceCounterZenCacheHit__(void)

{
  __GTraceCounterZenCacheHit.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/Cache/Hit",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenCacheHit.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenCacheHit__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenCacheHitBytes'' @ 141167b40

void __cdecl _dynamic_initializer_for____GTraceCounterZenCacheHitBytes__(void)

{
  __GTraceCounterZenCacheHitBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/Cache/HitBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterZenCacheHitBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenCacheHitBytes__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenCacheMiss'' @ 141167b80

void __cdecl _dynamic_initializer_for____GTraceCounterZenCacheMiss__(void)

{
  __GTraceCounterZenCacheMiss.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/Cache/Miss",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenCacheMiss.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenCacheMiss__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenCacheMissBytes'' @ 141167bc0

void __cdecl _dynamic_initializer_for____GTraceCounterZenCacheMissBytes__(void)

{
  __GTraceCounterZenCacheMissBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/Cache/MissBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterZenCacheMissBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenCacheMissBytes__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenCacheRatio'' @ 141167c00

void __cdecl _dynamic_initializer_for____GTraceCounterZenCacheRatio__(void)

{
  __GTraceCounterZenCacheRatio.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/Cache/HitRatio",TraceCounterType_Float,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenCacheRatio.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenCacheRatio__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenHttpClientSerializedBytes'' @ 141167c40

void __cdecl _dynamic_initializer_for____GTraceCounterZenHttpClientSerializedBytes__(void)

{
  __GTraceCounterZenHttpClientSerializedBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/SerializedBytes (compressed)",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenHttpClientSerializedBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenHttpClientSerializedBytes__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenHttpClientThroughputBytes'' @ 141167c80

void __cdecl _dynamic_initializer_for____GTraceCounterZenHttpClientThroughputBytes__(void)

{
  __GTraceCounterZenHttpClientThroughputBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/ThroughputBytes (decompressed)",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenHttpClientThroughputBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenHttpClientThroughputBytes__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenJournalSectionedChunks'' @ 141167cc0

void __cdecl _dynamic_initializer_for____GTraceCounterZenJournalSectionedChunks__(void)

{
  __GTraceCounterZenJournalSectionedChunks.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/JournalSectioned/Chunks",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenJournalSectionedChunks.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenJournalSectionedChunks__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenJournalSectionedEntries'' @ 141167d00

void __cdecl _dynamic_initializer_for____GTraceCounterZenJournalSectionedEntries__(void)

{
  __GTraceCounterZenJournalSectionedEntries.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/JournalSectioned/Entries",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenJournalSectionedEntries.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenJournalSectionedEntries__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenJournalSimpleChunks'' @ 141167d40

void __cdecl _dynamic_initializer_for____GTraceCounterZenJournalSimpleChunks__(void)

{
  __GTraceCounterZenJournalSimpleChunks.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/JournalSimple/Chunks",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenJournalSimpleChunks.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenJournalSimpleChunks__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenJournalSimpleEntries'' @ 141167d80

void __cdecl _dynamic_initializer_for____GTraceCounterZenJournalSimpleEntries__(void)

{
  __GTraceCounterZenJournalSimpleEntries.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/JournalSimple/Entries",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenJournalSimpleEntries.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenJournalSimpleEntries__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenJournalSimpleInvalidated'' @ 141167dc0

void __cdecl _dynamic_initializer_for____GTraceCounterZenJournalSimpleInvalidated__(void)

{
  __GTraceCounterZenJournalSimpleInvalidated.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/JournalSimple/Invalidated",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterZenJournalSimpleInvalidated.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenJournalSimpleInvalidated__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenLinearStrategyCacheCurrentSize'' @ 141167e00

void __cdecl _dynamic_initializer_for____GTraceCounterZenLinearStrategyCacheCurrentSize__(void)

{
  __GTraceCounterZenLinearStrategyCacheCurrentSize.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/LinearStrategyCache/CurrentSize",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterZenLinearStrategyCacheCurrentSize.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenLinearStrategyCacheCurrentSize__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterZenLinearStrategyCacheInvalidSize'' @ 141167e40

void __cdecl _dynamic_initializer_for____GTraceCounterZenLinearStrategyCacheInvalidSize__(void)

{
  __GTraceCounterZenLinearStrategyCacheInvalidSize.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"ZenClient/LinearStrategyCache/InvalidSize",TraceCounterType_Int,
                  TraceCounterDisplayHint_Memory);
  LOCK();
  __GTraceCounterZenLinearStrategyCacheInvalidSize.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterZenLinearStrategyCacheInvalidSize__);
  return;
}

// `scalar_deleting_destructor' @ 148cac4d0

void * __thiscall
FStorageServerClientModule::_scalar_deleting_destructor_
          (FStorageServerClientModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UPackage__Script_StorageServerClient @ 148cac510

UPackage * __cdecl Z_Construct_UPackage__Script_StorageServerClient(void)

{
  if (Z_Registration_Info_UPackage__Script_StorageServerClient.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StorageServerClient.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StorageServerClient.OuterSingleton;
}

// Z_Construct_UClass_UZenStreamingSettings @ 148cac610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UZenStreamingSettings(void)

{
  if (Z_Registration_Info_UClass_UZenStreamingSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UZenStreamingSettings.OuterSingleton,
               &Z_Construct_UClass_UZenStreamingSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UZenStreamingSettings.OuterSingleton;
}

// NewProp_bShowZenBadge_SetBit @ 148cac650

void __cdecl
Z_Construct_UClass_UZenStreamingSettings_Statics::NewProp_bShowZenBadge_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148cac660

void * __thiscall
IStorageServerClientModule::_scalar_deleting_destructor_
          (IStorageServerClientModule *this,uint param_1)

{
  *this = (IStorageServerClientModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<<<int> @ 148cac830

FArchive * __cdecl operator<<<int>(FArchive *param_1,TOptional<int> *param_2)

{
  TOptional<int>::Serialize(param_2,param_1);
  return param_1;
}

// FCacheEntry> @ 148cac860

FArchive * __cdecl
operator<<<TInterval<unsigned___int64>,StorageServer::FCacheEntry>
          (FArchive *param_1,TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *param_2
          )

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if ((undefined8 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    *(undefined8 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->field_0x8;
  puVar2 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if ((undefined8 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)puVar1);
    }
  }
  else {
    *(undefined8 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  StorageServer::operator<<(param_1,(FCacheEntry *)&param_2->field_0x10);
  return param_1;
}

// FCacheEntry,0>,FDefaultSetAllocator> @ 148cac920

FArchive * __cdecl
operator<<<TTuple<TInterval<unsigned___int64>,StorageServer::
FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::
FCacheEntry_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  TInterval<unsigned___int64> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::
  FCacheEntry>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_148cb1afe;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_148cb1afe:
  uVar11 = (ulonglong)uVar13;
  uVar7 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar7 = uVar10;
      while (uVar13 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_148cb1bdb;
        uVar13 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_148cb1bdb:
        uVar10 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar6) {
      do {
        pTVar8 = (TInterval<unsigned___int64> *)
                 (*(longlong *)&param_2->Elements + (longlong)(int)uVar10 * 0x50);
        uVar6 = ::GetTypeHash(pTVar8);
        uVar6 = uVar6 & *piVar1 - 1U;
        *(uint *)((longlong)&pTVar8[4].Max + 4) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)&pTVar8[4].Max = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FCacheChunkInfo,0>,FDefaultSetAllocator> @ 148cac930

FArchive * __cdecl
operator<<<TTuple<FIoChunkId,StorageServer::
FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::
FCacheChunkInfo_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FIoChunkId,StorageServer::
  FCacheChunkInfo>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_148cb1db6;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_148cb1db6:
  uVar11 = (ulonglong)uVar14;
  uVar8 = uVar10;
  do {
    FVar3 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar3;
    }
    uVar5 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar12;
      uVar8 = uVar10;
      while (uVar14 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_148cb1e8b;
        uVar14 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_148cb1e8b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar13 = (undefined8 *)((longlong)(int)uVar10 * 0x40 + *(longlong *)&param_2->Elements);
        uVar7 = *(uint *)(puVar13 + 1);
        uVar2 = *puVar13;
        uVar14 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar7 = ((((((uVar14 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                    0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar7 & 0xff)) * 0x21 +
                 (uVar7 >> 8 & 0xff)) * 0x21 + (uVar7 >> 0x10 & 0xff)) * 0x21 +
                (uVar14 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar7 >> 0x18) +
                ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar13 + 0x3c) = uVar7;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar13 + 7) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FCacheEntry,0>_>,0>,FDefaultSetAllocator> @ 148cac940

FArchive * __cdecl
operator<<<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::
FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer
::
FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer
::
FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer
::FCacheEntry_0>_>_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::
  FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer
  ::
  FCacheEntry_0>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_148cb2126;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_148cb2126:
  uVar11 = (ulonglong)uVar14;
  uVar8 = uVar10;
  do {
    FVar3 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar3;
    }
    uVar5 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar12;
      uVar8 = uVar10;
      while (uVar14 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_148cb21fb;
        uVar14 = puVar12[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_148cb21fb:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar13 = (undefined8 *)((longlong)(int)uVar10 * 0x68 + *(longlong *)&param_2->Elements);
        uVar7 = *(uint *)(puVar13 + 1);
        uVar2 = *puVar13;
        uVar14 = (uint)((ulonglong)uVar2 >> 0x20);
        uVar7 = ((((((uVar14 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                    0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar7 & 0xff)) * 0x21 +
                 (uVar7 >> 8 & 0xff)) * 0x21 + (uVar7 >> 0x10 & 0xff)) * 0x21 +
                (uVar14 & 0xff) * -0x13be2b1f + ((uint)((ulonglong)uVar2 >> 8) & 0xff) * -0x7aa34abf
                + ((uint)((ulonglong)uVar2 >> 0x10) & 0xff) * 0x40a9121 +
                ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 + (uVar7 >> 0x18) +
                ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 & *piVar1 - 1U;
        *(uint *)((longlong)puVar13 + 100) = uVar7;
        FVar3 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FJournalStoreEntry,TSizedDefaultAllocator<32>_> @ 148cac950

FArchive * __cdecl
operator<<<StorageServer::FJournalStoreEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x50);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x33334)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x50;
              ::operator<<(param_1,(FIoChunkId *)pFVar9);
              StorageServer::operator<<(param_1,(FCacheEntry *)(pFVar9 + 0x10));
              ::operator<<(param_1,(bool *)(pFVar9 + 0x48));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x850,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
              DefaultConstructItems<StorageServer::FJournalStoreEntry,int>(pFVar9,1);
              ::operator<<(param_1,(FIoChunkId *)pFVar9);
              StorageServer::operator<<(param_1,(FCacheEntry *)(pFVar9 + 0x10));
              ::operator<<(param_1,(bool *)(pFVar9 + 0x48));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 148cac960

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::
FCacheEntry>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x50,(longlong)*(int *)&param_2->field_0xc * 0x50);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_148cacc7c;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_148cacc7c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<TInterval<unsigned___int64>,StorageServer::FCacheEntry>
                  (param_1,(TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *)
                           ((longlong)local_50.CurrentBitIndex * 0x50 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x50,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x50);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x50) = 0xffffffff;
          }
        }
        TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *)0x0;
        if (local_78.Pointer !=
            (TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0xffffffffffffffff;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x48) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<TInterval<unsigned___int64>,StorageServer::FCacheEntry>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry> *)
                  (ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 148caccf0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FIoChunkId,StorageServer::
FCacheChunkInfo>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uchar *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FIoChunkId *pFVar11;
  FIoChunkId *pFVar12;
  uint *puVar13;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 6,(longlong)*(int *)&param_2->field_0xc << 6);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    iVar7 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar7 != 0) {
      puVar13 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar13 = local_78.Pointer;
      }
      uVar10 = *puVar13;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_148cad01c;
        uVar10 = puVar13[lVar9 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar7 < iStack_64) {
LAB_148cad01c:
        iStack_64 = iVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar7) {
      do {
        pFVar12 = (FIoChunkId *)((longlong)local_50.CurrentBitIndex * 0x40 + *(longlong *)local_58);
        ::operator<<(param_1,pFVar12);
        TOptional<unsigned___int64>::Serialize
                  ((TOptional<unsigned___int64> *)(pFVar12[1].Id + 4),param_1);
        TOptional<__int64>::Serialize((TOptional<__int64> *)(pFVar12[2].Id + 8),param_1);
        TOptional<int>::Serialize((TOptional<int> *)(pFVar12 + 4),param_1);
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar10 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar8 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar8;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar12 = (FIoChunkId *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)((longlong)iVar7 * 0x40 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x40 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar7);
        pFVar11 = (FIoChunkId *)0x0;
        if (local_78.Pointer != (FIoChunkId *)0x0) {
          puVar6 = local_78.Pointer;
          puVar6[0] = '\0';
          puVar6[1] = '\0';
          puVar6[2] = '\0';
          puVar6[3] = '\0';
          puVar6[4] = '\0';
          puVar6[5] = '\0';
          puVar6[6] = '\0';
          puVar6[7] = '\0';
          puVar6 = local_78.Pointer;
          puVar6[8] = '\0';
          puVar6[9] = '\0';
          puVar6[10] = '\0';
          puVar6[0xb] = '\0';
          pFVar11 = (FIoChunkId *)((longlong)local_78.Pointer + 0xc);
          pFVar11->Id[4] = '\0';
          pFVar11->Id[5] = '\0';
          pFVar11->Id[6] = '\0';
          pFVar11->Id[7] = '\0';
          pFVar11->Id[8] = '\0';
          pFVar11->Id[9] = '\0';
          pFVar11->Id[10] = '\0';
          pFVar11->Id[0xb] = '\0';
          pFVar11 = (FIoChunkId *)((longlong)local_78.Pointer + 0x18);
          pFVar11->Id[0] = '\0';
          pFVar11->Id[1] = '\0';
          pFVar11->Id[2] = '\0';
          pFVar11->Id[3] = '\0';
          pFVar11->Id[4] = '\0';
          pFVar11->Id[5] = '\0';
          pFVar11->Id[6] = '\0';
          pFVar11->Id[7] = '\0';
          *(undefined8 *)(((FIoChunkId *)((longlong)local_78.Pointer + 0x18))->Id + 8) = 0;
          pFVar11 = (FIoChunkId *)((longlong)local_78.Pointer + 0x24);
          pFVar11->Id[4] = '\0';
          pFVar11->Id[5] = '\0';
          pFVar11->Id[6] = '\0';
          pFVar11->Id[7] = '\0';
          pFVar11->Id[8] = '\0';
          pFVar11->Id[9] = '\0';
          pFVar11->Id[10] = '\0';
          pFVar11->Id[0xb] = '\0';
          pFVar11 = (FIoChunkId *)((longlong)local_78.Pointer + 0x30);
          pFVar11->Id[0] = '\0';
          pFVar11->Id[1] = '\0';
          pFVar11->Id[2] = '\0';
          pFVar11->Id[3] = '\0';
          pFVar11->Id[4] = '\0';
          pFVar11->Id[5] = '\0';
          pFVar11->Id[6] = '\0';
          pFVar11->Id[7] = '\0';
          pFVar11 = (FIoChunkId *)((longlong)local_78.Pointer + 0x30);
          pFVar11->Id[8] = 0xff;
          pFVar11->Id[9] = 0xff;
          pFVar11->Id[10] = 0xff;
          pFVar11->Id[0xb] = 0xff;
          pFVar11 = local_78.Pointer;
        }
        ::operator<<(param_1,pFVar11);
        TOptional<unsigned___int64>::Serialize
                  ((TOptional<unsigned___int64> *)(pFVar11[1].Id + 4),param_1);
        TOptional<__int64>::Serialize((TOptional<__int64> *)(pFVar11[2].Id + 8),param_1);
        TOptional<int>::Serialize((TOptional<int> *)(pFVar11 + 4),param_1);
        uVar10 = (int)pFVar12 + 1;
        pFVar12 = (FIoChunkId *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 148cad0b0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::
FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer
::FCacheEntry_0>_>_>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uchar *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FIoChunkId *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  FIoChunkId *pFVar12;
  uint *puVar13;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x68,(longlong)*(int *)&param_2->field_0xc * 0x68);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar7 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar7 != 0) {
      puVar13 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar13 = local_78.Pointer;
      }
      uVar10 = *puVar13;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_148cad3ec;
        uVar10 = puVar13[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar7 < iStack_64) {
LAB_148cad3ec:
        iStack_64 = iVar7;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar7) {
      do {
        pFVar9 = (FIoChunkId *)((longlong)local_50.CurrentBitIndex * 0x68 + *(longlong *)local_58);
        ::operator<<(param_1,pFVar9);
        TSetPrivateFriend::
        Serialize<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
                  (param_1,(TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
                            *)(pFVar9[1].Id + 4));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar6 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar9 = (FIoChunkId *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x68,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar7 * 0x68 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x68 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar7);
        pFVar12 = (FIoChunkId *)0x0;
        if (local_78.Pointer != (FIoChunkId *)0x0) {
          puVar5 = local_78.Pointer;
          puVar5[0] = '\0';
          puVar5[1] = '\0';
          puVar5[2] = '\0';
          puVar5[3] = '\0';
          puVar5[4] = '\0';
          puVar5[5] = '\0';
          puVar5[6] = '\0';
          puVar5[7] = '\0';
          puVar5 = local_78.Pointer;
          puVar5[8] = '\0';
          puVar5[9] = '\0';
          puVar5[10] = '\0';
          puVar5[0xb] = '\0';
          *(undefined8 *)(((FIoChunkId *)((longlong)local_78.Pointer + 0x18))->Id + 8) = 0;
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x24);
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12->Id[8] = '\0';
          pFVar12->Id[9] = '\0';
          pFVar12->Id[10] = '\0';
          pFVar12->Id[0xb] = '\0';
          *(undefined8 *)(((FIoChunkId *)((longlong)local_78.Pointer + 0x30))->Id + 8) = 0;
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x3c);
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12->Id[8] = '\0';
          pFVar12->Id[9] = '\0';
          pFVar12->Id[10] = '\0';
          pFVar12->Id[0xb] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x48);
          pFVar12->Id[0] = '\0';
          pFVar12->Id[1] = '\0';
          pFVar12->Id[2] = '\0';
          pFVar12->Id[3] = '\0';
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x54);
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12->Id[8] = '\0';
          pFVar12->Id[9] = '\0';
          pFVar12->Id[10] = '\0';
          pFVar12->Id[0xb] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0xc);
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12->Id[8] = '\0';
          pFVar12->Id[9] = '\0';
          pFVar12->Id[10] = '\0';
          pFVar12->Id[0xb] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x18);
          pFVar12->Id[0] = '\0';
          pFVar12->Id[1] = '\0';
          pFVar12->Id[2] = '\0';
          pFVar12->Id[3] = '\0';
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x30);
          pFVar12->Id[0] = '\0';
          pFVar12->Id[1] = '\0';
          pFVar12->Id[2] = '\0';
          pFVar12->Id[3] = '\0';
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x30);
          pFVar12->Id[8] = '\0';
          pFVar12->Id[9] = '\0';
          pFVar12->Id[10] = '\0';
          pFVar12->Id[0xb] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x3c);
          pFVar12->Id[0] = 0x80;
          pFVar12->Id[1] = '\0';
          pFVar12->Id[2] = '\0';
          pFVar12->Id[3] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x3c);
          pFVar12->Id[4] = 0xff;
          pFVar12->Id[5] = 0xff;
          pFVar12->Id[6] = 0xff;
          pFVar12->Id[7] = 0xff;
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x3c);
          pFVar12->Id[8] = '\0';
          pFVar12->Id[9] = '\0';
          pFVar12->Id[10] = '\0';
          pFVar12->Id[0xb] = '\0';
          *(undefined8 *)(((FIoChunkId *)((longlong)local_78.Pointer + 0x48))->Id + 8) = 0;
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x54);
          pFVar12->Id[4] = '\0';
          pFVar12->Id[5] = '\0';
          pFVar12->Id[6] = '\0';
          pFVar12->Id[7] = '\0';
          pFVar12 = (FIoChunkId *)((longlong)local_78.Pointer + 0x60);
          pFVar12->Id[0] = 0xff;
          pFVar12->Id[1] = 0xff;
          pFVar12->Id[2] = 0xff;
          pFVar12->Id[3] = 0xff;
          pFVar12 = local_78.Pointer;
        }
        ::operator<<(param_1,pFVar12);
        TSetPrivateFriend::
        Serialize<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
                  (param_1,(TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
                            *)(pFVar12[1].Id + 4));
        uVar10 = (int)pFVar9 + 1;
        pFVar9 = (FIoChunkId *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<__int64> @ 148cad470

FArchive * __cdecl operator<<<__int64>(FArchive *param_1,TOptional<__int64> *param_2)

{
  TOptional<__int64>::Serialize(param_2,param_1);
  return param_1;
}

// operator<<<unsigned___int64> @ 148cad4a0

FArchive * __cdecl
operator<<<unsigned___int64>(FArchive *param_1,TOptional<unsigned___int64> *param_2)

{
  TOptional<unsigned___int64>::Serialize(param_2,param_1);
  return param_1;
}

// AddLambda<`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_> @ 148cad820

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FStorageServerPlatformFile::InitializeConnection_::__l11::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::`11'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Call<`UE::FConditionVariable::Wait<UE::FWindowsRecursiveMutex>'::__l2::<lambda_1>_> @ 148cadfd0

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::FConditionVariable::Wait<UE::FWindowsRecursiveMutex>_::__l2::<lambda_1>_>(void *param_1)

{
  LOCK();
  **(undefined1 **)param_1 = 1;
  UNLOCK();
  return true;
}

// Call<`UE::FConditionVariable::NotifyOne'::__l5::<lambda_1>_> @ 148cadff0

ulong64 __cdecl
UE::TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
Call<_UE::FConditionVariable::NotifyOne_::__l5::<lambda_1>_>(void *param_1,FWakeState param_2)

{
  if (param_2.bHasWaitingThreads == false) {
    LOCK();
    **(undefined1 **)param_1 = 0;
    UNLOCK();
  }
  return 0;
}

// Call<`UE::FConditionVariable::Wait<UE::FWindowsRecursiveMutex>'::__l2::<lambda_2>_> @ 148cae010

void __cdecl
UE::TFunctionWithContext<void___cdecl(void)>::
Call<_UE::FConditionVariable::Wait<UE::FWindowsRecursiveMutex>_::__l2::<lambda_2>_>(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148cae013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)param_1);
  return;
}

// ConstructItems<FStorageServerConnection::Workspaces::Share,FStorageServerConnection::Workspaces::Share,int> @ 148cae020

void __cdecl
ConstructItems<FStorageServerConnection::Workspaces::Share,FStorageServerConnection::Workspaces::Share,int>
          (void *param_1,Share *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->Alias;
    this = (FString *)((longlong)param_1 + 0x20);
    do {
      FString::FString(this + -2,
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      FString::FString(this + -1,pFVar1 + -1);
      FString::FString(this,pFVar1);
      pFVar1 = pFVar1 + 3;
      this = this + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<FString,unsigned___int64>,int> @ 148cae0a0

void __cdecl DefaultConstructItems<TTuple<FString,unsigned___int64>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<StorageServer::FCacheStorageMmap::FBackingFile,int> @ 148cae0d0

void __cdecl
DefaultConstructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<FStorageServerFileSystemTOC::FFile,int> @ 148cae100

void __cdecl
DefaultConstructItems<FStorageServerFileSystemTOC::FFile,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<StorageServer::FJournalStoreEntry,int> @ 148cae130

void __cdecl DefaultConstructItems<StorageServer::FJournalStoreEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 10;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<StorageServer::FCacheStorageBlocking::FWriteOp,int> @ 148cae160

void __cdecl
DefaultConstructItems<StorageServer::FCacheStorageBlocking::FWriteOp,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<TTuple<FString,unsigned___int64>,int> @ 148cae1d0

void __cdecl
DestructItems<TTuple<FString,unsigned___int64>,int>
          (TTuple<FString,unsigned___int64> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int> @ 148cae210

void __cdecl
DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>(FBackingFile *param_1,int param_2)

{
  IMappedFileRegion *pIVar1;
  IMappedFileHandle *pIVar2;
  TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->FileRegion;
    do {
      pIVar1 = pTVar3->Ptr;
      if (pIVar1 != (IMappedFileRegion *)0x0) {
        pTVar3->Ptr = (IMappedFileRegion *)0x0;
        (**(code **)pIVar1->_padding_)(pIVar1,1);
      }
      pIVar2 = (((FBackingFile *)(pTVar3 + -1))->FileHandle).Ptr;
      if (pIVar2 != (IMappedFileHandle *)0x0) {
        (((FBackingFile *)(pTVar3 + -1))->FileHandle).Ptr = (IMappedFileHandle *)0x0;
        (**(code **)pIVar2->_padding_)(pIVar2,1);
      }
      pTVar3[1] = (IMappedFileRegion *)0x0;
      pTVar3[2] = (IMappedFileRegion *)0x0;
      pIVar1 = pTVar3->Ptr;
      if (pIVar1 != (IMappedFileRegion *)0x0) {
        (**(code **)pIVar1->_padding_)(pIVar1,1);
      }
      pIVar2 = (((FBackingFile *)(pTVar3 + -1))->FileHandle).Ptr;
      if (pIVar2 != (IMappedFileHandle *)0x0) {
        (**(code **)pIVar2->_padding_)(pIVar2,1);
      }
      pTVar3 = pTVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStorageServerFileSystemTOC::FFile,int> @ 148cae2b0

void __cdecl DestructItems<FStorageServerFileSystemTOC::FFile,int>(FFile *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FilePath;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStorageServerConnection::Workspaces::Share,int> @ 148cae2f0

void __cdecl
DestructItems<FStorageServerConnection::Workspaces::Share,int>(Share *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Path;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((Share *)(pFVar2 + -1))->Id).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStorageServerConnection::Workspaces::Workspace,int> @ 148cae350

void __cdecl
DestructItems<FStorageServerConnection::Workspaces::Workspace,int>(Workspace *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FStorageServerConnection::Workspaces::Share,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Shares;
    do {
      DestructItems<FStorageServerConnection::Workspaces::Share,int>
                ((Share *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      pTVar2 = (TArray<FStorageServerConnection::Workspaces::Share,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,int> @ 148cae3c0

void __cdecl
DestructItems<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,int>
          (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *param_1,int param_2)

{
  IFileHandle *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IFileHandle *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<StorageServer::FJournalChunkInfoPage,int> @ 148cae400

void __cdecl
DestructItems<StorageServer::FJournalChunkInfoPage,int>(FJournalChunkInfoPage *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Entries).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1[-0xd] = &___7FJournalPageBase_StorageServer__6B_;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<StorageServer::FJournalChunkPage,int> @ 148cae480

void __cdecl
DestructItems<StorageServer::FJournalChunkPage,int>(FJournalChunkPage *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->ChunkMap).field_0x40;
    do {
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1[-0xc] = &___7FJournalPageBase_StorageServer__6B_;
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapifyInternal<FIoRequestImpl_*,int,FIdentityFunctor,TDereferenceWrapper<FIoRequestImpl_*,bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>_> @ 148cb0980

void __cdecl
AlgoImpl::
HeapifyInternal<FIoRequestImpl_*,int,FIdentityFunctor,TDereferenceWrapper<FIoRequestImpl_*,bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>_>
          (FIoRequestImpl **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FIoRequestImpl_*,bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>
          param_4)

{
  FIoRequestImpl *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar7 = iVar5 * 2 + 1;
  iVar3 = iVar7;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_148cb0a5c:
      if (iVar8 == 0) {
        return;
      }
      iVar5 = iVar8 + -1;
      iVar7 = iVar3 + -2;
      iVar3 = iVar7;
      iVar8 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar6 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[(longlong)iVar7 + 2]);
      if (bVar4) {
        iVar6 = iVar7;
      }
      iVar6 = iVar6 + 1;
    }
    bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[iVar5]);
    if (!bVar4) goto LAB_148cb0a5c;
    pFVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar6];
    param_1[iVar6] = pFVar1;
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar6;
  } while( true );
}

// InternalConstructor<UZenStreamingSettings> @ 148cb0aa0

void __cdecl InternalConstructor<UZenStreamingSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UZenStreamingSettings__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3d4ccccd;
    *(undefined4 *)&this[1]._padding_ = 0x3f4ccccd;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xbf800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UZenStreamingSettings> @ 148cb0af0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UZenStreamingSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UZenStreamingSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UZenStreamingSettings__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3d4ccccd;
    *(undefined4 *)&this[1]._padding_ = 0x3f4ccccd;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xbf800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewIntrusiveReferenceController<1,FStorageServerPackageStoreBackend,FStorageServerConnection_&> @ 148cb0bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,FStorageServerPackageStoreBackend,FStorageServerConnection_&>
          (FStorageServerConnection *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEvent *pFVar6;
  FRunnableThread *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar4 = ::operator_new(0x78);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *)0x0) {
    return (TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VFStorageServerPackageStoreBackend___00_SharedPointerInternals__6B_
  ;
  *(undefined ***)(pTVar4->ObjectStorage).Pad = &___7FStorageServerPackageStoreBackend__6B_;
  (pTVar4->ObjectStorage).Pad[8] = '\0';
  (pTVar4->ObjectStorage).Pad[9] = '\0';
  (pTVar4->ObjectStorage).Pad[10] = '\0';
  (pTVar4->ObjectStorage).Pad[0xb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xc] = '\0';
  (pTVar4->ObjectStorage).Pad[0xd] = '\0';
  (pTVar4->ObjectStorage).Pad[0xe] = '\0';
  (pTVar4->ObjectStorage).Pad[0xf] = '\0';
  (pTVar4->ObjectStorage).Pad[0x10] = '\0';
  (pTVar4->ObjectStorage).Pad[0x11] = '\0';
  (pTVar4->ObjectStorage).Pad[0x12] = '\0';
  (pTVar4->ObjectStorage).Pad[0x13] = '\0';
  (pTVar4->ObjectStorage).Pad[0x14] = '\0';
  (pTVar4->ObjectStorage).Pad[0x15] = '\0';
  (pTVar4->ObjectStorage).Pad[0x16] = '\0';
  (pTVar4->ObjectStorage).Pad[0x17] = '\0';
  (pTVar4->ObjectStorage).Pad[0x28] = '\0';
  (pTVar4->ObjectStorage).Pad[0x29] = '\0';
  (pTVar4->ObjectStorage).Pad[0x2a] = '\0';
  (pTVar4->ObjectStorage).Pad[0x2b] = '\0';
  (pTVar4->ObjectStorage).Pad[0x2c] = '\0';
  (pTVar4->ObjectStorage).Pad[0x2d] = '\0';
  (pTVar4->ObjectStorage).Pad[0x2e] = '\0';
  (pTVar4->ObjectStorage).Pad[0x2f] = '\0';
  (pTVar4->ObjectStorage).Pad[0x30] = '\0';
  (pTVar4->ObjectStorage).Pad[0x31] = '\0';
  (pTVar4->ObjectStorage).Pad[0x32] = '\0';
  (pTVar4->ObjectStorage).Pad[0x33] = '\0';
  (pTVar4->ObjectStorage).Pad[0x34] = 0x80;
  (pTVar4->ObjectStorage).Pad[0x35] = '\0';
  (pTVar4->ObjectStorage).Pad[0x36] = '\0';
  (pTVar4->ObjectStorage).Pad[0x37] = '\0';
  (pTVar4->ObjectStorage).Pad[0x38] = 0xff;
  (pTVar4->ObjectStorage).Pad[0x39] = 0xff;
  (pTVar4->ObjectStorage).Pad[0x3a] = 0xff;
  (pTVar4->ObjectStorage).Pad[0x3b] = 0xff;
  (pTVar4->ObjectStorage).Pad[0x3c] = '\0';
  (pTVar4->ObjectStorage).Pad[0x3d] = '\0';
  (pTVar4->ObjectStorage).Pad[0x3e] = '\0';
  (pTVar4->ObjectStorage).Pad[0x3f] = '\0';
  (pTVar4->ObjectStorage).Pad[0x48] = '\0';
  (pTVar4->ObjectStorage).Pad[0x49] = '\0';
  (pTVar4->ObjectStorage).Pad[0x4a] = '\0';
  (pTVar4->ObjectStorage).Pad[0x4b] = '\0';
  (pTVar4->ObjectStorage).Pad[0x4c] = '\0';
  (pTVar4->ObjectStorage).Pad[0x4d] = '\0';
  (pTVar4->ObjectStorage).Pad[0x4e] = '\0';
  (pTVar4->ObjectStorage).Pad[0x4f] = '\0';
  (pTVar4->ObjectStorage).Pad[0x50] = '\0';
  (pTVar4->ObjectStorage).Pad[0x51] = '\0';
  (pTVar4->ObjectStorage).Pad[0x52] = '\0';
  (pTVar4->ObjectStorage).Pad[0x53] = '\0';
  puVar1 = (pTVar4->ObjectStorage).Pad + 0x58;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar4->ObjectStorage).Pad[0x60] = '\0';
  (pTVar4->ObjectStorage).Pad[0x61] = '\0';
  (pTVar4->ObjectStorage).Pad[0x62] = '\0';
  (pTVar4->ObjectStorage).Pad[99] = '\0';
  (pTVar4->ObjectStorage).Pad[100] = '\0';
  (pTVar4->ObjectStorage).Pad[0x65] = '\0';
  (pTVar4->ObjectStorage).Pad[0x66] = '\0';
  (pTVar4->ObjectStorage).Pad[0x67] = '\0';
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_30.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAsyncInitRunnable_FStorageServerPackageStoreBackend___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FAsyncInitRunnable_FStorageServerPackageStoreBackend__6B_;
    *(TTypeCompatibleBytes<FStorageServerPackageStoreBackend> **)&pTVar5[1].SharedReferenceCount =
         &pTVar4->ObjectStorage;
    pTVar5[2]._padding_ = (longlong)param_1;
    pFVar6 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    *(FEvent **)&pTVar5[2].SharedReferenceCount = pFVar6;
    pFVar7 = FRunnableThread::Create
                       ((FRunnable *)(pTVar5 + 1),L"StorageServerPackageStoreInit",0,TPri_Normal,
                        0xffffffffffffffff,None);
    if (pFVar7 == (FRunnableThread *)0x0) {
      (**(code **)(**(longlong **)&pTVar5[2].SharedReferenceCount + 0x10))();
    }
    pTVar9 = pTVar5 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FStack_30.ReferenceController = pTVar5;
    pTVar8 = pTVar5;
    local_38 = pTVar9;
  }
  if ((TReferenceControllerBase<1> **)puVar1 != &local_38) {
    *(TReferenceControllerBase<1> **)puVar1 = pTVar9;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((pTVar4->ObjectStorage).Pad + 0x60),&FStack_30);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(FStack_30.ReferenceController);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return pTVar4;
}

// Replace<TArrayView<wchar_t,int>,char> @ 148cb19c0

void __cdecl
Algo::Replace<TArrayView<wchar_t,int>,char>
          (TArrayView<wchar_t,int> *param_1,char *param_2,char *param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar2 = param_1->DataPtr;
  pwVar1 = pwVar2 + param_1->ArrayNum;
  for (; pwVar2 != pwVar1; pwVar2 = pwVar2 + 1) {
    if ((uint)(ushort)*pwVar2 == (int)*param_2) {
      *pwVar2 = (short)*param_3;
    }
  }
  return;
}

// WriteToString<64,FCbObjectId> @ 148cb2620

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,FCbObjectId>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,FCbObjectId *param_1)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  local_18.ArrayNum = 0xc;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  local_18.DataPtr = param_1->Bytes;
  UE::String::BytesToHexLower(&local_18,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>_> @ 148cb2680

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>_> @ 148cb2690

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> @ 148cb26a0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,0,1> @ 148cb5380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FStorageServerConnection::ReadChunkRequestAsync_::__l2::<lambda_1>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((*(char *)((longlong)this + 0x28) != '\0') &&
     (this_00 = *(BufCore **)((longlong)this + 0x20), this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// operator<< @ 148cb7020

FArchive * __cdecl StorageServer::operator<<(FArchive *param_1,FCacheEntry *param_2)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  EStorageServerContentType *pEVar4;
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->ChunkOffset);
    }
  }
  else {
    param_2->ChunkOffset = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->ChunkSize;
  puVar1 = &param_1->field_0x2a;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->StorageOffset;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->StorageSize;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StorageHash,0x14);
  pEVar4 = (EStorageServerContentType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar4 + 1 <= (EStorageServerContentType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->StorageContentType = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->StorageContentType,1);
  return param_1;
}

// operator<< @ 148cb71c0

FArchive * __cdecl StorageServer::operator<<(FArchive *param_1,FJournalHeader *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Magic);
    }
  }
  else {
    param_2->Magic = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->Version;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->PageCount;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 148cb72e0

FArchive * __cdecl StorageServer::operator<<(FArchive *param_1,FJournalPageHeader *param_2)

{
  uint *puVar1;
  uint *puVar2;
  EPageType *pEVar3;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Magic);
    }
  }
  else {
    param_2->Magic = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->PageSize;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->DataSize;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DataHash,0x14);
  pEVar3 = (EPageType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar3 + 1 <= (EPageType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Type = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Type,1);
  return param_1;
}

// operator<< @ 148cb7440

FArchive * __cdecl StorageServer::operator<<(FArchive *param_1,FJournalChunkInfoPage *param_2)

{
  TSetPrivateFriend::
  Serialize<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                      *)&param_2->Entries);
  return param_1;
}

// operator<< @ 148cb7470

FArchive * __cdecl StorageServer::operator<<(FArchive *param_1,FJournalChunkPage *param_2)

{
  TArray<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FArchive *pFVar7;
  TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
  *this;
  longlong lVar8;
  byte bVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint local_res8 [4];
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  uint *local_40;
  
  uVar12 = 0;
  bVar9 = param_1->field_0x28 & 1;
  if (param_2->bContainsInvalidEntries != false) {
    uVar5 = (param_2->Entries).ArrayNum;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (0 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar5,&local_68,0,(int *)((longlong)&local_60 + 4));
    }
    lVar13 = (longlong)(param_2->Entries).ArrayNum;
    pTVar1 = &param_2->Entries;
    uVar14 = uVar12;
    if (0 < lVar13) {
      do {
        uVar11 = (uint)uVar12;
        uVar5 = 0;
        if ((int)uVar11 < (param_2->Entries).ArrayNum) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        if ((pTVar1->AllocatorInstance).Data[uVar14 + 0x48] != (FScriptContainerElement)0x0) {
          uVar5 = 0;
          if ((int)uVar11 < (param_2->Entries).ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar3)();
            return pFVar7;
          }
          pFVar10 = (pTVar1->AllocatorInstance).Data + uVar14;
          if (((local_68.Data <= pFVar10) &&
              (pFVar10 < local_68.Data + (longlong)local_60._4_4_ * 0x50)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar3)();
            return pFVar7;
          }
          if ((int)local_60 == local_60._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&local_68,(int *)((longlong)&local_60 + 4));
            local_60 = CONCAT44(local_60._4_4_,iVar6);
          }
          lVar8 = (longlong)(int)local_60;
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 + 1);
          uVar2 = *(undefined8 *)(pFVar10 + 8);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50) = *(undefined8 *)pFVar10;
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 8) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x18);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x10 + 8) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x28);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x20) = *(undefined8 *)(pFVar10 + 0x20);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x20 + 8) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x38);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x30) = *(undefined8 *)(pFVar10 + 0x30);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x30 + 8) = uVar2;
          uVar2 = *(undefined8 *)(pFVar10 + 0x48);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x40) = *(undefined8 *)(pFVar10 + 0x40);
          *(undefined8 *)(local_68.Data + lVar8 * 0x50 + 0x40 + 8) = uVar2;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        lVar13 = lVar13 + -1;
        uVar14 = uVar14 + 0x50;
      } while (lVar13 != 0);
    }
    if (pTVar1 != (TArray<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_> *)&local_68
       ) {
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar1->AllocatorInstance).Data = local_68.Data;
      (param_2->Entries).ArrayNum = (int)local_60;
      (param_2->Entries).ArrayMax = local_60._4_4_;
      local_60 = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
    }
    bVar9 = 1;
    param_2->bContainsInvalidEntries = false;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
      TArrayPrivateFriend::Serialize<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->Entries);
      goto LAB_148cb76f2;
    }
  }
  TArrayPrivateFriend::Serialize<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Entries);
  if (bVar9 == 0) {
    return param_1;
  }
LAB_148cb76f2:
  bVar4 = 1 < *(int *)&(param_2->ChunkMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
                      *)&param_2->ChunkMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&param_2->ChunkMap,0,*(int *)&(param_2->ChunkMap).field_0x8);
  *(undefined4 *)&(param_2->ChunkMap).field_0x8 = 0;
  if (*(int *)&(param_2->ChunkMap).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&param_2->ChunkMap,0,
               (int *)&(param_2->ChunkMap).field_0xc);
  }
  *(undefined4 *)&(param_2->ChunkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->ChunkMap).field_0x34 = 0;
  iVar6 = *(int *)&(param_2->ChunkMap).field_0x2c;
  *(undefined4 *)&(param_2->ChunkMap).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(param_2->ChunkMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->ChunkMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(param_2->ChunkMap).field_0x48 = 1;
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
              *)&param_2->ChunkMap);
  }
  iVar6 = (param_2->Entries).ArrayNum;
  local_res8[0] = 0;
  if (0 < iVar6) {
    do {
      uVar5 = local_res8[0];
      uVar11 = 0;
      if ((int)local_res8[0] < (param_2->Entries).ArrayNum) {
        uVar11 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
      pFVar10 = (param_2->Entries).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50;
      if (pFVar10[0x48].field_0x0 == '\0') {
        param_2->bContainsInvalidEntries = true;
      }
      else {
        uVar5 = *(uint *)(pFVar10 + 8);
        uVar2 = *(undefined8 *)&pFVar10->field_0x0;
        uVar11 = (uint)((ulonglong)uVar2 >> 0x20);
        this = (TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
                *)TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                  ::FindOrAddImpl<FIoChunkId_const_&>
                            ((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                              *)&param_2->ChunkMap,
                             ((((((uVar11 >> 8 & 0xff) * 0x21 +
                                 ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) * 0x21 +
                                (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar5 & 0xff)) *
                               0x21 + (uVar5 >> 8 & 0xff)) * 0x21 + (uVar5 >> 0x10 & 0xff)) * 0x21 +
                             (((uint)((ulonglong)uVar2 >> 8) & 0xff) * 0x21 +
                             ((uint)((ulonglong)uVar2 >> 0x10) & 0xff)) * 0x40a9121 +
                             (uVar11 & 0xff) * -0x13be2b1f +
                             ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 +
                             ((uint)uVar2 & 0xff) * 0x30f35d61 + 0x58a2c485 + (uVar5 >> 0x18),
                             (FIoChunkId *)pFVar10);
        local_58 = *(undefined8 *)(pFVar10 + 0x10);
        local_50 = *(undefined8 *)&pFVar10[0x18].field_0x0;
        local_48 = &local_58;
        local_40 = local_res8;
        TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TInterval<unsigned___int64>_&&,int_const_&>_>
                  (this,(TPairInitializer<TInterval<unsigned___int64>_&&,int_const_&> *)
                        (local_res8 + 2),(bool *)&local_48);
      }
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar6);
  }
  return param_1;
}

// operator() @ 148cb7b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``FStorageServerPlatformFile::IterateDirectory'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
operator()(void *this,FIoChunkId *param_1,wchar_t *param_2,long64 param_3)

{
  FDirectoryVisitor *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_858 [32];
  TStringBuilderBase<wchar_t> local_838;
  wchar_t local_818 [1024];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_858;
  local_838.bIsDynamic = false;
  local_838.bIsExternal = false;
  local_838.Base = local_818;
  local_838.CurPos = local_818;
  local_838.End = (wchar_t *)local_18;
  bVar2 = FStorageServerPlatformFile::MakeLocalPath
                    (*(FStorageServerPlatformFile **)this,param_2,&local_838);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConverted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                       ,0x68d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lVar4 = *(longlong *)param_1->Id - FIoChunkId::InvalidChunkId.Id._0_8_;
  if (lVar4 == 0) {
    lVar4 = (ulonglong)*(uint *)(param_1->Id + 8) -
            (ulonglong)(uint)FIoChunkId::InvalidChunkId.Id._8_4_;
  }
  this_00 = *(FDirectoryVisitor **)((longlong)this + 8);
  if (local_838.End < local_838.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_838,1);
  }
  *local_838.CurPos = L'\0';
  bVar2 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                    (this_00,local_838.Base,lVar4 == 0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_838);
  return bVar2;
}

// operator() @ 148cb7ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
``FStorageServerPlatformFile::IterateDirectoryRecursively'::__l2::<lambda_2>::operator()'::__l2::
<lambda_1>::operator()(void *this,FIoChunkId *param_1,wchar_t *param_2,long64 param_3)

{
  FDirectoryVisitor *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_858 [32];
  TStringBuilderBase<wchar_t> local_838;
  wchar_t local_818 [1024];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_858;
  local_838.bIsDynamic = false;
  local_838.bIsExternal = false;
  local_838.Base = local_818;
  local_838.CurPos = local_818;
  local_838.End = (wchar_t *)local_18;
  bVar2 = FStorageServerPlatformFile::MakeLocalPath
                    (*(FStorageServerPlatformFile **)this,param_2,&local_838);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConverted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                       ,0x6a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lVar4 = *(longlong *)param_1->Id - FIoChunkId::InvalidChunkId.Id._0_8_;
  if (lVar4 == 0) {
    lVar4 = (ulonglong)*(uint *)(param_1->Id + 8) -
            (ulonglong)(uint)FIoChunkId::InvalidChunkId.Id._8_4_;
  }
  this_00 = *(FDirectoryVisitor **)((longlong)this + 8);
  if (local_838.End < local_838.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_838,1);
  }
  *local_838.CurPos = L'\0';
  bVar2 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                    (this_00,local_838.Base,lVar4 == 0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_838);
  return bVar2;
}

// operator() @ 148cb7dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
``FStorageServerPlatformFile::IterateDirectoryStat'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>
::operator()(void *this,FIoChunkId *param_1,wchar_t *param_2,long64 param_3)

{
  long64 lVar1;
  FDirectoryStatVisitor *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FDateTime FVar5;
  uint uVar6;
  undefined4 uVar7;
  long64 lVar8;
  undefined1 auStack_908 [32];
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  byte local_8c8;
  undefined7 uStack_8c7;
  long64 local_8c0;
  long64 lStack_8b8;
  long64 local_8b0;
  long64 lStack_8a8;
  byte local_8a0;
  undefined7 uStack_89f;
  FFileStatData local_898;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_908;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  bVar3 = FStorageServerPlatformFile::MakeLocalPath
                    (*(FStorageServerPlatformFile **)this,param_2,&local_858);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConverted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                       ,0x6bc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_898.CreationTime.Ticks = 0;
  local_898.AccessTime.Ticks = 0;
  local_898.ModificationTime.Ticks = ___xmm_ffffffffffffffff0000000000000000;
  local_898.FileSize = _UNK_15076cb68;
  if ((*(longlong *)param_1->Id == FIoChunkId::InvalidChunkId.Id._0_8_) &&
     (*(int *)(param_1->Id + 8) == FIoChunkId::InvalidChunkId.Id._8_4_)) {
    local_8e8 = 0;
    uStack_8e0 = 0;
    local_8d8 = 0;
    uStack_8d0 = 0;
    lVar8 = 0;
    param_3 = 0;
    local_898.CreationTime.Ticks = 0;
    local_898.AccessTime.Ticks = 0;
    uVar6 = (uint)CONCAT71(uStack_8c7,local_8c8) | 7;
    uVar7 = (undefined4)((uint7)uStack_8c7 >> 0x18);
    local_8c8 = local_8c8 | 7;
  }
  else {
    FVar5 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    lVar8 = *FVar5.Ticks;
    FVar5 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    lVar1 = *FVar5.Ticks;
    FVar5 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    local_8c0 = *FVar5.Ticks;
    uVar6 = (uint)CONCAT71(uStack_89f,local_8a0) & 0xfffffffe | 6;
    uVar7 = (undefined4)((uint7)uStack_89f >> 0x18);
    lStack_8b8 = lVar1;
    local_8b0 = lVar8;
    lStack_8a8 = param_3;
    local_8a0 = local_8a0 & 0xfe | 6;
    local_898.CreationTime.Ticks = local_8c0;
    local_898.AccessTime.Ticks = lVar1;
  }
  this_00 = *(FDirectoryStatVisitor **)((longlong)this + 8);
  local_898._36_4_ = uVar7;
  local_898._32_4_ = uVar6;
  local_898.ModificationTime.Ticks = lVar8;
  local_898.FileSize = param_3;
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  bVar3 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                    (this_00,local_858.Base,&local_898);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar3;
}

// `vector_deleting_destructor' @ 148cb90f0

void * __thiscall
TDirectoryTree<FString>::FTreeNode::_vector_deleting_destructor_(FTreeNode *this,uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  FTreeNode *this_00;
  
  if ((param_1 & 2) == 0) {
    ~FTreeNode(this);
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x28);
    }
    return this;
  }
  lVar2 = *(longlong *)&this[-1].NumChildNodesAndFlags;
  puVar1 = &this[-1].NumChildNodesAndFlags;
  this_00 = this + lVar2;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    this_00 = this_00 + -1;
    ~FTreeNode(this_00);
  }
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1,*(longlong *)puVar1 * 0x28 + 8);
  }
  return puVar1;
}

// `scalar_deleting_destructor' @ 148cb91a0

void * __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>::
_scalar_deleting_destructor_
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>
           *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->AlreadyVisited).HashSize = 0;
  FVar1 = (this->AlreadyVisited).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlreadyVisited).Elements);
  this->_padding_ = (longlong)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9210

void * __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool>::_scalar_deleting_destructor_
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool> *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->AlreadyVisited).HashSize = 0;
  FVar1 = (this->AlreadyVisited).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlreadyVisited).Elements);
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb92b0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb92e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCookOnTheFlyPackageStoreBackend,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9310

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStorageServerPlatformFile,void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9340

void * __thiscall
TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,StorageServer::ICacheStrategy,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9370

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`StorageServer::FCacheStorageBlocking::Flush'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb93e0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`StorageServer::FCacheJournalSectioned::Flush'::__l10::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9450

void * __thiscall
UE::Tasks::Private::TExecutableTask<`StorageServer::FCacheJournalSimple::Flush'::__l13::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb94c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`StorageServer::FCacheStorageBlocking::Flush'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9500

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`StorageServer::FCacheJournalSectioned::Flush'::__l10::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9540

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`StorageServer::FCacheJournalSimple::Flush'::__l13::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((*(char *)((longlong)this + 0x28) != '\0') &&
     (this_00 = *(BufCore **)((longlong)this + 0x20), this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9610

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStorageServerPackageStoreBackend::FAsyncInitRunnable,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9650

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FStorageServerConnection::FAsyncQueryLatestServerChunkInfo,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStorageServerConnection::FAsyncQueryLatestServerChunkInfo,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9690

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCookOnTheFlyPackageStoreBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FCookOnTheFlyPackageStoreBackend,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb96d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStorageServerIoDispatcherBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStorageServerIoDispatcherBackend,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9710

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStorageServerPackageStoreBackend,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9750

void * __thiscall
TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9790

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<char8_t>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonReader<char8_t>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb97d0

void * __thiscall
FStorageServerPackageStoreBackend::FAsyncInitRunnable::_scalar_deleting_destructor_
          (FAsyncInitRunnable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAsyncInitRunnable_FStorageServerPackageStoreBackend__6B_;
  (**(code **)(this->IsCompleted->_padding_ + 0x20))(this->IsCompleted,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->IsCompleted);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9840

void * __thiscall
FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::_scalar_deleting_destructor_
          (FAsyncQueryLatestServerChunkInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAsyncQueryLatestServerChunkInfo_FStorageServerConnection__6B_;
  (**(code **)(this->IsCompleted->_padding_ + 0x20))(this->IsCompleted,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->IsCompleted);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb98b0

void * __thiscall
FStorageServerIoDispatcherBackend::FBatch::_scalar_deleting_destructor_(FBatch *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9920

void * __thiscall
FBuiltInHttpClient::_scalar_deleting_destructor_(FBuiltInHttpClient *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IBuiltInHttpClientSocketPool *pIVar2;
  
  pFVar1 = (this->Hostname).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SocketPool).Ptr;
  if (pIVar2 != (IBuiltInHttpClientSocketPool *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9980

void * __thiscall
FBuiltInHttpClientFSocket::_scalar_deleting_destructor_
          (FBuiltInHttpClientFSocket *this,uint param_1)

{
  FSocket *pFVar1;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClientFSocket__6B_;
  if (this->Socket != (FSocket *)0x0) {
    (**(code **)(this->Socket->_padding_ + 0x10))();
    pFVar1 = this->Socket;
    if (pFVar1 != (FSocket *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    this->Socket = (FSocket *)0x0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb99f0

void * __thiscall
FBuiltInHttpClientFSocketPool::_scalar_deleting_destructor_
          (FBuiltInHttpClientFSocketPool *this,uint param_1)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClientFSocketPool__6B_;
  while( true ) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&this->SocketPool);
    if (uVar2 == 0) break;
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    if (aVar1 == (atomic<void_*>)0x0) break;
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>::
  ~FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>
            ((FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1> *)&this->SocketPool);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ServerAddr).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9ac0

void * __thiscall
FBuiltInHttpClientPlatformSocket::_scalar_deleting_destructor_
          (FBuiltInHttpClientPlatformSocket *this,uint param_1)

{
  IPlatformHostCommunication *pIVar1;
  code *pcVar2;
  IPlatformHostSocket *local_18;
  TReferenceControllerBase<1> *local_10;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClientPlatformSocket__6B_;
  pIVar1 = this->Communication;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  local_18 = (this->Socket).Object;
  local_10 = (this->Socket).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18);
  operator_delete__((this->ConnectionBuffer).Allocation);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Socket).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9b40

void * __thiscall
FBuiltInHttpClientPlatformSocketPool::_scalar_deleting_destructor_
          (FBuiltInHttpClientPlatformSocketPool *this,uint param_1)

{
  atomic<void_*> aVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  
  *(undefined ***)this = &___7FBuiltInHttpClientPlatformSocketPool__6B_;
  while( true ) {
    uVar4 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&this->SocketPool);
    if (uVar4 == 0) break;
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe][uVar4 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
    if (aVar1 == (atomic<void_*>)0x0) break;
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  FVar2 = (this->UsedSockets).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UsedSocketsCS);
  FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>::
  ~FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>
            ((FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1> *)&this->SocketPool);
  pFVar3 = (this->Address).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9c30

void * __thiscall
StorageServer::FCacheJournalSectioned::_scalar_deleting_destructor_
          (FCacheJournalSectioned *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TTask<void> TVar4;
  IFileHandle *pIVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  DestructItems<StorageServer::FJournalChunkInfoPage,int>
            ((FJournalChunkInfoPage *)(this->ChunkInfoPages).AllocatorInstance.Data,
             (this->ChunkInfoPages).ArrayNum);
  pFVar3 = (this->ChunkInfoPages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<StorageServer::FJournalChunkPage,int>
            ((FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data,
             (this->ChunkPages).ArrayNum);
  pFVar3 = (this->ChunkPages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TVar4 = this->FlushTask;
  if (TVar4 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  pIVar5 = (this->JournalFileHandle).Ptr;
  if (pIVar5 != (IFileHandle *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pFVar3 = (this->JournalFilePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9cf0

void * __thiscall
StorageServer::FCacheJournalSimple::_scalar_deleting_destructor_
          (FCacheJournalSimple *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  TTask<void> TVar4;
  FScriptContainerElement *pFVar5;
  
  this->_padding_ = (longlong)&___7FCacheJournalSimple_StorageServer__6B_;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ChunkCacheEntries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkCacheEntries);
  *(undefined4 *)&(this->ChunkInfos).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ChunkInfos).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkInfos);
  TVar4 = this->FlushTask;
  if (TVar4 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  pFVar5 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FlushTaskLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9dd0

void * __thiscall
StorageServer::FCacheStorageBlocking::_scalar_deleting_destructor_
          (FCacheStorageBlocking *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_char> FVar3;
  ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp> FVar4;
  FScriptContainerElement *pFVar5;
  TTask<void> TVar6;
  
  this->_padding_ = (longlong)&___7FCacheStorageBlocking_StorageServer__6B_;
  if (this->FlushTask != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->FlushTask);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FileWriteLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BackLock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FrontLock);
  FVar3 = (this->Buffers).Queue2.Data.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->Buffers).Queue2.Operations.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar3 = (this->Buffers).Queue1.Data.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->Buffers).Queue1.Operations.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<StorageServer::FCacheStorageBlocking::FWriteOp>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  DestructItems<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,int>
            ((TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)
             (this->BackingFiles).AllocatorInstance.Data,(this->BackingFiles).ArrayNum);
  pFVar5 = (this->BackingFiles).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TVar6 = this->FlushTask;
  if (TVar6 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar6 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar6)(TVar6,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x21200f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9ed0

void * __thiscall
StorageServer::FCacheStorageMmap::_scalar_deleting_destructor_(FCacheStorageMmap *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FBackingFile *pFVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->BackingFiles).ArrayMax;
  this->_padding_ = (longlong)&___7FCacheStorageMmap_StorageServer__6B_;
  iVar2 = (this->BackingFiles).ArrayNum;
  pFVar3 = (FBackingFile *)(this->BackingFiles).AllocatorInstance.Data;
  if (*piVar1 < 0) {
    DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>(pFVar3,iVar2);
    (this->BackingFiles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->BackingFiles).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>(pFVar3,iVar2);
    (this->BackingFiles).ArrayNum = 0;
  }
  this->TotalSize = 0;
  DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>
            ((FBackingFile *)(this->BackingFiles).AllocatorInstance.Data,
             (this->BackingFiles).ArrayNum);
  pFVar4 = (this->BackingFiles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cb9fa0

void * __thiscall
StorageServer::FCacheStrategyLinear::_scalar_deleting_destructor_
          (FCacheStrategyLinear *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCacheStrategyLinear_StorageServer__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->JournalLock);
  ICacheStrategy::~ICacheStrategy((ICacheStrategy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba000

void * __thiscall
FCookOnTheFlyPackageStoreBackend::_scalar_deleting_destructor_
          (FCookOnTheFlyPackageStoreBackend *this,uint param_1)

{
  ~FCookOnTheFlyPackageStoreBackend(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba040

void * __thiscall
StorageServer::FJournalChunkInfoPage::_scalar_deleting_destructor_
          (FJournalChunkInfoPage *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Entries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  this->_padding_ = (longlong)&___7FJournalPageBase_StorageServer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba0b0

void * __thiscall
StorageServer::FJournalChunkPage::_scalar_deleting_destructor_(FJournalChunkPage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChunkMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChunkMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkMap);
  this->_padding_ = (longlong)&___7FJournalPageBase_StorageServer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba130

void * __thiscall
StorageServer::FJournalPageBase::_scalar_deleting_destructor_(FJournalPageBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FJournalPageBase_StorageServer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba170

void * __thiscall
FStorageServerEngineStartupPrecache::_scalar_deleting_destructor_
          (FStorageServerEngineStartupPrecache *this,uint param_1)

{
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  void *pvVar5;
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&___7FStorageServerEngineStartupPrecache__6B_;
  aVar1 = (this->HighPriorityPrecacheFileRequests).Tail;
  aVar6 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)
          (this->HighPriorityPrecacheFileRequests).First;
  do {
    aVar2 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar1;
    aVar6 = aVar2;
  } while (bVar7);
  while (aVar2 != (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar2;
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  aVar1 = (this->PrecacheFileRequests).Tail;
  aVar6 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)
          (this->PrecacheFileRequests).First;
  do {
    aVar2 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar1;
    aVar6 = aVar2;
  } while (bVar7);
  while (aVar2 != (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar2;
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  *(undefined4 *)&(this->Cache).field_0x48 = 0;
  pvVar5 = *(void **)&(this->Cache).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Cache);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CacheLock);
  if (BVar4 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheLock);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba2b0

void * __thiscall
FStorageServerFileHandle::_scalar_deleting_destructor_(FStorageServerFileHandle *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStorageServerFileHandle__6B_;
  FPlatformFileTrace::BeginClose((ulong64)this);
  FPlatformFileTrace::EndClose((ulong64)this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferCS);
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10078);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba330

void * __thiscall
FStorageServerIoDispatcherBackend::_scalar_deleting_destructor_
          (FStorageServerIoDispatcherBackend *this,uint param_1)

{
  ~FStorageServerIoDispatcherBackend(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba370

void * __thiscall
FStorageServerPackageStoreBackend::_scalar_deleting_destructor_
          (FStorageServerPackageStoreBackend *this,uint param_1)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncInit).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->StoreEntriesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StoreEntriesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FStorageServerPackageStoreBackend::FStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoreEntriesMap);
  this->_padding_ = (longlong)&___7IPackageStoreBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba3f0

void * __thiscall
FStorageServerPlatformFile::_scalar_deleting_destructor_
          (FStorageServerPlatformFile *this,uint param_1)

{
  ~FStorageServerPlatformFile(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba430

void * __thiscall
IBuiltInHttpClientSocket::_scalar_deleting_destructor_(IBuiltInHttpClientSocket *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba460

void * __thiscall
IBuiltInHttpClientSocketPool::_scalar_deleting_destructor_
          (IBuiltInHttpClientSocketPool *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba490

void * __thiscall
StorageServer::ICacheJournal::_scalar_deleting_destructor_(ICacheJournal *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba4c0

void * __thiscall
StorageServer::ICacheStorage::_scalar_deleting_destructor_(ICacheStorage *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba4f0

void * __thiscall
StorageServer::ICacheStrategy::_scalar_deleting_destructor_(ICacheStrategy *this,uint param_1)

{
  ~ICacheStrategy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba530

void * __thiscall
IStorageServerHttpClient::_scalar_deleting_destructor_(IStorageServerHttpClient *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba560

void * __thiscall
IStorageServerPlatformFile::_scalar_deleting_destructor_
          (IStorageServerPlatformFile *this,uint param_1)

{
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cba5a0

void * __thiscall
UZenStreamingSettings::_scalar_deleting_destructor_(UZenStreamingSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UZenStreamingSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// CreateCompressedPlatformFileHandle @ 148cbf990

IWrappedFileHandle * __cdecl CreateCompressedPlatformFileHandle(IFileHandle *param_1)

{
  return (IWrappedFileHandle *)0x0;
}

// CreateWorkspaceShare @ 148cc0b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAnsiString * __cdecl
CreateWorkspaceShare
          (FAnsiString *__return_storage_ptr__,FStorageServerConnection *param_1,FString *param_2,
          Workspaces *param_3)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  FString *pFVar8;
  void *pvVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType _Src;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_258 [32];
  undefined1 local_217 [3];
  uint local_214;
  FString local_210;
  FString local_200;
  FString local_1f0;
  ForAnyElementType local_1e0;
  int local_1d8;
  int local_1d4;
  FString local_1d0;
  FScriptContainerElement *local_1c0;
  FStorageServerConnection *local_1b8;
  FString local_1b0;
  FString local_1a0;
  undefined1 local_190 [24];
  int local_178;
  TStringBuilderBase<char> local_168;
  char local_148 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar3 = false;
  bVar2 = false;
  local_214 = 0;
  local_1b8 = param_1;
  bVar6 = FPaths::IsRelative(param_2);
  local_214 = (param_3->Workspaces).ArrayNum;
  uVar11 = (ulonglong)(int)local_214;
  pFVar16 = (param_3->Workspaces).AllocatorInstance.Data;
  pFVar15 = pFVar16 + uVar11 * 0x38;
  local_1c0 = pFVar15;
  do {
    if ((param_3->Workspaces).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<FStorageServerConnection::Workspaces::Workspace_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_217);
    }
    if (pFVar16 == pFVar15) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    if (pFVar16[0x20].field_0x0 != '\0') {
      local_1f0.Data.ArrayNum = *(int *)(pFVar16 + 0x18);
      lVar13 = (longlong)local_1f0.Data.ArrayNum;
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar9 = *(void **)&pFVar16[0x10].field_0x0;
      if (local_1f0.Data.ArrayNum == 0) {
        local_1f0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f0.Data.ArrayNum,0,(ForAnyElementType *)&local_1f0,
                   local_1f0.Data.ArrayNum,&local_1f0.Data.ArrayMax);
        memcpy(local_1f0.Data.AllocatorInstance.Data,pvVar9,lVar13 * 2);
      }
      FPaths::NormalizeDirectoryName(&local_1f0);
      if (1 < *(int *)(pFVar16 + 0x18)) {
        if (bVar6) {
          iVar12 = (param_2->Data).ArrayNum;
          bVar3 = true;
          local_1e0.Data = (FScriptContainerElement *)0x0;
          pFVar15 = (param_2->Data).AllocatorInstance.Data;
          local_1d8 = iVar12;
          if (iVar12 == 0) {
            local_1d4 = iVar12;
            piVar14 = &local_1d8;
            _Src.Data = (FScriptContainerElement *)0x0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar12,0,&local_1e0,iVar12,&local_1d4);
            memcpy(local_1e0.Data,pFVar15,(longlong)iVar12 * 2);
            piVar14 = &local_1d8;
            _Src.Data = local_1e0.Data;
          }
        }
        else {
          bVar2 = true;
          FPaths::GetPath(&local_210,param_2);
          while( true ) {
            iVar12 = local_210.Data.ArrayNum + -1;
            if (local_210.Data.ArrayNum == 0) {
              iVar12 = 0;
            }
            iVar10 = local_1f0.Data.ArrayNum + -1;
            if (local_1f0.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            if (iVar12 < iVar10) {
              local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1d0.Data.ArrayNum = 0;
              local_1d0.Data.ArrayMax = 0;
              goto LAB_148cc0de0;
            }
            bVar7 = FPaths::IsSamePath(&local_210,&local_1f0);
            if (bVar7) break;
            pFVar8 = FPaths::GetPath(&local_1a0,&local_210);
            if (&local_210 != pFVar8) {
              if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_210.Data.AllocatorInstance.Data);
              }
              local_210.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
              (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_210.Data.ArrayNum = (pFVar8->Data).ArrayNum;
              local_210.Data.ArrayMax = (pFVar8->Data).ArrayMax;
              (pFVar8->Data).ArrayNum = 0;
              (pFVar8->Data).ArrayMax = 0;
            }
            if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
          }
          iVar12 = local_210.Data.ArrayNum;
          if (local_210.Data.ArrayNum == 0) {
            iVar12 = 1;
          }
          FString::RightChop(param_2,&local_1d0,iVar12);
LAB_148cc0de0:
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          piVar14 = &local_1d0.Data.ArrayNum;
          _Src.Data = local_1d0.Data.AllocatorInstance.Data;
        }
        local_200.Data.ArrayNum = *piVar14;
        lVar13 = (longlong)local_200.Data.ArrayNum;
        local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_200.Data.ArrayNum == 0) {
          local_200.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_200.Data.ArrayNum,0,(ForAnyElementType *)&local_200,
                     local_200.Data.ArrayNum,&local_200.Data.ArrayMax);
          memcpy(local_200.Data.AllocatorInstance.Data,_Src.Data,lVar13 * 2);
        }
        if ((bVar2) &&
           (bVar2 = false, local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if ((bVar3) && (bVar3 = false, local_1e0.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1e0.Data);
        }
        FPaths::NormalizeDirectoryName(&local_200);
        if (1 < local_200.Data.ArrayNum) {
          FString::FString(&local_1b0,"");
          FStorageServerConnection::CreateShare
                    (local_1b8,(TIoStatusOr<FString> *)local_190,(FString *)pFVar16,&local_200,
                     &local_1b0);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          uVar4 = local_190._8_4_;
          if (local_190._8_4_ == Ok) {
            local_168.Base = local_148;
            local_168.bIsDynamic = false;
            local_168.bIsExternal = false;
            local_168.CurPos = local_148;
            local_168.End = (char *)local_48;
            pvVar9 = FGenericPlatformString::Memcpy(local_148,"/ws/",4);
            pwVar1 = *(wchar_t **)pFVar16;
            local_168.CurPos = (char *)((longlong)pvVar9 + 4);
            iVar12 = *(int *)(pFVar16 + 8) + -1;
            if (*(int *)(pFVar16 + 8) == 0) {
              iVar12 = 0;
            }
            if (local_168.End < local_168.CurPos + iVar12) {
              TStringBuilderBase<char>::Extend(&local_168,(longlong)iVar12);
            }
            if (iVar12 != 0) {
              local_168.CurPos =
                   FGenericPlatformString::Convert<wchar_t,char>
                             (local_168.CurPos,iVar12,pwVar1,iVar12);
            }
            if (local_168.End < local_168.CurPos + 1) {
              TStringBuilderBase<char>::Extend(&local_168,1);
            }
            pvVar9 = FGenericPlatformString::Memcpy(local_168.CurPos,&s__,1);
            local_168.CurPos = (char *)((longlong)pvVar9 + 1);
            if (local_190._8_4_ != Ok) {
              StatusOrCrash((FIoStatus *)local_190);
            }
            uVar5 = local_190._16_8_;
            iVar12 = local_178 + -1;
            if (local_178 == 0) {
              iVar12 = 0;
            }
            if (local_168.End < local_168.CurPos + iVar12) {
              TStringBuilderBase<char>::Extend(&local_168,(longlong)iVar12);
            }
            if (iVar12 != 0) {
              local_168.CurPos =
                   FGenericPlatformString::Convert<wchar_t,char>
                             (local_168.CurPos,iVar12,(wchar_t *)uVar5,iVar12);
            }
            if (local_168.End < local_168.CurPos + 1) {
              TStringBuilderBase<char>::Extend(&local_168,1);
            }
            *local_168.CurPos = '\0';
            FAnsiString::FAnsiString(__return_storage_ptr__,local_168.Base);
            TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
            FIoStatus::operator=((FIoStatus *)local_190,Unknown);
            if ((local_190._8_4_ == Ok) && ((wchar_t *)local_190._16_8_ != (wchar_t *)0x0)) {
              FMemory::Free((void *)local_190._16_8_);
            }
            FIoStatus::~FIoStatus((FIoStatus *)local_190);
            if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.Data.AllocatorInstance.Data);
            }
            if (local_1f0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return __return_storage_ptr__;
            }
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
            return __return_storage_ptr__;
          }
          FIoStatus::operator=((FIoStatus *)local_190,Unknown);
          if ((uVar4 == Ok) && ((wchar_t *)local_190._16_8_ != (wchar_t *)0x0)) {
            FMemory::Free((void *)local_190._16_8_);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_190);
        }
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
      pFVar15 = local_1c0;
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        pFVar15 = local_1c0;
      }
    }
    uVar11 = (ulonglong)local_214;
    pFVar16 = pFVar16 + 0x38;
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeStorageServerClient_init @ 148cc29d0

void __cdecl EmptyLinkFunctionForGeneratedCodeStorageServerClient_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeZenStreamingSettings @ 148cc29e0

void __cdecl EmptyLinkFunctionForGeneratedCodeZenStreamingSettings(void)

{
  return;
}

// FindWorkspaceSharePath @ 148cc4da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAnsiString * __cdecl
FindWorkspaceSharePath(FAnsiString *__return_storage_ptr__,FString *param_1,Workspaces *param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  ForAnyElementType _Src;
  FAnsiString *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  ulonglong uVar9;
  FString *pFVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_248 [32];
  undefined1 local_207 [7];
  FString local_200;
  uint local_1f0;
  FScriptContainerElement *local_1e8;
  FString local_1e0;
  FString local_1d0;
  Workspaces *local_1c0;
  FAnsiString *local_1b8;
  FString *local_1b0;
  FScriptContainerElement *local_1a8;
  FString local_1a0;
  TStringView<wchar_t> local_190;
  FScriptContainerElement *local_180;
  int local_178;
  TStringBuilderBase<char> local_168;
  char local_148 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar3 = false;
  bVar2 = false;
  local_1f0 = 0;
  local_1c0 = param_2;
  local_1b8 = __return_storage_ptr__;
  local_1b0 = param_1;
  bVar6 = FPaths::IsRelative(param_1);
  local_1f0 = (param_2->Workspaces).ArrayNum;
  uVar9 = (ulonglong)(int)local_1f0;
  pFVar15 = (param_2->Workspaces).AllocatorInstance.Data;
  pFVar16 = pFVar15 + 0x30;
  local_1a8 = pFVar15 + uVar9 * 0x38;
  do {
    pFVar5 = local_1a8;
    local_1e8 = pFVar15;
    if ((param_2->Workspaces).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<FStorageServerConnection::Workspaces::Workspace_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_207);
    }
    if (pFVar15 == pFVar5) {
      (local_1b8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_1b8->Data).ArrayNum = 0;
      (local_1b8->Data).ArrayMax = 0;
      return local_1b8;
    }
    iVar11 = *(int *)(pFVar16 + -0x18);
    if (1 < iVar11) {
      pvVar8 = *(void **)(pFVar16 + -0x20);
      local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.Data.ArrayNum = iVar11;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar11,0,(ForAnyElementType *)&local_1e0,iVar11,&local_1e0.Data.ArrayMax);
      memcpy(local_1e0.Data.AllocatorInstance.Data,pvVar8,(longlong)iVar11 * 2);
      FPaths::NormalizeDirectoryName(&local_1e0);
      iVar11 = *(int *)pFVar16;
      puVar12 = *(undefined8 **)(pFVar16 + -8);
      puVar14 = puVar12 + (longlong)iVar11 * 6;
      while( true ) {
        if (*(int *)pFVar16 != iVar11) {
          `TCheckedPointerIterator<FStorageServerConnection::Workspaces::Share_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_207);
        }
        if (puVar12 == puVar14) break;
        local_200.Data.ArrayNum = *(int *)(puVar12 + 3);
        lVar13 = (longlong)local_200.Data.ArrayNum;
        local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pvVar8 = (void *)puVar12[2];
        if (local_200.Data.ArrayNum == 0) {
          local_200.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_200.Data.ArrayNum,0,(ForAnyElementType *)&local_200,
                     local_200.Data.ArrayNum,&local_200.Data.ArrayMax);
          memcpy(local_200.Data.AllocatorInstance.Data,pvVar8,lVar13 * 2);
        }
        FPaths::NormalizeDirectoryName(&local_200);
        _Src.Data = local_200.Data.AllocatorInstance.Data;
        if (bVar6) {
          lVar13 = (longlong)local_200.Data.ArrayNum;
          bVar3 = true;
          local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.Data.ArrayNum = local_200.Data.ArrayNum;
          if (local_200.Data.ArrayNum == 0) {
            pFVar10 = &local_1d0;
            local_1d0.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_200.Data.ArrayNum,0,(ForAnyElementType *)&local_1d0,
                       local_200.Data.ArrayNum,&local_1d0.Data.ArrayMax);
            memcpy(local_1d0.Data.AllocatorInstance.Data,_Src.Data,lVar13 * 2);
            pFVar10 = &local_1d0;
          }
        }
        else {
          local_190.DataPtr = (wchar_t *)local_1e0.Data.AllocatorInstance.Data;
          bVar2 = true;
          local_190.Size = local_1e0.Data.ArrayNum + -1;
          if (local_1e0.Data.ArrayNum == 0) {
            local_190.Size = 0;
          }
          local_180 = local_200.Data.AllocatorInstance.Data;
          local_178 = local_200.Data.ArrayNum + -1;
          if (local_200.Data.ArrayNum == 0) {
            local_178 = 0;
          }
          FPaths::CombineInternal(&local_1a0,&local_190,2);
          pFVar10 = &local_1a0;
        }
        bVar7 = FPaths::IsSamePath(pFVar10,local_1b0);
        if ((bVar2) &&
           (bVar2 = false, local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if ((bVar3) &&
           (bVar3 = false, local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          local_168.bIsDynamic = false;
          local_168.bIsExternal = false;
          local_168.End = (char *)local_48;
          local_168.Base = local_148;
          local_168.CurPos = local_148;
          pvVar8 = FGenericPlatformString::Memcpy(local_148,"/ws/",4);
          local_168.CurPos = (char *)((longlong)pvVar8 + 4);
          pwVar1 = *(wchar_t **)local_1e8;
          iVar11 = *(int *)(local_1e8 + 8) + -1;
          if (*(int *)(local_1e8 + 8) == 0) {
            iVar11 = 0;
          }
          if (local_168.End < local_168.CurPos + iVar11) {
            TStringBuilderBase<char>::Extend(&local_168,(longlong)iVar11);
          }
          if (iVar11 != 0) {
            local_168.CurPos =
                 FGenericPlatformString::Convert<wchar_t,char>
                           (local_168.CurPos,iVar11,pwVar1,iVar11);
          }
          if (local_168.End < local_168.CurPos + 1) {
            TStringBuilderBase<char>::Extend(&local_168,1);
          }
          pvVar8 = FGenericPlatformString::Memcpy(local_168.CurPos,&s__,1);
          pwVar1 = (wchar_t *)*puVar12;
          local_168.CurPos = (char *)((longlong)pvVar8 + 1);
          iVar11 = *(int *)(puVar12 + 1) + -1;
          if (*(int *)(puVar12 + 1) == 0) {
            iVar11 = 0;
          }
          if (local_168.End < local_168.CurPos + iVar11) {
            TStringBuilderBase<char>::Extend(&local_168,(longlong)iVar11);
          }
          if (iVar11 != 0) {
            local_168.CurPos =
                 FGenericPlatformString::Convert<wchar_t,char>
                           (local_168.CurPos,iVar11,pwVar1,iVar11);
          }
          if (local_168.End < local_168.CurPos + 1) {
            TStringBuilderBase<char>::Extend(&local_168,1);
          }
          pFVar4 = local_1b8;
          *local_168.CurPos = '\0';
          FAnsiString::FAnsiString(local_1b8,local_168.Base);
          TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (local_1e0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pFVar4;
          }
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          return pFVar4;
        }
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        puVar12 = puVar12 + 6;
      }
      param_2 = local_1c0;
      pFVar15 = local_1e8;
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        param_2 = local_1c0;
        pFVar15 = local_1e8;
      }
    }
    pFVar15 = pFVar15 + 0x38;
    uVar9 = (ulonglong)local_1f0;
    pFVar16 = pFVar16 + 0x38;
  } while( true );
}

// GetMimeTypeString @ 148cc7800

TStringView<char> * __cdecl
GetMimeTypeString(TStringView<char> *__return_storage_ptr__,EStorageServerContentType param_1)

{
  if (param_1 == CbObject) {
    __return_storage_ptr__->Size = 0x13;
    __return_storage_ptr__->DataPtr = "application/x-ue-cb";
    return __return_storage_ptr__;
  }
  if (param_1 != Binary) {
    if (param_1 != CompressedBinary) {
      __return_storage_ptr__->Size = 7;
      __return_storage_ptr__->DataPtr = "unknown";
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Size = 0x15;
    __return_storage_ptr__->DataPtr = "application/x-ue-comp";
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Size = 0x18;
  __return_storage_ptr__->DataPtr = "application/octet-stream";
  return __return_storage_ptr__;
}

// GetTypeHash @ 148cc85d0

uint __cdecl GetTypeHash(TInterval<unsigned___int64> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (int)(param_1->Max >> 0x20) * 0x17 + (int)param_1->Max;
  uVar2 = ((int)(param_1->Min >> 0x20) * 0x17 - uVar3) + (int)param_1->Min ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// IsFileInDynamicPath @ 148ccc850

/* WARNING: Removing unreachable block (ram,0x000148ccca5c) */
/* WARNING: Removing unreachable block (ram,0x000148ccca6a) */

bool __cdecl IsFileInDynamicPath(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FString *pFVar13;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar12 = false;
  pFVar13 = FPaths::ProjectSavedDir();
  bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
  if (!bVar11) {
    pFVar13 = FPaths::EngineSavedDir(&local_18);
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    bVar3 = false;
    bVar2 = false;
    bVar12 = false;
    bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
    if (!bVar11) {
      pFVar13 = FPaths::GeneratedConfigDir(&local_28);
      bVar10 = true;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
      bVar3 = false;
      bVar2 = false;
      bVar12 = false;
      bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
      if (!bVar11) {
        pFVar13 = FPaths::GameAgnosticSavedDir(&local_38);
        bVar10 = true;
        bVar9 = true;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        bVar3 = false;
        bVar2 = false;
        bVar12 = false;
        bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
        if (!bVar11) {
          pFVar13 = FPaths::EngineVersionAgnosticUserDir(&local_48);
          bVar10 = true;
          bVar9 = true;
          bVar8 = true;
          bVar7 = false;
          bVar6 = false;
          bVar5 = false;
          bVar4 = true;
          bVar3 = false;
          bVar2 = false;
          bVar12 = false;
          bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
          if (!bVar11) {
            pFVar13 = FPaths::EngineUserDir(&local_58);
            bVar10 = true;
            bVar9 = true;
            bVar8 = true;
            bVar7 = true;
            bVar6 = false;
            bVar5 = false;
            bVar4 = true;
            bVar3 = false;
            bVar2 = false;
            bVar12 = false;
            bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
            if (!bVar11) {
              pFVar13 = FPaths::ProjectUserDir(&local_68);
              bVar10 = true;
              bVar9 = true;
              bVar8 = true;
              bVar7 = true;
              bVar6 = true;
              bVar5 = false;
              bVar4 = true;
              bVar3 = false;
              bVar2 = false;
              bVar12 = false;
              bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
              if (!bVar11) {
                pFVar13 = FPaths::EngineIntermediateDir(&local_78);
                bVar10 = true;
                bVar9 = true;
                bVar8 = true;
                bVar7 = true;
                bVar6 = true;
                bVar5 = true;
                bVar4 = true;
                bVar3 = false;
                bVar2 = false;
                bVar12 = false;
                bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
                if (!bVar11) {
                  pFVar13 = FPaths::ProjectIntermediateDir(&local_88);
                  bVar10 = true;
                  bVar9 = true;
                  bVar8 = true;
                  bVar7 = true;
                  bVar6 = true;
                  bVar5 = true;
                  bVar4 = true;
                  bVar3 = false;
                  bVar2 = false;
                  bVar12 = false;
                  bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
                  if (!bVar11) {
                    pFVar13 = FPaths::CloudDir(&local_98);
                    bVar10 = true;
                    bVar9 = true;
                    bVar8 = true;
                    bVar7 = true;
                    bVar6 = true;
                    bVar5 = true;
                    bVar4 = true;
                    bVar3 = false;
                    bVar2 = false;
                    bVar12 = true;
                    bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
                    if (!bVar11) {
                      pFVar13 = FPaths::GameDevelopersDir(&local_a8);
                      bVar10 = true;
                      bVar9 = true;
                      bVar8 = true;
                      bVar7 = true;
                      bVar6 = true;
                      bVar5 = true;
                      bVar4 = true;
                      bVar3 = true;
                      bVar2 = false;
                      bVar12 = true;
                      bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
                      if (!bVar11) {
                        bVar12 = FPaths::HasProjectPersistentDownloadDir();
                        if (bVar12) {
                          pFVar13 = FPaths::ProjectPersistentDownloadDir(&local_b8);
                          bVar10 = true;
                          bVar9 = true;
                          bVar8 = true;
                          bVar7 = true;
                          bVar6 = true;
                          bVar5 = true;
                          bVar4 = true;
                          bVar3 = true;
                          bVar2 = true;
                          bVar12 = true;
                          bVar11 = FPaths::IsUnderDirectory(param_1,pFVar13);
                          if (bVar11) goto LAB_148ccca0a;
                        }
                        bVar10 = true;
                        bVar9 = true;
                        bVar8 = true;
                        bVar7 = true;
                        bVar6 = true;
                        bVar5 = true;
                        bVar4 = true;
                        bVar3 = true;
                        bVar12 = true;
                        bVar11 = false;
                        goto LAB_148ccca0d;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_148ccca0a:
  bVar11 = true;
LAB_148ccca0d:
  if ((bVar2) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((bVar12) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar8) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar9) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar10) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar11;
}

// PercentEncodeString @ 148cd22f0

void __cdecl PercentEncodeString(TStringBuilderBase<char> *param_1,FString *param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  iVar2 = (param_2->Data).ArrayNum;
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  pFVar6 = pFVar4 + (longlong)iVar2 * 2 + -2;
  if (iVar2 == 0) {
    pFVar6 = pFVar4 + (longlong)iVar2 * 2;
  }
  do {
    if ((param_2->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar6) {
      return;
    }
    uVar1 = *(ushort *)pFVar4;
    uVar5 = (ulonglong)uVar1;
    switch(uVar1) {
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2f:
    case 0x3a:
    case 0x3b:
    case 0x3d:
    case 0x3f:
    case 0x40:
    case 0x5b:
    case 0x5d:
      if (param_1->End < param_1->CurPos + uVar5) {
        TStringBuilderBase<char>::Extend(param_1,uVar5);
      }
      if (uVar1 == 0) goto LAB_148cd23b7;
      pvVar3 = FGenericPlatformString::Memcpy(param_1->CurPos,"%02X",uVar5);
      pFVar4 = pFVar4 + 2;
      param_1->CurPos = (char *)((longlong)pvVar3 + uVar5);
      break;
    default:
      TStringBuilderBase<char>::AppendfImpl(param_1,"%c");
LAB_148cd23b7:
      pFVar4 = pFVar4 + 2;
    }
  } while( true );
}

// ProcessResponse @ 148cd2e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbObject * __cdecl
ProcessResponse(FCbObject *__return_storage_ptr__,FIoBuffer param_1,
               EStorageServerContentType param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  code cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  void *pvVar14;
  BufCore *this;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  FCbField *pFVar18;
  FCbObject *pFVar19;
  FSharedBuffer FVar20;
  ulong64 uVar21;
  FCompressedBufferReader *this_00;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_198 [2];
  undefined1 local_188 [16];
  FArchiveState local_178;
  void *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  FCompressedBufferReader local_98;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FCbObjectView::FCbObjectView((FCbObjectView *)__return_storage_ptr__);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  if (param_2 == CbObject) {
    puVar11 = *(undefined8 **)param_1.CorePtr.Reference;
    uVar7 = *(undefined1 *)(puVar11 + 3);
    uVar12 = *puVar11;
    uVar9 = *(undefined4 *)(puVar11 + 1);
    local_178._padding_ = 0;
    local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_178._40_8_ = 0;
    local_178.ArSerializingDefaults = 0;
    local_178.ArPortFlags = 0;
    local_178.ArMaxSerializeSize = 0;
    local_178.ArUEVer.FileVersionUE4 = 0;
    local_178.ArUEVer.FileVersionUE5 = 0;
    local_178.ArLicenseeUEVer = 0;
    local_178.ArEngineVer.Major = 0;
    local_178.ArEngineVer.Minor = 0;
    local_178.ArEngineVer.Patch = 0;
    local_178.ArEngineVer._6_2_ = 0;
    local_178.ArEngineVer.Changelist = 0;
    local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_178.SerializedProperty = (FProperty *)0x0;
    local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_178.bCustomVersionsAreReset = false;
    local_178._129_7_ = 0;
    local_178.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_178);
    local_e8 = (void *)0x0;
    local_178._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_d0 = 0x7fffffffffffffff;
    local_e0 = uVar12;
    local_d8 = (ulonglong)CONCAT14(uVar7,uVar9);
    FArchiveState::SetIsLoading(&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    local_188._8_8_ = FUniqueBuffer::Alloc;
    local_188._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
         ::Call;
    pFVar18 = LoadCompactBinary((FCbField *)local_1a8,(FArchive *)&local_178,
                                (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)local_188);
    pFVar19 = FCbField::AsObject(pFVar18,(FCbObject *)local_58);
    uVar9 = *(undefined4 *)&pFVar19->field_0x4;
    uVar15 = *(undefined4 *)&pFVar19->field_0x8;
    uVar16 = *(undefined4 *)&pFVar19->field_0xc;
    *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)pFVar19;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar9;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar15;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar16;
    plVar13 = *(longlong **)&__return_storage_ptr__->field_0x10;
    uVar12 = *(undefined8 *)&pFVar19->field_0x10;
    *(undefined8 *)&pFVar19->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar12;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar13 + 3;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar5 & 0x3fffffff) == 1) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        plVar13[1] = 0;
        plVar13[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar13 + 3);
        uVar6 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if (((uint)(uVar6 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)*plVar13)(plVar13,1);
        }
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_58 + 0x10));
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_198);
    FArchive::~FArchive((FArchive *)&local_178);
  }
  else if (param_2 == CompressedBinary) {
    FVar20 = FSharedBuffer::MakeView(local_1a8,**(ulong64 **)param_1.CorePtr.Reference);
    FCompressedBuffer::FromCompressed
              ((FCompressedBuffer *)local_58,(FSharedBuffer *)FVar20.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_1a8);
    uVar21 = FCompressedBuffer::GetRawSize((FCompressedBuffer *)local_58);
    FIoBuffer::FIoBuffer((FIoBuffer *)local_188,uVar21);
    this_00 = FCompressedBufferReader::FCompressedBufferReader
                        (&local_98,(FCompressedBuffer *)local_58);
    local_1a8._0_8_ = *(undefined8 *)local_188._0_8_;
    local_1a8._8_8_ =
         ZEXT58(CONCAT14(*(code *)(local_188._0_8_ + 0x18),*(uint *)(local_188._0_8_ + 8)));
    bVar17 = FCompressedBufferReader::TryDecompressTo(this_00,(TMemoryView<void> *)local_1a8,0,None)
    ;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.CompressedBlock.Owner)
    ;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.RawBlock.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.Header.Owner);
    if (bVar17) {
      uVar10 = *(uint *)(local_188._0_8_ + 8);
      cVar8 = *(code *)(local_188._0_8_ + 0x18);
      pvVar14 = *(void **)local_188._0_8_;
      FArchiveState::FArchiveState(&local_178);
      local_178._padding_ = (longlong)&___7FBufferReaderBase__6B_;
      local_e0 = 0;
      local_d0 = local_d0 & 0xffffffffffffff00;
      local_e8 = pvVar14;
      local_d8 = (ulonglong)CONCAT14(cVar8,uVar10);
      FArchiveState::SetIsLoading(&local_178,true);
      (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
      local_1a8._8_8_ = FUniqueBuffer::Alloc;
      local_178._padding_ = (longlong)&___7FBufferReader__6B_;
      local_1a8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
           ::Call;
      pFVar18 = LoadCompactBinary((FCbField *)local_b0,(FArchive *)&local_178,
                                  (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)local_1a8
                                 );
      pFVar19 = FCbField::AsObject(pFVar18,(FCbObject *)local_c8);
      uVar9 = *(undefined4 *)&pFVar19->field_0x4;
      uVar15 = *(undefined4 *)&pFVar19->field_0x8;
      uVar16 = *(undefined4 *)&pFVar19->field_0xc;
      *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)pFVar19;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar9;
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar15;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar16;
      plVar13 = *(longlong **)&__return_storage_ptr__->field_0x10;
      uVar12 = *(undefined8 *)&pFVar19->field_0x10;
      *(undefined8 *)&pFVar19->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar12;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 3;
        lVar5 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar5 & 0x3fffffff) == 1) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          plVar13[1] = 0;
          plVar13[2] = 0;
          LOCK();
          puVar2 = (ulonglong *)(plVar13 + 3);
          uVar6 = *puVar2;
          *puVar2 = *puVar2 - 0x40000000;
          UNLOCK();
          if (((uint)(uVar6 >> 0x1e) & 0x3fffffff) == 1) {
            (**(code **)*plVar13)(plVar13,1);
          }
        }
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_c8 + 0x10));
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_b0 + 0x10));
      local_178._padding_ = (longlong)&___7FBufferReader__6B_;
      if ((char)local_d0 != '\0') {
        FMemory::Free(local_e8);
        local_e8 = (void *)0x0;
      }
      local_178._padding_ = (longlong)&___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)&local_178);
    }
    uVar12 = local_188._0_8_;
    if ((BufCore *)local_188._0_8_ != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_188._0_8_);
      LOCK();
      piVar3 = (int *)(uVar12 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)uVar12);
        operator_delete((void *)uVar12,0x20);
      }
    }
    FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)local_58);
  }
  this = *(BufCore **)param_1.CorePtr.Reference;
  if (this != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this);
    LOCK();
    piVar3 = &this->NumRefs;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FIoBuffer::BufCore::~BufCore(this);
      operator_delete(this,0x20);
    }
  }
  return __return_storage_ptr__;
}

// SetZenCacheRatio @ 148cde4c0

void __cdecl SetZenCacheRatio(void)

{
  ushort uVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = 0.0;
  if (0 < __GTraceCounterZenCacheMiss.Value + __GTraceCounterZenCacheHit.Value) {
    fVar2 = (float)__GTraceCounterZenCacheHit.Value /
            (float)(__GTraceCounterZenCacheMiss.Value + __GTraceCounterZenCacheHit.Value);
  }
  dVar3 = (double)(fVar2 * __real_42c80000);
  if ((__GTraceCounterZenCacheRatio.Value != dVar3) &&
     (__GTraceCounterZenCacheRatio.Value = dVar3, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterZenCacheRatio.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenCacheRatio.CounterName,TraceCounterType_Float,
                         __GTraceCounterZenCacheRatio.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenCacheRatio.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenCacheRatio.CounterId._2_2_ = 0;
        __GTraceCounterZenCacheRatio.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenCacheRatio.CounterId._0_2_,__GTraceCounterZenCacheRatio.Value);
    return;
  }
  return;
}

// Z_Construct_UClass_UZenStreamingSettings_NoRegister @ 148ce40d0

UClass * __cdecl Z_Construct_UClass_UZenStreamingSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StorageServerClient",L"ZenStreamingSettings",
               &Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton,
               UZenStreamingSettings::StaticRegisterNativesUZenStreamingSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UZenStreamingSettings>,
               InternalVTableHelperCtorCaller<UZenStreamingSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UZenStreamingSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_StorageServerClient @ 148ce4240

void __cdecl IMPLEMENT_MODULE_StorageServerClient(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarPreferLocalForNonAssets'' @ 15040b6f0

void __cdecl _dynamic_atexit_destructor_for__CVarPreferLocalForNonAssets__(void)

{
  CVarPreferLocalForNonAssets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPreferLocalForNonAssets);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_StorageServerIoDispatcherBatchSize'' @ 15040b710

void __cdecl _dynamic_atexit_destructor_for__CVar_StorageServerIoDispatcherBatchSize__(void)

{
  CVar_StorageServerIoDispatcherBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_StorageServerIoDispatcherBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_StorageServerIoDispatcherMaxActiveBatchCount'' @ 15040b730

void __cdecl
_dynamic_atexit_destructor_for__CVar_StorageServerIoDispatcherMaxActiveBatchCount__(void)

{
  CVar_StorageServerIoDispatcherMaxActiveBatchCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_StorageServerIoDispatcherMaxActiveBatchCount);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultPlatformFileInstance'' @ 15040b750

void __cdecl
`FStorageServerClientModule::GetPlatformFile'::__l2::
_dynamic_atexit_destructor_for__DefaultPlatformFileInstance__(void)

{
  if (DefaultPlatformFileInstance.Ptr != (IPlatformFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015040b764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*DefaultPlatformFileInstance.Ptr)(DefaultPlatformFileInstance.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GStorageServerEngineStartupPrecache'' @ 15040b770

void __cdecl _dynamic_atexit_destructor_for__GStorageServerEngineStartupPrecache__(void)

{
  if (GStorageServerEngineStartupPrecache.Ptr != (FStorageServerEngineStartupPrecache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015040b784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((GStorageServerEngineStartupPrecache.Ptr)->_padding_ + 0x28))
              (GStorageServerEngineStartupPrecache.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Inner'' @ 15040b790

void __cdecl
`FStorageServerPlatformFile::ConvertToAbsolutePathForExternalAppForRead'::__l5::
_dynamic_atexit_destructor_for__Inner__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Inner.Data.AllocatorInstance.Data;
  if (Inner.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Inner.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15040b7b0

void __cdecl `FStorageServerFileCache::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
              ::__l2::Instance.CriticalSection);
  TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::Empty
            (&`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
              ::__l2::Instance.Cache,0);
  `public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
  ::__l2::Instance.Cache.LookupSet.HashSize = 0;
  if (`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
      ::__l2::Instance.Cache.LookupSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
                          ::__l2::Instance.Cache.LookupSet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FStorageServerFileCache&___ptr64___cdecl_FStorageServerFileCache::Get(void)'
                 ::__l2::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogCacheJournal'' @ 15040b800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCacheJournal__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCacheJournal);
  return;
}

// `dynamic_atexit_destructor_for_'LogStorageServerConnection'' @ 15040b820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStorageServerConnection__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStorageServerConnection);
  return;
}

// `dynamic_atexit_destructor_for_'LogStorageServerPlatformBackend'' @ 15040b840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStorageServerPlatformBackend__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStorageServerPlatformBackend);
  return;
}

// `dynamic_atexit_destructor_for_'LogStorageServerPlatformFile'' @ 15040b860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStorageServerPlatformFile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStorageServerPlatformFile);
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterBackBuffer'' @ 15040b880

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterBackBuffer__(void)

{
  if ((__GTraceCounterBackBuffer.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterBackBuffer.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterFrontBuffer'' @ 15040b8a0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterFrontBuffer__(void)

{
  if ((__GTraceCounterFrontBuffer.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterFrontBuffer.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterStorageServerCache_HitRatioBytes'' @ 15040b8c0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterStorageServerCache_HitRatioBytes__(void)

{
  if ((__GTraceCounterStorageServerCache_HitRatioBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterStorageServerCache_HitRatioBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenCacheHit'' @ 15040b8e0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenCacheHit__(void)

{
  if ((__GTraceCounterZenCacheHit.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenCacheHit.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenCacheHitBytes'' @ 15040b900

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenCacheHitBytes__(void)

{
  if ((__GTraceCounterZenCacheHitBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenCacheHitBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenCacheMiss'' @ 15040b920

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenCacheMiss__(void)

{
  if ((__GTraceCounterZenCacheMiss.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenCacheMiss.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenCacheMissBytes'' @ 15040b940

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenCacheMissBytes__(void)

{
  if ((__GTraceCounterZenCacheMissBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenCacheMissBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenCacheRatio'' @ 15040b960

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenCacheRatio__(void)

{
  if ((__GTraceCounterZenCacheRatio.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenCacheRatio.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenHttpClientSerializedBytes'' @ 15040b980

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenHttpClientSerializedBytes__(void)

{
  if ((__GTraceCounterZenHttpClientSerializedBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenHttpClientSerializedBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenHttpClientThroughputBytes'' @ 15040b9a0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenHttpClientThroughputBytes__(void)

{
  if ((__GTraceCounterZenHttpClientThroughputBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenHttpClientThroughputBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenJournalSectionedChunks'' @ 15040b9c0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenJournalSectionedChunks__(void)

{
  if ((__GTraceCounterZenJournalSectionedChunks.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenJournalSectionedChunks.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenJournalSectionedEntries'' @ 15040b9e0

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenJournalSectionedEntries__(void)

{
  if ((__GTraceCounterZenJournalSectionedEntries.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenJournalSectionedEntries.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenJournalSimpleChunks'' @ 15040ba00

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenJournalSimpleChunks__(void)

{
  if ((__GTraceCounterZenJournalSimpleChunks.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenJournalSimpleChunks.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenJournalSimpleEntries'' @ 15040ba20

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenJournalSimpleEntries__(void)

{
  if ((__GTraceCounterZenJournalSimpleEntries.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenJournalSimpleEntries.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenJournalSimpleInvalidated'' @ 15040ba40

void __cdecl _dynamic_atexit_destructor_for____GTraceCounterZenJournalSimpleInvalidated__(void)

{
  if ((__GTraceCounterZenJournalSimpleInvalidated.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenJournalSimpleInvalidated.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenLinearStrategyCacheCurrentSize'' @ 15040ba60

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterZenLinearStrategyCacheCurrentSize__(void)

{
  if ((__GTraceCounterZenLinearStrategyCacheCurrentSize.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenLinearStrategyCacheCurrentSize.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterZenLinearStrategyCacheInvalidSize'' @ 15040ba80

void __cdecl
_dynamic_atexit_destructor_for____GTraceCounterZenLinearStrategyCacheInvalidSize__(void)

{
  if ((__GTraceCounterZenLinearStrategyCacheInvalidSize.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterZenLinearStrategyCacheInvalidSize.CounterName);
    return;
  }
  return;
}

