// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 373

// DefaultConfig'' @ 1410a6290

void __cdecl
`dynamic_initializer_for_'UE::Net::FGameplayTagContainerNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagContainerNetSerializer::
         DefaultConfig__);
  return;
}

// DefaultConfig'' @ 1410a62b0

void __cdecl `dynamic_initializer_for_'UE::Net::FGameplayTagNetSerializer::DefaultConfig__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagNetSerializer::DefaultConfig__);
  return;
}

// EmptyContainer'' @ 1410a62d0

void __cdecl `dynamic_initializer_for_'FGameplayTagContainer::EmptyContainer__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameplayTagContainer::EmptyContainer__);
  return;
}

// EmptyQuery'' @ 1410a62f0

void __cdecl `dynamic_initializer_for_'FGameplayTagQuery::EmptyQuery__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FGameplayTagQuery::EmptyQuery__);
  return;
}

// GameplayTokenStoreName'' @ 1410a6310

void __cdecl
`dynamic_initializer_for_'UE::Net::FGameplayTagTokenStore::GameplayTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FGameplayTagTokenStore::GameplayTokenStoreName,L"GameplayTagTokenStore");
  return;
}

// NAME_Categories'' @ 1410a6330

void __cdecl `dynamic_initializer_for_'UGameplayTagsManager::NAME_Categories__(void)

{
  ::FName::FName(&UGameplayTagsManager::NAME_Categories,"Categories");
  return;
}

// NAME_GameplayTagFilter'' @ 1410a6350

void __cdecl `dynamic_initializer_for_'UGameplayTagsManager::NAME_GameplayTagFilter__(void)

{
  ::FName::FName(&UGameplayTagsManager::NAME_GameplayTagFilter,"GameplayTagFilter");
  return;
}

// NAME_NativeGameplayTag'' @ 1410a6370

void __cdecl `dynamic_initializer_for_'FNativeGameplayTag::NAME_NativeGameplayTag__(void)

{
  ::FName::FName(&FNativeGameplayTag::NAME_NativeGameplayTag,"Native");
  return;
}

// NameTokenStoreName'' @ 1410a6390

void __cdecl `dynamic_initializer_for_'UE::Net::FNameTokenStore::NameTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FNameTokenStore::NameTokenStoreName,L"NameTokenStore");
  return;
}

// NetSerializerRegistryDelegates'' @ 1410a63b0

void __cdecl
`dynamic_initializer_for_'UE::Net::FGameplayTagContainerNetSerializer::
NetSerializerRegistryDelegates__(void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FGameplayTagContainerNetSerializer::NetSerializerRegistryDelegates);
  UE::Net::FGameplayTagContainerNetSerializer::NetSerializerRegistryDelegates._0_8_ =
       &___7FNetSerializerRegistryDelegates_FGameplayTagContainerNetSerializer_Net_UE__6B_;
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagContainerNetSerializer::
         NetSerializerRegistryDelegates__);
  return;
}

// NetSerializerRegistryDelegates'' @ 1410a63f0

void __cdecl
`dynamic_initializer_for_'UE::Net::FGameplayTagNetSerializer::NetSerializerRegistryDelegates__(void)

{
  UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FGameplayTagNetSerializer::NetSerializerRegistryDelegates);
  UE::Net::FGameplayTagNetSerializer::NetSerializerRegistryDelegates._0_8_ =
       &___7FNetSerializerRegistryDelegates_FGameplayTagNetSerializer_Net_UE__6B_;
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagNetSerializer::
         NetSerializerRegistryDelegates__);
  return;
}

// OnGameplayTagTreeChanged'' @ 1410a6430

void __cdecl `dynamic_initializer_for_'IGameplayTagsModule::OnGameplayTagTreeChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IGameplayTagsModule::OnGameplayTagTreeChanged__);
  return;
}

// OnTagSettingsChanged'' @ 1410a6450

void __cdecl `dynamic_initializer_for_'IGameplayTagsModule::OnTagSettingsChanged__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IGameplayTagsModule::OnTagSettingsChanged__);
  return;
}

// StructNetSerializerConfig'' @ 1410a6470

void __cdecl
`dynamic_initializer_for_'UE::Net::FGameplayTagContainerNetSerializer::StructNetSerializerConfig__
          (void)

{
  FStructNetSerializerConfig::FStructNetSerializerConfig
            (&UE::Net::FGameplayTagContainerNetSerializer::StructNetSerializerConfig);
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagContainerNetSerializer::
         StructNetSerializerConfig__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayTagDetailedStats'' @ 1410a64a0

void __cdecl _dynamic_initializer_for__CVarGameplayTagDetailedStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayTagDetailedStats,L"GameplayTags.EnableDetailedStats",
             &GEnableGameplayTagDetailedStats,L"Runtime toggle for verbose CPU profiling stats",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayTagDetailedStats__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayTagPrintReportOnShutdown'' @ 1410a64f0

void __cdecl _dynamic_initializer_for__CVarGameplayTagPrintReportOnShutdown__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayTagPrintReportOnShutdown,L"GameplayTags.PrintReportOnShutdown",
             &GameplayTagPrintReportOnShutdown,L"Print gameplay tag replication report on shutdown",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayTagPrintReportOnShutdown__);
  return;
}

// `dynamic_initializer_for_'CVarOldReplaysUseGameplayTagFastReplication'' @ 1410a6540

void __cdecl _dynamic_initializer_for__CVarOldReplaysUseGameplayTagFastReplication__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOldReplaysUseGameplayTagFastReplication,
             L"GameplayTags.OldReplaysUseFastReplication",&GOldReplaysUseGameplayTagFastReplication,
             L"When loading an outdated replay (before dynamic replication), do we assume it used fast replication?"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOldReplaysUseGameplayTagFastReplication__);
  return;
}

// `dynamic_initializer_for_'CVarPrintNetIndiceAssignment'' @ 1410a6590

void __cdecl _dynamic_initializer_for__CVarPrintNetIndiceAssignment__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrintNetIndiceAssignment,L"GameplayTags.PrintNetIndiceAssignment",
             &PrintNetIndiceAssignment,L"Logs GameplayTag NetIndice assignment",0);
  atexit(_dynamic_atexit_destructor_for__CVarPrintNetIndiceAssignment__);
  return;
}

// `dynamic_initializer_for_'FGameplayTagQueryTest_EmptyAutomationTestInstance'' @ 1410a65e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FGameplayTagQueryTest_EmptyAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FGameplayTagQueryTest_Empty");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FGameplayTagQueryTest_EmptyAutomationTestInstance,&local_18,
             false);
  FGameplayTagQueryTest_EmptyAutomationTestInstance._0_8_ = &___7FGameplayTagQueryTest_Empty__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FGameplayTagQueryTest_EmptyAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FGameplayTagTestAutomationTestInstance'' @ 1410a6640

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FGameplayTagTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FGameplayTagTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FGameplayTagTestAutomationTestInstance,&local_18,false);
  FGameplayTagTestAutomationTestInstance._0_8_ = &___7FGameplayTagTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FGameplayTagTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance'' @ 1410a66a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSystem__GameplayTags__Manager__IsValidGameplayTagString");
  FSystem__GameplayTags__Manager__IsValidGameplayTagString::
  FSystem__GameplayTags__Manager__IsValidGameplayTagString
            (&FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance__
        );
  return;
}

// `dynamic_initializer_for_'GameplayTagPrintReplicationIndicesCmd'' @ 1410a66f0

void __cdecl _dynamic_initializer_for__GameplayTagPrintReplicationIndicesCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = GameplayTagPrintReplicationIndices;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GameplayTagPrintReplicationIndicesCmd,L"GameplayTags.PrintNetIndices",
             L"Prints net indices for all known tags",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GameplayTagPrintReplicationIndicesCmd__);
  return;
}

// `dynamic_initializer_for_'GameplayTagPrintReplicationMapCmd'' @ 1410a6830

void __cdecl _dynamic_initializer_for__GameplayTagPrintReplicationMapCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = GameplayTagPrintReplicationMap;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GameplayTagPrintReplicationMapCmd,L"GameplayTags.PrintReport",
             L"Prints frequency of gameplay tags",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GameplayTagPrintReplicationMapCmd__);
  return;
}

// `dynamic_initializer_for_'LogGameplayTags'' @ 1410a6970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGameplayTags__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGameplayTags,L"LogGameplayTags",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGameplayTags__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGameplayTags'' @ 1410a69b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantGameplayTags__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GameplayTags";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GameplayTags",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGameplayTagsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_Advanced'' @ 1410a6a00

void __cdecl _dynamic_initializer_for__NAME_Advanced__(void)

{
  FName::FName(&NAME_Advanced,"Advanced");
  return;
}

// `dynamic_initializer_for_'NAME_DefaultGameplayTagsIni'' @ 1410a6a20

void __cdecl _dynamic_initializer_for__NAME_DefaultGameplayTagsIni__(void)

{
  FName::FName(&NAME_DefaultGameplayTagsIni,"DefaultGameplayTags.ini");
  return;
}

// `dynamic_initializer_for_'NAME_Native'' @ 1410a6a40

void __cdecl _dynamic_initializer_for__NAME_Native__(void)

{
  FName::FName(&NAME_Native,L"Native");
  return;
}

// `dynamic_initializer_for_'PrintReplicationFrequencyReportCommand'' @ 1410a6a60

void __cdecl _dynamic_initializer_for__PrintReplicationFrequencyReportCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&PrintReplicationFrequencyReportCommand,L"GameplayTags.PrintReplicationFrequencyReport"
             ,L"Prints the frequency each tag is replicated.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__PrintReplicationFrequencyReportCommand__);
  return;
}

// `dynamic_initializer_for_'PrintReplicationIndicesCommand'' @ 1410a6b90

void __cdecl _dynamic_initializer_for__PrintReplicationIndicesCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&PrintReplicationIndicesCommand,L"GameplayTags.PrintReplicationIndicies",
             L"Prints the index assigned to each tag for fast network replication.",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__PrintReplicationIndicesCommand__);
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_GameplayTag'' @ 1410a6cc0

void __cdecl
UE::Net::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_GameplayTag__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_GameplayTag,"GameplayTag");
  return;
}

// `dynamic_initializer_for_'PropertyNetSerializerRegistry_NAME_GameplayTagContainer'' @ 1410a6ce0

void __cdecl
UE::Net::_dynamic_initializer_for__PropertyNetSerializerRegistry_NAME_GameplayTagContainer__(void)

{
  ::FName::FName(&PropertyNetSerializerRegistry_NAME_GameplayTagContainer,"GameplayTagContainer");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_AddTag'' @ 1410a6d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_AddTag__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_AddTag ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AddTag>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_AddTag");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_AddTag,*pFVar1,
               L"FGameplayTagContainer::AddTag","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_AppendMatchingTags'' @ 1410a6d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_AppendMatchingTags__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_AppendMatchingTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendMatchingTags>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_AppendMatchingTags");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_AppendMatchingTags,
               *pFVar1,L"FGameplayTagContainer::AppendMatchingTags","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_AppendTags'' @ 1410a6e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_AppendTags__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_AppendTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_AppendTags>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_AppendTags");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_AppendTags,*pFVar1,
               L"FGameplayTagContainer::AppendTags","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_DoesTagContainerMatch'' @ 1410a6eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_DoesTagContainerMatch__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_DoesTagContainerMatch ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_DoesTagContainerMatch>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_DoesTagContainerMatch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FGameplayTagContainer_DoesTagContainerMatch,*pFVar1,
               L"FGameplayTagContainer::DoesTagContainerMatch","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_FillParentTags'' @ 1410a6f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_FillParentTags__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_FillParentTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_FillParentTags>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_FillParentTags");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_FillParentTags,
               *pFVar1,L"FGameplayTagContainer::FillParentTags","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_Filter'' @ 1410a6fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_Filter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_Filter ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_Filter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_Filter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_Filter,*pFVar1,
               L"FGameplayTagContainer::Filter","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_GetGameplayTagParents'' @ 1410a7060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_GetGameplayTagParents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_GetGameplayTagParents ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_GetGameplayTagParents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_GetGameplayTagParents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FGameplayTagContainer_GetGameplayTagParents,*pFVar1,
               L"FGameplayTagContainer::GetGameplayTagParents","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_RemoveTag'' @ 1410a70f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_RemoveTag__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_RemoveTag ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTag>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_RemoveTag");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_RemoveTag,*pFVar1,
               L"FGameplayTagContainer::RemoveTag","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_RemoveTagByExplicitName'' @ 1410a7180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_RemoveTagByExplicitName__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_RemoveTagByExplicitName ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTagByExplicitName>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_RemoveTagByExplicitName");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FGameplayTagContainer_RemoveTagByExplicitName,*pFVar1,
               L"FGameplayTagContainer::RemoveTagByExplicitName","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTagContainer_RemoveTags'' @ 1410a7210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTagContainer_RemoveTags__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTagContainer_RemoveTags ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTagContainer_RemoveTags>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTagContainer_RemoveTags");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTagContainer_RemoveTags,*pFVar1,
               L"FGameplayTagContainer::RemoveTags","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTag_GetSingleTagContainer'' @ 1410a72a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTag_GetSingleTagContainer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTag_GetSingleTagContainer ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_GetSingleTagContainer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTag_GetSingleTagContainer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_GetSingleTagContainer,*pFVar1
               ,L"FGameplayTag::GetSingleTagContainer","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTag_MatchesAny'' @ 1410a7330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTag_MatchesAny__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTag_MatchesAny ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesAny>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTag_MatchesAny");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_MatchesAny,*pFVar1,
               L"FGameplayTag::MatchesAny","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTag_MatchesTag'' @ 1410a73c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTag_MatchesTag__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTag_MatchesTag ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_MatchesTag>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTag_MatchesTag");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_MatchesTag,*pFVar1,
               L"FGameplayTag::MatchesTag","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FGameplayTag_NetSerialize'' @ 1410a7450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FGameplayTag_NetSerialize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FGameplayTag_NetSerialize ==
      (FThreadSafeStaticStat<FStat_STAT_FGameplayTag_NetSerialize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FGameplayTag_NetSerialize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGameplayTag_NetSerialize,*pFVar1,
               L"FGameplayTag::NetSerialize","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GameplayTags_AddTagIniSearchPath'' @ 1410a74e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GameplayTags_AddTagIniSearchPath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GameplayTags_AddTagIniSearchPath ==
      (FThreadSafeStaticStat<FStat_STAT_GameplayTags_AddTagIniSearchPath>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GameplayTags_AddTagIniSearchPath");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameplayTags_AddTagIniSearchPath,*pFVar1,
               L"Add Tag *.ini Search Path","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GameplayTags_LoadGameplayTags'' @ 1410a7570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GameplayTags_LoadGameplayTags__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GameplayTags_LoadGameplayTags ==
      (FThreadSafeStaticStat<FStat_STAT_GameplayTags_LoadGameplayTags>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GameplayTags_LoadGameplayTags");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameplayTags_LoadGameplayTags,*pFVar1,
               L"Load Gameplay Tags","STATGROUP_GameplayTags","STATCAT_Advanced",L"Gameplay Tags",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GameplayTags_RemoveTagIniSearchPath'' @ 1410a7600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GameplayTags_RemoveTagIniSearchPath__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GameplayTags_RemoveTagIniSearchPath ==
      (FThreadSafeStaticStat<FStat_STAT_GameplayTags_RemoveTagIniSearchPath>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GameplayTags_RemoveTagIniSearchPath");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameplayTags_RemoveTagIniSearchPath,
               *pFVar1,L"Remove Tag *.ini Search Path","STATGROUP_GameplayTags","STATCAT_Advanced",
               L"Gameplay Tags",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UGameplayTagsManager_GetAllParentNodeNames'' @ 1410a7690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_UGameplayTagsManager_GetAllParentNodeNames__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UGameplayTagsManager_GetAllParentNodeNames ==
      (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_GetAllParentNodeNames>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UGameplayTagsManager_GetAllParentNodeNames");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UGameplayTagsManager_GetAllParentNodeNames
               ,*pFVar1,L"UGameplayTagsManager::GetAllParentNodeNames","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UGameplayTagsManager_RequestGameplayTag'' @ 1410a7720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UGameplayTagsManager_RequestGameplayTag__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UGameplayTagsManager_RequestGameplayTag ==
      (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_RequestGameplayTag>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UGameplayTagsManager_RequestGameplayTag");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UGameplayTagsManager_RequestGameplayTag,
               *pFVar1,L"UGameplayTagsManager::RequestGameplayTag","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UGameplayTagsManager_ValidateTagCreation'' @ 1410a77b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UGameplayTagsManager_ValidateTagCreation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UGameplayTagsManager_ValidateTagCreation ==
      (FThreadSafeStaticStat<FStat_STAT_UGameplayTagsManager_ValidateTagCreation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UGameplayTagsManager_ValidateTagCreation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UGameplayTagsManager_ValidateTagCreation,
               *pFVar1,L"UGameplayTagsManager::ValidateTagCreation","STATGROUP_GameplayTags",
               "STATCAT_Advanced",L"Gameplay Tags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TagPackingTestCmd'' @ 1410a7840

void __cdecl _dynamic_initializer_for__TagPackingTestCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = TagPackingTest;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&TagPackingTestCmd,L"GameplayTags.PackingTest",L"Prints frequency of gameplay tags",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__TagPackingTestCmd__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h__Script_GameplayTags_288701521'' @ 1410a7980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h__Script_GameplayTags_288701521__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h__Script_GameplayTags_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h__Script_GameplayTags_1607298145'' @ 1410a79c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h__Script_GameplayTags_1607298145__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h__Script_GameplayTags_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h__Script_GameplayTags_2446340373'' @ 1410a7a00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h__Script_GameplayTags_2446340373__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h__Script_GameplayTags_Statics
             ::ClassInfo,10,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h__Script_GameplayTags_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h__Script_GameplayTags_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h__Script_GameplayTags_585004084'' @ 1410a7a50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h__Script_GameplayTags_585004084__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h__Script_GameplayTags_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h__Script_GameplayTags_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h__Script_GameplayTags_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h__Script_GameplayTags_2894550220'' @ 1410a7aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h__Script_GameplayTags_2894550220__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h__Script_GameplayTags_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h__Script_GameplayTags_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h__Script_GameplayTags_1661827284'' @ 1410a7af0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h__Script_GameplayTags_1661827284__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h__Script_GameplayTags_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h__Script_GameplayTags_2715859918'' @ 1410a7b30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h__Script_GameplayTags_2715859918__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h__Script_GameplayTags_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h__Script_GameplayTags_325760026'' @ 1410a7b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h__Script_GameplayTags_325760026__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h__Script_GameplayTags_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h__Script_GameplayTags_2791577931'' @ 1410a7bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h__Script_GameplayTags_2791577931__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayTags",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h__Script_GameplayTags_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GameplayTags'' @ 1410a7bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GameplayTags__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6079f278;
  local_res8[0].DeclarationsHash = 0xd82ca960;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GameplayTags,L"/Script/GameplayTags",
             &Z_Registration_Info_UPackage__Script_GameplayTags,local_res8);
  return;
}

// Z_Construct_UFunction_UGameplayTagAssetInterface_BP_GetOwnedGameplayTags @ 146abe270

UFunction * __cdecl Z_Construct_UFunction_UGameplayTagAssetInterface_BP_GetOwnedGameplayTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTagAssetInterface_BP_GetOwnedGameplayTags_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146abe2b0

void __cdecl
Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags @ 146abe2c0

UFunction * __cdecl
Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146abe300

void __cdecl
Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags @ 146abe310

UFunction * __cdecl
Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146abe350

void * __thiscall
IGameplayTagsModule::_scalar_deleting_destructor_(IGameplayTagsModule *this,uint param_1)

{
  *this = (IGameplayTagsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 146abe390

void __cdecl
Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag @ 146abe3a0

UFunction * __cdecl Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGameplayTagsList_NoRegister @ 146abe4f0

UClass * __cdecl Z_Construct_UClass_UGameplayTagsList_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsList",
               &Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton,
               UGameplayTagsList::StaticRegisterNativesUGameplayTagsList,0x58,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"GameplayTagsList",
               InternalConstructor<UGameplayTagsList>,
               InternalVTableHelperCtorCaller<UGameplayTagsList>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsList.InnerSingleton;
}

// Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister @ 146abe5a0

UClass * __cdecl Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"RestrictedGameplayTagsList",
               &Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton,
               URestrictedGameplayTagsList::StaticRegisterNativesURestrictedGameplayTagsList,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"GameplayTags",
               InternalConstructor<URestrictedGameplayTagsList>,
               InternalVTableHelperCtorCaller<URestrictedGameplayTagsList>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URestrictedGameplayTagsList.InnerSingleton;
}

// Z_Construct_UPackage__Script_GameplayTags @ 146abeae0

UPackage * __cdecl Z_Construct_UPackage__Script_GameplayTags(void)

{
  if (Z_Registration_Info_UPackage__Script_GameplayTags.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GameplayTags.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GameplayTags.OuterSingleton;
}

// `scalar_deleting_destructor' @ 146abebe0

void * __thiscall
FGameplayTagContainerNetSerializerConfig::_scalar_deleting_destructor_
          (FGameplayTagContainerNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister @ 146abec20

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton,
               UEditableGameplayTagQueryExpression::
               StaticRegisterNativesUEditableGameplayTagQueryExpression,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton;
}

// NewStructOps @ 146abecd0

void * __cdecl
Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagContainerNetSerializerConfig,&UE::CoreUObject::Private::Construct<FGameplayTagContainerNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainerNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FGameplayTagContainerNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FGameplayTagContainerNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UEditableGameplayTagQuery @ 146abed50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQuery(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQuery.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQuery.OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQuery_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQuery.OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression @ 146abed90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch @ 146abedd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch @ 146abee10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch.
      OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch.
         OuterSingleton;
}

// `scalar_deleting_destructor' @ 146abee50

void * __thiscall
FGameplayTagTestBase::_scalar_deleting_destructor_(FGameplayTagTestBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch @ 146abee90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch @ 146abeed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch @ 146abef10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch.
      OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch.
         OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch @ 146abef50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch @ 146abef90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.OuterSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch @ 146abefd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch(void)

{
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.
                OuterSingleton,
               &Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.OuterSingleton;
}

// EGameplayContainerMatchType_StaticEnum @ 146abf050

UEnum * __cdecl EGameplayContainerMatchType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType,(UObject *)pUVar1,
                       L"EGameplayContainerMatchType");
  }
  return Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton;
}

// NewStructOps @ 146abf090

void * __cdecl Z_Construct_UScriptStruct_FGameplayTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTag,&UE::CoreUObject::Private::Construct<FGameplayTag>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTag>,&UE::CoreUObject::Private::Destruct<FGameplayTag>,&UE::CoreUObject::Private::PostSerialize<FGameplayTag>,&UE::CoreUObject::Private::NetSerialize<FGameplayTag>,&UE::CoreUObject::Private::Copy<FGameplayTag>,&UE::CoreUObject::Private::ImportTextItem<FGameplayTag>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FGameplayTag>,&UE::CoreUObject::Private::GetStructTypeHash<FGameplayTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146abf2b0

void * __thiscall
UE::Net::FGameplayTagContainerNetSerializer::FNetSerializerRegistryDelegates::
_scalar_deleting_destructor_(FNetSerializerRegistryDelegates *this,uint param_1)

{
  *(undefined ***)this =
       &___7FNetSerializerRegistryDelegates_FGameplayTagContainerNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 146abf300

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagContainer,&UE::CoreUObject::Private::Construct<FGameplayTagContainer>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainer>,&UE::CoreUObject::Private::Destruct<FGameplayTagContainer>,&UE::CoreUObject::Private::SerializeSlot<FGameplayTagContainer>,&UE::CoreUObject::Private::NetSerialize<FGameplayTagContainer>,&UE::CoreUObject::Private::PostScriptConstruct<FGameplayTagContainer>,&UE::CoreUObject::Private::Copy<FGameplayTagContainer>,&UE::CoreUObject::Private::Identical<FGameplayTagContainer>,&UE::CoreUObject::Private::ImportTextItem<FGameplayTagContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 146abf340

void * __cdecl
Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagCreationWidgetHelper,&UE::CoreUObject::Private::Construct<FGameplayTagCreationWidgetHelper>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagCreationWidgetHelper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// EGameplayTagQueryExprType_StaticEnum @ 146abf380

UEnum * __cdecl EGameplayTagQueryExprType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType,(UObject *)pUVar1,
                       L"EGameplayTagQueryExprType");
  }
  return Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton;
}

// NewStructOps @ 146abf3c0

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagQuery,&UE::CoreUObject::Private::Construct<FGameplayTagQuery>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagQuery>,&UE::CoreUObject::Private::Destruct<FGameplayTagQuery>,&UE::CoreUObject::Private::Copy<FGameplayTagQuery>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UGameplayTagsManager @ 146abf4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTagsManager(void)

{
  if (Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton,
               &Z_Construct_UClass_UGameplayTagsManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton;
}

// Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType @ 146abf500

UEnum * __cdecl Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType(void)

{
  if (Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton,
               &Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGameplayTagSource @ 146abf540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagSource(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagSource.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagSource.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagSource_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagSource.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagSource.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayTagTableRow @ 146abf5c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FGameplayTagTableRow.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow @ 146abf640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRestrictedGameplayTagTableRow.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRestrictedGameplayTagTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRestrictedGameplayTagTableRow.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRestrictedGameplayTagTableRow.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 146abf8c0

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagTableRow,&UE::CoreUObject::Private::Construct<FGameplayTagTableRow>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagTableRow>,&UE::CoreUObject::Private::Destruct<FGameplayTagTableRow>,&UE::CoreUObject::Private::Copy<FGameplayTagTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowNonRestrictedChildren_SetBit @ 146abf900

void __cdecl
Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::
NewProp_bAllowNonRestrictedChildren_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 146abf910

void * __cdecl Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRestrictedGameplayTagTableRow,&UE::CoreUObject::Private::Construct<FRestrictedGameplayTagTableRow>,&UE::CoreUObject::Private::ConstructForTests<FRestrictedGameplayTagTableRow>,&UE::CoreUObject::Private::Destruct<FRestrictedGameplayTagTableRow>,&UE::CoreUObject::Private::Copy<FRestrictedGameplayTagTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EGameplayTagSourceType_StaticEnum @ 146abf950

UEnum * __cdecl EGameplayTagSourceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType,(UObject *)pUVar1,
                       L"EGameplayTagSourceType");
  }
  return Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton;
}

// EGameplayTagSelectionType_StaticEnum @ 146abf990

UEnum * __cdecl EGameplayTagSelectionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType,(UObject *)pUVar1,
                       L"EGameplayTagSelectionType");
  }
  return Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton;
}

// NewStructOps @ 146abf9f0

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagSource,&UE::CoreUObject::Private::Construct<FGameplayTagSource>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagSource>,&UE::CoreUObject::Private::Destruct<FGameplayTagSource>,&UE::CoreUObject::Private::Copy<FGameplayTagSource>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146abfeb0

void * __thiscall
FGameplayTagTest::_scalar_deleting_destructor_(FGameplayTagTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 146ac0100

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagNode,&UE::CoreUObject::Private::Construct<FGameplayTagNode>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagNode>,&UE::CoreUObject::Private::Destruct<FGameplayTagNode>,&UE::CoreUObject::Private::Copy<FGameplayTagNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 146ac01a0

void * __thiscall
FSystem__GameplayTags__Manager__IsValidGameplayTagString::_scalar_deleting_destructor_
          (FSystem__GameplayTags__Manager__IsValidGameplayTagString *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ac04c0

void * __thiscall
FGameplayTagNetSerializerConfig::_scalar_deleting_destructor_
          (FGameplayTagNetSerializerConfig *this,uint param_1)

{
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 146ac0500

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagNetSerializerConfig,&UE::CoreUObject::Private::Construct<FGameplayTagNetSerializerConfig>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagNetSerializerConfig>,&UE::CoreUObject::Private::Destruct<FGameplayTagNetSerializerConfig>,&UE::CoreUObject::Private::Copy<FGameplayTagNetSerializerConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBlueprintGameplayTagLibrary @ 146ac07d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintGameplayTagLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGameplayTagContainer @ 146ac0810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainer.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagContainer.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayTagQuery @ 146ac0890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagQuery(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagQuery.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagQuery.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagQuery.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagQuery.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag @ 146ac09d0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers @ 146ac0ad0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FGameplayTagRedirect @ 146ac0be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagRedirect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagRedirect.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagRedirect.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagRedirect.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FGameplayTagRedirect.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 146ac0c80

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagRedirect,&UE::CoreUObject::Private::Construct<FGameplayTagRedirect>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagRedirect>,&UE::CoreUObject::Private::Destruct<FGameplayTagRedirect>,&UE::CoreUObject::Private::Copy<FGameplayTagRedirect>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer @ 146ac0cc0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_Conv_ObjectToGameplayTagAssetInterface @ 146ac0df0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_Conv_ObjectToGameplayTagAssetInterface(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_Conv_ObjectToGameplayTagAssetInterface_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac0ef0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery @ 146ac0f00

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac1040

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// `scalar_deleting_destructor' @ 146ac1050

void * __thiscall
FGameplayTagsModule::_scalar_deleting_destructor_(FGameplayTagsModule *this,uint param_1)

{
  *this = (FGameplayTagsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag @ 146ac1090

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac10d0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UGameplayTagsDeveloperSettings @ 146ac10e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTagsDeveloperSettings(void)

{
  if (Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton,
               &Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton;
}

// Z_Construct_UClass_UGameplayTagsList @ 146ac1120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTagsList(void)

{
  if (Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton,
               &Z_Construct_UClass_UGameplayTagsList_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton;
}

// Z_Construct_UClass_UGameplayTagsSettings @ 146ac1160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTagsSettings(void)

{
  if (Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton,
               &Z_Construct_UClass_UGameplayTagsSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton;
}

// Z_Construct_UClass_URestrictedGameplayTagsList @ 146ac11a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URestrictedGameplayTagsList(void)

{
  if (Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton,
               &Z_Construct_UClass_URestrictedGameplayTagsList_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGameplayTagCategoryRemap @ 146ac11e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagCategoryRemap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagCategoryRemap.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagCategoryRemap.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagCategoryRemap.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagCategoryRemap.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FRestrictedConfigInfo @ 146ac1260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRestrictedConfigInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 146ac12e0

void * __cdecl Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagCategoryRemap,&UE::CoreUObject::Private::Construct<FGameplayTagCategoryRemap>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagCategoryRemap>,&UE::CoreUObject::Private::Destruct<FGameplayTagCategoryRemap>,&UE::CoreUObject::Private::Copy<FGameplayTagCategoryRemap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag @ 146ac1320

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac1460

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// `scalar_deleting_destructor' @ 146ac1570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer @ 146ac15a0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 146ac2330

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_Filter_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// `scalar_deleting_destructor' @ 146ac23d0

void * __thiscall
FGameplayTagQueryTest_Empty::_scalar_deleting_destructor_
          (FGameplayTagQueryTest_Empty *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146ac2410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_Filter @ 146ac2440

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_Filter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_Filter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery @ 146ac2480

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 146ac24c0

void * __cdecl Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRestrictedConfigInfo,&UE::CoreUObject::Private::Construct<FRestrictedConfigInfo>,&UE::CoreUObject::Private::ConstructForTests<FRestrictedConfigInfo>,&UE::CoreUObject::Private::Destruct<FRestrictedConfigInfo>,&UE::CoreUObject::Private::Copy<FRestrictedConfigInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag @ 146ac2500

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer @ 146ac2540

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer @ 146ac2580

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ImportTagsFromConfig_SetBit @ 146ac2680

void __cdecl
Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_WarnOnInvalidTags_SetBit @ 146ac2690

void __cdecl
Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// NewProp_ClearInvalidTags_SetBit @ 146ac26a0

void __cdecl
Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  return;
}

// NewProp_AllowEditorTagUnloading_SetBit @ 146ac26b0

void __cdecl
Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5b) = 1;
  return;
}

// NewProp_AllowGameTagUnloading_SetBit @ 146ac26c0

void __cdecl
Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  return;
}

// NewProp_FastReplication_SetBit @ 146ac26d0

void __cdecl
Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5d) = 1;
  return;
}

// NewProp_bDynamicReplication_SetBit @ 146ac26e0

void __cdecl
Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_bDynamicReplication_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5e) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetOwnedGameplayTags @ 146ac26f0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetOwnedGameplayTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetOwnedGameplayTags_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName @ 146ac27f0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac2830

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags @ 146ac2880

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FGameplayTag @ 146ac28c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTag.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTag.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTag.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTag.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 146ac2940

void * __cdecl
Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::
NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayTagContainerNetSerializerSerializationHelper,&UE::CoreUObject::Private::Construct<FGameplayTagContainerNetSerializerSerializationHelper>,&UE::CoreUObject::Private::ConstructForTests<FGameplayTagContainerNetSerializerSerializationHelper>,&UE::CoreUObject::Private::Destruct<FGameplayTagContainerNetSerializerSerializationHelper>,&UE::CoreUObject::Private::Copy<FGameplayTagContainerNetSerializerSerializationHelper>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bExactMatch_SetBit @ 146ac2980

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146ac2990

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags @ 146ac29a0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac29e0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyMatchingGameplayTags_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyMatchingGameplayTags @ 146ac29f0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyMatchingGameplayTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyMatchingGameplayTags_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 146ac2a80

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146ac2a90

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return;
}

// Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister @ 146ac2ad0

UClass * __cdecl Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagAssetInterface",
               &Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton,
               UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTagAssetInterface>,
               InternalVTableHelperCtorCaller<UGameplayTagAssetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags @ 146ac2c50

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 146ac2c90

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146ac2ca0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag @ 146ac2cb0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac2cf0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid @ 146ac2d00

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac2d40

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty @ 146ac2d50

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray @ 146ac2e50

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag @ 146ac2e90

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery @ 146ac2ed0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAllTags @ 146ac2f10

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAllTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAllTags_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAnyTags @ 146ac2f90

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAnyTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAnyTags_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146ac3010

void * __thiscall
FRestrictedGameplayTagTableRow::_scalar_deleting_destructor_
          (FRestrictedGameplayTagTableRow *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchNoTags @ 146ac30f0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchNoTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchNoTags_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag @ 146ac3160

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 146ac3240

void * __thiscall
UE::Net::FGameplayTagNetSerializer::FNetSerializerRegistryDelegates::_scalar_deleting_destructor_
          (FNetSerializerRegistryDelegates *this,uint param_1)

{
  *(undefined ***)this = &___7FNetSerializerRegistryDelegates_FGameplayTagNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer @ 146ac3290

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 146ac32d0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::
NewProp_bExactMatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146ac32e0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags @ 146ac32f0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bExactMatch_SetBit @ 146ac3330

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146ac3340

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag @ 146ac3350

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac33d0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag @ 146ac33e0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac3420

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer @ 146ac3430

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac3470

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer @ 146ac3480

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac34c0

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag @ 146ac3590

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146ac3680

void __cdecl
Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag @ 146ac3690

UFunction * __cdecl Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGameplayTagAssetInterface @ 146ac3ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTagAssetInterface(void)

{
  if (Z_Registration_Info_UClass_UGameplayTagAssetInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTagAssetInterface.OuterSingleton,
               &Z_Construct_UClass_UGameplayTagAssetInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTagAssetInterface.OuterSingleton;
}

// operator<<<FGameplayTag,TSizedDefaultAllocator<32>_> @ 146ac3c20

FArchive * __cdecl
operator<<<FGameplayTag,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              (**(code **)(*(longlong *)param_1 + 0x178))
                        (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 8;
              DefaultConstructItems<FGameplayTag,int>(pFVar2,1);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// CastChecked<AActor,AActor> @ 146ac45b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl CastChecked<AActor,AActor>(AActor *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (AActor *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<AActor>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CompareItems<FGameplayTag,int> @ 146ac45f0

bool __cdecl CompareItems<FGameplayTag,int>(FGameplayTag *param_1,FGameplayTag *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (*(FName *)(lVar1 + (longlong)param_2) != param_2->TagName) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FGameplayTagQueryExpression,FGameplayTagQueryExpression,int> @ 146ac4620

void __cdecl
ConstructItems<FGameplayTagQueryExpression,FGameplayTagQueryExpression,int>
          (void *param_1,FGameplayTagQueryExpression *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FGameplayTagQueryExpression::FGameplayTagQueryExpression
                ((FGameplayTagQueryExpression *)(lVar1 + (longlong)param_2),param_2);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FGameplayTagNode,1>,TSharedPtr<FGameplayTagNode,1>,int> @ 146ac4670

void __cdecl
ConstructItems<TSharedPtr<FGameplayTagNode,1>,TSharedPtr<FGameplayTagNode,1>,int>
          (void *param_1,TSharedPtr<FGameplayTagNode,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FGameplayTagNode **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FGameplayTag,int> @ 146ac46b0

void __cdecl DefaultConstructItems<FGameplayTag,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FNetFieldExport,int> @ 146ac46e0

void __cdecl DefaultConstructItems<FNetFieldExport,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0x100;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGameplayTagCategoryRemap,int> @ 146ac4760

void __cdecl
DestructItems<FGameplayTagCategoryRemap,int>(FGameplayTagCategoryRemap *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RemapCategories;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FGameplayTagCategoryRemap *)(pTVar2 + -1))->BaseCategory).Data.AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGameplayTagQueryExpression,int> @ 146ac47c0

void __cdecl
DestructItems<FGameplayTagQueryExpression,int>(FGameplayTagQueryExpression *param_1,int param_2)

{
  TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_> *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->ExprSet;
    TArray<FGameplayTag,TSizedDefaultAllocator<32>_>::
    ~TArray<FGameplayTag,TSizedDefaultAllocator<32>_>
              ((TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *)(this + 1));
    TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_>::
    ~TArray<FGameplayTagQueryExpression,TSizedDefaultAllocator<32>_>(this);
    param_1 = (FGameplayTagQueryExpression *)(this + 2);
  }
  return;
}

// DestructItems<FGameplayTagTableRow,int> @ 146ac4800

void __cdecl DestructItems<FGameplayTagTableRow,int>(FGameplayTagTableRow *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->DevComment).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1->_padding_ = (longlong)&___7FTableRowBase__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRestrictedConfigInfo,int> @ 146ac4850

void __cdecl DestructItems<FRestrictedConfigInfo,int>(FRestrictedConfigInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Owners;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FRestrictedConfigInfo *)(pTVar2 + -1))->RestrictedConfigName).Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRestrictedGameplayTagTableRow,int> @ 146ac48b0

void __cdecl
DestructItems<FRestrictedGameplayTagTableRow,int>
          (FRestrictedGameplayTagTableRow *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1->_padding_ = (longlong)&___7FTableRowBase__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FGameplayTagNode,1>,int> @ 146ac4900

void __cdecl
DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
          (TSharedPtr<FGameplayTagNode,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNetFieldExport,int> @ 146ac4940

void __cdecl DestructItems<FNetFieldExport,int>(FNetFieldExport *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Blob).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GetDefault<UGameplayTagsSettings> @ 146ac5e90

UGameplayTagsSettings * __cdecl GetDefault<UGameplayTagsSettings>(void)

{
  UClass *this;
  
  this = UGameplayTagsSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UGameplayTagsSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UGameplayTagsSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetMutableDefault<UGameplayTagsSettings> @ 146ac5ed0

UGameplayTagsSettings * __cdecl GetMutableDefault<UGameplayTagsSettings>(void)

{
  UClass *this;
  
  this = UGameplayTagsSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UGameplayTagsSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UGameplayTagsSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 146ac5fc0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar12 = iVar7;
  iVar13 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_146ac60b0:
      if (iVar13 == 0) {
        iVar7 = param_2 + -1;
        lVar8 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar14 = param_1 + lVar8;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            iVar12 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar14->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar13 = iVar12 * 2;
                iVar6 = iVar13 + 1;
                if (iVar13 + 2 < iVar7) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0x10 + 4) <
                      *(int *)((longlong)param_1 + (longlong)iVar13 * 0x10 + 0x24)) {
                    iVar6 = iVar13;
                  }
                  iVar6 = iVar6 + 1;
                }
                lVar11 = (longlong)iVar12;
                lVar10 = (longlong)iVar6;
                if (*(int *)((longlong)param_1 + lVar11 * 0x10 + 4) <=
                    *(int *)((longlong)param_1 + lVar10 * 0x10 + 4)) break;
                uVar2 = *(undefined8 *)(param_1[lVar10].ElementData.Pad + 8);
                TVar3 = param_1[lVar11]._s_1;
                uVar4 = *(undefined8 *)(param_1[lVar11].ElementData.Pad + 8);
                param_1[lVar11]._s_1 = param_1[lVar10]._s_1;
                *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar2;
                param_1[lVar10]._s_1 = TVar3;
                *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar4;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar8 = lVar8 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar6 = iVar13 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar13 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4) <
          *(int *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 0x24)) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    lVar10 = (longlong)iVar6;
    lVar8 = (longlong)iVar9;
    if (*(int *)((longlong)param_1 + lVar10 * 0x10 + 4) <=
        *(int *)((longlong)param_1 + lVar8 * 0x10 + 4)) goto LAB_146ac60b0;
    uVar2 = *(undefined8 *)(param_1[lVar8].ElementData.Pad + 8);
    iVar7 = iVar9 * 2 + 1;
    TVar3 = param_1[lVar10]._s_1;
    uVar4 = *(undefined8 *)(param_1[lVar10].ElementData.Pad + 8);
    param_1[lVar10]._s_1 = param_1[lVar8]._s_1;
    *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar2;
    param_1[lVar8]._s_1 = TVar3;
    *(undefined8 *)((longlong)param_1[lVar8].ElementData.Pad + 8) = uVar4;
    iVar6 = iVar9;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 146ac6190

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar13 = iVar10;
  iVar14 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_146ac6298:
      if (iVar14 == 0) {
        iVar10 = param_2 + -1;
        lVar15 = (longlong)iVar10;
        if (0 < iVar10) {
          pTVar11 = param_1 + lVar15;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 8);
            uVar3 = *(undefined4 *)((param_1->ElementData).Pad + 0x10);
            iVar13 = 0;
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar11->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            *(undefined4 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined4 *)((longlong)(pTVar11->ElementData).Pad + 0x10);
            pTVar11->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 8) = uVar7;
            *(undefined4 *)((longlong)(pTVar11->ElementData).Pad + 0x10) = uVar3;
            if (1 < iVar10) {
              do {
                iVar14 = iVar13 * 2;
                iVar9 = iVar14 + 1;
                if (iVar14 + 2 < iVar10) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x14 + 8) <
                      *(int *)((longlong)param_1 + (longlong)iVar14 * 0x14 + 0x30)) {
                    iVar9 = iVar14;
                  }
                  iVar9 = iVar9 + 1;
                }
                pTVar1 = param_1 + iVar13;
                pTVar2 = param_1 + iVar9;
                if (*(int *)((pTVar1->ElementData).Pad + 8) <=
                    *(int *)((longlong)param_1 + (longlong)iVar9 * 0x14 + 8)) break;
                TVar6 = pTVar1->_s_1;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined4 *)((pTVar1->ElementData).Pad + 0x10);
                uVar7 = *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8);
                pTVar1->_s_1 = pTVar2->_s_1;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined4 *)((pTVar1->ElementData).Pad + 0x10) =
                     *(undefined4 *)((longlong)(pTVar2->ElementData).Pad + 0x10);
                pTVar2->_s_1 = TVar6;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8) = uVar5;
                *(undefined4 *)((longlong)(pTVar2->ElementData).Pad + 0x10) = uVar3;
                iVar13 = iVar9;
              } while (iVar9 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar15 = lVar15 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar9 = iVar14 + -1;
      iVar10 = iVar13 + -2;
      iVar13 = iVar10;
      iVar14 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar12 * 0x14 + 8) <
          *(int *)((longlong)param_1 + (longlong)iVar10 * 0x14 + 0x30)) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar11 = param_1 + iVar9;
    pTVar1 = param_1 + iVar12;
    if (*(int *)((pTVar11->ElementData).Pad + 8) <=
        *(int *)((longlong)param_1 + (longlong)iVar12 * 0x14 + 8)) goto LAB_146ac6298;
    uVar5 = *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8);
    uVar3 = *(undefined4 *)((pTVar11->ElementData).Pad + 0x10);
    TVar6 = pTVar11->_s_1;
    uVar7 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
    pTVar11->_s_1 = pTVar1->_s_1;
    *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar5;
    *(undefined4 *)((pTVar11->ElementData).Pad + 0x10) =
         *(undefined4 *)((longlong)(pTVar1->ElementData).Pad + 0x10);
    iVar10 = iVar12 * 2 + 1;
    pTVar1->_s_1 = TVar6;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8) = uVar7;
    *(undefined4 *)((longlong)(pTVar1->ElementData).Pad + 0x10) = uVar3;
    iVar9 = iVar12;
  } while( true );
}

// HeapSortInternal<FGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_>_> @ 146ac63a0

void __cdecl
AlgoImpl::
HeapSortInternal<FGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_>_>
          (FGameplayTagTableRow *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_> param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FGameplayTagTableRow *pFVar15;
  FGameplayTagTableRow *pFVar16;
  longlong lVar17;
  FGameplayTagTableRow *pFVar18;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar12 = iVar11;
  iVar14 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_146ac64dc:
      if (iVar14 == 0) {
        iVar11 = param_2 + -1;
        lVar17 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar18 = param_1 + lVar17;
          do {
            FVar2 = pFVar18->Tag;
            lVar5 = param_1->_padding_;
            FVar3 = param_1->Tag;
            pFVar4 = (param_1->DevComment).Data.AllocatorInstance.Data;
            iVar14 = (param_1->DevComment).Data.ArrayNum;
            iVar13 = (param_1->DevComment).Data.ArrayMax;
            param_1->_padding_ = pFVar18->_padding_;
            param_1->Tag = FVar2;
            iVar12 = (pFVar18->DevComment).Data.ArrayNum;
            iVar9 = (pFVar18->DevComment).Data.ArrayMax;
            (param_1->DevComment).Data.AllocatorInstance.Data =
                 (pFVar18->DevComment).Data.AllocatorInstance.Data;
            (param_1->DevComment).Data.ArrayNum = iVar12;
            (param_1->DevComment).Data.ArrayMax = iVar9;
            pFVar18->_padding_ = lVar5;
            pFVar18->Tag = FVar3;
            (pFVar18->DevComment).Data.AllocatorInstance.Data = pFVar4;
            (pFVar18->DevComment).Data.ArrayNum = iVar14;
            (pFVar18->DevComment).Data.ArrayMax = iVar13;
            iVar12 = 0;
            if (1 < iVar11) {
              do {
                iVar9 = iVar12 * 2;
                iVar14 = iVar9 + 1;
                if (iVar9 + 2 < iVar11) {
                  iVar13 = UE::ComparisonUtility::CompareWithNumericSuffix
                                     (param_1[iVar9 + 2].Tag,param_1[iVar14].Tag);
                  if (iVar13 < 0) {
                    iVar14 = iVar9;
                  }
                  iVar14 = iVar14 + 1;
                }
                pFVar16 = param_1 + iVar14;
                pFVar15 = param_1 + iVar12;
                iVar12 = UE::ComparisonUtility::CompareWithNumericSuffix(pFVar15->Tag,pFVar16->Tag);
                if (-1 < iVar12) break;
                FVar2 = pFVar16->Tag;
                lVar5 = pFVar15->_padding_;
                FVar3 = pFVar15->Tag;
                pFVar4 = (pFVar15->DevComment).Data.AllocatorInstance.Data;
                iVar13 = (pFVar15->DevComment).Data.ArrayNum;
                iVar10 = (pFVar15->DevComment).Data.ArrayMax;
                pFVar15->_padding_ = pFVar16->_padding_;
                pFVar15->Tag = FVar2;
                iVar12 = (pFVar16->DevComment).Data.ArrayNum;
                iVar9 = (pFVar16->DevComment).Data.ArrayMax;
                (pFVar15->DevComment).Data.AllocatorInstance.Data =
                     (pFVar16->DevComment).Data.AllocatorInstance.Data;
                (pFVar15->DevComment).Data.ArrayNum = iVar12;
                (pFVar15->DevComment).Data.ArrayMax = iVar9;
                pFVar16->_padding_ = lVar5;
                pFVar16->Tag = FVar3;
                (pFVar16->DevComment).Data.AllocatorInstance.Data = pFVar4;
                (pFVar16->DevComment).Data.ArrayNum = iVar13;
                (pFVar16->DevComment).Data.ArrayMax = iVar10;
                iVar12 = iVar14;
              } while (iVar14 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar17 = lVar17 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar9 = iVar14 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar14 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      iVar10 = UE::ComparisonUtility::CompareWithNumericSuffix
                         (param_1[iVar11 + 2].Tag,param_1[iVar13].Tag);
      if (iVar10 < 0) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar15 = param_1 + iVar13;
    pFVar18 = param_1 + iVar9;
    iVar11 = UE::ComparisonUtility::CompareWithNumericSuffix(pFVar18->Tag,pFVar15->Tag);
    if (-1 < iVar11) goto LAB_146ac64dc;
    FVar2 = pFVar15->Tag;
    iVar11 = iVar13 * 2 + 1;
    lVar17 = pFVar18->_padding_;
    FVar3 = pFVar18->Tag;
    pFVar4 = (pFVar18->DevComment).Data.AllocatorInstance.Data;
    iVar6 = (pFVar18->DevComment).Data.ArrayNum;
    iVar7 = (pFVar18->DevComment).Data.ArrayMax;
    pFVar18->_padding_ = pFVar15->_padding_;
    pFVar18->Tag = FVar2;
    iVar9 = (pFVar15->DevComment).Data.ArrayNum;
    iVar10 = (pFVar15->DevComment).Data.ArrayMax;
    (pFVar18->DevComment).Data.AllocatorInstance.Data =
         (pFVar15->DevComment).Data.AllocatorInstance.Data;
    (pFVar18->DevComment).Data.ArrayNum = iVar9;
    (pFVar18->DevComment).Data.ArrayMax = iVar10;
    pFVar15->_padding_ = lVar17;
    pFVar15->Tag = FVar3;
    (pFVar15->DevComment).Data.AllocatorInstance.Data = pFVar4;
    (pFVar15->DevComment).Data.ArrayNum = iVar6;
    (pFVar15->DevComment).Data.ArrayMax = iVar7;
    iVar9 = iVar13;
  } while( true );
}

// HeapSortInternal<`UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper'::__l2::FPair,int,FIdentityFunctor,`UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper'::__l6::<lambda_1>_> @ 146ac6610

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l2::FPair,int,FIdentityFunctor,_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l6::<lambda_1>_>
          (FPair *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  ulong64 uVar5;
  ushort uVar6;
  undefined6 uVar7;
  ushort uVar8;
  undefined6 uVar9;
  bool bVar10;
  int iVar11;
  FPair *pFVar12;
  int iVar13;
  FPair *pFVar14;
  int iVar15;
  FPair *pFVar16;
  longlong lVar17;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l2::FPair,int,FIdentityFunctor,TReversePredicate<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l6::<lambda_1>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar15 = param_2 + -1;
  lVar17 = (longlong)iVar15;
  if (0 < iVar15) {
    pFVar14 = param_1 + lVar17;
    do {
      uVar6 = pFVar14->TagIndex;
      uVar7 = *(undefined6 *)&pFVar14->field_0xa;
      uVar5 = param_1->ArrayIndex;
      uVar8 = param_1->TagIndex;
      uVar9 = *(undefined6 *)&param_1->field_0xa;
      param_1->ArrayIndex = pFVar14->ArrayIndex;
      param_1->TagIndex = uVar6;
      *(undefined6 *)&param_1->field_0xa = uVar7;
      pFVar14->ArrayIndex = uVar5;
      pFVar14->TagIndex = uVar8;
      *(undefined6 *)&pFVar14->field_0xa = uVar9;
      iVar13 = 0;
      if (1 < iVar15) {
        do {
          iVar4 = iVar13 * 2;
          iVar11 = iVar4 + 1;
          if (iVar4 + 2 < iVar15) {
            lVar1 = (longlong)iVar4 + 2;
            lVar2 = (longlong)iVar4 + 1;
            bVar10 = param_1[lVar1].TagIndex < param_1[lVar2].TagIndex;
            if (param_1[lVar1].TagIndex == param_1[lVar2].TagIndex) {
              bVar10 = param_1[lVar1].ArrayIndex < param_1[lVar2].ArrayIndex;
            }
            if (bVar10) {
              iVar11 = iVar4;
            }
            iVar11 = iVar11 + 1;
          }
          pFVar12 = param_1 + iVar11;
          pFVar16 = param_1 + iVar13;
          bVar10 = pFVar16->TagIndex < pFVar12->TagIndex;
          if (pFVar16->TagIndex == pFVar12->TagIndex) {
            bVar10 = pFVar16->ArrayIndex < pFVar12->ArrayIndex;
          }
          if (!bVar10) break;
          uVar6 = pFVar12->TagIndex;
          uVar7 = *(undefined6 *)&pFVar12->field_0xa;
          uVar5 = pFVar16->ArrayIndex;
          uVar8 = pFVar16->TagIndex;
          uVar9 = *(undefined6 *)&pFVar16->field_0xa;
          pFVar16->ArrayIndex = pFVar12->ArrayIndex;
          pFVar16->TagIndex = uVar6;
          *(undefined6 *)&pFVar16->field_0xa = uVar7;
          pFVar12->ArrayIndex = uVar5;
          pFVar12->TagIndex = uVar8;
          *(undefined6 *)&pFVar12->field_0xa = uVar9;
          iVar13 = iVar11;
        } while (iVar11 * 2 + 1 < iVar15);
      }
      iVar15 = iVar15 + -1;
      lVar17 = lVar17 + -1;
      pFVar14 = pFVar14 + -1;
    } while (0 < lVar17);
  }
  return;
}

// HeapSortInternal<FRestrictedGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_>_> @ 146ac6770

void __cdecl
AlgoImpl::
HeapSortInternal<FRestrictedGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_>_>
          (FRestrictedGameplayTagTableRow *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_> param_4)

{
  FRestrictedGameplayTagTableRow *pFVar1;
  FRestrictedGameplayTagTableRow *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined7 uVar9;
  undefined7 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FRestrictedGameplayTagTableRow *pFVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar14 = iVar12 * 2 + 1;
  iVar19 = iVar14;
  iVar16 = iVar12;
  do {
    while (param_2 <= iVar14) {
LAB_146ac68c4:
      if (iVar16 == 0) {
        iVar14 = param_2 + -1;
        lVar17 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar18 = param_1 + lVar17;
          do {
            lVar4 = pFVar18->_padding_;
            iVar19 = 0;
            bVar11 = param_1->bAllowNonRestrictedChildren;
            uVar10 = *(undefined7 *)&param_1->field_0x21;
            lVar5 = param_1->_padding_;
            lVar6 = param_1->_padding_;
            lVar7 = param_1->_padding_;
            lVar8 = param_1->_padding_;
            param_1->_padding_ = pFVar18->_padding_;
            param_1->_padding_ = lVar4;
            lVar4 = pFVar18->_padding_;
            param_1->_padding_ = pFVar18->_padding_;
            param_1->_padding_ = lVar4;
            uVar9 = *(undefined7 *)&pFVar18->field_0x21;
            param_1->bAllowNonRestrictedChildren = pFVar18->bAllowNonRestrictedChildren;
            *(undefined7 *)&param_1->field_0x21 = uVar9;
            pFVar18->_padding_ = lVar5;
            pFVar18->_padding_ = lVar6;
            pFVar18->_padding_ = lVar7;
            pFVar18->_padding_ = lVar8;
            pFVar18->bAllowNonRestrictedChildren = bVar11;
            *(undefined7 *)&pFVar18->field_0x21 = uVar10;
            if (1 < iVar14) {
              do {
                iVar12 = iVar19 * 2;
                iVar16 = iVar12 + 1;
                if (iVar12 + 2 < iVar14) {
                  iVar15 = UE::ComparisonUtility::CompareWithNumericSuffix
                                     ((FName)param_1[iVar12 + 2]._padding_,
                                      (FName)param_1[iVar16]._padding_);
                  if (iVar15 < 0) {
                    iVar16 = iVar12;
                  }
                  iVar16 = iVar16 + 1;
                }
                pFVar1 = param_1 + iVar16;
                pFVar2 = param_1 + iVar19;
                iVar19 = UE::ComparisonUtility::CompareWithNumericSuffix
                                   ((FName)param_1[iVar19]._padding_,
                                    (FName)param_1[iVar16]._padding_);
                if (-1 < iVar19) break;
                lVar4 = pFVar1->_padding_;
                bVar11 = pFVar2->bAllowNonRestrictedChildren;
                uVar10 = *(undefined7 *)&pFVar2->field_0x21;
                lVar5 = pFVar2->_padding_;
                lVar6 = pFVar2->_padding_;
                lVar7 = pFVar2->_padding_;
                lVar8 = pFVar2->_padding_;
                pFVar2->_padding_ = pFVar1->_padding_;
                pFVar2->_padding_ = lVar4;
                lVar4 = pFVar1->_padding_;
                pFVar2->_padding_ = pFVar1->_padding_;
                pFVar2->_padding_ = lVar4;
                uVar9 = *(undefined7 *)&pFVar1->field_0x21;
                pFVar2->bAllowNonRestrictedChildren = pFVar1->bAllowNonRestrictedChildren;
                *(undefined7 *)&pFVar2->field_0x21 = uVar9;
                pFVar1->_padding_ = lVar5;
                pFVar1->_padding_ = lVar6;
                pFVar1->_padding_ = lVar7;
                pFVar1->_padding_ = lVar8;
                pFVar1->bAllowNonRestrictedChildren = bVar11;
                *(undefined7 *)&pFVar1->field_0x21 = uVar10;
                iVar19 = iVar16;
              } while (iVar16 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar17 = lVar17 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar12 = iVar16 + -1;
      iVar14 = iVar19 + -2;
      iVar19 = iVar14;
      iVar16 = iVar12;
    }
    iVar14 = iVar12 * 2;
    iVar15 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      iVar13 = UE::ComparisonUtility::CompareWithNumericSuffix
                         ((FName)param_1[iVar14 + 2]._padding_,(FName)param_1[iVar15]._padding_);
      if (iVar13 < 0) {
        iVar15 = iVar14;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar18 = param_1 + iVar15;
    pFVar1 = param_1 + iVar12;
    iVar14 = UE::ComparisonUtility::CompareWithNumericSuffix
                       ((FName)param_1[iVar12]._padding_,(FName)param_1[iVar15]._padding_);
    if (-1 < iVar14) goto LAB_146ac68c4;
    lVar17 = pFVar18->_padding_;
    iVar14 = iVar15 * 2 + 1;
    bVar11 = pFVar1->bAllowNonRestrictedChildren;
    uVar10 = *(undefined7 *)&pFVar1->field_0x21;
    lVar4 = pFVar1->_padding_;
    lVar5 = pFVar1->_padding_;
    lVar6 = pFVar1->_padding_;
    lVar7 = pFVar1->_padding_;
    pFVar1->_padding_ = pFVar18->_padding_;
    pFVar1->_padding_ = lVar17;
    lVar17 = pFVar18->_padding_;
    pFVar1->_padding_ = pFVar18->_padding_;
    pFVar1->_padding_ = lVar17;
    uVar9 = *(undefined7 *)&pFVar18->field_0x21;
    pFVar1->bAllowNonRestrictedChildren = pFVar18->bAllowNonRestrictedChildren;
    *(undefined7 *)&pFVar1->field_0x21 = uVar9;
    pFVar18->_padding_ = lVar4;
    pFVar18->_padding_ = lVar5;
    pFVar18->_padding_ = lVar6;
    pFVar18->_padding_ = lVar7;
    pFVar18->bAllowNonRestrictedChildren = bVar11;
    *(undefined7 *)&pFVar18->field_0x21 = uVar10;
    iVar12 = iVar15;
  } while( true );
}

// HeapSortInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_> @ 146ac6a30

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>
          (TSharedPtr<FGameplayTagNode,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag> param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGameplayTagNode *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FGameplayTag *pFVar11;
  longlong lVar12;
  TSharedPtr<FGameplayTagNode,1> *pTVar13;
  int iVar14;
  TSharedPtr<FGameplayTagNode,1> *pTVar15;
  int iVar16;
  TSharedPtr<FGameplayTagNode,1> *pTVar17;
  FCompareFGameplayTagNodeByTag *local_res20;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38 [2];
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag> *)
             &local_res20);
  iVar16 = param_2 + -1;
  lVar10 = (longlong)iVar16;
  if (0 < iVar16) {
    pTVar17 = param_1 + lVar10;
    do {
      pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
      pFVar5 = param_1->Object;
      pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar17->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar4;
      pTVar17->Object = pFVar5;
      (pTVar17->SharedReferenceCount).ReferenceController = pTVar6;
      iVar9 = 0;
      if (1 < iVar16) {
        do {
          iVar3 = iVar9 * 2;
          iVar14 = iVar3 + 1;
          if (iVar3 + 2 < iVar16) {
            lVar1 = (longlong)iVar3 + 2;
            lVar12 = (longlong)iVar3 + 1;
            if ((param_1[lVar1].Object == (FGameplayTagNode *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((param_1[lVar1].Object)->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
              pFVar11 = &FGameplayTag::EmptyTag;
            }
            else {
              pFVar11 = (FGameplayTag *)
                        ((param_1[lVar1].Object)->CompleteTagWithParents).GameplayTags.
                        AllocatorInstance.Data;
            }
            local_48 = pFVar11->TagName;
            if ((param_1[lVar12].Object == (FGameplayTagNode *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((param_1[lVar12].Object)->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
              pFVar11 = &FGameplayTag::EmptyTag;
            }
            else {
              pFVar11 = (FGameplayTag *)
                        ((param_1[lVar12].Object)->CompleteTagWithParents).GameplayTags.
                        AllocatorInstance.Data;
            }
            local_50 = pFVar11->TagName;
            iVar8 = ::FName::Compare(&local_48,&local_50);
            if (iVar8 < 0) {
              iVar14 = iVar3;
            }
            iVar14 = iVar14 + 1;
          }
          pTVar15 = param_1 + iVar9;
          pTVar13 = param_1 + iVar14;
          if ((pTVar15->Object == (FGameplayTagNode *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((pTVar15->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
            pFVar11 = &FGameplayTag::EmptyTag;
          }
          else {
            pFVar11 = (FGameplayTag *)
                      (pTVar15->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
          }
          local_38[0] = pFVar11->TagName;
          if ((pTVar13->Object == (FGameplayTagNode *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((pTVar13->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
            pFVar11 = &FGameplayTag::EmptyTag;
          }
          else {
            pFVar11 = (FGameplayTag *)
                      (pTVar13->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
          }
          local_40 = pFVar11->TagName;
          iVar9 = ::FName::Compare(local_38,&local_40);
          if (-1 < iVar9) break;
          pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
          pFVar5 = pTVar15->Object;
          pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
          pTVar15->Object = pTVar13->Object;
          (pTVar15->SharedReferenceCount).ReferenceController = pTVar4;
          pTVar13->Object = pFVar5;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar6;
          iVar9 = iVar14;
        } while (iVar14 * 2 + 1 < iVar16);
      }
      lVar10 = lVar10 + -1;
      iVar16 = iVar16 + -1;
      pTVar17 = pTVar17 + -1;
    } while (0 < lVar10);
  }
  return;
}

// HeapifyInternal<`UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper'::__l2::FPair,int,FIdentityFunctor,TReversePredicate<`UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper'::__l6::<lambda_1>_>_> @ 146ac6d00

void __cdecl
AlgoImpl::
HeapifyInternal<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l2::FPair,int,FIdentityFunctor,TReversePredicate<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l6::<lambda_1>_>_>
          (FPair *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_private:_static_void___cdecl_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper(UE::Net::FGameplayTagContainerAccessorForNetSerializer_const_&,FGameplayTagContainerNetSerializerSerializationHelper_&)_::_6_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  ulong64 uVar5;
  ushort uVar6;
  undefined6 uVar7;
  ushort uVar8;
  undefined6 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FPair *pFVar14;
  int iVar15;
  FPair *pFVar16;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar13 = iVar11 * 2 + 1;
  iVar4 = iVar13;
  iVar15 = iVar11;
  do {
    while (param_2 <= iVar13) {
LAB_146ac6e03:
      if (iVar15 == 0) {
        return;
      }
      iVar11 = iVar15 + -1;
      iVar13 = iVar4 + -2;
      iVar4 = iVar13;
      iVar15 = iVar11;
    }
    iVar13 = iVar11 * 2;
    iVar12 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      lVar1 = (longlong)iVar13 + 2;
      lVar2 = (longlong)iVar13 + 1;
      bVar10 = param_1[lVar1].TagIndex < param_1[lVar2].TagIndex;
      if (param_1[lVar1].TagIndex == param_1[lVar2].TagIndex) {
        bVar10 = param_1[lVar1].ArrayIndex < param_1[lVar2].ArrayIndex;
      }
      if (bVar10) {
        iVar12 = iVar13;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar14 = param_1 + iVar12;
    pFVar16 = param_1 + iVar11;
    bVar10 = pFVar16->TagIndex < pFVar14->TagIndex;
    if (pFVar16->TagIndex == pFVar14->TagIndex) {
      bVar10 = pFVar16->ArrayIndex < pFVar14->ArrayIndex;
    }
    if (!bVar10) goto LAB_146ac6e03;
    uVar6 = pFVar14->TagIndex;
    uVar7 = *(undefined6 *)&pFVar14->field_0xa;
    iVar13 = iVar12 * 2 + 1;
    uVar5 = pFVar16->ArrayIndex;
    uVar8 = pFVar16->TagIndex;
    uVar9 = *(undefined6 *)&pFVar16->field_0xa;
    pFVar16->ArrayIndex = pFVar14->ArrayIndex;
    pFVar16->TagIndex = uVar6;
    *(undefined6 *)&pFVar16->field_0xa = uVar7;
    pFVar14->ArrayIndex = uVar5;
    pFVar14->TagIndex = uVar8;
    *(undefined6 *)&pFVar14->field_0xa = uVar9;
    iVar11 = iVar12;
  } while( true );
}

// HeapifyInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>_> @ 146ac6e40

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>_>
          (TSharedPtr<FGameplayTagNode,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>
          param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGameplayTagNode *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FGameplayTag *pFVar11;
  longlong lVar12;
  TSharedPtr<FGameplayTagNode,1> *pTVar13;
  int iVar14;
  TSharedPtr<FGameplayTagNode,1> *pTVar15;
  int iVar16;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar10 = iVar8 * 2 + 1;
  iVar3 = iVar10;
  iVar16 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_146ac707a:
      if (iVar16 == 0) {
        return;
      }
      iVar8 = iVar16 + -1;
      iVar10 = iVar3 + -2;
      iVar3 = iVar10;
      iVar16 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar14 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      lVar1 = (longlong)iVar10 + 2;
      lVar12 = (longlong)iVar10 + 1;
      if ((param_1[lVar1].Object == (FGameplayTagNode *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((param_1[lVar1].Object)->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
        pFVar11 = &FGameplayTag::EmptyTag;
      }
      else {
        pFVar11 = (FGameplayTag *)
                  ((param_1[lVar1].Object)->CompleteTagWithParents).GameplayTags.AllocatorInstance.
                  Data;
      }
      local_40 = pFVar11->TagName;
      if ((param_1[lVar12].Object == (FGameplayTagNode *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((param_1[lVar12].Object)->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
        pFVar11 = &FGameplayTag::EmptyTag;
      }
      else {
        pFVar11 = (FGameplayTag *)
                  ((param_1[lVar12].Object)->CompleteTagWithParents).GameplayTags.AllocatorInstance.
                  Data;
      }
      local_48 = pFVar11->TagName;
      iVar9 = ::FName::Compare(&local_40,&local_48);
      if (iVar9 < 0) {
        iVar14 = iVar10;
      }
      iVar14 = iVar14 + 1;
    }
    pTVar15 = param_1 + iVar8;
    pTVar13 = param_1 + iVar14;
    if ((pTVar15->Object == (FGameplayTagNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar15->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
      pFVar11 = &FGameplayTag::EmptyTag;
    }
    else {
      pFVar11 = (FGameplayTag *)
                (pTVar15->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
    }
    local_30 = pFVar11->TagName;
    if ((pTVar13->Object == (FGameplayTagNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar13->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
      pFVar11 = &FGameplayTag::EmptyTag;
    }
    else {
      pFVar11 = (FGameplayTag *)
                (pTVar13->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
    }
    local_38 = pFVar11->TagName;
    iVar10 = ::FName::Compare(&local_30,&local_38);
    if (-1 < iVar10) goto LAB_146ac707a;
    pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
    iVar10 = iVar14 * 2 + 1;
    pFVar5 = pTVar15->Object;
    pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
    pTVar15->Object = pTVar13->Object;
    (pTVar15->SharedReferenceCount).ReferenceController = pTVar4;
    pTVar13->Object = pFVar5;
    (pTVar13->SharedReferenceCount).ReferenceController = pTVar6;
    iVar8 = iVar14;
  } while( true );
}

// InternalConstructor<UBlueprintGameplayTagLibrary> @ 146ac70c0

void __cdecl InternalConstructor<UBlueprintGameplayTagLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBlueprintGameplayTagLibrary__6B_;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQuery> @ 146ac70f0

void __cdecl InternalConstructor<UEditableGameplayTagQuery>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQuery__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression> @ 146ac7170

void __cdecl InternalConstructor<UEditableGameplayTagQueryExpression>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression__6B_;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_AllExprMatch> @ 146ac71a0

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_AllExprMatch>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_AllExprMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsExactMatch> @ 146ac71e0

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsExactMatch>
          (FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_AllTagsExactMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsMatch> @ 146ac7230

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsMatch>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_AllTagsMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_AnyExprMatch> @ 146ac7280

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_AnyExprMatch>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_AnyExprMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_AnyTagsExactMatch> @ 146ac72c0

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_AnyTagsExactMatch>
          (FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_AnyTagsExactMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_AnyTagsMatch> @ 146ac7310

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_AnyTagsMatch>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_AnyTagsMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_NoExprMatch> @ 146ac7360

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_NoExprMatch>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_NoExprMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UEditableGameplayTagQueryExpression_NoTagsMatch> @ 146ac73a0

void __cdecl
InternalConstructor<UEditableGameplayTagQueryExpression_NoTagsMatch>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEditableGameplayTagQueryExpression_NoTagsMatch__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UGameplayTagAssetInterface> @ 146ac73f0

void __cdecl InternalConstructor<UGameplayTagAssetInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UGameplayTagAssetInterface__6B_;
  }
  return;
}

// InternalConstructor<UGameplayTagsDeveloperSettings> @ 146ac7420

void __cdecl InternalConstructor<UGameplayTagsDeveloperSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UGameplayTagsDeveloperSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UGameplayTagsList> @ 146ac7460

void __cdecl InternalConstructor<UGameplayTagsList>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UGameplayTagsList__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UGameplayTagsManager> @ 146ac74b0

void __cdecl InternalConstructor<UGameplayTagsManager>(FObjectInitializer *param_1)

{
  if ((UGameplayTagsManager *)param_1->Obj != (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::UGameplayTagsManager((UGameplayTagsManager *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UGameplayTagsSettings> @ 146ac74d0

void __cdecl InternalConstructor<UGameplayTagsSettings>(FObjectInitializer *param_1)

{
  if ((UGameplayTagsSettings *)param_1->Obj != (UGameplayTagsSettings *)0x0) {
    UGameplayTagsSettings::UGameplayTagsSettings((UGameplayTagsSettings *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URestrictedGameplayTagsList> @ 146ac74f0

void __cdecl InternalConstructor<URestrictedGameplayTagsList>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7URestrictedGameplayTagsList__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UBlueprintGameplayTagLibrary> @ 146ac7540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintGameplayTagLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintGameplayTagLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintGameplayTagLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQuery> @ 146ac75f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEditableGameplayTagQuery>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQuery::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQuery__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression> @ 146ac76e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllExprMatch> @ 146ac7790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllExprMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_AllExprMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_AllExprMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsExactMatch> @ 146ac7850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsExactMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_AllTagsExactMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_AllTagsExactMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsMatch> @ 146ac7910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_AllTagsMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_AllTagsMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyExprMatch> @ 146ac79d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyExprMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_AnyExprMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_AnyExprMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyTagsExactMatch> @ 146ac7a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyTagsExactMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_AnyTagsExactMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_AnyTagsExactMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyTagsMatch> @ 146ac7b50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyTagsMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_AnyTagsMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_AnyTagsMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoExprMatch> @ 146ac7c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoExprMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_NoExprMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_NoExprMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoTagsMatch> @ 146ac7cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoTagsMatch>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEditableGameplayTagQueryExpression_NoTagsMatch::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEditableGameplayTagQueryExpression_NoTagsMatch__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTagAssetInterface> @ 146ac7d90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTagAssetInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameplayTagAssetInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTagsDeveloperSettings> @ 146ac7e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayTagsDeveloperSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTagsDeveloperSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UGameplayTagsDeveloperSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTagsList> @ 146ac7f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTagsList>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTagsList::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGameplayTagsList__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTagsManager> @ 146ac7fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTagsManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTagsManager *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTagsManager::GetPrivateStaticClass();
  pUVar3 = (UGameplayTagsManager *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGameplayTagsManager *)0x0) {
    pUVar3 = UGameplayTagsManager::UGameplayTagsManager(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTagsSettings> @ 146ac8070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGameplayTagsSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTagsSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UGameplayTagsSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    pUVar1[2].field_0xa = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URestrictedGameplayTagsList> @ 146ac8180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URestrictedGameplayTagsList>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URestrictedGameplayTagsList::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URestrictedGameplayTagsList__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 146ac8240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar3;
  undefined8 uVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar7 = &local_328;
    do {
      pTVar10 = ppTVar7[1];
      pTVar12 = *ppTVar7;
      pTVar1 = ppTVar7[2];
      iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar11 = pTVar12;
      if ((int)local_338 != 0) {
LAB_146ac82f0:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
          pTVar8 = pTVar10 + 1;
          TVar3 = pTVar11[iVar5 / 2]._s_1;
          uVar4 = *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8);
          pTVar11[iVar5 / 2]._s_1 = pTVar11->_s_1;
          *(undefined8 *)((longlong)pTVar11[iVar5 / 2].ElementData.Pad + 8) = uVar2;
          pTVar11->_s_1 = TVar3;
          *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar4;
          pTVar12 = pTVar11;
LAB_146ac8320:
          pTVar6 = pTVar12;
          pTVar12 = pTVar6 + 1;
          if (pTVar12 <= pTVar10) goto code_r0x000146ac8329;
          goto LAB_146ac8332;
        }
        for (; pTVar12 = pTVar11, pTVar1 = pTVar11, pTVar11 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar10) {
            if ((pTVar1->_s_1).NextFreeIndex < (pTVar12->_s_1).NextFreeIndex) {
              pTVar12 = pTVar1;
            }
          }
          TVar3 = pTVar12->_s_1;
          uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          pTVar12->_s_1 = pTVar10->_s_1;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
          pTVar10->_s_1 = TVar3;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar2;
        }
        goto LAB_146ac83f3;
      }
LAB_146ac83e2:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_146ac83f3:
      ppTVar7 = ppTVar7 + -3;
    } while (&local_328 <= ppTVar7);
  }
  return;
code_r0x000146ac8329:
  if ((pTVar11->_s_1).NextFreeIndex <= *(int *)((longlong)pTVar6 + 0x14)) goto LAB_146ac8320;
LAB_146ac8332:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar11) break;
  } while (*(int *)((longlong)pTVar9 + -0xc) <= (pTVar11->_s_1).NextFreeIndex);
  uVar2 = *(undefined8 *)((longlong)pTVar9 + -8);
  if (pTVar12 <= pTVar8) {
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar6 + 0x18);
    pTVar12->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar6 + 0x18) = uVar2;
    pTVar8->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
    goto LAB_146ac8320;
  }
  TVar3 = pTVar11->_s_1;
  uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
  local_338._0_4_ = (int)local_338 + -1;
  pTVar11->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar2;
  pTVar8->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar9 + -8) = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar10) {
      *ppTVar7 = pTVar12;
      ppTVar7[1] = pTVar10;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar8 <= pTVar11 + 1) goto LAB_146ac83f3;
    pTVar10 = pTVar9 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar8) {
      *ppTVar7 = pTVar11;
      ppTVar7[1] = pTVar9 + -2;
      *(int *)(ppTVar7 + 2) = (int)local_338;
      ppTVar7 = ppTVar7 + 3;
    }
    if (pTVar10 <= pTVar12) goto LAB_146ac83f3;
  }
  iVar5 = (int)((longlong)pTVar10 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if ((int)local_338 == 0) goto LAB_146ac83e2;
  goto LAB_146ac82f0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 146ac8480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x14) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_146ac8550:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined4 *)((longlong)pTVar12 + lVar6 * 0x14 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined4 *)((longlong)pTVar12 + lVar6 * 0x14 + 0x10) =
               *(undefined4 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined4 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_146ac8592:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000146ac859b;
          goto LAB_146ac85a5;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar1->ElementData).Pad + 8) < *(int *)((pTVar13->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined4 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined4 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined4 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined4 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_146ac86b7;
      }
LAB_146ac86a8:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_146ac86b7:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000146ac859b:
  if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar9 + 0x1c))
  goto LAB_146ac8592;
LAB_146ac85a5:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((longlong)pTVar11 + -0xc) <= *(int *)((pTVar12->ElementData).Pad + 8));
  uVar3 = *(undefined8 *)((longlong)pTVar11 + -0xc);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x1c);
    uVar2 = *(undefined4 *)((longlong)pTVar9 + 0x24);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x1c) = uVar3;
    *(undefined4 *)((longlong)pTVar9 + 0x24) = *(undefined4 *)((longlong)pTVar11 + -4);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0xc) = uVar5;
    *(undefined4 *)((longlong)pTVar11 + -4) = uVar2;
    goto LAB_146ac8592;
  }
  uVar2 = *(undefined4 *)((pTVar12->ElementData).Pad + 0x10);
  local_348._0_4_ = (int)local_348 + -1;
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar3;
  *(undefined4 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined4 *)((longlong)pTVar11 + -4);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0xc) = uVar5;
  *(undefined4 *)((longlong)pTVar11 + -4) = uVar2;
  if (((longlong)pTVar10 + (-0x14 - (longlong)pTVar12)) / 0x14 <
      ((longlong)pTVar8 - (longlong)pTVar13) / 0x14) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_146ac86b7;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_146ac86b7;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x14) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_146ac86a8;
  goto LAB_146ac8550;
}

// IntroSortInternal<FGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_>_> @ 146ac8770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_>_>
          (FGameplayTagTableRow *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_> param_4)

{
  FName FVar1;
  longlong lVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FGameplayTagTableRow *pFVar9;
  FGameplayTagTableRow *pFVar10;
  FGameplayTagTableRow *pFVar11;
  FGameplayTagTableRow **ppFVar12;
  int iVar13;
  FGameplayTagTableRow *pFVar14;
  FGameplayTagTableRow *pFVar15;
  FGameplayTagTableRow *pFVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  FGameplayTagTableRow *local_358;
  FGameplayTagTableRow *local_348;
  FGameplayTagTableRow *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppFVar12 = &local_348;
    do {
      pFVar16 = ppFVar12[1];
      pFVar15 = *ppFVar12;
      local_358 = ppFVar12[2];
      iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 5) + 1;
      pFVar14 = pFVar15;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_146ac8830:
        if (8 < iVar8) {
          FVar1 = pFVar14->Tag;
          pFVar9 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar8 / 2;
          lVar2 = pFVar15->_padding_;
          FVar3 = pFVar15->Tag;
          pFVar4 = (pFVar15->DevComment).Data.AllocatorInstance.Data;
          iVar6 = (pFVar15->DevComment).Data.ArrayNum;
          iVar7 = (pFVar15->DevComment).Data.ArrayMax;
          pFVar15->_padding_ = pFVar14->_padding_;
          pFVar15->Tag = FVar1;
          iVar8 = (pFVar14->DevComment).Data.ArrayNum;
          iVar5 = (pFVar14->DevComment).Data.ArrayMax;
          (pFVar15->DevComment).Data.AllocatorInstance.Data =
               (pFVar14->DevComment).Data.AllocatorInstance.Data;
          (pFVar15->DevComment).Data.ArrayNum = iVar8;
          (pFVar15->DevComment).Data.ArrayMax = iVar5;
          pFVar14->_padding_ = lVar2;
          pFVar14->Tag = FVar3;
          (pFVar14->DevComment).Data.AllocatorInstance.Data = pFVar4;
          (pFVar14->DevComment).Data.ArrayNum = iVar6;
          (pFVar14->DevComment).Data.ArrayMax = iVar7;
          pFVar15 = pFVar14;
LAB_146ac8870:
          pFVar11 = pFVar15;
          pFVar15 = pFVar11 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x000146ac8879;
          goto LAB_146ac8890;
        }
        for (; pFVar9 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar9, pFVar15 = pFVar15 + 1, pFVar15 <= pFVar16) {
            iVar13 = UE::ComparisonUtility::CompareWithNumericSuffix(pFVar11->Tag,pFVar15->Tag);
            pFVar9 = pFVar15;
            if (-1 < iVar13) {
              pFVar9 = pFVar11;
            }
          }
          lVar2 = pFVar11->_padding_;
          FVar1 = pFVar11->Tag;
          pFVar4 = (pFVar11->DevComment).Data.AllocatorInstance.Data;
          iVar5 = (pFVar11->DevComment).Data.ArrayNum;
          iVar6 = (pFVar11->DevComment).Data.ArrayMax;
          FVar3 = pFVar16->Tag;
          pFVar11->_padding_ = pFVar16->_padding_;
          pFVar11->Tag = FVar3;
          iVar13 = (pFVar16->DevComment).Data.ArrayNum;
          iVar8 = (pFVar16->DevComment).Data.ArrayMax;
          (pFVar11->DevComment).Data.AllocatorInstance.Data =
               (pFVar16->DevComment).Data.AllocatorInstance.Data;
          (pFVar11->DevComment).Data.ArrayNum = iVar13;
          (pFVar11->DevComment).Data.ArrayMax = iVar8;
          pFVar16->_padding_ = lVar2;
          pFVar16->Tag = FVar1;
          (pFVar16->DevComment).Data.AllocatorInstance.Data = pFVar4;
          (pFVar16->DevComment).Data.ArrayNum = iVar5;
          (pFVar16->DevComment).Data.ArrayMax = iVar6;
        }
        goto LAB_146ac8983;
      }
LAB_146ac8972:
      HeapSortInternal<FGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FGameplayTagTableRow,TLess<void>_>_>
                (pFVar15,iVar8,param_3,param_4);
LAB_146ac8983:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_348 <= ppFVar12);
  }
  return;
code_r0x000146ac8879:
  iVar8 = UE::ComparisonUtility::CompareWithNumericSuffix(pFVar14->Tag,pFVar11[1].Tag);
  if (-1 < iVar8) goto LAB_146ac8870;
LAB_146ac8890:
  do {
    pFVar10 = pFVar9;
    pFVar9 = pFVar10 + -1;
    if (pFVar9 <= pFVar14) break;
    iVar8 = UE::ComparisonUtility::CompareWithNumericSuffix(pFVar10[-1].Tag,pFVar14->Tag);
  } while (-1 < iVar8);
  FVar1 = pFVar10[-1].Tag;
  if (pFVar15 <= pFVar9) {
    lVar2 = pFVar15->_padding_;
    FVar3 = pFVar11[1].Tag;
    pFVar4 = pFVar11[1].DevComment.Data.AllocatorInstance.Data;
    iVar6 = pFVar11[1].DevComment.Data.ArrayNum;
    iVar7 = pFVar11[1].DevComment.Data.ArrayMax;
    pFVar15->_padding_ = pFVar9->_padding_;
    pFVar11[1].Tag = FVar1;
    iVar8 = pFVar10[-1].DevComment.Data.ArrayNum;
    iVar5 = pFVar10[-1].DevComment.Data.ArrayMax;
    pFVar11[1].DevComment.Data.AllocatorInstance.Data =
         pFVar10[-1].DevComment.Data.AllocatorInstance.Data;
    pFVar11[1].DevComment.Data.ArrayNum = iVar8;
    pFVar11[1].DevComment.Data.ArrayMax = iVar5;
    pFVar9->_padding_ = lVar2;
    pFVar10[-1].Tag = FVar3;
    pFVar10[-1].DevComment.Data.AllocatorInstance.Data = pFVar4;
    pFVar10[-1].DevComment.Data.ArrayNum = iVar6;
    pFVar10[-1].DevComment.Data.ArrayMax = iVar7;
    goto LAB_146ac8870;
  }
  lVar2 = pFVar14->_padding_;
  FVar3 = pFVar14->Tag;
  pFVar4 = (pFVar14->DevComment).Data.AllocatorInstance.Data;
  iVar6 = (pFVar14->DevComment).Data.ArrayNum;
  iVar7 = (pFVar14->DevComment).Data.ArrayMax;
  pFVar14->_padding_ = pFVar9->_padding_;
  pFVar14->Tag = FVar1;
  iVar13 = iVar13 + -1;
  iVar8 = pFVar10[-1].DevComment.Data.ArrayNum;
  iVar5 = pFVar10[-1].DevComment.Data.ArrayMax;
  (pFVar14->DevComment).Data.AllocatorInstance.Data =
       pFVar10[-1].DevComment.Data.AllocatorInstance.Data;
  (pFVar14->DevComment).Data.ArrayNum = iVar8;
  (pFVar14->DevComment).Data.ArrayMax = iVar5;
  pFVar9->_padding_ = lVar2;
  pFVar10[-1].Tag = FVar3;
  pFVar10[-1].DevComment.Data.AllocatorInstance.Data = pFVar4;
  pFVar10[-1].DevComment.Data.ArrayNum = iVar6;
  pFVar10[-1].DevComment.Data.ArrayMax = iVar7;
  if ((longlong)((longlong)pFVar9 + (-0x20 - (longlong)pFVar14) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xffffffffffffffe0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar12 = pFVar15;
      ppFVar12[1] = pFVar16;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar9 <= pFVar14 + 1) goto LAB_146ac8983;
    pFVar16 = pFVar10 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar9) {
      *ppFVar12 = pFVar14;
      ppFVar12[1] = pFVar10 + -2;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_146ac8983;
  }
  iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 5) + 1;
  pFVar14 = pFVar15;
  if (iVar13 == 0) goto LAB_146ac8972;
  goto LAB_146ac8830;
}

// IntroSortInternal<`UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper'::__l2::FPair,int,FIdentityFunctor,`UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper'::__l6::<lambda_1>_> @ 146ac8a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l2::FPair,int,FIdentityFunctor,_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l6::<lambda_1>_>
          (FPair *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FPair *pFVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  ushort uVar4;
  undefined6 uVar5;
  ushort uVar6;
  undefined6 uVar7;
  int iVar8;
  FPair *pFVar9;
  FPair *pFVar10;
  FPair *pFVar11;
  FPair *pFVar12;
  FPair *pFVar13;
  FPair *pFVar14;
  FPair **ppFVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FPair *local_338;
  FPair *local_328;
  FPair *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar15 = &local_328;
    do {
      pFVar12 = ppFVar15[1];
      pFVar14 = *ppFVar15;
      pFVar1 = ppFVar15[2];
      iVar8 = (int)((longlong)pFVar12 - (longlong)pFVar14 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar13 = pFVar14;
      if ((int)local_338 != 0) {
LAB_146ac8b10:
        if (8 < iVar8) {
          uVar4 = pFVar13->TagIndex;
          uVar5 = *(undefined6 *)&pFVar13->field_0xa;
          pFVar10 = pFVar12 + 1;
          pFVar14 = pFVar13 + iVar8 / 2;
          uVar3 = pFVar14->ArrayIndex;
          uVar6 = pFVar14->TagIndex;
          uVar7 = *(undefined6 *)&pFVar14->field_0xa;
          pFVar14 = pFVar13 + iVar8 / 2;
          pFVar14->ArrayIndex = pFVar13->ArrayIndex;
          pFVar14->TagIndex = uVar4;
          *(undefined6 *)&pFVar14->field_0xa = uVar5;
          pFVar13->ArrayIndex = uVar3;
          pFVar13->TagIndex = uVar6;
          *(undefined6 *)&pFVar13->field_0xa = uVar7;
          pFVar14 = pFVar13;
LAB_146ac8b40:
          pFVar9 = pFVar14;
          pFVar14 = pFVar9 + 1;
          if (pFVar14 <= pFVar12) goto code_r0x000146ac8b49;
          goto LAB_146ac8b61;
        }
        for (; pFVar14 = pFVar13, pFVar1 = pFVar13, pFVar13 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar10 = pFVar14, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar12) {
            bVar16 = pFVar10->TagIndex < pFVar1->TagIndex;
            if (pFVar10->TagIndex == pFVar1->TagIndex) {
              bVar16 = pFVar10->ArrayIndex < pFVar1->ArrayIndex;
            }
            pFVar14 = pFVar1;
            if (!bVar16) {
              pFVar14 = pFVar10;
            }
          }
          uVar3 = pFVar10->ArrayIndex;
          uVar6 = pFVar10->TagIndex;
          uVar7 = *(undefined6 *)&pFVar10->field_0xa;
          uVar4 = pFVar12->TagIndex;
          uVar5 = *(undefined6 *)&pFVar12->field_0xa;
          pFVar10->ArrayIndex = pFVar12->ArrayIndex;
          pFVar10->TagIndex = uVar4;
          *(undefined6 *)&pFVar10->field_0xa = uVar5;
          pFVar12->ArrayIndex = uVar3;
          pFVar12->TagIndex = uVar6;
          *(undefined6 *)&pFVar12->field_0xa = uVar7;
        }
        goto LAB_146ac8c32;
      }
LAB_146ac8c20:
      local_338 = pFVar1;
      HeapSortInternal<_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l2::FPair,int,FIdentityFunctor,_UE::Net::FGameplayTagContainerNetSerializer::GameplayTagContainerToSerializationHelper_::__l6::<lambda_1>_>
                (pFVar14,iVar8,param_3,param_4);
LAB_146ac8c32:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_328 <= ppFVar15);
  }
  return;
code_r0x000146ac8b49:
  bVar16 = pFVar13->TagIndex < pFVar9[1].TagIndex;
  if (pFVar13->TagIndex == pFVar9[1].TagIndex) {
    bVar16 = pFVar13->ArrayIndex < pFVar14->ArrayIndex;
  }
  if (!bVar16) goto LAB_146ac8b40;
LAB_146ac8b61:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar13) break;
    bVar16 = pFVar11[-1].TagIndex < pFVar13->TagIndex;
    if (pFVar11[-1].TagIndex == pFVar13->TagIndex) {
      bVar16 = pFVar10->ArrayIndex < pFVar13->ArrayIndex;
    }
  } while (!bVar16);
  uVar2 = *(undefined8 *)&pFVar11[-1].TagIndex;
  if (pFVar14 <= pFVar10) {
    uVar3 = pFVar14->ArrayIndex;
    uVar4 = pFVar9[1].TagIndex;
    uVar5 = *(undefined6 *)&pFVar9[1].field_0xa;
    pFVar14->ArrayIndex = pFVar10->ArrayIndex;
    *(undefined8 *)&pFVar9[1].TagIndex = uVar2;
    pFVar10->ArrayIndex = uVar3;
    pFVar11[-1].TagIndex = uVar4;
    *(undefined6 *)&pFVar11[-1].field_0xa = uVar5;
    goto LAB_146ac8b40;
  }
  uVar3 = pFVar13->ArrayIndex;
  uVar4 = pFVar13->TagIndex;
  uVar5 = *(undefined6 *)&pFVar13->field_0xa;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar13->ArrayIndex = pFVar10->ArrayIndex;
  *(undefined8 *)&pFVar13->TagIndex = uVar2;
  pFVar10->ArrayIndex = uVar3;
  pFVar11[-1].TagIndex = uVar4;
  *(undefined6 *)&pFVar11[-1].field_0xa = uVar5;
  if ((longlong)((longlong)pFVar10 + (-0x10 - (longlong)pFVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar12 - (longlong)pFVar14 & 0xfffffffffffffff0U)) {
    if (pFVar14 < pFVar12) {
      *ppFVar15 = pFVar14;
      ppFVar15[1] = pFVar12;
      *(int *)(ppFVar15 + 2) = (int)local_338;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar10 <= pFVar13 + 1) goto LAB_146ac8c32;
    pFVar12 = pFVar11 + -2;
    pFVar14 = pFVar13;
  }
  else {
    if (pFVar13 + 1 < pFVar10) {
      *ppFVar15 = pFVar13;
      ppFVar15[1] = pFVar11 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_338;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar12 <= pFVar14) goto LAB_146ac8c32;
  }
  iVar8 = (int)((longlong)pFVar12 - (longlong)pFVar14 >> 4) + 1;
  pFVar13 = pFVar14;
  if ((int)local_338 == 0) goto LAB_146ac8c20;
  goto LAB_146ac8b10;
}

// IntroSortInternal<FRestrictedGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_>_> @ 146ac8ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FRestrictedGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_>_>
          (FRestrictedGameplayTagTableRow *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_> param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined7 uVar6;
  bool bVar7;
  undefined7 uVar8;
  int iVar9;
  FRestrictedGameplayTagTableRow *pFVar10;
  FRestrictedGameplayTagTableRow *pFVar11;
  FRestrictedGameplayTagTableRow *pFVar12;
  FRestrictedGameplayTagTableRow **ppFVar13;
  int iVar14;
  FRestrictedGameplayTagTableRow *pFVar15;
  FRestrictedGameplayTagTableRow *pFVar16;
  FRestrictedGameplayTagTableRow *pFVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  FRestrictedGameplayTagTableRow *local_358;
  FRestrictedGameplayTagTableRow *local_348;
  FRestrictedGameplayTagTableRow *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_358 = ppFVar13[2];
      iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x28) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_146ac8dc0:
        if (8 < iVar9) {
          lVar1 = pFVar15->_padding_;
          pFVar10 = pFVar17 + 1;
          iVar9 = iVar9 / 2;
          lVar2 = pFVar15[iVar9]._padding_;
          lVar3 = pFVar15[iVar9]._padding_;
          lVar4 = pFVar15[iVar9]._padding_;
          lVar5 = (&pFVar15[iVar9]._padding_)[1];
          bVar7 = pFVar15[iVar9].bAllowNonRestrictedChildren;
          uVar8 = *(undefined7 *)&pFVar15[iVar9].field_0x21;
          pFVar15[iVar9]._padding_ = pFVar15->_padding_;
          pFVar15[iVar9]._padding_ = lVar1;
          lVar1 = pFVar15->_padding_;
          pFVar15[iVar9]._padding_ = pFVar15->_padding_;
          (&pFVar15[iVar9]._padding_)[1] = lVar1;
          uVar6 = *(undefined7 *)&pFVar15->field_0x21;
          pFVar15[iVar9].bAllowNonRestrictedChildren = pFVar15->bAllowNonRestrictedChildren;
          *(undefined7 *)&pFVar15[iVar9].field_0x21 = uVar6;
          pFVar15->_padding_ = lVar2;
          pFVar15->_padding_ = lVar3;
          pFVar15->_padding_ = lVar4;
          pFVar15->_padding_ = lVar5;
          pFVar15->bAllowNonRestrictedChildren = bVar7;
          *(undefined7 *)&pFVar15->field_0x21 = uVar8;
          pFVar16 = pFVar15;
LAB_146ac8e20:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x000146ac8e29;
          goto LAB_146ac8e40;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            iVar14 = UE::ComparisonUtility::CompareWithNumericSuffix
                               ((FName)pFVar12->_padding_,(FName)pFVar16->_padding_);
            pFVar10 = pFVar16;
            if (-1 < iVar14) {
              pFVar10 = pFVar12;
            }
          }
          lVar1 = pFVar12->_padding_;
          lVar2 = pFVar12->_padding_;
          bVar7 = pFVar12->bAllowNonRestrictedChildren;
          uVar8 = *(undefined7 *)&pFVar12->field_0x21;
          lVar3 = pFVar12->_padding_;
          lVar4 = pFVar12->_padding_;
          lVar5 = pFVar17->_padding_;
          pFVar12->_padding_ = pFVar17->_padding_;
          pFVar12->_padding_ = lVar5;
          lVar5 = pFVar17->_padding_;
          pFVar12->_padding_ = pFVar17->_padding_;
          pFVar12->_padding_ = lVar5;
          uVar6 = *(undefined7 *)&pFVar17->field_0x21;
          pFVar12->bAllowNonRestrictedChildren = pFVar17->bAllowNonRestrictedChildren;
          *(undefined7 *)&pFVar12->field_0x21 = uVar6;
          pFVar17->_padding_ = lVar1;
          pFVar17->_padding_ = lVar2;
          pFVar17->_padding_ = lVar3;
          pFVar17->_padding_ = lVar4;
          pFVar17->bAllowNonRestrictedChildren = bVar7;
          *(undefined7 *)&pFVar17->field_0x21 = uVar8;
        }
        goto LAB_146ac8fa2;
      }
LAB_146ac8f89:
      HeapSortInternal<FRestrictedGameplayTagTableRow,int,FIdentityFunctor,TDereferenceWrapper<FRestrictedGameplayTagTableRow,TLess<void>_>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_146ac8fa2:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x000146ac8e29:
  iVar9 = UE::ComparisonUtility::CompareWithNumericSuffix
                    ((FName)pFVar15->_padding_,(FName)pFVar12[1]._padding_);
  if (-1 < iVar9) goto LAB_146ac8e20;
LAB_146ac8e40:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    iVar9 = UE::ComparisonUtility::CompareWithNumericSuffix
                      ((FName)pFVar11[-1]._padding_,(FName)pFVar15->_padding_);
  } while (-1 < iVar9);
  lVar1 = pFVar11[-1]._padding_;
  if (pFVar16 <= pFVar10) {
    lVar2 = pFVar16->_padding_;
    lVar3 = pFVar12[1]._padding_;
    lVar4 = pFVar12[1]._padding_;
    lVar5 = pFVar12[1]._padding_;
    bVar7 = pFVar12[1].bAllowNonRestrictedChildren;
    uVar8 = *(undefined7 *)&pFVar12[1].field_0x21;
    pFVar16->_padding_ = pFVar10->_padding_;
    pFVar12[1]._padding_ = lVar1;
    lVar1 = pFVar11[-1]._padding_;
    pFVar12[1]._padding_ = pFVar11[-1]._padding_;
    pFVar12[1]._padding_ = lVar1;
    uVar6 = *(undefined7 *)&pFVar11[-1].field_0x21;
    pFVar12[1].bAllowNonRestrictedChildren = pFVar11[-1].bAllowNonRestrictedChildren;
    *(undefined7 *)&pFVar12[1].field_0x21 = uVar6;
    pFVar10->_padding_ = lVar2;
    pFVar11[-1]._padding_ = lVar3;
    pFVar11[-1]._padding_ = lVar4;
    pFVar11[-1]._padding_ = lVar5;
    pFVar11[-1].bAllowNonRestrictedChildren = bVar7;
    *(undefined7 *)&pFVar11[-1].field_0x21 = uVar8;
    goto LAB_146ac8e20;
  }
  lVar2 = pFVar15->_padding_;
  lVar3 = pFVar15->_padding_;
  lVar4 = pFVar15->_padding_;
  lVar5 = pFVar15->_padding_;
  bVar7 = pFVar15->bAllowNonRestrictedChildren;
  uVar8 = *(undefined7 *)&pFVar15->field_0x21;
  pFVar15->_padding_ = pFVar10->_padding_;
  pFVar15->_padding_ = lVar1;
  lVar1 = pFVar11[-1]._padding_;
  iVar14 = iVar14 + -1;
  pFVar15->_padding_ = pFVar11[-1]._padding_;
  pFVar15->_padding_ = lVar1;
  uVar6 = *(undefined7 *)&pFVar11[-1].field_0x21;
  pFVar15->bAllowNonRestrictedChildren = pFVar11[-1].bAllowNonRestrictedChildren;
  *(undefined7 *)&pFVar15->field_0x21 = uVar6;
  pFVar10->_padding_ = lVar2;
  pFVar11[-1]._padding_ = lVar3;
  pFVar11[-1]._padding_ = lVar4;
  pFVar11[-1]._padding_ = lVar5;
  pFVar11[-1].bAllowNonRestrictedChildren = bVar7;
  *(undefined7 *)&pFVar11[-1].field_0x21 = uVar8;
  if (((longlong)pFVar10 + (-0x28 - (longlong)pFVar15)) / 0x28 <
      ((longlong)pFVar17 - (longlong)pFVar16) / 0x28) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_146ac8fa2;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_146ac8fa2;
  }
  iVar9 = (int)(((longlong)pFVar17 - (longlong)pFVar16) / 0x28) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_146ac8f89;
  goto LAB_146ac8dc0;
}

// IntroSortInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_> @ 146ac9090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>
          (TSharedPtr<FGameplayTagNode,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag> param_4)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGameplayTagNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  FGameplayTag *pFVar7;
  int iVar8;
  TSharedPtr<FGameplayTagNode,1> *pTVar9;
  TSharedPtr<FGameplayTagNode,1> *pTVar10;
  TSharedPtr<FGameplayTagNode,1> **ppTVar11;
  TSharedPtr<FGameplayTagNode,1> *pTVar12;
  TSharedPtr<FGameplayTagNode,1> *pTVar13;
  TSharedPtr<FGameplayTagNode,1> *pTVar14;
  TSharedPtr<FGameplayTagNode,1> *pTVar15;
  float fVar16;
  undefined1 auStack_3b8 [32];
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380;
  FName local_378;
  FName local_370 [3];
  TSharedPtr<FGameplayTagNode,1> *local_358;
  TSharedPtr<FGameplayTagNode,1> *local_348;
  TSharedPtr<FGameplayTagNode,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    ppTVar11 = &local_348;
    do {
      pTVar12 = ppTVar11[1];
      pTVar15 = *ppTVar11;
      local_358 = ppTVar11[2];
      iVar6 = (int)((longlong)pTVar12 - (longlong)pTVar15 >> 4) + 1;
      pTVar14 = pTVar15;
      iVar8 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_146ac9152:
        if (8 < iVar6) {
          pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
          pTVar9 = pTVar12 + 1;
          pFVar3 = pTVar14[iVar6 / 2].Object;
          pTVar4 = pTVar14[iVar6 / 2].SharedReferenceCount.ReferenceController;
          pTVar14[iVar6 / 2].Object = pTVar14->Object;
          pTVar14[iVar6 / 2].SharedReferenceCount.ReferenceController = pTVar2;
          pTVar14->Object = pFVar3;
          (pTVar14->SharedReferenceCount).ReferenceController = pTVar4;
          pTVar15 = pTVar14;
LAB_146ac9180:
          pTVar13 = pTVar15;
          pTVar15 = pTVar13 + 1;
          if (pTVar15 <= pTVar12) goto code_r0x000146ac918d;
          goto LAB_146ac9240;
        }
        for (; pTVar9 = pTVar14, pTVar15 = pTVar14, pTVar14 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar13 = pTVar9, pTVar15 = pTVar15 + 1, pTVar15 <= pTVar12) {
            if ((pTVar13->Object == (FGameplayTagNode *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((pTVar13->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
              pFVar7 = &FGameplayTag::EmptyTag;
            }
            else {
              pFVar7 = (FGameplayTag *)
                       (pTVar13->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data
              ;
            }
            local_370[0] = pFVar7->TagName;
            if ((pTVar15->Object == (FGameplayTagNode *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((pTVar15->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
              pFVar7 = &FGameplayTag::EmptyTag;
            }
            else {
              pFVar7 = (FGameplayTag *)
                       (pTVar15->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data
              ;
            }
            local_378 = pFVar7->TagName;
            iVar8 = ::FName::Compare(local_370,&local_378);
            pTVar9 = pTVar15;
            if (-1 < iVar8) {
              pTVar9 = pTVar13;
            }
          }
          pFVar3 = pTVar13->Object;
          pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
          pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
          pTVar13->Object = pTVar12->Object;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar4;
          pTVar12->Object = pFVar3;
          (pTVar12->SharedReferenceCount).ReferenceController = pTVar2;
        }
        goto LAB_146ac93af;
      }
LAB_146ac939e:
      HeapSortInternal<TSharedPtr<FGameplayTagNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,1>,FCompareFGameplayTagNodeByTag>_>
                (pTVar15,iVar6,param_3,param_4);
LAB_146ac93af:
      ppTVar11 = ppTVar11 + -3;
    } while (&local_348 <= ppTVar11);
  }
  return;
code_r0x000146ac918d:
  if ((pTVar14->Object == (FGameplayTagNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((pTVar14->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
    pFVar7 = &FGameplayTag::EmptyTag;
  }
  else {
    pFVar7 = (FGameplayTag *)
             (pTVar14->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
  }
  local_390 = pFVar7->TagName;
  if ((pTVar15->Object == (FGameplayTagNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((pTVar15->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
    pFVar7 = &FGameplayTag::EmptyTag;
  }
  else {
    pFVar7 = (FGameplayTag *)
             (pTVar15->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
  }
  local_398 = pFVar7->TagName;
  iVar6 = ::FName::Compare(&local_390,&local_398);
  if (-1 < iVar6) goto LAB_146ac9180;
LAB_146ac9240:
  do {
    pTVar10 = pTVar9;
    pTVar9 = pTVar10 + -1;
    if (pTVar9 <= pTVar14) break;
    if ((pTVar9->Object == (FGameplayTagNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pTVar9->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
      pFVar7 = &FGameplayTag::EmptyTag;
    }
    else {
      pFVar7 = (FGameplayTag *)
               (pTVar9->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
    }
    local_380 = pFVar7->TagName;
    if ((pTVar14->Object == (FGameplayTagNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pTVar14->Object->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
      pFVar7 = &FGameplayTag::EmptyTag;
    }
    else {
      pFVar7 = (FGameplayTag *)
               (pTVar14->Object->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
    }
    local_388 = pFVar7->TagName;
    iVar6 = ::FName::Compare(&local_380,&local_388);
  } while (-1 < iVar6);
  pTVar2 = pTVar10[-1].SharedReferenceCount.ReferenceController;
  if (pTVar15 <= pTVar9) {
    pFVar3 = pTVar15->Object;
    pTVar4 = pTVar13[1].SharedReferenceCount.ReferenceController;
    pTVar15->Object = pTVar9->Object;
    pTVar13[1].SharedReferenceCount.ReferenceController = pTVar2;
    pTVar9->Object = pFVar3;
    pTVar10[-1].SharedReferenceCount.ReferenceController = pTVar4;
    goto LAB_146ac9180;
  }
  pFVar3 = pTVar14->Object;
  pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
  iVar8 = iVar8 + -1;
  pTVar14->Object = pTVar9->Object;
  (pTVar14->SharedReferenceCount).ReferenceController = pTVar2;
  pTVar9->Object = pFVar3;
  pTVar10[-1].SharedReferenceCount.ReferenceController = pTVar4;
  if ((longlong)((longlong)pTVar9 + (-0x10 - (longlong)pTVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar15 & 0xfffffffffffffff0U)) {
    if (pTVar15 < pTVar12) {
      *ppTVar11 = pTVar15;
      ppTVar11[1] = pTVar12;
      *(int *)(ppTVar11 + 2) = iVar8;
      ppTVar11 = ppTVar11 + 3;
    }
    if (pTVar9 <= pTVar14 + 1) goto LAB_146ac93af;
    pTVar12 = pTVar10 + -2;
    pTVar15 = pTVar14;
  }
  else {
    if (pTVar14 + 1 < pTVar9) {
      *ppTVar11 = pTVar14;
      ppTVar11[1] = pTVar10 + -2;
      *(int *)(ppTVar11 + 2) = iVar8;
      ppTVar11 = ppTVar11 + 3;
    }
    if (pTVar12 <= pTVar15) goto LAB_146ac93af;
  }
  iVar6 = (int)((longlong)pTVar12 - (longlong)pTVar15 >> 4) + 1;
  pTVar14 = pTVar15;
  if (iVar8 == 0) goto LAB_146ac939e;
  goto LAB_146ac9152;
}

// LowerBoundInternal<TSharedPtr<FGameplayTagNode,1>_const_,int,FName,`UGameplayTagsManager::InsertTagIntoNodeArray'::__l2::<lambda_1>,`UGameplayTagsManager::InsertTagIntoNodeArray'::__l2::<lambda_2>_> @ 146aca900

int __cdecl
AlgoImpl::
LowerBoundInternal<TSharedPtr<FGameplayTagNode,1>_const_,int,FName,_UGameplayTagsManager::InsertTagIntoNodeArray_::__l2::<lambda_1>,_UGameplayTagsManager::InsertTagIntoNodeArray_::__l2::<lambda_2>_>
          (TSharedPtr<FGameplayTagNode,1> *param_1,int param_2,FName *param_3,<lambda_1> param_4,
          <lambda_2> param_5)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar6;
      if ((param_1[iVar1].Object == (FGameplayTagNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      FVar2 = (param_1[iVar1].Object)->Tag;
      if ((FVar2 == *param_3) ||
         (iVar7 = UE::ComparisonUtility::CompareWithNumericSuffix(FVar2,*param_3), -1 < iVar7)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        iVar6 = iVar1 + (param_2 & 1U);
      }
      uVar4 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar4 != 0);
  }
  return iVar6;
}

// NewObject<UDataTable> @ 146acaad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDataTable * __cdecl
NewObject<UDataTable>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDataTable *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UDataTable_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDataTable *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGameplayTagsList> @ 146acabc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTagsList * __cdecl
NewObject<UGameplayTagsList>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UGameplayTagsList *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UGameplayTagsList::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UGameplayTagsList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGameplayTagsManager> @ 146acacb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayTagsManager * __cdecl
NewObject<UGameplayTagsManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UGameplayTagsManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UGameplayTagsManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UGameplayTagsManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<URestrictedGameplayTagsList> @ 146acada0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URestrictedGameplayTagsList * __cdecl
NewObject<URestrictedGameplayTagsList>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  URestrictedGameplayTagsList *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = URestrictedGameplayTagsList::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (URestrictedGameplayTagsList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<`UGameplayTagsManager::AddTagTableRow'::__l2::FRequiredTag>_> @ 146acae90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<_UGameplayTagsManager::AddTagTableRow_::__l2::FRequiredTag>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`UGameplayTagsManager::AddTagTableRow'::__l2::FRequiredTag>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<`UGameplayTagsManager::AddTagTableRow'::__l2::FRequiredTag>_> @ 146acaf60

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<_UGameplayTagsManager::AddTagTableRow_::__l2::FRequiredTag>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_void___cdecl_UGameplayTagsManager::AddTagTableRow(FGameplayTagTableRow_const_&,FName,bool)_::_2_::FRequiredTag>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 7) {
    iVar2 = 6;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`UGameplayTagsManager::AddTagTableRow'::__l2::FRequiredTag>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// StaticEnum<enum_EGameplayContainerMatchType> @ 146acb490

UEnum * __cdecl StaticEnum<enum_EGameplayContainerMatchType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType,(UObject *)pUVar1,
                       L"EGameplayContainerMatchType");
  }
  return Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton;
}

// StaticEnum<enum_EGameplayTagQueryExprType> @ 146acb4d0

UEnum * __cdecl StaticEnum<enum_EGameplayTagQueryExprType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType,(UObject *)pUVar1,
                       L"EGameplayTagQueryExprType");
  }
  return Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton;
}

// StaticEnum<enum_EGameplayTagSelectionType> @ 146acb510

UEnum * __cdecl StaticEnum<enum_EGameplayTagSelectionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType,(UObject *)pUVar1,
                       L"EGameplayTagSelectionType");
  }
  return Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton;
}

// StaticEnum<enum_EGameplayTagSourceType> @ 146acb550

UEnum * __cdecl StaticEnum<enum_EGameplayTagSourceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType,(UObject *)pUVar1,
                       L"EGameplayTagSourceType");
  }
  return Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton;
}

// WriteToString<64,wchar_t_const_(&)[27],int_&> @ 146acb590

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,wchar_t_const_(&)[27],int_&>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,wchar_t (*param_1) [27],
          int *param_2)

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  if (param_1 != (wchar_t (*) [27])0x0) {
    sVar2 = wcslen(*param_1);
    iVar1 = (int)sVar2;
  }
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,*param_1,iVar1);
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar3,L"%d");
  return __return_storage_ptr__;
}

// `vcall'{0,{flat}}'_}' @ 146acf074

/* [thunk]: __cdecl FGameplayTagNativeAdder::`vcall'{0,{flat}}' }' */

void __thiscall FGameplayTagNativeAdder::_vcall__0__flat______(FGameplayTagNativeAdder *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146acf077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*this)();
  return;
}

// `scalar_deleting_destructor' @ 146acf080

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayTagNativeAdder,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGameplayTagNativeAdder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf0b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayTagsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UGameplayTagsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf0e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayTagNode,SharedPointerInternals::DefaultDeleter<FGameplayTagNode>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FGameplayTagNode,SharedPointerInternals::DefaultDeleter<FGameplayTagNode>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf120

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetFieldExportGroup,SharedPointerInternals::DefaultDeleter<FNetFieldExportGroup>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetFieldExportGroup,SharedPointerInternals::DefaultDeleter<FNetFieldExportGroup>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf160

void * __thiscall
FGameplayTagTableRow::_scalar_deleting_destructor_(FGameplayTagTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DevComment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf1b0

void * __thiscall
UE::Net::FGameplayTagTokenStore::_scalar_deleting_destructor_
          (FGameplayTagTokenStore *this,uint param_1)

{
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined4 *)&this->field_0x70 = 0;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetTokenDataStore::FNetTokenStoreKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x28);
  FNetTokenDataStore::~FNetTokenDataStore((FNetTokenDataStore *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf230

void * __thiscall
UBlueprintGameplayTagLibrary::_scalar_deleting_destructor_
          (UBlueprintGameplayTagLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintGameplayTagLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf290

void * __thiscall
UEditableGameplayTagQuery::_scalar_deleting_destructor_
          (UEditableGameplayTagQuery *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQuery__6B_;
  pFVar1 = (this->TagQueryExportText_Helper).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryExportText_Helper).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryExportText_Helper).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagQueryExportText_Helper).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf350

void * __thiscall
UEditableGameplayTagQueryExpression::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression *this,uint param_1)

{
  *(undefined ***)this = &___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf3b0

void * __thiscall
UEditableGameplayTagQueryExpression_AllExprMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_AllExprMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AllExprMatch__6B_;
  pFVar1 = (this->Expressions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf430

void * __thiscall
UEditableGameplayTagQueryExpression_AllTagsExactMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_AllTagsExactMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AllTagsExactMatch__6B_;
  pFVar1 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf4c0

void * __thiscall
UEditableGameplayTagQueryExpression_AllTagsMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_AllTagsMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AllTagsMatch__6B_;
  pFVar1 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf550

void * __thiscall
UEditableGameplayTagQueryExpression_AnyExprMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_AnyExprMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AnyExprMatch__6B_;
  pFVar1 = (this->Expressions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf5d0

void * __thiscall
UEditableGameplayTagQueryExpression_AnyTagsExactMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_AnyTagsExactMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AnyTagsExactMatch__6B_;
  pFVar1 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf660

void * __thiscall
UEditableGameplayTagQueryExpression_AnyTagsMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_AnyTagsMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_AnyTagsMatch__6B_;
  pFVar1 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf6f0

void * __thiscall
UEditableGameplayTagQueryExpression_NoExprMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_NoExprMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_NoExprMatch__6B_;
  pFVar1 = (this->Expressions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf770

void * __thiscall
UEditableGameplayTagQueryExpression_NoTagsMatch::_scalar_deleting_destructor_
          (UEditableGameplayTagQueryExpression_NoTagsMatch *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression_NoTagsMatch__6B_;
  pFVar1 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf800

void * __thiscall
UGameplayTagAssetInterface::_scalar_deleting_destructor_
          (UGameplayTagAssetInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf860

void * __thiscall
UGameplayTagsDeveloperSettings::_scalar_deleting_destructor_
          (UGameplayTagsDeveloperSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGameplayTagsDeveloperSettings__6B_;
  pFVar1 = (this->DeveloperConfigName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 146acf8d0

void * __thiscall
UGameplayTagsList::_scalar_deleting_destructor_(UGameplayTagsList *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGameplayTagsList__6B_;
  DestructItems<FGameplayTagTableRow,int>
            ((FGameplayTagTableRow *)(this->GameplayTagList).AllocatorInstance.Data,
             (this->GameplayTagList).ArrayNum);
  pFVar1 = (this->GameplayTagList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTagRedirects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfigFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf970

void * __thiscall
UGameplayTagsManager::_scalar_deleting_destructor_(UGameplayTagsManager *this,uint param_1)

{
  ~UGameplayTagsManager(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acf9d0

void * __thiscall
UGameplayTagsSettings::_scalar_deleting_destructor_(UGameplayTagsSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGameplayTagsSettings__6B_;
  DestructItems<FRestrictedConfigInfo,int>
            ((FRestrictedConfigInfo *)(this->RestrictedConfigFiles).AllocatorInstance.Data,
             (this->RestrictedConfigFiles).ArrayNum);
  pFVar1 = (this->RestrictedConfigFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CommonlyReplicatedTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->GameplayTagTableList).AllocatorInstance.Data,
             (this->GameplayTagTableList).ArrayNum);
  pFVar1 = (this->GameplayTagTableList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGameplayTagCategoryRemap,int>
            ((FGameplayTagCategoryRemap *)(this->CategoryRemapping).AllocatorInstance.Data,
             (this->CategoryRemapping).ArrayNum);
  pFVar1 = (this->CategoryRemapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InvalidTagCharacters).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGameplayTagsList__6B_;
  DestructItems<FGameplayTagTableRow,int>
            ((FGameplayTagTableRow *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146acfaf0

void * __thiscall
URestrictedGameplayTagsList::_scalar_deleting_destructor_
          (URestrictedGameplayTagsList *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URestrictedGameplayTagsList__6B_;
  DestructItems<FRestrictedGameplayTagTableRow,int>
            ((FRestrictedGameplayTagTableRow *)
             (this->RestrictedGameplayTagList).AllocatorInstance.Data,
             (this->RestrictedGameplayTagList).ArrayNum);
  pFVar1 = (this->RestrictedGameplayTagList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfigFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// CreateNetfieldExportGroupForNetworkGameplayTags @ 146ad56c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<FNetFieldExportGroup,1> * __cdecl
CreateNetfieldExportGroupForNetworkGameplayTags
          (TSharedPtr<FNetFieldExportGroup,1> *__return_storage_ptr__,UGameplayTagsManager *param_1,
          wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNetFieldExportGroup *pFVar6;
  FNetFieldExportGroup *pFVar7;
  TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedPtr<FNetFieldExportGroup,1> *pTVar9;
  FGameplayTag *pFVar10;
  int iVar11;
  FNetFieldExportGroup *pFVar12;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this;
  uint uVar13;
  FNetFieldExportGroup *pFVar14;
  longlong local_res8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_68;
  uint local_58;
  undefined4 local_54;
  FName local_50;
  undefined4 local_48;
  
  pFVar6 = operator_new(0x30);
  pFVar14 = (FNetFieldExportGroup *)0x0;
  pFVar12 = pFVar14;
  if (pFVar6 != (FNetFieldExportGroup *)0x0) {
    (pFVar6->PathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->PathName).Data.ArrayNum = 0;
    (pFVar6->PathName).Data.ArrayMax = 0;
    pFVar6->PathNameIndex = 0;
    (pFVar6->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->NetFieldExports).ArrayNum = 0;
    (pFVar6->NetFieldExports).ArrayMax = 0;
    pFVar6->bDirtyForReplay = true;
    pFVar12 = pFVar6;
  }
  __return_storage_ptr__->Object = pFVar12;
  pFVar7 = operator_new(0x18);
  pFVar6 = pFVar14;
  if (pFVar7 != (FNetFieldExportGroup *)0x0) {
    (pFVar7->PathName).Data.ArrayNum = 1;
    (pFVar7->PathName).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         &
         ___7__TReferenceControllerWithDeleter_VFNetFieldExportGroup__U__DefaultDeleter_VFNetFieldExportGroup___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (pFVar7->PathName).Data.ArrayMax = 1;
    *(FNetFieldExportGroup **)&pFVar7->PathNameIndex = pFVar12;
    pFVar6 = pFVar7;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  pTVar8 = UGameplayTagsManager::GetNetworkGameplayTagNodeIndex(param_1);
  if ((__return_storage_ptr__->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar3)();
    return pTVar9;
  }
  FString::operator=(&__return_storage_ptr__->Object->PathName,param_2);
  if ((__return_storage_ptr__->Object == (FNetFieldExportGroup *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar3)();
    return pTVar9;
  }
  TArray<FNetFieldExport,TSizedDefaultAllocator<32>_>::SetNum
            (&__return_storage_ptr__->Object->NetFieldExports,pTVar8->ArrayNum,Default);
  iVar11 = pTVar8->ArrayNum;
  if (0 < iVar11) {
    local_res8 = 0;
    pFVar12 = pFVar14;
    do {
      uVar13 = (uint)pFVar14;
      uVar5 = 0;
      if ((int)uVar13 < iVar11) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar3)();
        return pTVar9;
      }
      pFVar1 = (pTVar8->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + (longlong)&(pFVar12->PathName).Data) == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar3)();
        return pTVar9;
      }
      lVar2 = *(longlong *)(pFVar1 + (longlong)&(pFVar12->PathName).Data);
      if (*(int *)(lVar2 + 0x10) < 1) {
        pFVar10 = &FGameplayTag::EmptyTag;
      }
      else {
        pFVar10 = *(FGameplayTag **)(lVar2 + 8);
      }
      local_50 = pFVar10->TagName;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      local_54 = 0;
      local_48 = 0x100;
      local_58 = uVar13;
      if ((__return_storage_ptr__->Object == (FNetFieldExportGroup *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar3)();
        return pTVar9;
      }
      pFVar6 = __return_storage_ptr__->Object;
      uVar5 = 0;
      if ((int)uVar13 < (pFVar6->NetFieldExports).ArrayNum) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FNetFieldExportGroup,1> *)(*pcVar3)();
        return pTVar9;
      }
      this = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             ((pFVar6->NetFieldExports).AllocatorInstance.Data + local_res8);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(this,&local_68);
      *(uint *)&this[1].AllocatorInstance.Data = local_58;
      *(undefined4 *)((longlong)&this[1].AllocatorInstance.Data + 4) = local_54;
      this[1].ArrayNum = local_50.ComparisonIndex.Value;
      this[1].ArrayMax = local_50.Number;
      *(undefined1 *)&this[2].AllocatorInstance.Data = (undefined1)local_48;
      *(undefined1 *)((longlong)&this[2].AllocatorInstance.Data + 1) = local_48._1_1_;
      *(undefined1 *)((longlong)&this[2].AllocatorInstance.Data + 2) = local_48._2_1_;
      *(undefined1 *)((longlong)&this[2].AllocatorInstance.Data + 3) = local_48._3_1_;
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      local_res8 = local_res8 + 0x28;
      pFVar14 = (FNetFieldExportGroup *)(ulonglong)(uVar13 + 1);
      pFVar12 = (FNetFieldExportGroup *)&pFVar12->PathNameIndex;
      iVar11 = pTVar8->ArrayNum;
    } while ((int)(uVar13 + 1) < iVar11);
  }
  return __return_storage_ptr__;
}

// DumpRegisteredSearchPaths @ 146ad69f0

/* WARNING: Removing unreachable block (ram,0x000146ad6ff6) */
/* WARNING: Removing unreachable block (ram,0x000146ad6ce7) */
/* WARNING: Removing unreachable block (ram,0x000146ad6e6b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
GameplayTagUtil::DumpRegisteredSearchPaths
          (TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
           *param_1,FString *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  FIdentityFunctor local_res8 [8];
  FString *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60 [2];
  
  puVar1 = &param_1->field_0x10;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  iStack_c0 = 0;
  iVar7 = *(int *)&param_1->field_0x28;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = iStack_c0;
  if (iVar7 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_146ad6aa0;
      uVar17 = puVar19[lVar11 + 1];
    }
    uStack_bc = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_res20;
    if (iVar7 < iStack_ac) {
      iStack_ac = iVar7;
    }
  }
LAB_146ad6aa0:
  uVar17 = *(uint *)&param_1->field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_a0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_88.CurrentBitIndex = iStack_ac;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_88._28_4_ = iStack_ac;
  TStack_88.BaseBitIndex = local_a8;
  uStack_68 = CONCAT44(uStack_9c,iStack_a0);
  local_res10 = param_2;
  local_c8 = param_1;
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_90 = param_1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar7 < (int)uVar17)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar15 = *(uint *)&param_1->field_0x28;
  if (uVar17 != uVar15) {
    puVar18 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_146ad6ba0;
      uVar17 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_98 = (int)lVar11;
    uVar17 = local_98 + -1 + uVar16;
    if ((int)uVar15 < (int)uVar17) {
      uVar17 = uVar15;
    }
  }
LAB_146ad6ba0:
  do {
    pTVar4 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FGameplayTagSearchPathInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar17) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == param_1))
    {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum,local_res8[0],
                 (TLess<void> *)local_res18);
      pFVar9 = FPaths::ProjectSavedDir();
      ::operator/(&local_d8,pFVar9,local_res10);
      pIVar10 = IFileManager::Get();
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar13.Data = local_d8.Data.AllocatorInstance.Data;
      }
      bVar6 = FFileHelper::SaveStringArrayToFile
                        (&local_118,(wchar_t *)FVar13.Data,ForceUTF8WithoutBOM,pIVar10,0);
      if ((!bVar6) && (3 < (byte)LogGameplayTags._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      return;
    }
    lVar11 = (longlong)TStack_88.CurrentBitIndex * 0x40 + *(longlong *)pTVar4;
    ::FString::PrintfImpl(&local_108,L"%s bWasSearched:%d bWasAddedToTree:%d");
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = local_118.ArrayNum;
    if (local_118.ArrayNum == local_118.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    uVar15 = 0;
    local_118.ArrayNum = iVar7 + 1;
    pFVar12 = local_118.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_108.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_108.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_108.Data.ArrayMax;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar16 = uVar15;
    if (0 < *(int *)(lVar11 + 0x18)) {
      do {
        uVar8 = 0;
        if ((int)uVar16 < *(int *)(lVar11 + 0x18)) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FName::ToString((FName *)(*(longlong *)(lVar11 + 0x10) + (longlong)(int)uVar16 * 8),
                          local_60);
        ::FString::PrintfImpl(&local_f8,L"%s SourcesInPath[%d]: %s");
        if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 <
             local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_118.ArrayNum;
        if (local_118.ArrayNum == local_118.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        local_118.ArrayNum = iVar7 + 1;
        pFVar12 = local_118.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_f8.Data.AllocatorInstance.Data;
        *(int *)(pFVar12 + 8) = local_f8.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_f8.Data.ArrayMax;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(lVar11 + 0x18));
    }
    iVar7 = *(int *)(lVar11 + 0x28);
    FVar13.Data = local_e8.Data.AllocatorInstance.Data;
    uVar5 = local_e8.Data._8_8_;
    if (0 < iVar7) {
      do {
        local_e8.Data._8_8_ = uVar5;
        local_e8.Data.AllocatorInstance.Data = FVar13.Data;
        uVar16 = 0;
        if ((int)uVar15 < iVar7) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::PrintfImpl(&local_e8,L"%s TagIniList[%d]: %s");
        if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 <
             local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_118.ArrayNum;
        if (local_118.ArrayNum == local_118.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_118.AllocatorInstance,&local_118.ArrayMax);
        }
        local_118.ArrayNum = iVar7 + 1;
        pFVar12 = local_118.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_e8.Data.AllocatorInstance.Data;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar13.Data = local_e8.Data.AllocatorInstance.Data;
        *(int *)(pFVar12 + 8) = local_e8.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_e8.Data.ArrayMax;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        uVar5 = local_e8.Data._8_8_;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar7 = *(int *)(lVar11 + 0x28);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < iVar7);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  } while( true );
}

// DumpRestrictedGameplayTagSourceNames @ 146ad70f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
GameplayTagUtil::DumpRestrictedGameplayTagSourceNames
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,FString *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  FIdentityFunctor local_res8 [8];
  FString *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  FName local_90;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  
  puVar1 = &(param_1->Elements).field_0x10;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  iStack_c0 = 0;
  iVar7 = *(int *)&(param_1->Elements).field_0x28;
  uStack_bc = 1;
  iStack_ac = 0;
  local_a8 = iStack_c0;
  if (iVar7 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_146ad719d;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_bc = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_res20;
    if (iVar7 < iStack_ac) {
      iStack_ac = iVar7;
    }
  }
LAB_146ad719d:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_a0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_80.CurrentBitIndex = iStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_80._28_4_ = iStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  local_res10 = param_2;
  local_c8 = param_1;
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_88 = param_1;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar7 < (int)uVar16)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar3) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146ad72a0;
      uVar16 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_98 = (int)lVar11;
    uVar16 = local_98 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_146ad72a0:
  while( true ) {
    pTVar5 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    local_90 = *(FName *)(*(longlong *)&pTVar5->Elements +
                         (longlong)TStack_80.CurrentBitIndex * 0x10);
    pFVar8 = (FScriptContainerElement *)::FName::ToString(&local_90,&local_58);
    if (((local_e8.AllocatorInstance.Data <= pFVar8) &&
        (pFVar8 < local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x10)) &&
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
    iVar7 = local_e8.ArrayNum;
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_e8.ArrayNum = iVar7 + 1;
    pFVar12 = local_e8.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)pFVar12 = *(undefined8 *)pFVar8;
    *(undefined8 *)pFVar8 = 0;
    *(int *)(pFVar12 + 8) = *(int *)(pFVar8 + 8);
    *(int *)(pFVar12 + 0xc) = *(int *)(pFVar8 + 0xc);
    *(undefined8 *)(pFVar8 + 8) = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum,local_res8[0],
             (TLess<void> *)local_res18);
  pFVar9 = FPaths::ProjectSavedDir();
  ::operator/(&local_d8,pFVar9,local_res10);
  pIVar10 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar13.Data = local_d8.Data.AllocatorInstance.Data;
  }
  bVar6 = FFileHelper::SaveStringArrayToFile
                    (&local_e8,(wchar_t *)FVar13.Data,ForceUTF8WithoutBOM,pIVar10,0);
  if ((!bVar6) && (3 < (byte)LogGameplayTags._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintGameplayTagLibrary @ 146ad78b0

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintGameplayTagLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagAssetInterface @ 146ad78c0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagAssetInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagContainer @ 146ad78d0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagContainerNetSerializer @ 146ad78e0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagContainerNetSerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagNetSerializer @ 146ad78f0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagNetSerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagRedirectors @ 146ad7900

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagRedirectors(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagsManager @ 146ad7910

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagsManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagsSettings @ 146ad7920

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagsSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTags_init @ 146ad7930

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTags_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInternalGameplayTagContainerNetSerializer @ 146ad7940

void __cdecl EmptyLinkFunctionForGeneratedCodeInternalGameplayTagContainerNetSerializer(void)

{
  return;
}

// GameplayTagPrintReplicationIndices @ 146adad40

void __cdecl GameplayTagPrintReplicationIndices(void)

{
  UGameplayTagsManager *this;
  
  this = UGameplayTagsManager::Get();
  UGameplayTagsManager::PrintReplicationIndices(this);
  return;
}

// GameplayTagPrintReplicationMap @ 146adad60

void __cdecl GameplayTagPrintReplicationMap(void)

{
  UGameplayTagsManager *this;
  
  this = UGameplayTagsManager::Get();
  UGameplayTagsManager::PrintReplicationFrequencyReport(this);
  return;
}

// GatherGameplayTagStringsRecursive @ 146add530

/* WARNING: Removing unreachable block (ram,0x000146add62e) */

void __cdecl
GameplayTagUtil::GatherGameplayTagStringsRecursive
          (FGameplayTagNode *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGameplayTag *this;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  if ((param_1->CompleteTagWithParents).GameplayTags.ArrayNum < 1) {
    this = &FGameplayTag::EmptyTag;
  }
  else {
    this = (FGameplayTag *)(param_1->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
  }
  ::FName::ToString(&this->TagName,&local_28);
  pFVar4 = (param_2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ChildTags).ArrayNum;
  pFVar4 = (param_1->ChildTags).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((param_1->ChildTags).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FGameplayTagNode,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((*(longlong *)pFVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    GatherGameplayTagStringsRecursive(*(FGameplayTagNode **)pFVar4,param_2);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// GetRestrictedConfigsFromIni @ 146ae0160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
GameplayTagUtil::GetRestrictedConfigsFromIni
          (FString *param_1,TArray<FRestrictedConfigInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UScriptStruct *this;
  void *_Src;
  FString *pFVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  UPackage *pUVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  void *local_180;
  undefined8 local_178;
  FString *local_170;
  undefined8 local_168;
  uint local_160;
  FName local_15c;
  FString local_150;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  FConfigFile::FConfigFile(&local_138);
  FConfigFile::Read(&local_138,param_1);
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  iVar5 = FConfigFile::GetArray
                    (&local_138,L"/Script/GameplayTags.GameplayTagsSettings",
                     L"RestrictedConfigFiles",&local_190);
  if (iVar5 != 0) {
    uVar6 = (ulonglong)local_190.ArrayNum;
    pFVar12 = local_190.AllocatorInstance.Data + uVar6 * 0x10;
    local_160 = local_190.ArrayNum;
    FVar11.Data = local_190.AllocatorInstance.Data;
    while( true ) {
      if (local_190.ArrayNum != (int)uVar6) {
        local_198[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_198);
      }
      if (FVar11.Data == pFVar12) break;
      local_180 = (void *)0x0;
      local_178 = 0;
      local_170 = (FString *)0x0;
      local_168 = 0;
      if (Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_GameplayTags();
        Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedConfigInfo,(UObject *)pUVar7,
                             L"RestrictedConfigInfo");
      }
      this = Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_GameplayTags();
        Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedConfigInfo,(UObject *)pUVar7,
                             L"RestrictedConfigInfo");
      }
      local_15c = (FName)(Z_Registration_Info_UScriptStruct_FRestrictedConfigInfo.OuterSingleton)->
                         _padding_;
      ::FName::ToString(&local_15c,&local_150);
      if (*(int *)(FVar11.Data + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)FVar11.Data;
      }
      pwVar8 = UScriptStruct::ImportText
                         (this,pwVar8,&local_180,(UObject *)0x0,0,(FOutputDevice *)0x0,&local_150,
                          true);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (pwVar8 != (wchar_t *)0x0) {
        pFVar9 = (param_2->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 < pFVar9 + (longlong)param_2->ArrayMax * 0x20))
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
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        _Src = local_180;
        pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
        param_2->ArrayNum = iVar5 + 1;
        *(undefined8 *)&pFVar9->field_0x0 = 0;
        lVar10 = (longlong)(int)local_178;
        *(int *)&pFVar9[8].field_0x0 = (int)local_178;
        if ((int)local_178 == 0) {
          *(int *)(pFVar9 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_178,0,(ForAnyElementType *)pFVar9,(int)local_178,
                     (int *)(pFVar9 + 0xc));
          memcpy(*(void **)&pFVar9->field_0x0,_Src,lVar10 * 2);
        }
        pFVar3 = local_170;
        pFVar1 = pFVar9 + 0x10;
        *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
        iVar5 = (int)local_168;
        *(int *)&pFVar9[0x18].field_0x0 = (int)local_168;
        if ((int)local_168 == 0) {
          *(int *)(pFVar9 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_168,0,(ForAnyElementType *)pFVar1,(int)local_168,
                     (int *)(pFVar9 + 0x1c));
          ConstructItems<FString,FString,int>
                    (*(FScriptContainerElement **)&pFVar1->field_0x0,pFVar3,iVar5);
        }
      }
      DestructItems<FString,int>(local_170,(int)local_168);
      if (local_170 != (FString *)0x0) {
        FMemory::Free(local_170);
      }
      if (local_180 != (void *)0x0) {
        FMemory::Free(local_180);
      }
      uVar6 = (ulonglong)local_160;
      FVar11.Data = FVar11.Data + 0x10;
    }
  }
  DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_138);
  return;
}

// SerializeTagNetIndexPacked @ 146aed210

void __cdecl SerializeTagNetIndexPacked(FArchive *param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  uint local_res18 [2];
  int local_d8 [4];
  undefined4 local_c8;
  uint local_c4 [19];
  uint local_78 [20];
  
  lVar3 = (longlong)param_3;
  if ((param_3 < 1) || (param_4 <= param_3)) {
    if ((param_1->field_0x28 & 1) != 0) {
      *param_2 = 0;
    }
    (**(code **)(*(longlong *)param_1 + 400))(param_1,param_2,(longlong)param_4);
  }
  else {
    local_78[0] = 0;
    local_78[1] = 1;
    local_78[2] = 3;
    local_78[3] = 7;
    local_78[4] = 0xf;
    local_78[5] = 0x1f;
    local_78[6] = 0x3f;
    local_78[7] = 0x7f;
    local_78[8] = 0xff;
    local_78[9] = 0x1ff;
    local_78[10] = 0x3ff;
    local_78[0xb] = 0x7ff;
    local_78[0xc] = 0xfff;
    local_78[0xd] = 0x1fff;
    local_78[0xe] = 0x3fff;
    local_78[0xf] = 0x7fff;
    local_78[0x10] = 0xffff;
    local_c8 = 0;
    local_c4[0] = 1;
    local_c4[1] = 2;
    local_c4[2] = 4;
    local_c4[3] = 8;
    local_c4[4] = 0x10;
    local_c4[5] = 0x20;
    local_c4[6] = 0x40;
    local_c4[7] = 0x80;
    local_c4[8] = 0x100;
    local_c4[9] = 0x200;
    local_c4[10] = 0x400;
    local_c4[0xb] = 0x800;
    local_c4[0xc] = 0x1000;
    local_c4[0xd] = 0x2000;
    local_c4[0xe] = 0x4000;
    local_c4[0xf] = 0x8000;
    bVar2 = (byte)param_3;
    if ((param_1->field_0x28 & 4) == 0) {
      local_res18[0] = 0;
      (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res18,lVar3 + 1);
      if ((local_c4[lVar3] & local_res18[0]) == 0) {
        uVar1 = IntCastChecked<unsigned_short,unsigned_int>(local_res18[0]);
        *param_2 = uVar1;
      }
      else {
        local_d8[0] = 0;
        (**(code **)(*(longlong *)param_1 + 400))(param_1,local_d8,(longlong)(param_4 - param_3));
        uVar1 = IntCastChecked<unsigned_short,unsigned_int>(local_d8[0] << (bVar2 & 0x1f));
        *param_2 = (ushort)local_78[lVar3] & (ushort)local_res18[0] | uVar1;
      }
    }
    else {
      uVar1 = *param_2;
      local_res18[0] = (uint)uVar1;
      if (local_78[lVar3] < (uint)uVar1) {
        local_res18[0] =
             (uint)(uVar1 >> (bVar2 & 0x1f)) << (bVar2 + 1 & 0x1f) | local_c4[lVar3] |
             local_res18[0] & local_78[lVar3];
        lVar3 = (longlong)(param_4 + 1);
      }
      else {
        lVar3 = lVar3 + 1;
      }
      (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res18,lVar3);
    }
  }
  return;
}

// TagPackingTest @ 146aedbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TagPackingTest(void)

{
  code *pcVar1;
  float _X;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ushort local_res8 [4];
  ushort local_res10 [4];
  FNetBitWriter local_1d8;
  FNetBitReader local_108;
  
  _X = __real_40000000;
  iVar6 = 1;
  do {
    iVar7 = 0;
    fVar8 = powf(_X,(float)iVar6);
    do {
      uVar5 = 0;
      if (0.0 < fVar8) {
        do {
          if ((uVar5 != (uVar5 & 0xffff)) || ((int)uVar5 < 0)) {
            bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          local_res8[0] = (ushort)uVar5;
          FNetBitWriter::FNetBitWriter(&local_1d8,(UPackageMap *)0x0,0x2000);
          SerializeTagNetIndexPacked((FArchive *)&local_1d8,local_res8,iVar7,iVar6);
          lVar2 = local_1d8._padding_;
          if ((local_1d8._padding_._1_1_ & 2) != 0) {
            bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("!IsError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                               ,0x49,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          FNetBitReader::FNetBitReader
                    (&local_108,(UPackageMap *)0x0,(uchar *)local_1d8._padding_,lVar2);
          SerializeTagNetIndexPacked((FArchive *)&local_108,local_res10,iVar7,iVar6);
          if (local_res10[0] == local_res8[0]) {
            bVar3 = true;
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7958607028354545200>,true,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                               ,0x9d0,"(NewIndex == NI)");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            bVar3 = false;
          }
          FNetBitReader::~FNetBitReader(&local_108);
          FBitWriter::~FBitWriter((FBitWriter *)&local_1d8);
          uVar4 = uVar5 - 1;
          if (bVar3) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 + 1;
        } while ((float)(int)uVar5 < fVar8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x11);
  if (2 < (byte)LogGameplayTags._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  return;
}

// Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister @ 146af05e0

UClass * __cdecl Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"BlueprintGameplayTagLibrary",
               &Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton,
               UBlueprintGameplayTagLibrary::StaticRegisterNativesUBlueprintGameplayTagLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintGameplayTagLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintGameplayTagLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister @ 146af06a0

UClass * __cdecl
Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllExprMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_AllExprMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AllExprMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllExprMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_NoRegister @ 146af0760

UClass * __cdecl
Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllTagsExactMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_AllTagsExactMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsExactMatch,0x48,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsExactMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsExactMatch>
               ,local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch.
         InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister @ 146af0820

UClass * __cdecl
Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllTagsMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_AllTagsMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch,0x48,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AllTagsMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AllTagsMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister @ 146af08e0

UClass * __cdecl
Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AnyExprMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_AnyExprMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AnyExprMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyExprMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_NoRegister @ 146af09a0

UClass * __cdecl
Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AnyTagsExactMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_AnyTagsExactMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsExactMatch,0x48,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AnyTagsExactMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyTagsExactMatch>
               ,local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch.
         InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister @ 146af0a60

UClass * __cdecl
Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AnyTagsMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_AnyTagsMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch,0x48,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_AnyTagsMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_AnyTagsMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister @ 146af0b20

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoExprMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_NoExprMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_NoExprMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoExprMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister @ 146af0be0

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoTagsMatch",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.
                InnerSingleton,
               UEditableGameplayTagQueryExpression_NoTagsMatch::
               StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch,0x48,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression_NoTagsMatch>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression_NoTagsMatch>,
               local_res8,UEditableGameplayTagQueryExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.InnerSingleton;
}

// Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister @ 146af0ca0

UClass * __cdecl Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQuery",
               &Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton,
               UEditableGameplayTagQuery::StaticRegisterNativesUEditableGameplayTagQuery,0x98,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQuery>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQuery>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQuery.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister @ 146af0d50

UClass * __cdecl Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsDeveloperSettings",
               &Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton,
               UGameplayTagsDeveloperSettings::StaticRegisterNativesUGameplayTagsDeveloperSettings,
               0x50,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGameplayTagsDeveloperSettings>,
               InternalVTableHelperCtorCaller<UGameplayTagsDeveloperSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTagsManager_NoRegister @ 146af0e10

UClass * __cdecl Z_Construct_UClass_UGameplayTagsManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsManager",
               &Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton,
               UGameplayTagsManager::StaticRegisterNativesUGameplayTagsManager,0x390,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGameplayTagsManager>,
               InternalVTableHelperCtorCaller<UGameplayTagsManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsManager.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTagsSettings_NoRegister @ 146af0ec0

UClass * __cdecl Z_Construct_UClass_UGameplayTagsSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsSettings",
               &Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton,
               UGameplayTagsSettings::StaticRegisterNativesUGameplayTagsSettings,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"GameplayTags",
               InternalConstructor<UGameplayTagsSettings>,
               InternalVTableHelperCtorCaller<UGameplayTagsSettings>,local_res8,
               UGameplayTagsList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsSettings.InnerSingleton;
}

// Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType @ 146af0f80

UEnum * __cdecl Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType(void)

{
  if (Z_Registration_Info_UEnum_EGameplayContainerMatchType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayContainerMatchType.InnerSingleton,
               &Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGameplayContainerMatchType.InnerSingleton;
}

// Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType @ 146af0fc0

UEnum * __cdecl Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType(void)

{
  if (Z_Registration_Info_UEnum_EGameplayTagQueryExprType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayTagQueryExprType.InnerSingleton,
               &Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGameplayTagQueryExprType.InnerSingleton;
}

// Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType @ 146af1000

UEnum * __cdecl Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType(void)

{
  if (Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton,
               &Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig @ 146af1040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerConfig.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerConfig.InnerSingleton
    ;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper @ 146af10c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
           InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper @ 146af1140

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagCreationWidgetHelper.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagCreationWidgetHelper.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagCreationWidgetHelper.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagCreationWidgetHelper.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig @ 146af11c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagNetSerializerConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagNetSerializerConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagNetSerializerConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagNetSerializerConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FGameplayTagNode @ 146af1240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayTagNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagNode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayTagNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayTagNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayTagNode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayTagNode.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_GameplayTags @ 146af4b80

void __cdecl IMPLEMENT_MODULE_GameplayTags(void)

{
  return;
}

// DefaultConfig'' @ 1503ddc20

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagContainerNetSerializer::DefaultConfig__(void)

{
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FGameplayTagContainerNetSerializer::DefaultConfig);
  return;
}

// DefaultConfig'' @ 1503ddc40

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagNetSerializer::DefaultConfig__(void)

{
  FNetSerializerConfig::~FNetSerializerConfig
            ((FNetSerializerConfig *)&UE::Net::FGameplayTagNetSerializer::DefaultConfig);
  return;
}

// EmptyContainer'' @ 1503ddc60

void __cdecl `dynamic_atexit_destructor_for_'FGameplayTagContainer::EmptyContainer__(void)

{
  if (FGameplayTagContainer::EmptyContainer.ParentTags.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGameplayTagContainer::EmptyContainer.ParentTags.AllocatorInstance.Data);
  }
  if (FGameplayTagContainer::EmptyContainer.GameplayTags.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGameplayTagContainer::EmptyContainer.GameplayTags.AllocatorInstance.Data);
    return;
  }
  return;
}

// EmptyQuery'' @ 1503ddca0

void __cdecl `dynamic_atexit_destructor_for_'FGameplayTagQuery::EmptyQuery__(void)

{
  if (FGameplayTagQuery::EmptyQuery.AutoDescription.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGameplayTagQuery::EmptyQuery.AutoDescription.Data.AllocatorInstance.Data);
  }
  if (FGameplayTagQuery::EmptyQuery.UserDescription.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGameplayTagQuery::EmptyQuery.UserDescription.Data.AllocatorInstance.Data);
  }
  if (FGameplayTagQuery::EmptyQuery.QueryTokenStream.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGameplayTagQuery::EmptyQuery.QueryTokenStream.AllocatorInstance.Data);
  }
  if (FGameplayTagQuery::EmptyQuery.TagDictionary.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FGameplayTagQuery::EmptyQuery.TagDictionary.AllocatorInstance.Data);
    return;
  }
  return;
}

// NetSerializerRegistryDelegates'' @ 1503ddd00

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagContainerNetSerializer::
NetSerializerRegistryDelegates__(void)

{
  UE::Net::FGameplayTagContainerNetSerializer::NetSerializerRegistryDelegates._0_8_ =
       &___7FNetSerializerRegistryDelegates_FGameplayTagContainerNetSerializer_Net_UE__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FGameplayTagContainerNetSerializer::NetSerializerRegistryDelegates);
  return;
}

// NetSerializerRegistryDelegates'' @ 1503ddd20

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagNetSerializer::NetSerializerRegistryDelegates__
          (void)

{
  UE::Net::FGameplayTagNetSerializer::NetSerializerRegistryDelegates._0_8_ =
       &___7FNetSerializerRegistryDelegates_FGameplayTagNetSerializer_Net_UE__6B_;
  UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)
             &UE::Net::FGameplayTagNetSerializer::NetSerializerRegistryDelegates);
  return;
}

// OnGameplayTagTreeChanged'' @ 1503ddd40

void __cdecl `dynamic_atexit_destructor_for_'IGameplayTagsModule::OnGameplayTagTreeChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IGameplayTagsModule::OnGameplayTagTreeChanged._8_8_,
             IGameplayTagsModule::OnGameplayTagTreeChanged._16_4_);
  if (IGameplayTagsModule::OnGameplayTagTreeChanged._8_8_ != 0) {
    FMemory::Free((void *)IGameplayTagsModule::OnGameplayTagTreeChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IGameplayTagsModule::OnGameplayTagTreeChanged);
  return;
}

// OnTagSettingsChanged'' @ 1503ddd80

void __cdecl `dynamic_atexit_destructor_for_'IGameplayTagsModule::OnTagSettingsChanged__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IGameplayTagsModule::OnTagSettingsChanged._8_8_,
             IGameplayTagsModule::OnTagSettingsChanged._16_4_);
  if (IGameplayTagsModule::OnTagSettingsChanged._8_8_ != 0) {
    FMemory::Free((void *)IGameplayTagsModule::OnTagSettingsChanged._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IGameplayTagsModule::OnTagSettingsChanged);
  return;
}

// StructNetSerializerConfig'' @ 1503dddc0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FGameplayTagContainerNetSerializer::
StructNetSerializerConfig__(void)

{
  FStructNetSerializerConfig::~FStructNetSerializerConfig
            (&UE::Net::FGameplayTagContainerNetSerializer::StructNetSerializerConfig);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayTagDetailedStats'' @ 1503ddde0

void __cdecl _dynamic_atexit_destructor_for__CVarGameplayTagDetailedStats__(void)

{
  CVarGameplayTagDetailedStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayTagDetailedStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayTagPrintReportOnShutdown'' @ 1503dde00

void __cdecl _dynamic_atexit_destructor_for__CVarGameplayTagPrintReportOnShutdown__(void)

{
  CVarGameplayTagPrintReportOnShutdown._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayTagPrintReportOnShutdown);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOldReplaysUseGameplayTagFastReplication'' @ 1503dde20

void __cdecl _dynamic_atexit_destructor_for__CVarOldReplaysUseGameplayTagFastReplication__(void)

{
  CVarOldReplaysUseGameplayTagFastReplication._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarOldReplaysUseGameplayTagFastReplication);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrintNetIndiceAssignment'' @ 1503dde40

void __cdecl _dynamic_atexit_destructor_for__CVarPrintNetIndiceAssignment__(void)

{
  CVarPrintNetIndiceAssignment._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrintNetIndiceAssignment);
  return;
}

// `dynamic_atexit_destructor_for_'ContextString'' @ 1503dde60

void __cdecl
`UGameplayTagsManager::PopulateTreeFromDataTable'::__l2::
_dynamic_atexit_destructor_for__ContextString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ContextString.Data.AllocatorInstance.Data;
  if (ContextString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ContextString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Delegate'' @ 1503dde80

void __cdecl
`UGameplayTagsManager::OnDoneAddingNativeTagsDelegate'::__l2::
_dynamic_atexit_destructor_for__Delegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)::Delegate._8_8_,
             ::Delegate._16_4_);
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 1503ddec0

void __cdecl
`UGameplayTagsManager::OnLastChanceToAddNativeTags'::__l2::
_dynamic_atexit_destructor_for__Delegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)::Delegate._8_8_,
             ::Delegate._16_4_);
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'FGameplayTagQueryTest_EmptyAutomationTestInstance'' @ 1503ddf00

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FGameplayTagQueryTest_EmptyAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FGameplayTagQueryTest_EmptyAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FGameplayTagTestAutomationTestInstance'' @ 1503ddf20

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FGameplayTagTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FGameplayTagTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance'' @ 1503ddf40

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance__
          (void)

{
  if (FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance.PrettyNameDotNotation.Data.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance.
                  PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FSystem__GameplayTags__Manager__IsValidGameplayTagStringInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GameplayTagPrintReplicationIndicesCmd'' @ 1503ddf70

void __cdecl _dynamic_atexit_destructor_for__GameplayTagPrintReplicationIndicesCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GameplayTagPrintReplicationIndicesCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GameplayTagPrintReplicationMapCmd'' @ 1503ddf90

void __cdecl _dynamic_atexit_destructor_for__GameplayTagPrintReplicationMapCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GameplayTagPrintReplicationMapCmd);
  return;
}

// `dynamic_atexit_destructor_for_'LogGameplayTags'' @ 1503ddfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGameplayTags__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGameplayTags);
  return;
}

// `dynamic_atexit_destructor_for_'MissingRedirectedTagNames'' @ 1503ddfd0

void __cdecl
`UGameplayTagsManager::RequestGameplayTag'::__l11::
_dynamic_atexit_destructor_for__MissingRedirectedTagNames__(void)

{
  MissingRedirectedTagNames.HashSize = 0;
  if (MissingRedirectedTagNames.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)MissingRedirectedTagNames.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&MissingRedirectedTagNames.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'MissingTagName'' @ 1503de010

void __cdecl
`UGameplayTagsManager::RequestGameplayTag'::__l20::_dynamic_atexit_destructor_for__MissingTagName__
          (void)

{
  MissingTagName.HashSize = 0;
  if (MissingTagName.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)MissingTagName.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&MissingTagName.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'PrintReplicationFrequencyReportCommand'' @ 1503de050

void __cdecl _dynamic_atexit_destructor_for__PrintReplicationFrequencyReportCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&PrintReplicationFrequencyReportCommand);
  return;
}

// `dynamic_atexit_destructor_for_'PrintReplicationIndicesCommand'' @ 1503de070

void __cdecl _dynamic_atexit_destructor_for__PrintReplicationIndicesCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&PrintReplicationIndicesCommand);
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredNativeTags'' @ 1503de090

void __cdecl
`FNativeGameplayTag::GetRegisteredNativeTags'::__l2::
_dynamic_atexit_destructor_for__RegisteredNativeTags__(void)

{
  RegisteredNativeTags.HashSize = 0;
  if (RegisteredNativeTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)RegisteredNativeTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FNativeGameplayTag_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNativeGameplayTag_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&RegisteredNativeTags.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503de0d0

void __cdecl `FGameplayTagRedirectors::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ::Singleton.TagRedirects._72_4_ = 0;
  if (::Singleton.TagRedirects._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.TagRedirects._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGameplayTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'TagPackingTestCmd'' @ 1503de110

void __cdecl _dynamic_atexit_destructor_for__TagPackingTestCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&TagPackingTestCmd);
  return;
}

// operator() @ 1504f8530

bool __thiscall `VerifyModuleCanContainGameplayTag'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2030477099495587881>);
  if (bVar4) {
    EHostType::ToString(*(Type *)(**(longlong **)((longlong)this + 0x10) + 8));
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_28);
    ::FName::ToString(*(FName **)this,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2030477099495587881>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f85f4;
    }
  }
  bVar4 = false;
LAB_1504f85f4:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

