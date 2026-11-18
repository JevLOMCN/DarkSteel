// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 126

// DefaultName'' @ 140f8fca0

void __cdecl `dynamic_initializer_for_'UE::IoStore::FOnDemandHostGroup::DefaultName__(void)

{
  ::FName::FName(&UE::IoStore::FOnDemandHostGroup::DefaultName,"Default");
  return;
}

// FeatureName'' @ 140f8fcc0

void __cdecl `dynamic_initializer_for_'UE::IoStore::IOnDemandIoStoreFactory::FeatureName__(void)

{
  ::FName::FName(&UE::IoStore::IOnDemandIoStoreFactory::FeatureName,L"OnDemandIoStoreFactory");
  return;
}

// FileExt'' @ 140f8fce0

void __cdecl `dynamic_initializer_for_'UE::IoStore::FOnDemandToc::FileExt__(void)

{
  ::FString::FString(&UE::IoStore::FOnDemandToc::FileExt,L".uondemandtoc");
  atexit(`dynamic_atexit_destructor_for_'UE::IoStore::FOnDemandToc::FileExt__);
  return;
}

// VersionGuid'' @ 140f8fd10

void __cdecl `dynamic_initializer_for_'UE::IoStore::FOnDemandToc::VersionGuid__(void)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,"C43DD98F353F499D9A0767F6EA0155EB");
  bVar1 = FGuid::Parse(&local_18,&UE::IoStore::FOnDemandToc::VersionGuid);
  if (!bVar1) {
    UE::IoStore::FOnDemandToc::VersionGuid.C = 0;
    UE::IoStore::FOnDemandToc::VersionGuid.D = 0;
    UE::IoStore::FOnDemandToc::VersionGuid.A = 0;
    UE::IoStore::FOnDemandToc::VersionGuid.B = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8fd70

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasError::_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"CasError",L"Cas error");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8fdb0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasJournalError::_dynamic_initializer_for__DeclaredFormatString__
          (void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"CasJournalError",L"Cas journal error");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8fdf0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::
_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"CasSnapshotError",L"Cas snapshot error");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8fe30

void __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkHashError::_dynamic_initializer_for__DeclaredFormatString__
          (void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"ChunkHashError",L"Chunk hash mismatch error"
            );
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8fe70

void __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::
_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"ChunkMissingError",L"Chunk missing error");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8feb0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::HttpError::_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::FromString(&DeclaredFormatString,(uchar *)"{IoStoreOnDemand_FHttpError}");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8fee0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::
_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"InstallCacheDefragError",
             L"Failed to defrag the install cache.");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8ff20

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::
_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"InstallCacheFlushError",
             L"Failed to flush pending data to install cache.");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8ff60

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::
_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"InstallCacheFlushLastAccessError",
             L"Failed to flush last access timestamp(s) to journal.");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8ffa0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::
_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"InstallCachePurgeError",
             L"Failed to purge unreferenced cache block(s) from the install cache.");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DeclaredFormatString'' @ 140f8ffe0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::
_dynamic_initializer_for__DeclaredFormatString__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DeclaredFormatString,L"IoStoreOnDemand",L"InstallCacheVerificationError",
             L"Verification of installed install cache data failed.");
  atexit(_dynamic_atexit_destructor_for__DeclaredFormatString__);
  return;
}

// `dynamic_initializer_for_'DefragCacheCommand'' @ 140f90020

void __cdecl UE::IoStore::Commands::_dynamic_initializer_for__DefragCacheCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = DefragInstallCache;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DefragCacheCommand,L"iostore.DefragInstallCache",L"Defragment On Demand Install Cache"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__DefragCacheCommand__);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f90160

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasError::_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "CasError";
  sVar1 = strlen("CasError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,9);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f901b0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasJournalError::_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "CasJournalError";
  sVar1 = strlen("CasJournalError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,10);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f90200

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "CasSnapshotError";
  sVar1 = strlen("CasSnapshotError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,0xb);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f90250

void __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkHashError::_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "ChunkHashError";
  sVar1 = strlen("ChunkHashError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,3);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f902a0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "ChunkMissingError";
  sVar1 = strlen("ChunkMissingError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,2);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f902f0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::HttpError::_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "HttpError";
  sVar1 = strlen("HttpError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,1);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f90340

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::_dynamic_initializer_for__ErrorCodeId__
          (void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "InstallCacheDefragError";
  sVar1 = strlen("InstallCacheDefragError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,7);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f90390

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::_dynamic_initializer_for__ErrorCodeId__
          (void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "InstallCacheFlushError";
  sVar1 = strlen("InstallCacheFlushError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,4);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f903e0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::
_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "InstallCacheFlushLastAccessError";
  sVar1 = strlen("InstallCacheFlushLastAccessError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,5);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f90430

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::_dynamic_initializer_for__ErrorCodeId__
          (void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "InstallCachePurgeError";
  sVar1 = strlen("InstallCachePurgeError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,6);
  return;
}

// `dynamic_initializer_for_'ErrorCodeId'' @ 140f90480

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::
_dynamic_initializer_for__ErrorCodeId__(void)

{
  size_t sVar1;
  TStringView<char> local_18;
  
  local_18.DataPtr = "InstallCacheVerificationError";
  sVar1 = strlen("InstallCacheVerificationError");
  local_18.Size = (int)sVar1;
  ErrorCodeId = ErrorRegistry::RegisterErrorCode(&local_18,StaticModuleId,8);
  return;
}

// `dynamic_initializer_for_'GHttpIoDispatcher'' @ 140f904d0

void __cdecl UE::_dynamic_initializer_for__GHttpIoDispatcher__(void)

{
  atexit(_dynamic_atexit_destructor_for__GHttpIoDispatcher__);
  return;
}

// `dynamic_initializer_for_'InstallPackageCommand'' @ 140f904f0

void __cdecl UE::IoStore::Commands::_dynamic_initializer_for__InstallPackageCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = InstallPackage;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&InstallPackageCommand,L"iostore.InstallPackage",L"<PackageName>",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__InstallPackageCommand__);
  return;
}

// `dynamic_initializer_for_'LogHttpIoDispatcher'' @ 140f90630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHttpIoDispatcher__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogHttpIoDispatcher,L"LogHttpIoDispatcher",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHttpIoDispatcher__);
  return;
}

// `dynamic_initializer_for_'LogIas'' @ 140f90670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIas__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogIas,L"LogIas",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIas__);
  return;
}

// `dynamic_initializer_for_'LogIoStoreOnDemand'' @ 140f906b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIoStoreOnDemand__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIoStoreOnDemand,L"LogIoStoreOnDemand",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogIoStoreOnDemand__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantIoStoreOnDemandCore'' @ 140f906f0

void __cdecl UE::IoStore::_dynamic_initializer_for__ModuleRegistrantIoStoreOnDemandCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "IoStoreOnDemandCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"IoStoreOnDemandCore",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<UE::IoStore::FIoStoreOnDemandCoreModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'MountFileCommand'' @ 140f90740

void __cdecl UE::IoStore::Commands::_dynamic_initializer_for__MountFileCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = MountFile;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&MountFileCommand,L"iostore.MountFile",
             L"<Filename|Wildcard> <Install|Stream> <HostPath> <MountId>",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__MountFileCommand__);
  return;
}

// `dynamic_initializer_for_'MountUrlCommand'' @ 140f90880

void __cdecl UE::IoStore::Commands::_dynamic_initializer_for__MountUrlCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = MountUrl;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&MountUrlCommand,L"iostore.MountUrl",L"<URL> <Install|Stream> <MountId>",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__MountUrlCommand__);
  return;
}

// `dynamic_initializer_for_'PrintCacheUsageCommand'' @ 140f909c0

void __cdecl UE::IoStore::Commands::_dynamic_initializer_for__PrintCacheUsageCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = PrintCacheUsage;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&PrintCacheUsageCommand,L"iostore.CacheUsage",L"print cache usage",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__PrintCacheUsageCommand__);
  return;
}

// `dynamic_initializer_for_'PurgeCacheCommand'' @ 140f90b00

void __cdecl UE::IoStore::Commands::_dynamic_initializer_for__PurgeCacheCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = PurgeInstallCache;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&PurgeCacheCommand,L"iostore.PurgeInstallCache",L"Purge On Demand Install Cache",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__PurgeCacheCommand__);
  return;
}

// `dynamic_initializer_for_'StaticModuleId'' @ 140f90c40

void __cdecl UE::UnifiedError::IoStoreOnDemand::_dynamic_initializer_for__StaticModuleId__(void)

{
  TStringView<char> local_18;
  
  local_18.Size = 0xf;
  local_18.DataPtr = "IoStoreOnDemand";
  StaticModuleId = ErrorRegistry::RegisterModule(&local_18);
  return;
}

// `dynamic_initializer_for_'VerifyCacheCommand'' @ 140f90c80

void __cdecl UE::IoStore::Commands::_dynamic_initializer_for__VerifyCacheCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = VerifyCache;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&VerifyCacheCommand,L"iostore.VerifyCache",
             L"Verifies the cache chunks against the mounted container TOCs",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__VerifyCacheCommand__);
  return;
}

// `scalar_deleting_destructor' @ 144585390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFOnDemandPurgeResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144585430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFOnDemandDefragResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445854d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXUFOnDemandMountResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144585570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144585620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AX__QEAUFOnDemandVerifyCacheResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445857a0

void * __thiscall
UE::IoStore::FIoStoreOnDemandCoreModule::_scalar_deleting_destructor_
          (FIoStoreOnDemandCoreModule *this,uint param_1)

{
  *this = (FIoStoreOnDemandCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// FOnDemandTocAdditionalFile,TSizedDefaultAllocator<32>_> @ 1445859e0

FArchive * __cdecl
operator<<<UE::IoStore::FOnDemandTocAdditionalFile_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::IoStore::FOnDemandTocAdditionalFile,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FOnDemandTocAdditionalFile *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>
                ((FOnDemandTocAdditionalFile *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
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
              UE::IoStore::operator<<
                        (param_1,(FOnDemandTocAdditionalFile *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<UE::IoStore::FOnDemandTocAdditionalFile,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FOnDemandTocAdditionalFile *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>(pFVar10,1);
              UE::IoStore::operator<<(param_1,pFVar10);
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

// FOnDemandTocContainerEntry,TSizedDefaultAllocator<32>_> @ 1445859f0

FArchive * __cdecl
operator<<<UE::IoStore::FOnDemandTocContainerEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::IoStore::FOnDemandTocContainerEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FOnDemandTocContainerEntry *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::IoStore::FOnDemandTocContainerEntry,int>
                ((FOnDemandTocContainerEntry *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
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
              UE::IoStore::operator<<
                        (param_1,(FOnDemandTocContainerEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x80));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::IoStore::FOnDemandTocContainerEntry,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x880,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FOnDemandTocContainerEntry *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x80);
              DefaultConstructItems<UE::IoStore::FOnDemandTocContainerEntry,int>(pFVar10,1);
              UE::IoStore::operator<<(param_1,pFVar10);
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

// FOnDemandTocEntry,TSizedDefaultAllocator<32>_> @ 144585a00

FArchive * __cdecl
operator<<<UE::IoStore::FOnDemandTocEntry_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::IoStore::FOnDemandTocEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FOnDemandTocEntry *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x38);
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
                (0x38,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x4924a)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
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
              UE::IoStore::operator<<
                        (param_1,(FOnDemandTocEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x38));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<UE::IoStore::FOnDemandTocEntry,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FOnDemandTocEntry *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
              DefaultConstructItems<UE::IoStore::FOnDemandTocEntry,int>(pFVar10,1);
              UE::IoStore::operator<<(param_1,pFVar10);
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

// FOnDemandTocTagSet,TSizedDefaultAllocator<32>_> @ 144585a10

FArchive * __cdecl
operator<<<UE::IoStore::FOnDemandTocTagSet_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::IoStore::FOnDemandTocTagSet,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::IoStore::FOnDemandTocTagSet,int>
                ((FOnDemandTocTagSet *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
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
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
              ::operator<<(param_1,(FString *)pFVar9);
              TArrayPrivateFriend::
              Serialize<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_>
                                  *)(pFVar9 + 0x10));
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<UE::IoStore::FOnDemandTocTagSet,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
              DefaultConstructItems<UE::IoStore::FOnDemandTocTagSet,int>(pFVar9,1);
              ::operator<<(param_1,(FString *)pFVar9);
              TArrayPrivateFriend::
              Serialize<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_>
                                  *)(pFVar9 + 0x10));
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

// FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_> @ 144585a20

FArchive * __cdecl
operator<<<UE::IoStore::FOnDemandTocTagSetPackageList_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FOnDemandTocTagSetPackageList *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int>
                ((FOnDemandTocTagSetPackageList *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
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
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
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
              UE::IoStore::operator<<
                        (param_1,(FOnDemandTocTagSetPackageList *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FOnDemandTocTagSetPackageList *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
              DefaultConstructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int>(pFVar2,1);
              UE::IoStore::operator<<(param_1,pFVar2);
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

// operator<<<wchar_t,wchar_t_const_*_&> @ 144585a30

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,wchar_t_const_*_&>(TStringBuilderBase<wchar_t> *param_1,wchar_t **param_2)

{
  wchar_t *_Str;
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  
  _Str = *param_2;
  iVar4 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar1 = wcslen(_Str);
    iVar4 = (int)sVar1;
  }
  uVar3 = (ulong64)iVar4;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(param_1,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,_Str,uVar3 * 2);
    param_1->CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  return param_1;
}

// operator<<<wchar_t,TStringView<wchar_t>_> @ 144585ac0

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,TStringView<wchar_t>_>
          (TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  
  pwVar1 = param_2->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(param_1,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar1,uVar3 * 2);
    param_1->CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  return param_1;
}

// DefaultConstructItems<UE::IoStore::FOnDemandMountArgs,int> @ 144585dc0

void __cdecl DefaultConstructItems<UE::IoStore::FOnDemandMountArgs,int>(void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(FName *)(puVar4 + 6) = UE::IoStore::FOnDemandHostGroup::DefaultName;
      pTVar3 = operator_new(0x28);
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        puVar4[7] = 0x10;
        puVar4[8] = 0;
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar3->SharedReferenceCount = (atomic<int>)0x1;
        pTVar3->WeakReferenceCount = (atomic<int>)0x1;
        pTVar3->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFImpl_FOnDemandHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)&pTVar3[2]._padding_ + 4) = 0;
        pTVar3[1]._padding_ = 0;
        pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar3[2]._padding_ = 0xffffffff;
        if ((pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar4[7] = pTVar3 + 1;
        puVar4[8] = pTVar3;
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined4 *)(puVar4 + 9) = 1;
      puVar4 = puVar4 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandTocAdditionalFile,int> @ 144585f00

void __cdecl
DefaultConstructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 6;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandTocContainerEntry,int> @ 144585f40

void __cdecl
DefaultConstructItems<UE::IoStore::FOnDemandTocContainerEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0xffffffffffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x6c) = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandTocEntry,int> @ 144585fb0

void __cdecl DefaultConstructItems<UE::IoStore::FOnDemandTocEntry,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      uVar1 = FIoHash::Zero.Hash._8_8_;
      puVar2[-4] = FIoHash::Zero.Hash._0_8_;
      puVar2[-3] = uVar1;
      *(undefined4 *)(puVar2 + -2) = FIoHash::Zero.Hash._16_4_;
      *(undefined8 *)((longlong)puVar2 + -0xc) = FIoChunkId::InvalidChunkId.Id._0_8_;
      *(undefined4 *)((longlong)puVar2 + -4) = FIoChunkId::InvalidChunkId.Id._8_4_;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 7;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandTocTagSet,int> @ 144586010

void __cdecl DefaultConstructItems<UE::IoStore::FOnDemandTocTagSet,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int> @ 144586040

void __cdecl
DefaultConstructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int> @ 144586090

void __cdecl
DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>
          (FOnDemandInstallHandleCacheUsage *param_1,int param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  TSharedString<wchar_t> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->DebugName;
    do {
      if (pTVar3->Chars != (wchar_t *)0x0) {
        pwVar1 = pTVar3->Chars + -4;
        LOCK();
        iVar2 = *(int *)pwVar1;
        *(int *)pwVar1 = *(int *)pwVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FMemory::Free(pwVar1);
        }
      }
      pTVar3 = pTVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandMountArgs,int> @ 1445860e0

void __cdecl
DestructItems<UE::IoStore::FOnDemandMountArgs,int>(FOnDemandMountArgs *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FOnDemandToc *this;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FilePath;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pFVar2 + 2))->ReferenceController);
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-2].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      this = *(FOnDemandToc **)((longlong)(pFVar2 + -3) + 8);
      if (this != (FOnDemandToc *)0x0) {
        UE::IoStore::FOnDemandToc::~FOnDemandToc(this);
        operator_delete(this,0xa0);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandTocAdditionalFile,int> @ 144586170

void __cdecl
DestructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>
          (FOnDemandTocAdditionalFile *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Filename;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandTocContainerEntry,int> @ 1445861b0

void __cdecl
DestructItems<UE::IoStore::FOnDemandTocContainerEntry,int>
          (FOnDemandTocContainerEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->BlockHashes;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::IoStore::FOnDemandTocEntry,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2)
                )->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -3))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -4))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandTocTagSet,int> @ 144586240

void __cdecl
DestructItems<UE::IoStore::FOnDemandTocTagSet,int>(FOnDemandTocTagSet *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Packages;
    do {
      DestructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int>
                ((FOnDemandTocTagSetPackageList *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum)
      ;
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FOnDemandTocTagSet *)(pTVar2 + -1))->Tag).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int> @ 1445862a0

void __cdecl
DestructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int>
          (FOnDemandTocTagSetPackageList *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PackageIndicies).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FOnDemandTocTagSetPackageList *)(&param_1->PackageIndicies + 1);
  }
  return;
}

// MakeShared<UE::IoStore::FOnDemandHostGroup::FImpl,1> @ 1445862e0

TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> * __cdecl
MakeShared<UE::IoStore::FOnDemandHostGroup::FImpl,1>
          (TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FImpl *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImpl_FOnDemandHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar3[2]._padding_ + 4) = 0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[2]._padding_ = 0xffffffff;
    __return_storage_ptr__->Object = (FImpl *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FImpl *)(pTVar3 + 1) == (FImpl *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::IoStore::FOnDemandHostGroup::FImpl,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// StringCast<char,128,wchar_t> @ 144586f00

TStringConversion<TStringConvert<wchar_t,char>,128> * __cdecl
StringCast<char,128,wchar_t>
          (TStringConversion<TStringConvert<wchar_t,char>,128> *__return_storage_ptr__,
          wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar7 = 0;
  __return_storage_ptr__->_padding_ = 0;
  if (param_1 == (wchar_t *)0x0) {
    __return_storage_ptr__->Ptr = (char *)0x0;
    __return_storage_ptr__->StringLength = 0;
  }
  else {
    iVar5 = 0;
    if ((0 < param_2) && (iVar5 = 0, param_1[(longlong)param_2 + -1] == L'\0')) {
      iVar5 = 1;
      param_2 = param_2 + -1;
    }
    uVar8 = iVar5 + param_2;
    __return_storage_ptr__->StringLength = param_2;
    if (0x80 < uVar8) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->_padding_,0,uVar8,1);
    }
    lVar9 = (longlong)(int)uVar8;
    pTVar4 = __return_storage_ptr__;
    if ((TStringConversion<TStringConvert<wchar_t,char>,128> *)__return_storage_ptr__->_padding_ !=
        (TStringConversion<TStringConvert<wchar_t,char>,128> *)0x0) {
      pTVar4 = (TStringConversion<TStringConvert<wchar_t,char>,128> *)
               __return_storage_ptr__->_padding_;
    }
    bVar3 = false;
    __return_storage_ptr__->Ptr = (char *)pTVar4;
    lVar6 = lVar7;
    if (0 < lVar9) {
      do {
        wVar1 = param_1[lVar6];
        *(char *)((longlong)&pTVar4->_padding_ + lVar6) = (char)wVar1;
        lVar6 = lVar6 + 1;
        bVar3 = (bool)(bVar3 | 0x7f < (ushort)wVar1);
      } while (lVar6 < lVar9);
      if (bVar3) {
        do {
          if (0x7f < (ushort)param_1[lVar7]) {
            *(undefined1 *)((longlong)&pTVar4->_padding_ + lVar7) = 0x3f;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar9);
      }
    }
    if (((longlong)&pTVar4->_padding_ + lVar9 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TStringConversion<TStringConvert<wchar_t,char>,128> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::IoStore::FOnDemandRequest::EStatus>_> @ 1445870b0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::IoStore::FOnDemandRequest::EStatus>_>
          (_Atomic_padded<UE::IoStore::FOnDemandRequest::EStatus> *param_1)

{
  return (char *)param_1;
}

// ~TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,1,0> @ 144587750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::IoStore::Commands::InstallPackage_::__l2::<lambda_1>,1,0>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::`2'::<lambda_1>,1,0>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator<< @ 144587c60

/* WARNING: Enum "EOnDemandTocFlags": Some values do not have unique names */

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,EOnDemandTocFlags param_2)

{
  wchar_t *pwVar1;
  void *pvVar2;
  size_t sVar3;
  ulong64 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  if (param_2 != None) {
    iVar5 = 0;
    if ((param_2 & InstallOnDemand) != None) {
      pwVar6 = param_1->CurPos;
      if ((int)((longlong)pwVar6 - (longlong)param_1->Base >> 1) != 0) {
        if (param_1->End < pwVar6 + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_1,1);
          pwVar6 = param_1->CurPos;
        }
        pvVar2 = FGenericPlatformString::Memcpy(pwVar6,L"|",2);
        pwVar6 = (wchar_t *)((longlong)pvVar2 + 2);
        param_1->CurPos = pwVar6;
      }
      pwVar1 = FlagText[1];
      iVar7 = 0;
      if (FlagText[1] != (wchar_t *)0x0) {
        sVar3 = wcslen(FlagText[1]);
        iVar7 = (int)sVar3;
      }
      uVar4 = (ulong64)iVar7;
      if (param_1->End < pwVar6 + uVar4) {
        TStringBuilderBase<wchar_t>::Extend(param_1,uVar4);
      }
      if (iVar7 != 0) {
        pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar1,uVar4 * 2);
        param_1->CurPos = (wchar_t *)((longlong)pvVar2 + uVar4 * 2);
      }
    }
    if ((param_2 & Last) != None) {
      pwVar6 = param_1->CurPos;
      if ((int)((longlong)pwVar6 - (longlong)param_1->Base >> 1) != 0) {
        if (param_1->End < pwVar6 + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_1,1);
          pwVar6 = param_1->CurPos;
        }
        pvVar2 = FGenericPlatformString::Memcpy(pwVar6,L"|",2);
        pwVar6 = (wchar_t *)((longlong)pvVar2 + 2);
        param_1->CurPos = pwVar6;
      }
      pwVar1 = FlagText[2];
      if (FlagText[2] != (wchar_t *)0x0) {
        sVar3 = wcslen(FlagText[2]);
        iVar5 = (int)sVar3;
      }
      uVar4 = (ulong64)iVar5;
      if (param_1->End < pwVar6 + uVar4) {
        TStringBuilderBase<wchar_t>::Extend(param_1,uVar4);
      }
      if (iVar5 != 0) {
        pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar1,uVar4 * 2);
        param_1->CurPos = (wchar_t *)((longlong)pvVar2 + uVar4 * 2);
      }
    }
    return param_1;
  }
  operator<<<wchar_t,wchar_t_const_*_&>(param_1,FlagText);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 144589cc8

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<struct
   UE::UnifiedError::IoStoreOnDemand::FHttpError>::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *)
                      &this[-1].ErrorDetail,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 144589ce0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::IoStore::FIoStoreOnDemandCoreModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::IoStore::FIoStoreOnDemandCoreModule,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144589d10

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *this,uint param_1)

{
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144589d50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandHostGroup::FImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandHostGroup::FImpl,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144589d90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalContentHandle,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalContentHandle,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144589dd0

void * __thiscall
UE::IoStore::FOnDemandInstallRequest::_scalar_deleting_destructor_
          (FOnDemandInstallRequest *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FOnDemandInstallRequest_IoStore_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Request).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->IoStore).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144589e40

void * __thiscall
UE::IoStore::FOnDemandRequest::_scalar_deleting_destructor_(FOnDemandRequest *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// LexToString @ 14458f320

FString * __cdecl
LexToString(FString *__return_storage_ptr__,FOnDemandInternalContentHandle *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"Id=0x%llX DebugName=\'%s\'");
  return __return_storage_ptr__;
}

// LexToString @ 14458f360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandTocFlags": Some values do not have unique names */

FString * __cdecl LexToString(FString *__return_storage_ptr__,EOnDemandTocFlags param_1)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  operator<<(&local_138,param_1);
  lVar1 = (longlong)local_138.CurPos - (longlong)local_138.Base;
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  FString::ConstructFromPtrSize(__return_storage_ptr__,local_138.Base,(int)(lVar1 >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_IoStoreOnDemandCore @ 144593c50

void __cdecl IMPLEMENT_MODULE_IoStoreOnDemandCore(void)

{
  return;
}

// FileExt'' @ 15036ca50

void __cdecl `dynamic_atexit_destructor_for_'UE::IoStore::FOnDemandToc::FileExt__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::IoStore::FOnDemandToc::FileExt.Data.AllocatorInstance.Data;
  if (UE::IoStore::FOnDemandToc::FileExt.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::IoStore::FOnDemandToc::FileExt.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036ca70

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasError::_dynamic_atexit_destructor_for__DeclaredFormatString__
          (void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036ca7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036ca90

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasJournalError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036ca9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cab0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cabf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cad0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkHashError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cadf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036caf0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036caff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cb10

void __cdecl
UE::UnifiedError::IoStoreOnDemand::HttpError::_dynamic_atexit_destructor_for__DeclaredFormatString__
          (void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cb1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cb30

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cb3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cb50

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cb5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cb70

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cb7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cb90

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cb9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeclaredFormatString'' @ 15036cbb0

void __cdecl
UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::
_dynamic_atexit_destructor_for__DeclaredFormatString__(void)

{
  if (DeclaredFormatString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cbbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DeclaredFormatString.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultContentHandle'' @ 15036cbd0

void __cdecl
`UE::IoStore::Commands::InstallPackage'::__l2::
_dynamic_atexit_destructor_for__DefaultContentHandle__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (DefaultContentHandle.Handle.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'DefragCacheCommand'' @ 15036cbf0

void __cdecl UE::IoStore::Commands::_dynamic_atexit_destructor_for__DefragCacheCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DefragCacheCommand);
  return;
}

// `dynamic_atexit_destructor_for_'DevCDNCheck'' @ 15036cc10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
`UE::IoStore::Private::ShouldSkipUrl'::__l2::_dynamic_atexit_destructor_for__DevCDNCheck__(void)

{
  FDevCDNCheck FVar1;
  
  FVar1.Pattern.Ptr = DevCDNCheck.Pattern.Ptr;
  if (DevCDNCheck.Pattern.Ptr != (FRegexPattern *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)DevCDNCheck.Pattern.Ptr + 8));
    ::operator_delete((void *)FVar1.Pattern.Ptr,0x10);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpIoDispatcher'' @ 15036cc50

void __cdecl UE::_dynamic_atexit_destructor_for__GHttpIoDispatcher__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GHttpIoDispatcher.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'InstallPackageCommand'' @ 15036cc70

void __cdecl UE::IoStore::Commands::_dynamic_atexit_destructor_for__InstallPackageCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&InstallPackageCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LogHttpIoDispatcher'' @ 15036cc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHttpIoDispatcher__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHttpIoDispatcher);
  return;
}

// `dynamic_atexit_destructor_for_'LogIas'' @ 15036ccb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIas__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIas);
  return;
}

// `dynamic_atexit_destructor_for_'LogIoStoreOnDemand'' @ 15036ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIoStoreOnDemand__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIoStoreOnDemand);
  return;
}

// `dynamic_atexit_destructor_for_'MountFileCommand'' @ 15036ccf0

void __cdecl UE::IoStore::Commands::_dynamic_atexit_destructor_for__MountFileCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&MountFileCommand);
  return;
}

// `dynamic_atexit_destructor_for_'MountUrlCommand'' @ 15036cd10

void __cdecl UE::IoStore::Commands::_dynamic_atexit_destructor_for__MountUrlCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&MountUrlCommand);
  return;
}

// `dynamic_atexit_destructor_for_'PrintCacheUsageCommand'' @ 15036cd30

void __cdecl UE::IoStore::Commands::_dynamic_atexit_destructor_for__PrintCacheUsageCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&PrintCacheUsageCommand);
  return;
}

// `dynamic_atexit_destructor_for_'PurgeCacheCommand'' @ 15036cd50

void __cdecl UE::IoStore::Commands::_dynamic_atexit_destructor_for__PurgeCacheCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&PurgeCacheCommand);
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036cd70

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cda9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036cdc0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cdf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036ce10

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036ce49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036ce60

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036ce99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036ceb0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036cf00

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cf39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036cf50

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cf89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036cfa0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036cfd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036cff0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036d029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036d040

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036d079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticError'' @ 15036d090

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetStaticError'::__l2::
_dynamic_atexit_destructor_for__StaticError__(void)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  
  TVar1.Reference = ::StaticError.ErrorDetails.Reference;
  ::StaticError.ErrorCode = 0;
  ::StaticError.ModuleId = 0;
  if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    ::StaticError.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar1.Reference + 0x10))();
    if (::StaticError.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015036d0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*::StaticError.ErrorDetails.Reference + 0x10))();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d0e0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::CasError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d110

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::CasJournalError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d140

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::CasSnapshotError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d170

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d1a0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d1d0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::HttpError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d200

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d230

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d260

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheFlushLastAccessError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d290

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticErrorDetails'' @ 15036d2c0

void __cdecl
`UE::UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetStaticErrorDetails'::__l2::
_dynamic_atexit_destructor_for__StaticErrorDetails__(void)

{
  if (::StaticErrorDetails.ErrorFormatString.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*::StaticErrorDetails.ErrorFormatString.TextData.Reference + 0x10))();
  }
  ::StaticErrorDetails._padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'VerifyCacheCommand'' @ 15036d2f0

void __cdecl UE::IoStore::Commands::_dynamic_atexit_destructor_for__VerifyCacheCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&VerifyCacheCommand);
  return;
}

