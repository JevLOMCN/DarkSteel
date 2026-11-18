// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 318

// PakSignatureFileCache'' @ 140f44a90

void __cdecl `dynamic_initializer_for_'FPakPlatformFile::PakSignatureFileCache__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPakPlatformFile::PakSignatureFileCache__);
  return;
}

// PakSignatureFileCacheLock'' @ 140f44ab0

void __cdecl `dynamic_initializer_for_'FPakPlatformFile::PakSignatureFileCacheLock__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FPakPlatformFile::PakSignatureFileCacheLock,4000);
  atexit(`dynamic_atexit_destructor_for_'FPakPlatformFile::PakSignatureFileCacheLock__);
  return;
}

// `dynamic_initializer_for_'AsyncFileTestCmd'' @ 140f44ae0

void __cdecl _dynamic_initializer_for__AsyncFileTestCmd__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AsyncFileTest;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&AsyncFileTestCmd,L"pak.AsyncFileTest",
             L"Read a block of data from a file using an AsyncFileHandle. params: <filename> <size> <offset>"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__AsyncFileTestCmd__);
  return;
}

// `dynamic_initializer_for_'CPrio_AsyncIOCPUWorkTaskPriority'' @ 140f44c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_AsyncIOCPUWorkTaskPriority__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_AsyncIOCPUWorkTaskPriority,L"TaskGraph.TaskPriorities.AsyncIOCPUWork",
             L"Task and thread priority for decompression, decryption and signature checking of async IO from a pak file."
             ,BackgroundThreadPriority,MainQueue,MainQueue);
  atexit(_dynamic_atexit_destructor_for__CPrio_AsyncIOCPUWorkTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CPrio_IoDispatcherTaskPriority'' @ 140f44c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_IoDispatcherTaskPriority__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_IoDispatcherTaskPriority,L"TaskGraph.TaskPriorities.IoDispatcherAsyncTasks",
             L"Task and thread priority for IoDispatcher decompression.",BackgroundThreadPriority,
             MainQueue,MainQueue);
  atexit(_dynamic_atexit_destructor_for__CPrio_IoDispatcherTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CVarPakReaderReleaseDelay'' @ 140f44cc0

void __cdecl _dynamic_initializer_for__CVarPakReaderReleaseDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPakReaderReleaseDelay,L"pak.ReaderReleaseDelay",&GPakReaderReleaseDelay,
             L"If > 0, then synchronous pak readers older than this will be deleted.",0);
  atexit(_dynamic_atexit_destructor_for__CVarPakReaderReleaseDelay__);
  return;
}

// `dynamic_initializer_for_'CVar_CachePerPakFile'' @ 140f44d10

void __cdecl _dynamic_initializer_for__CVar_CachePerPakFile__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_CachePerPakFile,L"pakcache.CachePerPakFile",&GPakCache_CachePerPakFile,
             L"if > 0, then each pak file will have it\'s own cache",0);
  atexit(_dynamic_atexit_destructor_for__CVar_CachePerPakFile__);
  return;
}

// `dynamic_initializer_for_'CVar_Enable'' @ 140f44d60

void __cdecl _dynamic_initializer_for__CVar_Enable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_Enable,L"pakcache.Enable",&GPakCache_Enable,L"If > 0, then enable the pak cache."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_Enable__);
  return;
}

// `dynamic_initializer_for_'CVar_EnableNoCaching'' @ 140f44db0

void __cdecl _dynamic_initializer_for__CVar_EnableNoCaching__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_EnableNoCaching,L"pakcache.EnableNoCaching",&GPakCache_EnableNoCaching,
             L"if > 0, then we\'ll allow a read requests pak cache memory to be ditched early",0);
  atexit(_dynamic_atexit_destructor_for__CVar_EnableNoCaching__);
  return;
}

// `dynamic_initializer_for_'CVar_ForceDecompressionFails'' @ 140f44e00

void __cdecl _dynamic_initializer_for__CVar_ForceDecompressionFails__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ForceDecompressionFails,L"ForceDecompressionFails",
             &GPakCache_ForceDecompressionFails,
             L"If > 0, then force decompression failures to test the panic sync read fallback.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ForceDecompressionFails__);
  return;
}

// `dynamic_initializer_for_'CVar_ForcePakProcessReads'' @ 140f44e50

void __cdecl _dynamic_initializer_for__CVar_ForcePakProcessReads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ForcePakProcessReads,L"ForcePakProcessReads",&GPakCache_ForcePakProcessedReads,
             L"If true, then Asynchronous reads from pak files will always used the FPakProcessedReadRequest system that is ordinarily only used on compressed files."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_ForcePakProcessReads__);
  return;
}

// `dynamic_initializer_for_'CVar_IoDispatcherCullCancelledReadRequests'' @ 140f44ea0

void __cdecl _dynamic_initializer_for__CVar_IoDispatcherCullCancelledReadRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoDispatcherCullCancelledReadRequests,L"s.IoDispatcherCullCancelledReadRequests",
             &GIoDispatcherCullCancelledReadRequests,
             L"Process cancelled file read requests before starting I/O.This can prevent the I/O dispatcher thread to stall due to the request queue getting too big."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoDispatcherCullCancelledReadRequests__);
  return;
}

// `dynamic_initializer_for_'CVar_MMIOEnable'' @ 140f44ef0

void __cdecl _dynamic_initializer_for__CVar_MMIOEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MMIOEnable,L"mmio.enable",&GMMIO_Enable,
             L"If > 0, then enable memory mapped IO on platforms that support it.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_MMIOEnable__);
  return;
}

// `dynamic_initializer_for_'CVar_MaxBlockMemory'' @ 140f44f40

void __cdecl _dynamic_initializer_for__CVar_MaxBlockMemory__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MaxBlockMemory,L"pakcache.MaxBlockMemory",&GPakCache_MaxBlockMemory,
             L"A soft memory budget in MB for the max memory used for precaching, that we\'ll try and adhere to "
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_MaxBlockMemory__);
  return;
}

// `dynamic_initializer_for_'CVar_MaxRequestSizeToLowerLevelKB'' @ 140f44f90

void __cdecl _dynamic_initializer_for__CVar_MaxRequestSizeToLowerLevelKB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MaxRequestSizeToLowerLevelKB,L"pakcache.MaxRequestSizeToLowerLevellKB",
             &GPakCache_MaxRequestSizeToLowerLevelKB,
             L"Controls the maximum size (in KB) of IO requests submitted to the OS filesystem.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_MaxRequestSizeToLowerLevelKB__);
  return;
}

// `dynamic_initializer_for_'CVar_MaxRequestsToLowerLevel'' @ 140f44fe0

void __cdecl _dynamic_initializer_for__CVar_MaxRequestsToLowerLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MaxRequestsToLowerLevel,L"pakcache.MaxRequestsToLowerLevel",
             &GPakCache_MaxRequestsToLowerLevel,
             L"Controls the maximum number of IO requests submitted to the OS filesystem at one time. Limited by PAK_CACHE_MAX_REQUESTS."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_MaxRequestsToLowerLevel__);
  return;
}

// `dynamic_initializer_for_'CVar_NumUnreferencedBlocksToCache'' @ 140f45030

void __cdecl _dynamic_initializer_for__CVar_NumUnreferencedBlocksToCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_NumUnreferencedBlocksToCache,L"pakcache.NumUnreferencedBlocksToCache",
             &GPakCache_NumUnreferencedBlocksToCache,
             L"Controls the maximum number of unreferenced blocks to keep. This is a classic disk cache and the maxmimum wasted memory is pakcache.MaxRequestSizeToLowerLevellKB * pakcache.NumUnreferencedBlocksToCache."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_NumUnreferencedBlocksToCache__);
  return;
}

// `dynamic_initializer_for_'CVar_PakCache_TimeToTrim'' @ 140f45080

void __cdecl _dynamic_initializer_for__CVar_PakCache_TimeToTrim__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_PakCache_TimeToTrim,L"pakcache.TimeToTrim",&GPakCache_TimeToTrim,
             L"Controls how long to hold onto a cached but unreferenced block for.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_PakCache_TimeToTrim__);
  return;
}

// `dynamic_initializer_for_'CVar_TestRegisterEncryptionKey'' @ 140f450d0

void __cdecl _dynamic_initializer_for__CVar_TestRegisterEncryptionKey__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = TestRegisterEncryptionKey;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVar_TestRegisterEncryptionKey,L"pak.TestRegisterEncryptionKey",
             L"Test dynamic encryption key registration. params: <guid> <base64key>",
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
  atexit(_dynamic_atexit_destructor_for__CVar_TestRegisterEncryptionKey__);
  return;
}

// `dynamic_initializer_for_'CVar_UnmountTimeOutSeconds'' @ 140f45210

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_UnmountTimeOutSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_UnmountTimeOutSeconds,L"fileiostore.UnmountTimeOutSeconds",
             &GFileIoStoreUnmountTimeOutSeconds,
             L"Max time to wait for pending I/O requests before unmounting a container.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_UnmountTimeOutSeconds__);
  return;
}

// `dynamic_initializer_for_'CVar_UseDirectoryTreeForPakSearch'' @ 140f45260

void __cdecl _dynamic_initializer_for__CVar_UseDirectoryTreeForPakSearch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_UseDirectoryTreeForPakSearch,L"pak.UseDirectoryTreeForPakSearch",
             &GPak_UseDirectoryTreeForPakSearch,L"Enable use of directory tree when finding files",0
            );
  atexit(_dynamic_atexit_destructor_for__CVar_UseDirectoryTreeForPakSearch__);
  return;
}

// `dynamic_initializer_for_'CVar_UseNewTrim'' @ 140f452b0

void __cdecl _dynamic_initializer_for__CVar_UseNewTrim__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_UseNewTrim,L"pakcache.UseNewTrim",&GPakCache_UseNewTrim,
             L"if > 0, then we\'ll use a round robin per pak file trim",0);
  atexit(_dynamic_atexit_destructor_for__CVar_UseNewTrim__);
  return;
}

// `dynamic_initializer_for_'CVar_ValidateDirectoryTreeSearchConsistency'' @ 140f45300

void __cdecl _dynamic_initializer_for__CVar_ValidateDirectoryTreeSearchConsistency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ValidateDirectoryTreeSearchConsistency,
             L"pak.ValidateDirectoryTreeSearchConsistency",
             &GPak_ValidateDirectoryTreeSearchConsistency,
             L"Validate consistency of directory tree index search by comparing results with directory index search"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_ValidateDirectoryTreeSearchConsistency__);
  return;
}

// `dynamic_initializer_for_'DumpBlocksCmd'' @ 140f45350

void __cdecl _dynamic_initializer_for__DumpBlocksCmd__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = DumpBlocks;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DumpBlocksCmd,L"pak.DumpBlocks",L"Debug command to spew the outstanding blocks.",
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
  atexit(_dynamic_atexit_destructor_for__DumpBlocksCmd__);
  return;
}

// `dynamic_initializer_for_'FPackageIdMapTestInstance'' @ 140f45490

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FPackageIdMapTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPackageIdMapTest");
  FPackageIdMapTest::FPackageIdMapTest(&FPackageIdMapTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPackageIdMapTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPakReadRequestEvent'' @ 140f454e0

void __cdecl _dynamic_initializer_for__FPakReadRequestEvent__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FPakReadRequestEvent,4000);
  atexit(_dynamic_atexit_destructor_for__FPakReadRequestEvent__);
  return;
}

// `dynamic_initializer_for_'GIntervalTreeNodeNodeAllocator'' @ 140f45510

void __cdecl _dynamic_initializer_for__GIntervalTreeNodeNodeAllocator__(void)

{
  TIntervalTreeAllocator<FIntervalTreeNode>::TIntervalTreeAllocator<FIntervalTreeNode>
            (&GIntervalTreeNodeNodeAllocator);
  atexit(_dynamic_atexit_destructor_for__GIntervalTreeNodeNodeAllocator__);
  return;
}

// `dynamic_initializer_for_'GMountStartupPaksWildCard'' @ 140f45540

void __cdecl _dynamic_initializer_for__GMountStartupPaksWildCard__(void)

{
  FString::FString(&GMountStartupPaksWildCard,L"*.pak");
  atexit(_dynamic_atexit_destructor_for__GMountStartupPaksWildCard__);
  return;
}

// `dynamic_initializer_for_'GPakExec'' @ 140f45570

void __cdecl _dynamic_initializer_for__GPakExec__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPakExec__);
  return;
}

// `dynamic_initializer_for_'GPakFakeCompression'' @ 140f45590

void __cdecl _dynamic_initializer_for__GPakFakeCompression__(void)

{
  FName::FName(&GPakFakeCompression,L"PakFakeCompression");
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_PakSharedReaders'' @ 140f455b0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_PakSharedReaders__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_PakSharedReaders,L"PakSharedReaders",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogFilePackageStore'' @ 140f45600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogFilePackageStore__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogFilePackageStore,L"LogFilePackageStore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogFilePackageStore__);
  return;
}

// `dynamic_initializer_for_'LogPakFile'' @ 140f45640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPakFile__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPakFile,L"LogPakFile",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPakFile__);
  return;
}

// `dynamic_initializer_for_'MappedFileTestCmd'' @ 140f45680

void __cdecl _dynamic_initializer_for__MappedFileTestCmd__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = MappedFileTest;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&MappedFileTestCmd,L"MappedFileTest",L"Tests the file mappings through the low level.",
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
  atexit(_dynamic_atexit_destructor_for__MappedFileTestCmd__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPakFile'' @ 140f457c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantPakFile__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PakFile";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PakFile",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FPakFileModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_CheckSignature'' @ 140f45810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_CheckSignature__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_CheckSignature ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_CheckSignature>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_CheckSignature");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_CheckSignature,*pFVar1,
               L"FChunkCacheWorker.CheckSignature","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_GetFreeBuffer'' @ 140f458a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_GetFreeBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_GetFreeBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_GetFreeBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_GetFreeBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_GetFreeBuffer,*pFVar1,
               L"FChunkCacheWorker.GetFreeBuffer","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File"
               ,true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_HashBuffer'' @ 140f45930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_HashBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_HashBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_HashBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_HashBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_HashBuffer,*pFVar1,
               L"FChunkCacheWorker.HashBuffer","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_NumProcessQueue'' @ 140f459c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_NumProcessQueue__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_NumProcessQueue ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueue>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_NumProcessQueue");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_NumProcessQueue,*pFVar1,
               L"FChunkCacheWorker.NumProcessQueues","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_NumProcessQueueWithWork'' @ 140f45a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_NumProcessQueueWithWork__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_NumProcessQueueWithWork ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueueWithWork>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_NumProcessQueueWithWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_NumProcessQueueWithWork,
               *pFVar1,L"FChunkCacheWorker.NumProcessQueuesWithWork","STATGROUP_PakFile",
               "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_ProcessQueue'' @ 140f45ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_ProcessQueue__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_ProcessQueue ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_ProcessQueue>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_ProcessQueue");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_ProcessQueue,*pFVar1,
               L"FChunkCacheWorker.ProcessQueue","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_ReleaseBuffer'' @ 140f45b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_ReleaseBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_ReleaseBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_ReleaseBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_ReleaseBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_ReleaseBuffer,*pFVar1,
               L"FChunkCacheWorker.ReleaseBuffer","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File"
               ,true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_RequestQueueUpdate'' @ 140f45c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_RequestQueueUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_RequestQueueUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_RequestQueueUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_RequestQueueUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_RequestQueueUpdate,
               *pFVar1,L"FChunkCacheWorker.RequestQueueUpdate","STATGROUP_PakFile",
               "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_RequestWaitTime'' @ 140f45c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_RequestWaitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_RequestWaitTime ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_RequestWaitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_RequestWaitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_RequestWaitTime,*pFVar1,
               L"FChunkCacheWorker.RequestWaitTime","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_Serialize'' @ 140f45d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_Serialize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_Serialize ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_Serialize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_Serialize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_Serialize,*pFVar1,
               L"FChunkCacheWorker.Serialize","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FChunkCacheWorker_WaitingForEvent'' @ 140f45db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FChunkCacheWorker_WaitingForEvent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FChunkCacheWorker_WaitingForEvent ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_WaitingForEvent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FChunkCacheWorker_WaitingForEvent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_WaitingForEvent,*pFVar1,
               L"FChunkCacheWorker.WaitingForEvent","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCacheHighWater'' @ 140f45e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCacheHighWater__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCacheHighWater == (FThreadSafeStaticStat<FStat_STAT_PakCacheHighWater>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCacheHighWater");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCacheHighWater,*pFVar1,
               L"PakCache High Water","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCacheMem'' @ 140f45ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCacheMem__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCacheMem == (FThreadSafeStaticStat<FStat_STAT_PakCacheMem>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCacheMem");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCacheMem,*pFVar1,L"PakCache Current",
               "STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
               MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCache_CompressedDecrypts'' @ 140f45f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCache_CompressedDecrypts__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCache_CompressedDecrypts ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_CompressedDecrypts>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCache_CompressedDecrypts");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_CompressedDecrypts,*pFVar1,
               L"PakCache Async Decrypts (Compressed Path)","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCache_DecryptTime'' @ 140f45ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCache_DecryptTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCache_DecryptTime ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_DecryptTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCache_DecryptTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_DecryptTime,*pFVar1,
               L"PakCache Decrypt Time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",true,
               false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCache_SigningChunkHashSize'' @ 140f46080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCache_SigningChunkHashSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCache_SigningChunkHashSize ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCache_SigningChunkHashSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SigningChunkHashSize,*pFVar1,
               L"PakCache Signing Chunk Hash Size","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCache_SigningChunkHashTime'' @ 140f46110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCache_SigningChunkHashTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCache_SigningChunkHashTime ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCache_SigningChunkHashTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SigningChunkHashTime,*pFVar1,
               L"PakCache Signing Chunk Hash Time","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCache_SyncDecrypts'' @ 140f461a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCache_SyncDecrypts__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCache_SyncDecrypts ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCache_SyncDecrypts");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SyncDecrypts,*pFVar1,
               L"PakCache Sync Decrypts (Uncompressed Path)","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakCache_UncompressedDecrypts'' @ 140f46230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakCache_UncompressedDecrypts__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakCache_UncompressedDecrypts ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_UncompressedDecrypts>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakCache_UncompressedDecrypts");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_UncompressedDecrypts,*pFVar1,
               L"PakCache Async Decrypts (Uncompressed Path)","STATGROUP_PakFile","STATCAT_Advanced"
               ,L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakFile_NumOpenHandles'' @ 140f462c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakFile_NumOpenHandles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakFile_NumOpenHandles ==
      (FThreadSafeStaticStat<FStat_STAT_PakFile_NumOpenHandles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakFile_NumOpenHandles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_NumOpenHandles,*pFVar1,
               L"Num open pak file handles","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PakFile_Read'' @ 140f46350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PakFile_Read__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PakFile_Read == (FThreadSafeStaticStat<FStat_STAT_PakFile_Read>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PakFile_Read");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakFile_Read,*pFVar1,
               L"Total pak file read time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",true,
               false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_CopyFromExistingCache'' @ 140f463e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_CopyFromExistingCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_CopyFromExistingCache ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromExistingCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_CopyFromExistingCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_CopyFromExistingCache,
               *pFVar1,L"FSignedArchiveReader.CopyFromExistingCache","STATGROUP_PakFile",
               "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_CopyFromNewCache'' @ 140f46470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_CopyFromNewCache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_CopyFromNewCache ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_CopyFromNewCache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_CopyFromNewCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_CopyFromNewCache,
               *pFVar1,L"FSignedArchiveReader.CopyFromNewCache","STATGROUP_PakFile",
               "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_NumChunkRequests'' @ 140f46500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_NumChunkRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_NumChunkRequests ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumChunkRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_NumChunkRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_NumChunkRequests,
               *pFVar1,L"FSignedArchiveReader.NumChunkRequests","STATGROUP_PakFile",
               "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_NumSerializes'' @ 140f46590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_NumSerializes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_NumSerializes ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_NumSerializes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_NumSerializes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_NumSerializes,*pFVar1,
               L"FSignedArchiveReader.NumSerializes","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_PreCacheChunks'' @ 140f46620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_PreCacheChunks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_PreCacheChunks ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_PreCacheChunks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_PreCacheChunks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_PreCacheChunks,*pFVar1
               ,L"FSignedArchiveReader.PreCacheChunks","STATGROUP_PakFile","STATCAT_Advanced",
               L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_ProcessChunkRequests'' @ 140f466b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_ProcessChunkRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_ProcessChunkRequests ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_ProcessChunkRequests>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_ProcessChunkRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_ProcessChunkRequests,
               *pFVar1,L"FSignedArchiveReader.ProcessChunkRequests","STATGROUP_PakFile",
               "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_Serialize'' @ 140f46740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_Serialize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_Serialize ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_Serialize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_Serialize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_Serialize,*pFVar1,
               L"FSignedArchiveReader.Serialize","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignedArchiveReader_WaitForChunkWorker'' @ 140f467d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignedArchiveReader_WaitForChunkWorker__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignedArchiveReader_WaitForChunkWorker ==
      (FThreadSafeStaticStat<FStat_STAT_SignedArchiveReader_WaitForChunkWorker>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignedArchiveReader_WaitForChunkWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignedArchiveReader_WaitForChunkWorker,
               *pFVar1,L"FSignedArchiveReader.WaitingForChunkWorker","STATGROUP_PakFile",
               "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'WaitPrecacheCmd'' @ 140f46860

void __cdecl _dynamic_initializer_for__WaitPrecacheCmd__(void)

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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = WaitPrecache;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&WaitPrecacheCmd,L"pak.WaitPrecache",L"Debug command to wait on the pak precache.",
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
  atexit(_dynamic_atexit_destructor_for__WaitPrecacheCmd__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_FileIOVerbose'' @ 140f469a0

void __cdecl _dynamic_initializer_for___GCsvCategory_FileIOVerbose__(void)

{
  FString::operator=(&_GCsvCategory_FileIOVerbose.Name,L"FileIOVerbose");
  _GCsvCategory_FileIOVerbose.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_FileIOVerbose.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_FileIOVerbose__);
  return;
}

// `scalar_deleting_destructor' @ 142a3ab10

void * __thiscall
FPackageIdMapTest::_scalar_deleting_destructor_(FPackageIdMapTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142a3ab60

void * __thiscall
IPlatformFileModule::_scalar_deleting_destructor_(IPlatformFileModule *this,uint param_1)

{
  *this = (IPlatformFileModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a3ace0

void * __thiscall FPakFileModule::_scalar_deleting_destructor_(FPakFileModule *this,uint param_1)

{
  IPlatformFile *pIVar1;
  
  pIVar1 = (this->Singleton).Ptr;
  if (pIVar1 != (IPlatformFile *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// operator<<<unsigned_int,TSizedDefaultAllocator<32>_> @ 142a3adb0

FArchive * __cdecl
operator<<<unsigned_int,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
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
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<unsigned___int64,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>,FDefaultSetAllocator> @ 142a3adc0

FArchive * __cdecl
operator<<<TTuple<unsigned___int64,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned___int64,FPakEntryLocation>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar13 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_142a4f30e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_142a4f30e:
  uVar11 = (ulonglong)uVar13;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar13 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar9 = uVar7;
      while (uVar13 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_142a4f3eb;
        uVar13 = puVar12[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_142a4f3eb:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x18);
        uVar8 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FPakCompressedBlock,TSizedDefaultAllocator<32>_> @ 142a3add0

FArchive * __cdecl
operator<<<FPakCompressedBlock,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
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
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            operator<<(param_1,(FPakCompressedBlock *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          operator<<(param_1,(FPakCompressedBlock *)(pFVar3 + (longlong)iVar6 * 0x10));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// operator<<<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 142a3ade0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<unsigned___int64,FPakEntryLocation> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<unsigned___int64,FPakEntryLocation> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x18,(longlong)*(int *)&param_2->field_0xc * 0x18);
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
        goto LAB_142a3b0dc;
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
LAB_142a3b0dc:
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
        operator<<<unsigned___int64,FPakEntryLocation>
                  (param_1,(TTuple<unsigned___int64,FPakEntryLocation> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x18));
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
                (0x18,8,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
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
    pTVar12 = (TTuple<unsigned___int64,FPakEntryLocation> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<unsigned___int64,FPakEntryLocation> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned___int64,FPakEntryLocation> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0x80000000;
          *(undefined4 *)((longlong)local_78.Pointer + 0x10) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<unsigned___int64,FPakEntryLocation>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned___int64,FPakEntryLocation> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<unsigned___int64,FPakEntryLocation> @ 142a3b150

FArchive * __cdecl
operator<<<unsigned___int64,FPakEntryLocation>
          (FArchive *param_1,TTuple<unsigned___int64,FPakEntryLocation> *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
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
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// AddLambda<`FFileIoStore::Initialize'::__l2::<lambda_1>_> @ 142a3b4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_FFileIoStore::Initialize_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  FFileIoStore *pFVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pFVar8 = (FFileIoStore *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->__this = (FFileIoStore *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      pFVar8 = (FFileIoStore *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->__this = pFVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FPakFile::Check'::__l24::<lambda_1>_> @ 142a3b740

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
::AddLambda<_FPakFile::Check_::__l24::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  int *piVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  piVar5 = (int *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPakChunkSignatureCheckFailedData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::`24'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->ErrorCount = (int *)0x0;
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
      piVar5 = (int *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->ErrorCount = piVar5;
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

// AddLambda<`FPakPlatformFile::Initialize'::__l47::<lambda_2>_> @ 142a3b990

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>::
AddLambda<_FPakPlatformFile::Initialize_::__l47::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFIoSignatureError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::`47'::<lambda_2>_>
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

// AddToIntervalTree<FPakPrecacher::FCacheBlock> @ 142a3c0c0

void __cdecl
AddToIntervalTree<FPakPrecacher::FCacheBlock>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *param_2,uint param_3,
          uint param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (param_5 - param_4) + 1;
  if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum -
      GIntervalTreeNodeNodeAllocator.Items.ArrayNum) + GIntervalTreeNodeNodeAllocator.Items.ArrayMax
      < iVar6) {
    uVar5 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum + iVar6;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (GIntervalTreeNodeNodeAllocator.Items.ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar5,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                 GIntervalTreeNodeNodeAllocator.Items.ArrayNum,
                 &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
    }
  }
  uVar5 = ~param_2->SaltMask & param_3;
  if ((((param_2->SaltMask & param_3) != param_2->Salt) || (uVar5 == 0)) ||
     ((uint)(param_2->Items).ArrayNum <= uVar5)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if ((int)uVar5 < (param_2->Items).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
  if (*(int *)(pFVar4 + 0x20) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Item.Next == IntervalTreeInvalidIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0xc2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AddToIntervalTree_Dangerous<FPakPrecacher::FCacheBlock>
            (param_1,param_2,param_3,*(ulonglong *)pFVar4 & 0xffffffffffff,
             (*(ulonglong *)(pFVar4 + 8) - 1) + (*(ulonglong *)pFVar4 & 0xffffffffffff),param_4,
             param_5);
  return;
}

// AddToIntervalTree<FPakPrecacher::FPakInRequest> @ 142a3c270

void __cdecl
AddToIntervalTree<FPakPrecacher::FPakInRequest>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,uint param_3,
          uint param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (param_5 - param_4) + 1;
  if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum -
      GIntervalTreeNodeNodeAllocator.Items.ArrayNum) + GIntervalTreeNodeNodeAllocator.Items.ArrayMax
      < iVar6) {
    uVar5 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum + iVar6;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (GIntervalTreeNodeNodeAllocator.Items.ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar5,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                 GIntervalTreeNodeNodeAllocator.Items.ArrayNum,
                 &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
    }
  }
  uVar5 = ~param_2->SaltMask & param_3;
  if ((((param_2->SaltMask & param_3) != param_2->Salt) || (uVar5 == 0)) ||
     ((uint)(param_2->Items).ArrayNum <= uVar5)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if ((int)uVar5 < (param_2->Items).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
  if (*(int *)(pFVar4 + 0x24) != 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Item.Next == IntervalTreeInvalidIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0xc2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest>
            (param_1,param_2,param_3,*(ulonglong *)pFVar4 & 0xffffffffffff,
             (*(ulonglong *)(pFVar4 + 8) - 1) + (*(ulonglong *)pFVar4 & 0xffffffffffff),param_4,
             param_5);
  return;
}

// AddToIntervalTree_Dangerous<FPakPrecacher::FCacheBlock> @ 142a3c420

void __cdecl
AddToIntervalTree_Dangerous<FPakPrecacher::FCacheBlock>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,uint param_6,uint param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  while( true ) {
    uVar6 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
    uVar5 = *param_1;
    if (uVar5 == 0) {
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum == 0) {
        if (GIntervalTreeNodeNodeAllocator.Items.ArrayNum ==
            GIntervalTreeNodeNodeAllocator.Items.ArrayMax) {
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                          &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
        }
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
             GIntervalTreeNodeNodeAllocator.Items.ArrayNum + 1;
      }
      else {
        if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum < 1) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum - 1;
        uVar6 = *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 4);
        if (~uVar5 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum != 0) {
          memmove(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar5 * 4,
                  GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar5 * 4 + 4,
                  (longlong)(int)(~uVar5 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum) << 2);
        }
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
             GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                   GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum,
                   &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      uVar5 = 0;
      if ((int)uVar6 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data;
      *(undefined8 *)
       (GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc) =
           0;
      *(undefined4 *)(FVar3.Data + (longlong)(int)uVar6 * 0xc + 8) = 0;
      uVar5 = GIntervalTreeNodeNodeAllocator.Salt | uVar6;
      *param_1 = uVar5;
    }
    uVar6 = ~GIntervalTreeNodeNodeAllocator.SaltMask & uVar5;
    uVar7 = param_4 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    uVar8 = param_5 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    if (((((uVar5 & GIntervalTreeNodeNodeAllocator.SaltMask) != GIntervalTreeNodeNodeAllocator.Salt)
         || (uVar6 == 0)) || ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar6)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x4a,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    param_1 = (uint *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                      (longlong)(int)uVar6 * 0xc);
    if ((uVar7 != uVar8) || (param_7 <= param_6)) {
      uVar5 = ~param_2->SaltMask & param_3;
      if ((((param_2->SaltMask & param_3) != param_2->Salt) ||
          ((uVar5 == 0 || ((uint)(param_2->Items).ArrayNum <= uVar5)))) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar5 < (param_2->Items).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->Items).AllocatorInstance.Data;
      if (uVar7 == uVar8) {
        if (uVar7 == 0) {
          *(uint *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x20) = *param_1;
          *param_1 = param_3;
        }
        else {
          *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x20) = *(int *)((longlong)param_1 + 8);
          *(uint *)((longlong)param_1 + 8) = param_3;
        }
      }
      else {
        *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x20) = *(int *)((longlong)param_1 + 4);
        *(uint *)((longlong)param_1 + 4) = param_3;
      }
      return;
    }
    param_6 = param_6 + 1;
    if (uVar7 != 0) {
      param_1 = (uint *)((longlong)param_1 + 8);
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest> @ 142a3c790

void __cdecl
AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,uint param_6,uint param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  while( true ) {
    uVar6 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
    uVar5 = *param_1;
    if (uVar5 == 0) {
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum == 0) {
        if (GIntervalTreeNodeNodeAllocator.Items.ArrayNum ==
            GIntervalTreeNodeNodeAllocator.Items.ArrayMax) {
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                          &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
        }
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
             GIntervalTreeNodeNodeAllocator.Items.ArrayNum + 1;
      }
      else {
        if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum < 1) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum - 1;
        uVar6 = *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 4);
        if (~uVar5 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum != 0) {
          memmove(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar5 * 4,
                  GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar5 * 4 + 4,
                  (longlong)(int)(~uVar5 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum) << 2);
        }
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
             GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                   GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum,
                   &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      uVar5 = 0;
      if ((int)uVar6 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data;
      *(undefined8 *)
       (GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc) =
           0;
      *(undefined4 *)(FVar3.Data + (longlong)(int)uVar6 * 0xc + 8) = 0;
      uVar5 = GIntervalTreeNodeNodeAllocator.Salt | uVar6;
      *param_1 = uVar5;
    }
    uVar6 = ~GIntervalTreeNodeNodeAllocator.SaltMask & uVar5;
    uVar7 = param_4 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    uVar8 = param_5 << ((byte)param_6 & 0x3f) & 0x8000000000000000;
    if (((((uVar5 & GIntervalTreeNodeNodeAllocator.SaltMask) != GIntervalTreeNodeNodeAllocator.Salt)
         || (uVar6 == 0)) || ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar6)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x4a,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = 0;
    if ((int)uVar6 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    param_1 = (uint *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                      (longlong)(int)uVar6 * 0xc);
    if ((uVar7 != uVar8) || (param_7 <= param_6)) {
      uVar5 = ~param_2->SaltMask & param_3;
      if ((((param_2->SaltMask & param_3) != param_2->Salt) ||
          ((uVar5 == 0 || ((uint)(param_2->Items).ArrayNum <= uVar5)))) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar5 < (param_2->Items).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->Items).AllocatorInstance.Data;
      if (uVar7 == uVar8) {
        if (uVar7 == 0) {
          *(uint *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x24) = *param_1;
          *param_1 = param_3;
        }
        else {
          *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x24) = *(int *)((longlong)param_1 + 8);
          *(uint *)((longlong)param_1 + 8) = param_3;
        }
      }
      else {
        *(int *)(pFVar1 + (longlong)(int)uVar5 * 0x30 + 0x24) = *(int *)((longlong)param_1 + 4);
        *(uint *)((longlong)param_1 + 4) = param_3;
      }
      return;
    }
    param_6 = param_6 + 1;
    if (uVar7 != 0) {
      param_1 = (uint *)((longlong)param_1 + 8);
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ApplyAfter<`FFileIoStore::Initialize'::__l2::<lambda_1>_&> @ 142a3cb00

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_FFileIoStore::Initialize_::__l2::<lambda_1>_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_1> *param_1)

{
  FFileIoStore *pFVar1;
  FIoDispatcherBackendContext *this_00;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  pFVar1 = param_1->__this;
  if ((pFVar1->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) {
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
  this_00 = (pFVar1->BackendContext).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if (*(int *)&(this_00->WakeUpDispatcherThreadDelegate).field_0x10 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this_00->WakeUpDispatcherThreadDelegate).field_0x8;
  }
  (**(code **)(*plVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// CompareItems<FPakCompressedBlock,int> @ 142a3cb80

bool __cdecl
CompareItems<FPakCompressedBlock,int>
          (FPakCompressedBlock *param_1,FPakCompressedBlock *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(longlong *)(lVar1 + (longlong)param_2) != param_2->CompressedStart) ||
         (*(longlong *)(lVar1 + 8 + (longlong)param_2) != param_2->CompressedEnd)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FPakPlatformFile::FPakListEntry,FPakPlatformFile::FPakListEntry,int> @ 142a3cef0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __cdecl
ConstructItems<FPakPlatformFile::FPakListEntry,FPakPlatformFile::FPakListEntry,int>
          (void *param_1,FPakListEntry *param_2,int param_3)

{
  FPakFile *pFVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_1 + 8);
    do {
      *(uint *)(plVar2 + -1) = param_2->ReadOrder;
      *plVar2 = 0;
      pFVar1 = (param_2->PakFile).Reference;
      *plVar2 = (longlong)pFVar1;
      if (pFVar1 != (FPakFile *)0x0) {
        LOCK();
        *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
        UNLOCK();
      }
      param_2 = param_2 + 1;
      plVar2 = plVar2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FFileIoStoreBlockScatter,int> @ 142a3cf30

void __cdecl DefaultConstructItems<FFileIoStoreBlockScatter,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFileIoStoreContainerFilePartition,int> @ 142a3cf60

void __cdecl
DefaultConstructItems<FFileIoStoreContainerFilePartition,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 0;
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPakCompressedBlock,int> @ 142a3cfa0

void __cdecl DefaultConstructItems<FPakCompressedBlock,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FPakEntry,int> @ 142a3cfb0

void __cdecl DefaultConstructItems<FPakEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x38);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      FPakEntry::Reset((FPakEntry *)(puVar1 + -7));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPakFile::FArchiveAndLastAccessTime,int> @ 142a3d020

void __cdecl
DestructItems<FPakFile::FArchiveAndLastAccessTime,int>
          (FArchiveAndLastAccessTime *param_1,int param_2)

{
  FArchive *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Archive).Ptr;
    if (pFVar1 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::IoStore::FContainerPartition,int> @ 142a3d060

void __cdecl
DestructItems<UE::IoStore::FContainerPartition,int>(FContainerPartition *param_1,int param_2)

{
  IMappedFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Filename;
    do {
      pIVar1 = ((TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> *)(pFVar3 + 2))->
               Ptr;
      if (pIVar1 != (IMappedFileHandle *)0x0) {
        (**(code **)pIVar1->_padding_)(pIVar1,1);
      }
      pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = pFVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFileIoStoreContainerFilePartition,int> @ 142a3d0b0

void __cdecl
DestructItems<FFileIoStoreContainerFilePartition,int>
          (FFileIoStoreContainerFilePartition *param_1,int param_2)

{
  IMappedFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->FilePath;
    do {
      pIVar1 = ((TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> *)(pFVar3 + 1))->
               Ptr;
      if (pIVar1 != (IMappedFileHandle *)0x0) {
        (**(code **)pIVar1->_padding_)(pIVar1,1);
      }
      pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = (FString *)((longlong)(pFVar3 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPakPrecacher::FPakData,int> @ 142a3d100

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __cdecl DestructItems<FPakPrecacher::FPakData,int>(FPakData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Signatures).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPakEntry,int> @ 142a3d140

void __cdecl DestructItems<FPakEntry,int>(FPakEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->CompressionBlocks;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPakPlatformFile::FPakListDeferredEntry,int> @ 142a3d180

void __cdecl
DestructItems<FPakPlatformFile::FPakListDeferredEntry,int>
          (FPakListDeferredEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Filename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPakPlatformFile::FPakListEntry,int> @ 142a3d1d0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __cdecl DestructItems<FPakPlatformFile::FPakListEntry,int>(FPakListEntry *param_1,int param_2)

{
  longlong *plVar1;
  FPakFile *pFVar2;
  longlong lVar3;
  TRefCountPtr<FPakFile> *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->PakFile;
    do {
      pFVar2 = pTVar4->Reference;
      if (pFVar2 != (FPakFile *)0x0) {
        plVar1 = &pFVar2->_padding_;
        LOCK();
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
      }
      pTVar4 = pTVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,int> @ 142a3d230

void __cdecl
DestructItems<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,int>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>,int> @ 142a3d270

void __cdecl
DestructItems<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>,int>
          (TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_> *param_1,
          int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<UE::IoStore::FContainer>::operator()
              ((TDefaultDelete<UE::IoStore::FContainer> *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_> *)
              ((longlong)param_1 + 8);
  }
  return;
}

// DestructItems<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,int> @ 142a3d2b0

void __cdecl
DestructItems<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,int>
          (TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    operator_delete(param_1->Ptr,0x18);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>,int> @ 142a3d2f0

void __cdecl
DestructItems<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>,int>
          (TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<FFileIoStoreReader>::operator()
              ((TDefaultDelete<FFileIoStoreReader> *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_> *)
              ((longlong)param_1 + 8);
  }
  return;
}

// DestructItems<FFileIoStoreOffsetSortedRequestQueue,int> @ 142a3d330

void __cdecl
DestructItems<FFileIoStoreOffsetSortedRequestQueue,int>
          (FFileIoStoreOffsetSortedRequestQueue *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Requests).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FFileIoStoreOffsetSortedRequestQueue *)(&param_1->Requests + 2);
  }
  return;
}

// DestructItems<FIntervalTreeNode,int> @ 142a3d370

void __cdecl DestructItems<FIntervalTreeNode,int>(FIntervalTreeNode *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  
  if (param_2 != 0) {
    puVar3 = &param_1->RightChildOrRootOfRightList;
    do {
      if ((((((FIntervalTreeNode *)(puVar3 + -2))->LeftChildOrRootOfLeftList != 0) ||
           (puVar3[-1] != 0)) || (*puVar3 != 0)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("LeftChildOrRootOfLeftList == IntervalTreeInvalidIndex && RootOfOnList == IntervalTreeInvalidIndex && RightChildOrRootOfRightList == IntervalTreeInvalidIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x71,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar3 = puVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindFilesAtPathInIndex<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a409f0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndex<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_1,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FString *param_4,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48 [2];
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,"FindFilesAtPathInIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.inl"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  iVar5 = (this->MountPoint).Data.ArrayNum;
  iVar4 = 0;
  if (iVar5 == 0) {
    pwVar8 = L"";
    iVar5 = iVar4;
  }
  else {
    pwVar8 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  bVar3 = ::FString::StartsWith(param_4,pwVar8,iVar5,IgnoreCase);
  iVar5 = (param_4->Data).ArrayNum;
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  iVar7 = (this->MountPoint).Data.ArrayNum;
  iVar13 = 0;
  if (bVar3) {
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = iVar13;
    }
    iVar7 = iVar4;
    if (iVar4 - iVar5 < iVar4) {
      iVar7 = iVar4 - iVar5;
    }
    if (0 < iVar7) {
      iVar13 = iVar7;
    }
    pFVar1 = pFVar1 + ((longlong)iVar4 - (longlong)iVar13) * 2;
  }
  else {
    iVar11 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar11 = iVar4;
    }
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = iVar4;
    }
    if (iVar5 + -1 < iVar5) {
      iVar5 = iVar5 + -1;
    }
    if (0 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar13 < iVar11) {
      iVar11 = iVar13;
    }
    iVar5 = 0;
    if (0 < iVar11) {
      iVar5 = iVar11;
    }
    if (iVar13 != iVar5) goto LAB_142a40d81;
    if ((iVar13 != 0) && (iVar5 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data,(wchar_t *)pFVar1
                         ,(longlong)iVar5);
      if (iVar4 != 0) goto LAB_142a40d81;
    }
    if (iVar13 != iVar5) goto LAB_142a40d81;
    uStack_80 = 0;
    local_88 = 0;
    pFVar1 = (FScriptContainerElement *)0x0;
    uStack_80._0_4_ = 0;
    uStack_80._4_4_ = 0;
    iVar13 = (int)uStack_80;
    local_78._12_4_ = uStack_80._4_4_;
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_78.DataPtr = (wchar_t *)pFVar1;
  local_78.Size = iVar13;
  if (this->bUseDirectoryTree == false) {
    FindFilesAtPathInIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (this,&local_78,param_1,param_3,&local_b8,param_4,param_5);
  }
  else {
    local_68.Size = iVar13;
    local_68._12_4_ = local_78._12_4_;
    local_68.DataPtr = (wchar_t *)pFVar1;
    FindFilesAtPathInTreeIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (this,&local_68,param_2,param_3,&local_b8,param_4,param_5);
    if (GPak_ValidateDirectoryTreeSearchConsistency != false) {
      pFVar9 = (FScriptContainerElement *)0x0;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      FindFilesAtPathInIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                (this,&local_78,param_1,&local_98,&local_a8,param_4,param_5);
      bVar3 = ValidateDirectoryTreeSearchConsistency<TArray<FString,TSizedDefaultAllocator<32>_>_>
                        (this,param_3,&local_b8,&local_98,&local_a8);
      if (!bVar3) {
        pFVar6 = ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)pFVar1,iVar13);
        if (local_48 != pFVar6) {
          pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
      }
      DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
  }
  if (param_3 == &local_b8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar10 = (longlong)local_b8.ArrayNum;
  if (local_b8.ArrayNum != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_b8.ArrayNum,&param_3->AllocatorInstance,&param_3->ArrayNum,
                       &param_3->ArrayMax);
    memmove((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
            local_b8.AllocatorInstance.Data,lVar10 << 4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  }
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,0);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
LAB_142a40d81:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindFilesAtPathInIndex<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a40e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndex<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_1,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          FString *param_4,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStackY_148 [32];
  TStringView<wchar_t> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar11 = -1 < CpuChannel->Enabled;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  local_d8.DataPtr = (wchar_t *)param_1;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,"FindFilesAtPathInIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.inl"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  iVar5 = (this->MountPoint).Data.ArrayNum;
  iVar3 = 0;
  if (iVar5 == 0) {
    pwVar8 = L"";
    iVar5 = iVar3;
  }
  else {
    pwVar8 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  bVar2 = ::FString::StartsWith(param_4,pwVar8,iVar5,IgnoreCase);
  iVar5 = (param_4->Data).ArrayNum;
  pFVar9 = (param_4->Data).AllocatorInstance.Data;
  iVar6 = (this->MountPoint).Data.ArrayNum;
  iVar7 = 0;
  if (bVar2) {
    iVar3 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar3 = 0;
    }
    iVar5 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar5 = iVar7;
    }
    iVar6 = iVar3;
    if (iVar3 - iVar5 < iVar3) {
      iVar6 = iVar3 - iVar5;
    }
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
    local_108.Size = iVar7;
    local_108.DataPtr = (wchar_t *)(pFVar9 + ((longlong)iVar3 - (longlong)iVar7) * 2);
  }
  else {
    iVar10 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar10 = iVar3;
    }
    iVar5 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar5 = iVar3;
    }
    if (iVar5 + -1 < iVar5) {
      iVar5 = iVar5 + -1;
    }
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
    if (iVar7 < iVar10) {
      iVar10 = iVar7;
    }
    iVar5 = 0;
    if (0 < iVar10) {
      iVar5 = iVar10;
    }
    if (((iVar7 != iVar5) ||
        (((iVar7 != 0 && (iVar5 != 0)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data,
                             (wchar_t *)pFVar9,(longlong)iVar5), iVar3 != 0)))) || (iVar7 != iVar5))
    goto LAB_142a41219;
    local_108.Size = 0;
    local_108._12_4_ = 0;
    local_108.DataPtr = (wchar_t *)0x0;
    param_1 = (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
               *)local_d8.DataPtr;
  }
  uVar1 = local_108._8_8_;
  pwVar8 = local_108.DataPtr;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (this->bUseDirectoryTree == false) {
    FindFilesAtPathInIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&local_108,param_1,param_3,&local_e8,param_4,param_5);
  }
  else {
    local_d8.DataPtr = local_108.DataPtr;
    local_d8.Size = local_108.Size;
    local_d8._12_4_ = local_108._12_4_;
    FindFilesAtPathInTreeIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&local_d8,
               (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                *)local_f8.AllocatorInstance.Data,param_3,&local_e8,param_4,param_5);
    if (GPak_ValidateDirectoryTreeSearchConsistency != false) {
      local_b8._0_8_ = (FScriptContainerElement *)0x0;
      local_b8._8_8_ = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_84 = 0;
      local_78 = (ForElementType<FSetElementId>)0x0;
      local_70 = 0;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      FindFilesAtPathInIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                (this,&local_108,param_1,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8,&local_f8
                 ,param_4,param_5);
      bVar2 = ValidateDirectoryTreeSearchConsistency<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                        (this,param_3,&local_e8,
                         (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8,
                         &local_f8);
      if (!bVar2) {
        pFVar4 = ::FString::ConstructFromPtrSize((FString *)&local_108,pwVar8,(int)uVar1);
        pFVar9 = (FScriptContainerElement *)0x0;
        if (&local_c8 != pFVar4) {
          pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if ((TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
             *)local_108.DataPtr !=
            (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
             *)0x0) {
          FMemory::Free(local_108.DataPtr);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
      }
      DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)local_f8.AllocatorInstance.Data !=
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_b8,0,local_b8._8_4_);
      bVar2 = local_b8._12_4_ != 0;
      local_b8._8_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      if (bVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
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
    }
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<TSizedDefaultAllocator<32>_>
            (param_3,&local_e8);
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
LAB_142a41219:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindFilesAtPathInIndex<`FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a41280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndex<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_1,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          FString *param_4,
          FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
          *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 auStackY_158 [32];
  TStringView<wchar_t> local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
  *local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8 = param_5;
  bVar10 = -1 < CpuChannel->Enabled;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  local_d8.DataPtr = (wchar_t *)param_1;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,"FindFilesAtPathInIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.inl"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  iVar6 = (this->MountPoint).Data.ArrayNum;
  iVar3 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar3 = 0;
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
  }
  bVar2 = ::FString::StartsWith(param_4,pwVar8,iVar3,IgnoreCase);
  iVar6 = (param_4->Data).ArrayNum;
  pFVar9 = (param_4->Data).AllocatorInstance.Data;
  iVar7 = (this->MountPoint).Data.ArrayNum;
  iVar3 = iVar6 + -1;
  if (bVar2) {
    iVar5 = iVar7 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    iVar6 = iVar3;
    if (iVar3 - iVar5 < iVar3) {
      iVar6 = iVar3 - iVar5;
    }
    iVar7 = 0;
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
    local_118.Size = iVar7;
    local_118.DataPtr = (wchar_t *)(pFVar9 + ((longlong)iVar3 - (longlong)iVar7) * 2);
  }
  else {
    iVar5 = iVar7 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    if (iVar5 + -1 < iVar5) {
      iVar5 = iVar5 + -1;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar6 < iVar3) {
      iVar3 = iVar6;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if (((iVar6 != iVar7) ||
        (((iVar6 != 0 && (iVar7 != 0)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data,
                             (wchar_t *)pFVar9,(longlong)iVar7), iVar3 != 0)))) || (iVar6 != iVar7))
    goto LAB_142a41696;
    local_118.Size = 0;
    local_118._12_4_ = 0;
    local_118.DataPtr = (wchar_t *)0x0;
    param_5 = local_e8;
    param_1 = (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
               *)local_d8.DataPtr;
  }
  uVar1 = local_118._8_8_;
  pwVar8 = local_118.DataPtr;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if (this->bUseDirectoryTree == false) {
    FindFilesAtPathInIndexInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&local_118,param_1,param_3,&local_f8,param_4,param_5);
  }
  else {
    local_d8.DataPtr = local_118.DataPtr;
    local_d8.Size = local_118.Size;
    local_d8._12_4_ = local_118._12_4_;
    FindFilesAtPathInTreeIndexInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&local_d8,
               (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                *)local_108.AllocatorInstance.Data,param_3,&local_f8,param_4,param_5);
    if (GPak_ValidateDirectoryTreeSearchConsistency != false) {
      local_b8._0_8_ = (FScriptContainerElement *)0x0;
      local_b8._8_8_ = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_84 = 0;
      local_78 = (ForElementType<FSetElementId>)0x0;
      local_70 = 0;
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      FindFilesAtPathInIndexInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                (this,&local_118,param_1,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8,
                 &local_108,param_4,param_5);
      bVar2 = ValidateDirectoryTreeSearchConsistency<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                        (this,param_3,&local_f8,
                         (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8,
                         &local_108);
      if (!bVar2) {
        pFVar4 = ::FString::ConstructFromPtrSize((FString *)&local_118,pwVar8,(int)uVar1);
        pFVar9 = (FScriptContainerElement *)0x0;
        if (&local_c8 != pFVar4) {
          pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if ((TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
             *)local_118.DataPtr !=
            (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
             *)0x0) {
          FMemory::Free(local_118.DataPtr);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
      }
      DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
      if ((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)local_108.AllocatorInstance.Data !=
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_b8,0,local_b8._8_4_);
      bVar2 = local_b8._12_4_ != 0;
      local_b8._8_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      if (bVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
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
    }
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<TSizedDefaultAllocator<32>_>
            (param_3,&local_f8);
  DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
LAB_142a41696:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindFilesAtPathInIndex<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a41700

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndex<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_1,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FString *param_4,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48 [2];
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,"FindFilesAtPathInIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.inl"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  iVar5 = (this->MountPoint).Data.ArrayNum;
  iVar4 = 0;
  if (iVar5 == 0) {
    pwVar8 = L"";
    iVar5 = iVar4;
  }
  else {
    pwVar8 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  bVar3 = ::FString::StartsWith(param_4,pwVar8,iVar5,IgnoreCase);
  iVar5 = (param_4->Data).ArrayNum;
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  iVar7 = (this->MountPoint).Data.ArrayNum;
  iVar13 = 0;
  if (bVar3) {
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = iVar13;
    }
    iVar7 = iVar4;
    if (iVar4 - iVar5 < iVar4) {
      iVar7 = iVar4 - iVar5;
    }
    if (0 < iVar7) {
      iVar13 = iVar7;
    }
    pFVar1 = pFVar1 + ((longlong)iVar4 - (longlong)iVar13) * 2;
  }
  else {
    iVar11 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar11 = iVar4;
    }
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar5 = iVar4;
    }
    if (iVar5 + -1 < iVar5) {
      iVar5 = iVar5 + -1;
    }
    if (0 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar13 < iVar11) {
      iVar11 = iVar13;
    }
    iVar5 = 0;
    if (0 < iVar11) {
      iVar5 = iVar11;
    }
    if (iVar13 != iVar5) goto LAB_142a41a91;
    if ((iVar13 != 0) && (iVar5 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data,(wchar_t *)pFVar1
                         ,(longlong)iVar5);
      if (iVar4 != 0) goto LAB_142a41a91;
    }
    if (iVar13 != iVar5) goto LAB_142a41a91;
    uStack_80 = 0;
    local_88 = 0;
    pFVar1 = (FScriptContainerElement *)0x0;
    uStack_80._0_4_ = 0;
    uStack_80._4_4_ = 0;
    iVar13 = (int)uStack_80;
    local_78._12_4_ = uStack_80._4_4_;
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_78.DataPtr = (wchar_t *)pFVar1;
  local_78.Size = iVar13;
  if (this->bUseDirectoryTree == false) {
    FindFilesAtPathInIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (this,&local_78,param_1,param_3,&local_b8,param_4,param_5);
  }
  else {
    local_68.Size = iVar13;
    local_68._12_4_ = local_78._12_4_;
    local_68.DataPtr = (wchar_t *)pFVar1;
    FindFilesAtPathInTreeIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (this,&local_68,param_2,param_3,&local_b8,param_4,param_5);
    if (GPak_ValidateDirectoryTreeSearchConsistency != false) {
      pFVar9 = (FScriptContainerElement *)0x0;
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      FindFilesAtPathInIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                (this,&local_78,param_1,&local_98,&local_a8,param_4,param_5);
      bVar3 = ValidateDirectoryTreeSearchConsistency<TArray<FString,TSizedDefaultAllocator<32>_>_>
                        (this,param_3,&local_b8,&local_98,&local_a8);
      if (!bVar3) {
        pFVar6 = ::FString::ConstructFromPtrSize(&local_58,(wchar_t *)pFVar1,iVar13);
        if (local_48 != pFVar6) {
          pFVar9 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
      }
      DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
  }
  if (param_3 == &local_b8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar10 = (longlong)local_b8.ArrayNum;
  if (local_b8.ArrayNum != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_b8.ArrayNum,&param_3->AllocatorInstance,&param_3->ArrayNum,
                       &param_3->ArrayMax);
    memmove((param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
            local_b8.AllocatorInstance.Data,lVar10 << 4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  }
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,0);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
LAB_142a41a91:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindFilesAtPathInIndex<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a41b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndex<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_1,TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                   *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          FString *param_4,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 auStackY_158 [32];
  TStringView<wchar_t> local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
  *local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8 = param_5;
  bVar10 = -1 < CpuChannel->Enabled;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  local_d8.DataPtr = (wchar_t *)param_1;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId14,"FindFilesAtPathInIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.inl"
               ,0xe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId14);
  }
  iVar6 = (this->MountPoint).Data.ArrayNum;
  iVar3 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar3 = 0;
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
  }
  bVar2 = ::FString::StartsWith(param_4,pwVar8,iVar3,IgnoreCase);
  iVar6 = (param_4->Data).ArrayNum;
  pFVar9 = (param_4->Data).AllocatorInstance.Data;
  iVar7 = (this->MountPoint).Data.ArrayNum;
  iVar3 = iVar6 + -1;
  if (bVar2) {
    iVar5 = iVar7 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    iVar6 = iVar3;
    if (iVar3 - iVar5 < iVar3) {
      iVar6 = iVar3 - iVar5;
    }
    iVar7 = 0;
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
    local_118.Size = iVar7;
    local_118.DataPtr = (wchar_t *)(pFVar9 + ((longlong)iVar3 - (longlong)iVar7) * 2);
  }
  else {
    iVar5 = iVar7 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    if (iVar7 == 0) {
      iVar5 = 0;
    }
    if (iVar5 + -1 < iVar5) {
      iVar5 = iVar5 + -1;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar6 < iVar3) {
      iVar3 = iVar6;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if (((iVar6 != iVar7) ||
        (((iVar6 != 0 && (iVar7 != 0)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data,
                             (wchar_t *)pFVar9,(longlong)iVar7), iVar3 != 0)))) || (iVar6 != iVar7))
    goto LAB_142a41f36;
    local_118.Size = 0;
    local_118._12_4_ = 0;
    local_118.DataPtr = (wchar_t *)0x0;
    param_5 = local_e8;
    param_1 = (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
               *)local_d8.DataPtr;
  }
  uVar1 = local_118._8_8_;
  pwVar8 = local_118.DataPtr;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if (this->bUseDirectoryTree == false) {
    FindFilesAtPathInIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&local_118,param_1,param_3,&local_f8,param_4,param_5);
  }
  else {
    local_d8.DataPtr = local_118.DataPtr;
    local_d8.Size = local_118.Size;
    local_d8._12_4_ = local_118._12_4_;
    FindFilesAtPathInTreeIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&local_d8,
               (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
                *)local_108.AllocatorInstance.Data,param_3,&local_f8,param_4,param_5);
    if (GPak_ValidateDirectoryTreeSearchConsistency != false) {
      local_b8._0_8_ = (FScriptContainerElement *)0x0;
      local_b8._8_8_ = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_84 = 0;
      local_78 = (ForElementType<FSetElementId>)0x0;
      local_70 = 0;
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      FindFilesAtPathInIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                (this,&local_118,param_1,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8,
                 &local_108,param_4,param_5);
      bVar2 = ValidateDirectoryTreeSearchConsistency<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                        (this,param_3,&local_f8,
                         (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_b8,
                         &local_108);
      if (!bVar2) {
        pFVar4 = ::FString::ConstructFromPtrSize((FString *)&local_118,pwVar8,(int)uVar1);
        pFVar9 = (FScriptContainerElement *)0x0;
        if (&local_c8 != pFVar4) {
          pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if ((TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
             *)local_118.DataPtr !=
            (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
             *)0x0) {
          FMemory::Free(local_118.DataPtr);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
      }
      DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
      if ((TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)local_108.AllocatorInstance.Data !=
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_b8,0,local_b8._8_4_);
      bVar2 = local_b8._12_4_ != 0;
      local_b8._8_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      if (bVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
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
    }
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<TSizedDefaultAllocator<32>_>
            (param_3,&local_f8);
  DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
LAB_142a41f36:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindFilesAtPathInIndexInternal<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a41fa0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_6)

{
  ulonglong uVar1;
  uint uVar2;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *pTVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  local_98.Size = 0;
  iVar4 = *(int *)&param_2->field_0x28;
  local_88 = &param_2->field_0x10;
  local_78 = 0;
  local_98._12_4_ = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar8 = (uint *)local_88;
    }
    uVar2 = *puVar8;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_98.Size;
      local_78 = local_78 + 0x20;
      local_98.Size = local_98.Size + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Size) goto LAB_142a4204e;
      uVar2 = puVar8[lVar5 + 1];
    }
    local_98._12_4_ = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_98._12_4_ * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar5;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_142a4204e:
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = local_98._8_8_;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98.DataPtr = (wchar_t *)param_2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar4) {
    do {
      pTVar3 = local_68;
      lVar5 = (longlong)TStack_60.CurrentBitIndex * 0x68;
      iVar6 = *(int *)(*(longlong *)local_68 + 8 + lVar5);
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      iVar6 = (int)*(undefined8 *)&param_1->Size;
      if (iVar6 < iVar4) {
        iVar4 = iVar6;
      }
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      if (iVar6 == iVar7) {
        if ((iVar6 != 0) && (iVar7 != 0)) {
          iVar4 = iVar7;
          if (iVar6 < iVar7) {
            iVar4 = iVar6;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_1->DataPtr,*(wchar_t **)(*(longlong *)local_68 + lVar5),
                             (longlong)iVar4);
          if (iVar4 != 0) goto LAB_142a4217c;
        }
        if (iVar6 == iVar7) {
          puVar9 = (undefined8 *)(*(longlong *)pTVar3 + lVar5);
          local_98.DataPtr = (wchar_t *)*puVar9;
          iVar4 = *(int *)(puVar9 + 1) + -1;
          if (*(int *)(puVar9 + 1) == 0) {
            iVar4 = 0;
          }
          local_98._8_8_ = CONCAT44(uStack_9c,iVar4);
          FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                    (&this->MountPoint,&local_98,
                     (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                      *)(puVar9 + 2),param_3,param_4,param_5,param_6);
        }
      }
LAB_142a4217c:
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// FindFilesAtPathInIndexInternal<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a421d0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_6)

{
  ulonglong uVar1;
  uint uVar2;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *pTVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  local_98.Size = 0;
  iVar4 = *(int *)&param_2->field_0x28;
  local_88 = &param_2->field_0x10;
  local_78 = 0;
  local_98._12_4_ = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar8 = (uint *)local_88;
    }
    uVar2 = *puVar8;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_98.Size;
      local_78 = local_78 + 0x20;
      local_98.Size = local_98.Size + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Size) goto LAB_142a4227e;
      uVar2 = puVar8[lVar5 + 1];
    }
    local_98._12_4_ = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_98._12_4_ * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar5;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_142a4227e:
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = local_98._8_8_;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98.DataPtr = (wchar_t *)param_2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar4) {
    do {
      pTVar3 = local_68;
      lVar5 = (longlong)TStack_60.CurrentBitIndex * 0x68;
      iVar6 = *(int *)(*(longlong *)local_68 + 8 + lVar5);
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      iVar6 = (int)*(undefined8 *)&param_1->Size;
      if (iVar6 < iVar4) {
        iVar4 = iVar6;
      }
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      if (iVar6 == iVar7) {
        if ((iVar6 != 0) && (iVar7 != 0)) {
          iVar4 = iVar7;
          if (iVar6 < iVar7) {
            iVar4 = iVar6;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_1->DataPtr,*(wchar_t **)(*(longlong *)local_68 + lVar5),
                             (longlong)iVar4);
          if (iVar4 != 0) goto LAB_142a423ac;
        }
        if (iVar6 == iVar7) {
          puVar9 = (undefined8 *)(*(longlong *)pTVar3 + lVar5);
          local_98.DataPtr = (wchar_t *)*puVar9;
          iVar4 = *(int *)(puVar9 + 1) + -1;
          if (*(int *)(puVar9 + 1) == 0) {
            iVar4 = 0;
          }
          local_98._8_8_ = CONCAT44(uStack_9c,iVar4);
          FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                    (&this->MountPoint,&local_98,
                     (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                      *)(puVar9 + 2),param_3,param_4,param_5,param_6);
        }
      }
LAB_142a423ac:
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// FindFilesAtPathInIndexInternal<`FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a42400

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndexInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
          *param_6)

{
  ulonglong uVar1;
  uint uVar2;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *pTVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  local_98.Size = 0;
  iVar4 = *(int *)&param_2->field_0x28;
  local_88 = &param_2->field_0x10;
  local_78 = 0;
  local_98._12_4_ = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar8 = (uint *)local_88;
    }
    uVar2 = *puVar8;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_98.Size;
      local_78 = local_78 + 0x20;
      local_98.Size = local_98.Size + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Size) goto LAB_142a424ae;
      uVar2 = puVar8[lVar5 + 1];
    }
    local_98._12_4_ = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_98._12_4_ * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar5;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_142a424ae:
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = local_98._8_8_;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98.DataPtr = (wchar_t *)param_2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar4) {
    do {
      pTVar3 = local_68;
      lVar5 = (longlong)TStack_60.CurrentBitIndex * 0x68;
      iVar6 = *(int *)(*(longlong *)local_68 + 8 + lVar5);
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      iVar6 = (int)*(undefined8 *)&param_1->Size;
      if (iVar6 < iVar4) {
        iVar4 = iVar6;
      }
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      if (iVar6 == iVar7) {
        if ((iVar6 != 0) && (iVar7 != 0)) {
          iVar4 = iVar7;
          if (iVar6 < iVar7) {
            iVar4 = iVar6;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_1->DataPtr,*(wchar_t **)(*(longlong *)local_68 + lVar5),
                             (longlong)iVar4);
          if (iVar4 != 0) goto LAB_142a425dc;
        }
        if (iVar6 == iVar7) {
          puVar9 = (undefined8 *)(*(longlong *)pTVar3 + lVar5);
          local_98.DataPtr = (wchar_t *)*puVar9;
          iVar4 = *(int *)(puVar9 + 1) + -1;
          if (*(int *)(puVar9 + 1) == 0) {
            iVar4 = 0;
          }
          local_98._8_8_ = CONCAT44(uStack_9c,iVar4);
          FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                    (&this->MountPoint,&local_98,
                     (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                      *)(puVar9 + 2),param_3,param_4,param_5,param_6);
        }
      }
LAB_142a425dc:
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// FindFilesAtPathInIndexInternal<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a42630

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_6)

{
  ulonglong uVar1;
  uint uVar2;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *pTVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  local_98.Size = 0;
  iVar4 = *(int *)&param_2->field_0x28;
  local_88 = &param_2->field_0x10;
  local_78 = 0;
  local_98._12_4_ = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar8 = (uint *)local_88;
    }
    uVar2 = *puVar8;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_98.Size;
      local_78 = local_78 + 0x20;
      local_98.Size = local_98.Size + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Size) goto LAB_142a426de;
      uVar2 = puVar8[lVar5 + 1];
    }
    local_98._12_4_ = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_98._12_4_ * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar5;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_142a426de:
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = local_98._8_8_;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98.DataPtr = (wchar_t *)param_2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar4) {
    do {
      pTVar3 = local_68;
      lVar5 = (longlong)TStack_60.CurrentBitIndex * 0x68;
      iVar6 = *(int *)(*(longlong *)local_68 + 8 + lVar5);
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      iVar6 = (int)*(undefined8 *)&param_1->Size;
      if (iVar6 < iVar4) {
        iVar4 = iVar6;
      }
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      if (iVar6 == iVar7) {
        if ((iVar6 != 0) && (iVar7 != 0)) {
          iVar4 = iVar7;
          if (iVar6 < iVar7) {
            iVar4 = iVar6;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_1->DataPtr,*(wchar_t **)(*(longlong *)local_68 + lVar5),
                             (longlong)iVar4);
          if (iVar4 != 0) goto LAB_142a4280c;
        }
        if (iVar6 == iVar7) {
          puVar9 = (undefined8 *)(*(longlong *)pTVar3 + lVar5);
          local_98.DataPtr = (wchar_t *)*puVar9;
          iVar4 = *(int *)(puVar9 + 1) + -1;
          if (*(int *)(puVar9 + 1) == 0) {
            iVar4 = 0;
          }
          local_98._8_8_ = CONCAT44(uStack_9c,iVar4);
          FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                    (&this->MountPoint,&local_98,
                     (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                      *)(puVar9 + 2),param_3,param_4,param_5,param_6);
        }
      }
LAB_142a4280c:
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// FindFilesAtPathInIndexInternal<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a42860

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
          *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_6)

{
  ulonglong uVar1;
  uint uVar2;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *pTVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  local_98.Size = 0;
  iVar4 = *(int *)&param_2->field_0x28;
  local_88 = &param_2->field_0x10;
  local_78 = 0;
  local_98._12_4_ = 1;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar8 = (uint *)local_88;
    }
    uVar2 = *puVar8;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_98.Size;
      local_78 = local_78 + 0x20;
      local_98.Size = local_98.Size + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98.Size) goto LAB_142a4290e;
      uVar2 = puVar8[lVar5 + 1];
    }
    local_98._12_4_ = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_98._12_4_ * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar5;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_142a4290e:
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = local_98._8_8_;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98.DataPtr = (wchar_t *)param_2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar4) {
    do {
      pTVar3 = local_68;
      lVar5 = (longlong)TStack_60.CurrentBitIndex * 0x68;
      iVar6 = *(int *)(*(longlong *)local_68 + 8 + lVar5);
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      iVar6 = (int)*(undefined8 *)&param_1->Size;
      if (iVar6 < iVar4) {
        iVar4 = iVar6;
      }
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      if (iVar6 == iVar7) {
        if ((iVar6 != 0) && (iVar7 != 0)) {
          iVar4 = iVar7;
          if (iVar6 < iVar7) {
            iVar4 = iVar6;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            (param_1->DataPtr,*(wchar_t **)(*(longlong *)local_68 + lVar5),
                             (longlong)iVar4);
          if (iVar4 != 0) goto LAB_142a42a3c;
        }
        if (iVar6 == iVar7) {
          puVar9 = (undefined8 *)(*(longlong *)pTVar3 + lVar5);
          local_98.DataPtr = (wchar_t *)*puVar9;
          iVar4 = *(int *)(puVar9 + 1) + -1;
          if (*(int *)(puVar9 + 1) == 0) {
            iVar4 = 0;
          }
          local_98._8_8_ = CONCAT44(uStack_9c,iVar4);
          FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                    (&this->MountPoint,&local_98,
                     (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                      *)(puVar9 + 2),param_3,param_4,param_5,param_6);
        }
      }
LAB_142a42a3c:
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// FindFilesAtPathInPakDirectoryInternal<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a42a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a42dfa) */
/* WARNING: Removing unreachable block (ram,0x000142a43254) */

void __cdecl
FPakFile::
FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FString *param_1,TStringView<wchar_t> *param_2,
          TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,FString *param_6,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined1 auStackY_1278 [32];
  FString local_1228;
  FString local_1218;
  FString local_1208;
  FString *local_11f8;
  wchar_t *local_11f0;
  int iStack_11e8;
  undefined4 uStack_11e4;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_11e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11d8;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_11b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11a8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1180;
  int local_1178;
  int local_1174;
  TStringView<wchar_t> local_1168;
  FScriptContainerElement *local_1158;
  int iStack_1150;
  undefined4 uStack_114c;
  FScriptContainerElement *local_1148;
  int iStack_1140;
  undefined4 uStack_113c;
  FScriptContainerElement *local_1138;
  int iStack_1130;
  undefined4 uStack_112c;
  FString local_1128;
  TStringView<wchar_t> local_1118;
  TStringView<wchar_t> local_1108;
  TStringView<wchar_t> local_10f8;
  TStringView<wchar_t> local_10e8;
  TStringView<wchar_t> local_10d8 [2];
  undefined4 local_10ac;
  undefined4 local_108c;
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1278;
  local_1158 = (param_1->Data).AllocatorInstance.Data;
  local_1118.DataPtr = param_2->DataPtr;
  local_1118.Size = param_2->Size;
  local_1118._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar7 = 0;
  iVar8 = (param_1->Data).ArrayNum;
  iVar13 = 0;
  iStack_1150 = iVar8 + -1;
  if (iVar8 == 0) {
    iStack_1150 = iVar13;
  }
  local_1108._12_4_ = uStack_114c;
  local_1108.Size = iStack_1150;
  local_1180 = param_5;
  local_11f8 = param_6;
  local_1108.DataPtr = (wchar_t *)local_1158;
  PakPathCombineInternal<wchar_t>(&local_1228,&local_1108,&local_1118);
  iVar8 = 0;
  if (param_7->bRecursive == true) {
    if (param_7->bIncludeFiles != false) {
      local_1088.Base = local_1068;
      local_1088.bIsDynamic = false;
      local_1088.bIsExternal = false;
      TStack_11d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_1088.CurPos = local_1068;
      uVar6 = 1;
      local_1088.End = (wchar_t *)&local_868;
      iVar9 = *(int *)&param_3->field_0x28;
      TStack_11a8.BaseBitIndex = iVar8;
      TStack_11a8.CurrentBitIndex = 0;
      if (iVar9 != 0) {
        puVar16 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)TStack_11d8.Array;
        }
        uVar2 = *puVar16;
        TStack_11a8.BaseBitIndex = iVar7;
        iVar13 = iVar7;
        while (uVar2 == 0) {
          lVar10 = (longlong)iVar13;
          TStack_11a8.BaseBitIndex = TStack_11a8.BaseBitIndex + 0x20;
          iVar13 = iVar13 + 1;
          TStack_11a8.CurrentBitIndex = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142a42c0f;
          uVar2 = puVar16[lVar10 + 1];
        }
        uVar6 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1178 = (int)lVar10;
        TStack_11a8.CurrentBitIndex = TStack_11a8.BaseBitIndex + -1 + local_1178;
        if (iVar9 < TStack_11a8.CurrentBitIndex) {
          TStack_11a8.CurrentBitIndex = iVar9;
        }
      }
LAB_142a42c0f:
      TStack_11a8._padding_ = CONCAT44(uVar6,iVar13);
      TStack_11a8.UnvisitedBitMask = 0xffffffff;
      TStack_11a8._28_4_ = local_10ac;
      TStack_11d8._padding_ = TStack_11a8._padding_;
      TStack_11d8.BaseBitIndex = TStack_11a8.BaseBitIndex;
      TStack_11d8._28_4_ = local_10ac;
      TStack_11d8.UnvisitedBitMask = 0xffffffff;
      TStack_11d8.CurrentBitIndex = TStack_11a8.CurrentBitIndex;
      local_11e0 = param_3;
      local_11b0 = param_3;
      TStack_11a8.Array = TStack_11d8.Array;
      if (TStack_11a8.CurrentBitIndex < iVar9) {
        uStack_11e4 = local_1168._12_4_;
        iVar13 = TStack_11a8.CurrentBitIndex;
        do {
          iVar7 = *(int *)((longlong)iVar13 * 0x20 + 8 + *(longlong *)local_11e0);
          puVar3 = *(uchar **)((longlong)iVar13 * 0x20 + *(longlong *)local_11e0);
          iVar13 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar13 = iVar8;
          }
          iVar7 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar13);
          if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + iVar7)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1088,(longlong)iVar7);
          }
          if (iVar13 != 0) {
            local_1088.CurPos = UE::Core::Private::Convert(local_1088.CurPos,iVar7,puVar3,iVar13);
          }
          local_11f0 = local_1088.Base;
          local_1148 = local_1228.Data.AllocatorInstance.Data;
          iStack_11e8 = (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
          local_10f8._12_4_ = uStack_11e4;
          local_10f8.Size = iStack_11e8;
          iStack_1140 = local_1228.Data.ArrayNum + -1;
          if (local_1228.Data.ArrayNum == 0) {
            iStack_1140 = iVar8;
          }
          local_10e8._12_4_ = uStack_113c;
          local_10e8.Size = iStack_1140;
          local_10e8.DataPtr = (wchar_t *)local_1228.Data.AllocatorInstance.Data;
          local_10f8.DataPtr = local_1088.Base;
          PakPathCombineInternal<wchar_t>(&local_1218,&local_10e8,&local_10f8);
          pFVar11 = (param_4->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_1218) &&
              ((FScriptContainerElement *)&local_1218 < pFVar11 + (longlong)param_4->ArrayMax * 0x10
              )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = param_4->ArrayNum;
          if (iVar13 == param_4->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar13 + 1;
          pFVar11 = (param_4->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_1218.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 8) = local_1218.Data.ArrayNum;
          *(int *)(pFVar11 + 0xc) = local_1218.Data.ArrayMax;
          local_1218.Data.ArrayNum = 0;
          local_1218.Data.ArrayMax = 0;
          local_1218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1088.CurPos = local_1088.Base;
          TStack_11d8.UnvisitedBitMask = TStack_11d8.UnvisitedBitMask & ~TStack_11d8._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11d8);
          iVar13 = TStack_11d8.CurrentBitIndex;
        } while (TStack_11d8.CurrentBitIndex < (TStack_11d8.Array)->NumBits);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
      param_6 = local_11f8;
      param_5 = local_1180;
    }
    if (param_7->bIncludeDirectories != false) {
      iVar8 = (param_6->Data).ArrayNum;
      if (iVar8 == local_1228.Data.ArrayNum) {
        if (iVar8 < 2) goto LAB_142a43304;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_6->Data).AllocatorInstance.Data,
                           (wchar_t *)local_1228.Data.AllocatorInstance.Data);
        bVar5 = iVar8 == 0;
      }
      else {
        bVar5 = iVar8 + local_1228.Data.ArrayNum == 1;
      }
      if (!bVar5) {
        pFVar11 = (param_5->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_1228) &&
            ((FScriptContainerElement *)&local_1228 < pFVar11 + (longlong)param_5->ArrayMax * 0x10))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = param_5->ArrayNum;
        if (iVar8 == param_5->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar8 + 1;
        pFVar11 = (param_5->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar11 = 0;
        *(FScriptContainerElement **)pFVar11 = local_1228.Data.AllocatorInstance.Data;
        local_1228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 8) = local_1228.Data.ArrayNum;
        *(int *)(pFVar11 + 0xc) = local_1228.Data.ArrayMax;
        local_1228.Data.ArrayNum = 0;
        local_1228.Data.ArrayMax = 0;
      }
    }
  }
  else {
    iVar9 = (param_6->Data).ArrayNum;
    uVar6 = 1;
    iVar15 = local_1228.Data.ArrayNum + -1;
    if (local_1228.Data.ArrayNum == 0) {
      iVar15 = iVar8;
    }
    iVar14 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar14 = iVar8;
    }
    if (iVar14 < iVar15) {
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      iVar9 = ::FString::Find(&local_1228,L"/",1,CaseSensitive,FromStart,iVar9);
    }
    else {
      iVar9 = -1;
    }
    local_11f8 = (FString *)CONCAT44(local_11f8._4_4_,iVar9);
    iVar15 = local_1228.Data.ArrayNum;
    if ((param_7->bIncludeFiles != false) && (iVar9 == -1)) {
      local_868.Base = local_848;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      TStack_11d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_868.CurPos = local_848;
      local_868.End = (wchar_t *)local_48;
      iVar15 = *(int *)&param_3->field_0x28;
      iVar14 = iVar8;
      TStack_11d8.BaseBitIndex = iVar8;
      TStack_11d8.CurrentBitIndex = 0;
      if (iVar15 != 0) {
        puVar16 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)TStack_11d8.Array;
        }
        uVar2 = *puVar16;
        TStack_11d8.BaseBitIndex = iVar7;
        iVar14 = iVar7;
        while (uVar2 == 0) {
          lVar10 = (longlong)iVar14;
          TStack_11d8.BaseBitIndex = TStack_11d8.BaseBitIndex + 0x20;
          iVar14 = iVar14 + 1;
          TStack_11d8.CurrentBitIndex = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142a4306f;
          uVar2 = puVar16[lVar10 + 1];
        }
        uVar6 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1174 = (int)lVar10;
        TStack_11d8.CurrentBitIndex = TStack_11d8.BaseBitIndex + -1 + local_1174;
        if (iVar15 < TStack_11d8.CurrentBitIndex) {
          TStack_11d8.CurrentBitIndex = iVar15;
        }
      }
LAB_142a4306f:
      TStack_11d8._padding_ = CONCAT44(uVar6,iVar14);
      TStack_11d8.UnvisitedBitMask = 0xffffffff;
      TStack_11d8._28_4_ = local_108c;
      TStack_11a8._padding_ = TStack_11d8._padding_;
      TStack_11a8.BaseBitIndex = TStack_11d8.BaseBitIndex;
      TStack_11a8._28_4_ = local_108c;
      TStack_11a8.UnvisitedBitMask = 0xffffffff;
      TStack_11a8.CurrentBitIndex = TStack_11d8.CurrentBitIndex;
      local_11e0 = param_3;
      local_11b0 = param_3;
      TStack_11a8.Array = TStack_11d8.Array;
      if (TStack_11d8.CurrentBitIndex < iVar15) {
        uStack_11e4 = local_1168._12_4_;
        iVar7 = TStack_11d8.CurrentBitIndex;
        do {
          iVar9 = *(int *)((longlong)iVar7 * 0x20 + 8 + *(longlong *)local_11b0);
          puVar3 = *(uchar **)((longlong)iVar7 * 0x20 + *(longlong *)local_11b0);
          iVar7 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar7 = iVar8;
          }
          iVar9 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar7);
          if (local_868.End < local_868.CurPos + iVar9) {
            TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar9);
          }
          if (iVar7 != 0) {
            local_868.CurPos = UE::Core::Private::Convert(local_868.CurPos,iVar9,puVar3,iVar7);
          }
          local_11f0 = local_868.Base;
          local_1138 = local_1228.Data.AllocatorInstance.Data;
          iStack_11e8 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          local_10d8[0]._12_4_ = uStack_11e4;
          local_10d8[0].Size = iStack_11e8;
          iStack_1130 = local_1228.Data.ArrayNum + -1;
          if (local_1228.Data.ArrayNum == 0) {
            iStack_1130 = iVar8;
          }
          local_1168._12_4_ = uStack_112c;
          local_1168.Size = iStack_1130;
          local_1168.DataPtr = (wchar_t *)local_1228.Data.AllocatorInstance.Data;
          local_10d8[0].DataPtr = local_868.Base;
          PakPathCombineInternal<wchar_t>(&local_1208,&local_1168,local_10d8);
          pFVar11 = (param_4->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_1208) &&
              ((FScriptContainerElement *)&local_1208 < pFVar11 + (longlong)param_4->ArrayMax * 0x10
              )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = param_4->ArrayNum;
          if (iVar7 == param_4->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar7 + 1;
          pFVar11 = (param_4->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_1208.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 8) = local_1208.Data.ArrayNum;
          *(int *)(pFVar11 + 0xc) = local_1208.Data.ArrayMax;
          local_1208.Data.ArrayNum = 0;
          local_1208.Data.ArrayMax = 0;
          local_1208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_868.CurPos = local_868.Base;
          TStack_11a8.UnvisitedBitMask = TStack_11a8.UnvisitedBitMask & ~TStack_11a8._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11a8);
          iVar7 = TStack_11a8.CurrentBitIndex;
        } while (TStack_11a8.CurrentBitIndex < (TStack_11a8.Array)->NumBits);
        iVar9 = (int)local_11f8;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      param_5 = local_1180;
      iVar15 = local_1228.Data.ArrayNum;
    }
    if ((param_7->bIncludeDirectories != false) && (-1 < iVar9)) {
      iVar7 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar7 = iVar8;
      }
      if (iVar9 + 1 < iVar7) {
        iVar7 = iVar9 + 1;
      }
      if (0 < iVar7) {
        iVar13 = iVar7;
      }
      FVar12.Data = (FScriptContainerElement *)L"";
      if (iVar15 != 0) {
        FVar12.Data = local_1228.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_1128,(wchar_t *)FVar12.Data,iVar13);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_5,&local_1128);
      if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1128.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_142a43304:
  if (local_1228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1228.Data.AllocatorInstance.Data);
  }
  return;
}

// FindFilesAtPathInPakDirectoryInternal<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a43370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPakFile::
FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FString *param_1,TStringView<wchar_t> *param_2,
          TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *param_3,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,FString *param_6,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined1 auStackY_1258 [32];
  FString local_1208;
  FString local_11f8;
  undefined1 local_11e8 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11d8;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_11b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11a8;
  int local_1180;
  undefined1 local_117c [12];
  undefined8 uStack_1170;
  FScriptContainerElement *local_1168;
  int iStack_1160;
  undefined4 uStack_115c;
  FScriptContainerElement *local_1158;
  int iStack_1150;
  undefined4 uStack_114c;
  FString local_1148;
  FScriptContainerElement *local_1138;
  int iStack_1130;
  undefined4 uStack_112c;
  FString local_1128;
  TStringView<wchar_t> local_1118;
  TStringView<wchar_t> local_1108;
  TStringView<wchar_t> local_10f8;
  TStringView<wchar_t> local_10e8;
  TStringView<wchar_t> local_10d8 [2];
  undefined4 local_10ac;
  undefined4 local_108c;
  TStringBuilderBase<wchar_t> local_1088;
  FScriptContainerElement local_1068 [2048];
  TStringBuilderBase<wchar_t> local_868;
  FScriptContainerElement local_848 [2048];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1258;
  local_1168 = (param_1->Data).AllocatorInstance.Data;
  local_1118.DataPtr = param_2->DataPtr;
  local_1118.Size = param_2->Size;
  local_1118._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar7 = 0;
  iVar8 = (param_1->Data).ArrayNum;
  iVar14 = 0;
  iStack_1160 = iVar8 + -1;
  if (iVar8 == 0) {
    iStack_1160 = iVar14;
  }
  local_1108._12_4_ = uStack_115c;
  local_1108.Size = iStack_1160;
  local_11e8._0_8_ = param_4;
  local_1108.DataPtr = (wchar_t *)local_1168;
  PakPathCombineInternal<wchar_t>(&local_1208,&local_1108,&local_1118);
  uVar5 = local_11e8._0_8_;
  iVar8 = 0;
  if (param_7->bRecursive == true) {
    if (param_7->bIncludeFiles != false) {
      local_1088.Base = (wchar_t *)local_1068;
      local_1088.bIsDynamic = false;
      local_1088.bIsExternal = false;
      TStack_11d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_1088.CurPos = (wchar_t *)local_1068;
      uVar6 = 1;
      local_1088.End = (wchar_t *)&local_868;
      iVar9 = *(int *)&param_3->field_0x28;
      TStack_11a8.BaseBitIndex = iVar8;
      TStack_11a8.CurrentBitIndex = 0;
      if (iVar9 != 0) {
        puVar16 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)TStack_11d8.Array;
        }
        uVar2 = *puVar16;
        TStack_11a8.BaseBitIndex = iVar7;
        iVar14 = iVar7;
        while (uVar2 == 0) {
          lVar11 = (longlong)iVar14;
          TStack_11a8.BaseBitIndex = TStack_11a8.BaseBitIndex + 0x20;
          iVar14 = iVar14 + 1;
          TStack_11a8.CurrentBitIndex = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142a434ef;
          uVar2 = puVar16[lVar11 + 1];
        }
        uVar6 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_1180 = (int)lVar11;
        TStack_11a8.CurrentBitIndex = TStack_11a8.BaseBitIndex + -1 + local_1180;
        if (iVar9 < TStack_11a8.CurrentBitIndex) {
          TStack_11a8.CurrentBitIndex = iVar9;
        }
      }
LAB_142a434ef:
      TStack_11a8._padding_ = CONCAT44(uVar6,iVar14);
      TStack_11a8.UnvisitedBitMask = 0xffffffff;
      TStack_11a8._28_4_ = local_10ac;
      TStack_11d8._padding_ = TStack_11a8._padding_;
      TStack_11d8.BaseBitIndex = TStack_11a8.BaseBitIndex;
      TStack_11d8._28_4_ = local_10ac;
      TStack_11d8.UnvisitedBitMask = 0xffffffff;
      TStack_11d8.CurrentBitIndex = TStack_11a8.CurrentBitIndex;
      local_11e8._8_8_ = param_3;
      local_11b0 = param_3;
      TStack_11a8.Array = TStack_11d8.Array;
      if (TStack_11a8.CurrentBitIndex < iVar9) {
        local_11f8.Data.ArrayMax = uStack_1170._4_4_;
        iVar14 = TStack_11a8.CurrentBitIndex;
        do {
          iVar7 = *(int *)((longlong)iVar14 * 0x20 + 8 + *(longlong *)local_11e8._8_8_);
          puVar3 = *(uchar **)((longlong)iVar14 * 0x20 + *(longlong *)local_11e8._8_8_);
          iVar14 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar14 = iVar8;
          }
          iVar7 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar14);
          if (local_1088.End <
              (TStringBuilderBase<wchar_t> *)((longlong)local_1088.CurPos + (longlong)iVar7 * 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1088,(longlong)iVar7);
          }
          if (iVar14 != 0) {
            local_1088.CurPos = UE::Core::Private::Convert(local_1088.CurPos,iVar7,puVar3,iVar14);
          }
          local_11f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1088.Base;
          local_1158 = local_1208.Data.AllocatorInstance.Data;
          local_11f8.Data.ArrayNum =
               (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
          local_10f8._12_4_ = local_11f8.Data.ArrayMax;
          local_10f8.Size = local_11f8.Data.ArrayNum;
          iStack_1150 = local_1208.Data.ArrayNum + -1;
          if (local_1208.Data.ArrayNum == 0) {
            iStack_1150 = iVar8;
          }
          local_10e8._12_4_ = uStack_114c;
          local_10e8.Size = iStack_1150;
          local_10e8.DataPtr = (wchar_t *)local_1208.Data.AllocatorInstance.Data;
          local_10f8.DataPtr = local_1088.Base;
          PakPathCombineInternal<wchar_t>(&local_1148,&local_10e8,&local_10f8);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)uVar5,
                     (FString *)local_117c,(bool *)&local_1148);
          if (local_1148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1148.Data.AllocatorInstance.Data);
          }
          local_1088.CurPos = local_1088.Base;
          TStack_11d8.UnvisitedBitMask = TStack_11d8.UnvisitedBitMask & ~TStack_11d8._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11d8);
          iVar14 = TStack_11d8.CurrentBitIndex;
        } while (TStack_11d8.CurrentBitIndex < (TStack_11d8.Array)->NumBits);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
    }
    if (param_7->bIncludeDirectories != false) {
      iVar8 = (param_6->Data).ArrayNum;
      if (iVar8 == local_1208.Data.ArrayNum) {
        if (iVar8 < 2) goto LAB_142a43a96;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_6->Data).AllocatorInstance.Data,
                           (wchar_t *)local_1208.Data.AllocatorInstance.Data);
        bVar17 = iVar8 == 0;
      }
      else {
        bVar17 = iVar8 + local_1208.Data.ArrayNum == 1;
      }
      if (!bVar17) {
        pFVar12 = (param_5->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_1208) &&
            ((FScriptContainerElement *)&local_1208 < pFVar12 + (longlong)param_5->ArrayMax * 0x10))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = param_5->ArrayNum;
        if (iVar8 == param_5->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar8 + 1;
        pFVar12 = (param_5->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_1208.Data.AllocatorInstance.Data;
        local_1208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar12 + 8) = local_1208.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_1208.Data.ArrayMax;
        local_1208.Data.ArrayNum = 0;
        local_1208.Data.ArrayMax = 0;
      }
    }
  }
  else {
    iVar9 = (param_6->Data).ArrayNum;
    uVar6 = 1;
    iVar10 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar10 = iVar8;
    }
    iVar15 = local_1208.Data.ArrayNum + -1;
    if (local_1208.Data.ArrayNum == 0) {
      iVar15 = iVar8;
    }
    if (iVar10 < iVar15) {
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      iVar9 = ::FString::Find(&local_1208,L"/",1,CaseSensitive,FromStart,iVar9);
    }
    else {
      iVar9 = -1;
    }
    uVar5 = local_11e8._0_8_;
    iVar10 = local_1208.Data.ArrayNum;
    if ((param_7->bIncludeFiles != false) && (iVar9 == -1)) {
      local_868.Base = (wchar_t *)local_848;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      TStack_11d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_868.CurPos = (wchar_t *)local_848;
      local_868.End = (wchar_t *)local_48;
      iVar10 = *(int *)&param_3->field_0x28;
      iVar15 = iVar8;
      TStack_11d8.BaseBitIndex = iVar8;
      TStack_11d8.CurrentBitIndex = 0;
      if (iVar10 != 0) {
        puVar16 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)TStack_11d8.Array;
        }
        uVar2 = *puVar16;
        TStack_11d8.BaseBitIndex = iVar7;
        iVar15 = iVar7;
        while (uVar2 == 0) {
          lVar11 = (longlong)iVar15;
          TStack_11d8.BaseBitIndex = TStack_11d8.BaseBitIndex + 0x20;
          iVar15 = iVar15 + 1;
          TStack_11d8.CurrentBitIndex = iVar10;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142a4389c;
          uVar2 = puVar16[lVar11 + 1];
        }
        uVar6 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        TStack_11d8.CurrentBitIndex = TStack_11d8.BaseBitIndex + -1 + (int)lVar11;
        if (iVar10 < TStack_11d8.CurrentBitIndex) {
          TStack_11d8.CurrentBitIndex = iVar10;
        }
      }
LAB_142a4389c:
      TStack_11d8._padding_ = CONCAT44(uVar6,iVar15);
      TStack_11d8.UnvisitedBitMask = 0xffffffff;
      TStack_11d8._28_4_ = local_108c;
      TStack_11a8._padding_ = TStack_11d8._padding_;
      TStack_11a8.BaseBitIndex = TStack_11d8.BaseBitIndex;
      TStack_11a8._28_4_ = local_108c;
      TStack_11a8.UnvisitedBitMask = 0xffffffff;
      TStack_11a8.CurrentBitIndex = TStack_11d8.CurrentBitIndex;
      local_11e8._8_8_ = param_3;
      local_11b0 = param_3;
      TStack_11a8.Array = TStack_11d8.Array;
      if (TStack_11d8.CurrentBitIndex < iVar10) {
        local_11f8.Data.ArrayMax = uStack_1170._4_4_;
        iVar7 = TStack_11d8.CurrentBitIndex;
        do {
          iVar10 = *(int *)((longlong)iVar7 * 0x20 + 8 + *(longlong *)local_11b0);
          puVar3 = *(uchar **)((longlong)iVar7 * 0x20 + *(longlong *)local_11b0);
          iVar7 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar7 = iVar8;
          }
          iVar10 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar7);
          if (local_868.End <
              (FScriptContainerElement *)((longlong)local_868.CurPos + (longlong)iVar10 * 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar10);
          }
          if (iVar7 != 0) {
            local_868.CurPos = UE::Core::Private::Convert(local_868.CurPos,iVar10,puVar3,iVar7);
          }
          local_11f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_868.Base;
          local_1138 = local_1208.Data.AllocatorInstance.Data;
          local_11f8.Data.ArrayNum =
               (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          local_10d8[0]._12_4_ = local_11f8.Data.ArrayMax;
          local_10d8[0].Size = local_11f8.Data.ArrayNum;
          iStack_1130 = local_1208.Data.ArrayNum + -1;
          if (local_1208.Data.ArrayNum == 0) {
            iStack_1130 = iVar8;
          }
          uStack_1170 = CONCAT44(uStack_112c,iStack_1130);
          local_117c._4_8_ = local_1208.Data.AllocatorInstance.Data;
          local_10d8[0].DataPtr = local_868.Base;
          PakPathCombineInternal<wchar_t>
                    (&local_1128,(TStringView<wchar_t> *)(local_117c + 4),local_10d8);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)uVar5,
                     (FString *)local_11e8,(bool *)&local_1128);
          if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1128.Data.AllocatorInstance.Data);
          }
          local_868.CurPos = local_868.Base;
          TStack_11a8.UnvisitedBitMask = TStack_11a8.UnvisitedBitMask & ~TStack_11a8._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11a8);
          iVar7 = TStack_11a8.CurrentBitIndex;
        } while (TStack_11a8.CurrentBitIndex < (TStack_11a8.Array)->NumBits);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      iVar10 = local_1208.Data.ArrayNum;
    }
    if ((param_7->bIncludeDirectories != false) && (-1 < iVar9)) {
      iVar7 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar7 = iVar8;
      }
      if (iVar9 + 1 < iVar7) {
        iVar7 = iVar9 + 1;
      }
      if (0 < iVar7) {
        iVar14 = iVar7;
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (iVar10 != 0) {
        FVar13.Data = local_1208.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_11f8,(wchar_t *)FVar13.Data,iVar14);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_5,&local_11f8);
      if (local_11f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_11f8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_142a43a96:
  if (local_1208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1208.Data.AllocatorInstance.Data);
  }
  return;
}

// FindFilesAtPathInPakDirectoryInternal<`FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a43b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPakFile::
FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FString *param_1,TStringView<wchar_t> *param_2,
          TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *param_3,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,FString *param_6,
          FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
          *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  uchar *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  TStringView<wchar_t> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  bool bVar20;
  undefined1 auStackY_1308 [32];
  FString local_12b8;
  int local_12a8;
  FString local_1298;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1288;
  int iStack_1280;
  int iStack_127c;
  undefined1 local_1278 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1268;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_1240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1238;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1208;
  int iStack_1200;
  undefined4 uStack_11fc;
  FString local_11f8;
  FString local_11e8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_11d8;
  int iStack_11d0;
  undefined4 uStack_11cc;
  FString local_11c8;
  TStringView<wchar_t> local_11b8;
  FScriptContainerElement *local_11a8;
  int iStack_11a0;
  undefined4 uStack_119c;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1198;
  int iStack_1190;
  undefined4 uStack_118c;
  TStringView<wchar_t> local_1188;
  TStringView<wchar_t> local_1178;
  TStringView<wchar_t> local_1168;
  undefined4 local_1158;
  undefined4 uStack_1154;
  int iStack_1150;
  undefined4 uStack_114c;
  TStringView<wchar_t> local_1148;
  TStringView<wchar_t> local_1138;
  TStringView<wchar_t> local_1128;
  TStringView<wchar_t> local_1118;
  TStringView<wchar_t> local_1108;
  TStringView<wchar_t> local_10f8;
  TStringView<wchar_t> local_10e8;
  int local_10cc;
  undefined4 local_10ac;
  undefined4 local_108c;
  TStringBuilderBase<wchar_t> local_1088;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1068 [128];
  TStringBuilderBase<wchar_t> local_868;
  TArray<FString,TSizedDefaultAllocator<32>_> local_848 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1308;
  local_11a8 = (param_1->Data).AllocatorInstance.Data;
  local_1188.DataPtr = param_2->DataPtr;
  local_1188.Size = param_2->Size;
  local_1188._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar18 = (param_1->Data).ArrayNum;
  iVar17 = 0;
  iStack_11a0 = iVar18 + -1;
  if (iVar18 == 0) {
    iStack_11a0 = iVar17;
  }
  local_1178._12_4_ = uStack_119c;
  local_1178.Size = iStack_11a0;
  local_1208 = param_5;
  local_11d8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_6;
  local_1278._0_8_ = param_7;
  local_11e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  local_1178.DataPtr = (wchar_t *)local_11a8;
  PakPathCombineInternal<wchar_t>(&local_12b8,&local_1178,&local_1188);
  iVar18 = 0;
  if (param_7->bRecursive == true) {
    if (param_7->bIncludeFiles != false) {
      local_1088.Base = (wchar_t *)local_1068;
      local_1088.bIsDynamic = false;
      local_1088.bIsExternal = false;
      TStack_1268.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_1088.CurPos = (wchar_t *)local_1068;
      uVar10 = 1;
      local_1088.End = (wchar_t *)&local_868;
      iVar12 = *(int *)&param_3->field_0x28;
      TStack_1238.CurrentBitIndex = 0;
      if (iVar12 != 0) {
        puVar19 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar19 = (uint *)TStack_1268.Array;
        }
        uVar2 = *puVar19;
        iVar18 = 0;
        iVar17 = 0;
        while (uVar2 == 0) {
          lVar14 = (longlong)iVar17;
          iVar18 = iVar18 + 0x20;
          iVar17 = iVar17 + 1;
          TStack_1238.CurrentBitIndex = iVar12;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_142a43c9e;
          uVar2 = puVar19[lVar14 + 1];
        }
        uVar10 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_12a8 = (int)lVar14;
        TStack_1238.CurrentBitIndex = iVar18 + -1 + local_12a8;
        if (iVar12 < TStack_1238.CurrentBitIndex) {
          TStack_1238.CurrentBitIndex = iVar12;
        }
      }
LAB_142a43c9e:
      TStack_1238._padding_ = CONCAT44(uVar10,iVar17);
      TStack_1238.UnvisitedBitMask = 0xffffffff;
      TStack_1238._28_4_ = local_10ac;
      TStack_1238.BaseBitIndex = iVar18;
      TStack_1268._padding_ = TStack_1238._padding_;
      TStack_1268.BaseBitIndex = iVar18;
      TStack_1268._28_4_ = local_10ac;
      TStack_1268.UnvisitedBitMask = 0xffffffff;
      TStack_1268.CurrentBitIndex = TStack_1238.CurrentBitIndex;
      local_1278._8_8_ = param_3;
      local_1240 = param_3;
      TStack_1238.Array = TStack_1268.Array;
      if (TStack_1238.CurrentBitIndex < iVar12) {
        uVar7 = local_11b8._12_4_;
        iVar18 = TStack_1238.CurrentBitIndex;
        do {
          iVar17 = *(int *)((longlong)iVar18 * 0x20 + 8 + *(longlong *)local_1278._8_8_);
          puVar3 = *(uchar **)((longlong)iVar18 * 0x20 + *(longlong *)local_1278._8_8_);
          iVar18 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar18 = 0;
          }
          iVar17 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar18);
          if (local_1088.End <
              (TStringBuilderBase<wchar_t> *)
              ((longlong)&((ForAnyElementType *)local_1088.CurPos)->Data + (longlong)iVar17 * 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1088,(longlong)iVar17);
          }
          if (iVar18 != 0) {
            local_1088.CurPos = UE::Core::Private::Convert(local_1088.CurPos,iVar17,puVar3,iVar18);
          }
          pwVar8 = local_1088.Base;
          puVar4 = *(undefined8 **)local_1278._0_8_;
          iVar17 = (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
          iVar18 = iVar17;
          if (1 < iVar17) {
            iVar18 = 1;
          }
          iVar12 = 0;
          if (0 < iVar18) {
            iVar12 = iVar18;
          }
          if ((iVar12 == 1) &&
             (iVar18 = wcsncmp(L"/",(wchar_t *)
                                    ((longlong)local_1088.Base +
                                    ((longlong)iVar17 - (longlong)iVar12) * 2),1), iVar18 == 0)) {
            local_1298.Data.ArrayMax = local_10cc;
            if (iVar17 + -1 < iVar17) {
              iVar17 = iVar17 + -1;
            }
            local_1298.Data.ArrayNum = 0;
            if (0 < iVar17) {
              local_1298.Data.ArrayNum = iVar17;
            }
          }
          else {
            local_1298.Data.ArrayMax = uVar7;
            local_1298.Data.ArrayNum = iVar17;
          }
          local_1298.Data.AllocatorInstance.Data = (FScriptContainerElement *)pwVar8;
          plVar5 = (longlong *)*puVar4;
          local_1168._12_4_ = local_1298.Data.ArrayMax;
          local_1168.Size = local_1298.Data.ArrayNum;
          local_1168.DataPtr = pwVar8;
          pcVar6 = *(code **)(*plVar5 + 8);
          pTVar13 = FPathViews::GetCleanFilename(&local_10e8,&local_1168);
          local_1158 = *(undefined4 *)&pTVar13->DataPtr;
          uStack_1154 = *(undefined4 *)((longlong)&pTVar13->DataPtr + 4);
          iStack_1150 = pTVar13->Size;
          uStack_114c = *(undefined4 *)&pTVar13->field_0xc;
          cVar9 = (*pcVar6)(plVar5,&local_1158);
          if (cVar9 != '\0') {
            local_1288 = (TArray<FString,TSizedDefaultAllocator<32>_> *)local_1088.Base;
            iStack_1280 = (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
            local_1198 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                         local_12b8.Data.AllocatorInstance.Data;
            iStack_127c = uVar7;
            local_1148._12_4_ = uVar7;
            local_1148.Size = iStack_1280;
            iStack_1190 = local_12b8.Data.ArrayNum + -1;
            if (local_12b8.Data.ArrayNum == 0) {
              iStack_1190 = 0;
            }
            local_1148.DataPtr = local_1088.Base;
            local_1138._12_4_ = uStack_118c;
            local_1138.Size = iStack_1190;
            local_1138.DataPtr = (wchar_t *)local_12b8.Data.AllocatorInstance.Data;
            PakPathCombineInternal<wchar_t>(&local_11f8,&local_1138,&local_1148);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       local_11e8.Data.AllocatorInstance.Data,&local_11c8,(bool *)&local_11f8);
            if ((TArray<FString,TSizedDefaultAllocator<32>_> *)
                local_11f8.Data.AllocatorInstance.Data !=
                (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_11f8.Data.AllocatorInstance.Data);
            }
          }
          local_1088.CurPos = local_1088.Base;
          TStack_1268.UnvisitedBitMask = TStack_1268.UnvisitedBitMask & ~TStack_1268._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1268);
          param_7 = (FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
                     *)local_1278._0_8_;
          iVar18 = TStack_1268.CurrentBitIndex;
        } while (TStack_1268.CurrentBitIndex < (TStack_1268.Array)->NumBits);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
      param_5 = local_1208;
      param_6 = (FString *)local_11d8;
    }
    if (param_7->bIncludeDirectories != false) {
      iVar18 = ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_6)->ArrayNum;
      if (iVar18 == local_12b8.Data.ArrayNum) {
        if (iVar18 < 2) goto LAB_142a443ee;
        iVar18 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)
                            (((TArray<FString,TSizedDefaultAllocator<32>_> *)param_6)->
                            AllocatorInstance).Data,
                            (wchar_t *)local_12b8.Data.AllocatorInstance.Data);
        bVar20 = iVar18 == 0;
      }
      else {
        bVar20 = iVar18 + local_12b8.Data.ArrayNum == 1;
      }
      if (!bVar20) {
        local_1288 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                     local_12b8.Data.AllocatorInstance.Data;
        iStack_1280 = local_12b8.Data.ArrayNum + -1;
        if (local_12b8.Data.ArrayNum == 0) {
          iStack_1280 = 0;
        }
        local_1128._12_4_ = iStack_127c;
        local_1128.Size = iStack_1280;
        local_1128.DataPtr = (wchar_t *)local_12b8.Data.AllocatorInstance.Data;
        bVar20 = `FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>::operator()
                           (param_7->ShouldVisit,&local_1128);
        if (bVar20) {
          pFVar15 = (param_5->AllocatorInstance).Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_12b8) &&
              ((FScriptContainerElement *)&local_12b8 < pFVar15 + (longlong)param_5->ArrayMax * 0x10
              )) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar20)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar18 = param_5->ArrayNum;
          if (iVar18 == param_5->ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar18 + 1;
          pFVar15 = (param_5->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
          *(undefined8 *)pFVar15 = 0;
          *(FScriptContainerElement **)pFVar15 = local_12b8.Data.AllocatorInstance.Data;
          local_12b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar15 + 8) = local_12b8.Data.ArrayNum;
          *(int *)(pFVar15 + 0xc) = local_12b8.Data.ArrayMax;
          local_12b8.Data.ArrayNum = 0;
          local_12b8.Data.ArrayMax = 0;
        }
      }
    }
  }
  else {
    iVar17 = (param_6->Data).ArrayNum;
    uVar10 = 1;
    iVar12 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar12 = iVar18;
    }
    iVar11 = local_12b8.Data.ArrayNum + -1;
    if (local_12b8.Data.ArrayNum == 0) {
      iVar11 = iVar18;
    }
    if (iVar12 < iVar11) {
      if (iVar17 == 0) {
        iVar17 = 1;
      }
      iVar18 = ::FString::Find(&local_12b8,L"/",1,CaseSensitive,FromStart,iVar17);
    }
    else {
      iVar18 = -1;
    }
    iVar17 = local_12b8.Data.ArrayNum;
    local_12a8 = iVar18;
    if ((param_7->bIncludeFiles != false) && (iVar18 == -1)) {
      local_868.Base = (wchar_t *)local_848;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      TStack_1268.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_868.CurPos = (wchar_t *)local_848;
      local_868.End = (wchar_t *)local_48;
      iVar18 = *(int *)&param_3->field_0x28;
      iVar17 = 0;
      TStack_1268.BaseBitIndex = 0;
      iVar12 = 0;
      if (iVar18 != 0) {
        puVar19 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar19 = (uint *)TStack_1268.Array;
        }
        uVar2 = *puVar19;
        TStack_1268.BaseBitIndex = 0;
        while (uVar2 == 0) {
          lVar14 = (longlong)iVar17;
          TStack_1268.BaseBitIndex = TStack_1268.BaseBitIndex + 0x20;
          iVar17 = iVar17 + 1;
          iVar12 = iVar18;
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_142a4417a;
          uVar2 = puVar19[lVar14 + 1];
        }
        uVar10 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar12 = TStack_1268.BaseBitIndex + -1 + (int)lVar14;
        if (iVar18 < iVar12) {
          iVar12 = iVar18;
        }
      }
LAB_142a4417a:
      TStack_1268._padding_ = CONCAT44(uVar10,iVar17);
      TStack_1268.CurrentBitIndex = iVar12;
      TStack_1268.UnvisitedBitMask = 0xffffffff;
      TStack_1268._28_4_ = local_108c;
      TStack_1238._padding_ = TStack_1268._padding_;
      TStack_1238.BaseBitIndex = TStack_1268.BaseBitIndex;
      TStack_1238._28_4_ = local_108c;
      TStack_1238.UnvisitedBitMask = 0xffffffff;
      TStack_1238.CurrentBitIndex = iVar12;
      local_1278._8_8_ = param_3;
      local_1240 = param_3;
      TStack_1238.Array = TStack_1268.Array;
      if (iVar12 < iVar18) {
        do {
          iVar17 = *(int *)((longlong)iVar12 * 0x20 + 8 + *(longlong *)local_1240);
          puVar3 = *(uchar **)((longlong)iVar12 * 0x20 + *(longlong *)local_1240);
          iVar18 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar18 = 0;
          }
          iVar17 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar18);
          if (local_868.End <
              (wchar_t *)
              ((longlong)&((ForAnyElementType *)local_868.CurPos)->Data + (longlong)iVar17 * 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar17);
          }
          if (iVar18 != 0) {
            local_868.CurPos = UE::Core::Private::Convert(local_868.CurPos,iVar17,puVar3,iVar18);
          }
          local_11f8.Data.ArrayNum =
               (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          local_11f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_868.Base;
          local_1118._12_4_ = local_11f8.Data.ArrayMax;
          local_1118.Size = local_11f8.Data.ArrayNum;
          local_1118.DataPtr = local_868.Base;
          bVar20 = `FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>::operator()
                             (param_7->ShouldVisit,&local_1118);
          if (bVar20) {
            local_1288 = (TArray<FString,TSizedDefaultAllocator<32>_> *)local_868.Base;
            iStack_1280 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
            local_11d8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                         local_12b8.Data.AllocatorInstance.Data;
            iStack_127c = local_10e8._12_4_;
            local_1108._12_4_ = local_10e8._12_4_;
            local_1108.Size = iStack_1280;
            iStack_11d0 = local_12b8.Data.ArrayNum + -1;
            if (local_12b8.Data.ArrayNum == 0) {
              iStack_11d0 = 0;
            }
            local_1108.DataPtr = local_868.Base;
            local_10f8._12_4_ = uStack_11cc;
            local_10f8.Size = iStack_11d0;
            local_10f8.DataPtr = (wchar_t *)local_12b8.Data.AllocatorInstance.Data;
            PakPathCombineInternal<wchar_t>(&local_11e8,&local_10f8,&local_1108);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      (param_4,(FString *)local_1278,(bool *)&local_11e8);
            if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                local_11e8.Data.AllocatorInstance.Data !=
                (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
              FMemory::Free(local_11e8.Data.AllocatorInstance.Data);
            }
          }
          local_868.CurPos = local_868.Base;
          TStack_1238.UnvisitedBitMask = TStack_1238.UnvisitedBitMask & ~TStack_1238._padding_._4_4_
          ;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1238);
          iVar12 = TStack_1238.CurrentBitIndex;
        } while (TStack_1238.CurrentBitIndex < (TStack_1238.Array)->NumBits);
      }
      iVar18 = local_12a8;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      param_5 = local_1208;
      iVar17 = local_12b8.Data.ArrayNum;
    }
    if ((param_7->bIncludeDirectories != false) && (-1 < iVar18)) {
      iVar12 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar12 = 0;
      }
      if (iVar18 + 1 < iVar12) {
        iVar12 = iVar18 + 1;
      }
      iVar18 = 0;
      if (0 < iVar12) {
        iVar18 = iVar12;
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (iVar17 != 0) {
        FVar16.Data = local_12b8.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_1298,(wchar_t *)FVar16.Data,iVar18);
      local_1208 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
                   local_1298.Data.AllocatorInstance.Data;
      iStack_1200 = local_1298.Data.ArrayNum + -1;
      if (local_1298.Data.ArrayNum == 0) {
        iStack_1200 = 0;
      }
      local_11b8._12_4_ = uStack_11fc;
      local_11b8.Size = iStack_1200;
      local_11b8.DataPtr = (wchar_t *)local_1298.Data.AllocatorInstance.Data;
      bVar20 = `FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>::operator()
                         (param_7->ShouldVisit,&local_11b8);
      if (bVar20) {
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_5,&local_1298);
      }
      if ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_1298.Data.AllocatorInstance.Data !=
          (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1298.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_142a443ee:
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_12b8.Data.AllocatorInstance.Data !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_12b8.Data.AllocatorInstance.Data);
  }
  return;
}

// FindFilesAtPathInPakDirectoryInternal<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a44460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a44df9) */
/* WARNING: Removing unreachable block (ram,0x000142a4486f) */

void __cdecl
FPakFile::
FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FString *param_1,TStringView<wchar_t> *param_2,
          TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,FString *param_6,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  uchar *puVar3;
  <lambda_1> *p<Var4;
  code *pcVar5;
  FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
  *pFVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined1 auStackY_12a8 [32];
  FString local_1258;
  FString local_1248;
  FString local_1238;
  FString *local_1228;
  FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
  *local_1220;
  wchar_t *local_1218;
  int iStack_1210;
  undefined4 uStack_120c;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_1208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1200;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_11d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11d0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_11a8;
  FString local_11a0;
  int local_1190;
  int local_118c;
  FScriptContainerElement *local_1188;
  int iStack_1180;
  undefined4 uStack_117c;
  FScriptContainerElement *local_1178;
  int iStack_1170;
  undefined4 uStack_116c;
  FScriptContainerElement *local_1168;
  int iStack_1160;
  undefined4 uStack_115c;
  TStringView<wchar_t> local_1158;
  TStringView<wchar_t> local_1148;
  TStringView<wchar_t> local_1138;
  TStringView<wchar_t> local_1128;
  TStringView<wchar_t> local_1118;
  TStringView<wchar_t> local_1108;
  wchar_t *local_10f8;
  undefined8 uStack_10f0;
  wchar_t *local_10e8;
  undefined8 uStack_10e0;
  wchar_t *local_10d8;
  undefined8 uStack_10d0;
  undefined4 local_10ac;
  undefined4 local_108c;
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_12a8;
  local_1188 = (param_1->Data).AllocatorInstance.Data;
  local_1148.DataPtr = param_2->DataPtr;
  local_1148.Size = param_2->Size;
  local_1148._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar10 = 0;
  iVar11 = (param_1->Data).ArrayNum;
  iVar16 = 0;
  iStack_1180 = iVar11 + -1;
  if (iVar11 == 0) {
    iStack_1180 = iVar16;
  }
  local_11a8 = param_5;
  local_1138._12_4_ = uStack_117c;
  local_1138.Size = iStack_1180;
  local_1228 = param_6;
  local_1220 = param_7;
  local_1138.DataPtr = (wchar_t *)local_1188;
  PakPathCombineInternal<wchar_t>(&local_1258,&local_1138,&local_1148);
  pFVar6 = local_1220;
  iVar11 = 0;
  if (param_7->bRecursive == true) {
    if (param_7->bIncludeFiles != false) {
      local_1088.Base = local_1068;
      local_1088.bIsDynamic = false;
      local_1088.bIsExternal = false;
      TStack_1200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_1088.CurPos = local_1068;
      uVar9 = 1;
      local_1088.End = (wchar_t *)&local_868;
      iVar15 = *(int *)&param_3->field_0x28;
      TStack_11d0.BaseBitIndex = iVar11;
      TStack_11d0.CurrentBitIndex = 0;
      if (iVar15 != 0) {
        puVar18 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar18 = (uint *)TStack_1200.Array;
        }
        uVar2 = *puVar18;
        TStack_11d0.BaseBitIndex = iVar10;
        iVar16 = iVar10;
        while (uVar2 == 0) {
          lVar12 = (longlong)iVar16;
          TStack_11d0.BaseBitIndex = TStack_11d0.BaseBitIndex + 0x20;
          iVar16 = iVar16 + 1;
          TStack_11d0.CurrentBitIndex = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142a445ef;
          uVar2 = puVar18[lVar12 + 1];
        }
        uVar9 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_1190 = (int)lVar12;
        TStack_11d0.CurrentBitIndex = TStack_11d0.BaseBitIndex + -1 + local_1190;
        if (iVar15 < TStack_11d0.CurrentBitIndex) {
          TStack_11d0.CurrentBitIndex = iVar15;
        }
      }
LAB_142a445ef:
      TStack_11d0._padding_ = CONCAT44(uVar9,iVar16);
      TStack_11d0.UnvisitedBitMask = 0xffffffff;
      TStack_11d0._28_4_ = local_10ac;
      TStack_1200._padding_ = TStack_11d0._padding_;
      TStack_1200.BaseBitIndex = TStack_11d0.BaseBitIndex;
      TStack_1200._28_4_ = local_10ac;
      TStack_1200.UnvisitedBitMask = 0xffffffff;
      TStack_1200.CurrentBitIndex = TStack_11d0.CurrentBitIndex;
      local_1208 = param_3;
      local_11d8 = param_3;
      TStack_11d0.Array = TStack_1200.Array;
      if (TStack_11d0.CurrentBitIndex < iVar15) {
        uVar7 = local_1158._12_4_;
        iVar16 = TStack_11d0.CurrentBitIndex;
        do {
          iVar10 = *(int *)((longlong)iVar16 * 0x20 + 8 + *(longlong *)local_1208);
          puVar3 = *(uchar **)((longlong)iVar16 * 0x20 + *(longlong *)local_1208);
          iVar16 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar16 = iVar11;
          }
          iVar10 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar16);
          if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + iVar10)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1088,(longlong)iVar10);
          }
          if (iVar16 != 0) {
            local_1088.CurPos = UE::Core::Private::Convert(local_1088.CurPos,iVar10,puVar3,iVar16);
          }
          p<Var4 = pFVar6->ShouldVisit;
          if ((p<Var4->FileExtensionStr).Size == 0) {
LAB_142a4474e:
            local_1178 = local_1258.Data.AllocatorInstance.Data;
            iStack_1210 = (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
            uStack_120c = uVar7;
            local_1128._12_4_ = uVar7;
            local_1128.Size = iStack_1210;
            iStack_1170 = local_1258.Data.ArrayNum + -1;
            if (local_1258.Data.ArrayNum == 0) {
              iStack_1170 = iVar11;
            }
            local_1118._12_4_ = uStack_116c;
            local_1118.Size = iStack_1170;
            local_1118.DataPtr = (wchar_t *)local_1258.Data.AllocatorInstance.Data;
            local_1218 = local_1088.Base;
            local_1128.DataPtr = local_1088.Base;
            PakPathCombineInternal<wchar_t>(&local_1248,&local_1118,&local_1128);
            pFVar13 = (param_4->AllocatorInstance).Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_1248) &&
                ((FScriptContainerElement *)&local_1248 <
                 pFVar13 + (longlong)param_4->ArrayMax * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar16 = param_4->ArrayNum;
            if (iVar16 == param_4->ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = iVar16 + 1;
            pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
            *(undefined8 *)pFVar13 = 0;
            *(FScriptContainerElement **)pFVar13 = local_1248.Data.AllocatorInstance.Data;
            local_1248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar13 + 8) = local_1248.Data.ArrayNum;
            *(int *)(pFVar13 + 0xc) = local_1248.Data.ArrayMax;
            local_1248.Data.ArrayNum = 0;
            local_1248.Data.ArrayMax = 0;
          }
          else {
            local_10e8 = (p<Var4->FileExtensionStr).DataPtr;
            uStack_10e0 = *(undefined8 *)&(p<Var4->FileExtensionStr).Size;
            iVar10 = (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
            iVar15 = (int)uStack_10e0;
            iVar16 = iVar10;
            if (iVar15 < iVar10) {
              iVar16 = iVar15;
            }
            iVar17 = iVar11;
            if (0 < iVar16) {
              iVar17 = iVar16;
            }
            if (iVar15 == iVar17) {
              if ((iVar15 != 0) && (iVar17 != 0)) {
                iVar16 = iVar17;
                if (iVar15 < iVar17) {
                  iVar16 = iVar15;
                }
                iVar16 = FGenericPlatformStricmp::Strnicmp
                                   (local_10e8,
                                    local_1088.Base + ((longlong)iVar10 - (longlong)iVar17),
                                    (longlong)iVar16);
                if (iVar16 != 0) goto LAB_142a4487b;
              }
              if (iVar15 == iVar17) goto LAB_142a4474e;
            }
          }
LAB_142a4487b:
          TStack_1200.UnvisitedBitMask = TStack_1200.UnvisitedBitMask & ~TStack_1200._padding_._4_4_
          ;
          local_1088.CurPos = local_1088.Base;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1200);
          param_5 = local_11a8;
          iVar16 = TStack_1200.CurrentBitIndex;
        } while (TStack_1200.CurrentBitIndex < (TStack_1200.Array)->NumBits);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
      param_6 = local_1228;
      param_7 = local_1220;
    }
    if (param_7->bIncludeDirectories != false) {
      iVar16 = (param_6->Data).ArrayNum;
      if (iVar16 == local_1258.Data.ArrayNum) {
        if (iVar16 < 2) goto LAB_142a44f0e;
        iVar16 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_6->Data).AllocatorInstance.Data,
                            (wchar_t *)local_1258.Data.AllocatorInstance.Data);
        bVar8 = iVar16 == 0;
      }
      else {
        bVar8 = iVar16 + local_1258.Data.ArrayNum == 1;
      }
      if (!bVar8) {
        p<Var4 = param_7->ShouldVisit;
        iVar16 = local_1258.Data.ArrayNum + -1;
        if (local_1258.Data.ArrayNum == 0) {
          iVar16 = 0;
        }
        if ((p<Var4->FileExtensionStr).Size != 0) {
          local_10f8 = (p<Var4->FileExtensionStr).DataPtr;
          uStack_10f0 = *(undefined8 *)&(p<Var4->FileExtensionStr).Size;
          iVar15 = (int)uStack_10f0;
          iVar10 = iVar16;
          if (iVar15 < iVar16) {
            iVar10 = iVar15;
          }
          if (0 < iVar10) {
            iVar11 = iVar10;
          }
          if (iVar15 != iVar11) goto LAB_142a44f0e;
          if ((iVar15 != 0) && (iVar11 != 0)) {
            iVar10 = iVar11;
            if (iVar15 < iVar11) {
              iVar10 = iVar15;
            }
            iVar16 = FGenericPlatformStricmp::Strnicmp
                               (local_10f8,
                                (wchar_t *)
                                (local_1258.Data.AllocatorInstance.Data +
                                ((longlong)iVar16 - (longlong)iVar11) * 2),(longlong)iVar10);
            if (iVar16 != 0) goto LAB_142a44f0e;
          }
          if (iVar15 != iVar11) goto LAB_142a44f0e;
        }
        pFVar13 = (param_5->AllocatorInstance).Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_1258) &&
            ((FScriptContainerElement *)&local_1258 < pFVar13 + (longlong)param_5->ArrayMax * 0x10))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = param_5->ArrayNum;
        if (iVar11 == param_5->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar11 + 1;
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        *(undefined8 *)pFVar13 = 0;
        *(FScriptContainerElement **)pFVar13 = local_1258.Data.AllocatorInstance.Data;
        local_1258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar13 + 8) = local_1258.Data.ArrayNum;
        *(int *)(pFVar13 + 0xc) = local_1258.Data.ArrayMax;
        local_1258.Data.ArrayNum = 0;
        local_1258.Data.ArrayMax = 0;
      }
    }
    goto LAB_142a44f0e;
  }
  uVar9 = 1;
  iVar16 = (param_6->Data).ArrayNum;
  iVar15 = local_1258.Data.ArrayNum + -1;
  if (local_1258.Data.ArrayNum == 0) {
    iVar15 = iVar11;
  }
  iVar17 = iVar16 + -1;
  if (iVar16 == 0) {
    iVar17 = iVar11;
  }
  if (iVar17 < iVar15) {
    iVar15 = 1;
    if (iVar16 != 0) {
      iVar15 = iVar16;
    }
    iVar16 = ::FString::Find(&local_1258,L"/",1,CaseSensitive,FromStart,iVar15);
  }
  else {
    iVar16 = -1;
  }
  pFVar6 = local_1220;
  local_1228 = (FString *)CONCAT44(local_1228._4_4_,iVar16);
  iVar15 = local_1258.Data.ArrayNum;
  if ((param_7->bIncludeFiles != false) && (iVar16 == -1)) {
    local_868.Base = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    TStack_1200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
    local_868.CurPos = local_848;
    local_868.End = (wchar_t *)local_48;
    iVar15 = *(int *)&param_3->field_0x28;
    iVar17 = iVar11;
    TStack_1200.BaseBitIndex = iVar11;
    TStack_1200.CurrentBitIndex = 0;
    if (iVar15 != 0) {
      puVar18 = *(uint **)&param_3->field_0x20;
      if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
        puVar18 = (uint *)TStack_1200.Array;
      }
      uVar2 = *puVar18;
      TStack_1200.BaseBitIndex = iVar10;
      iVar17 = iVar10;
      while (uVar2 == 0) {
        lVar12 = (longlong)iVar17;
        TStack_1200.BaseBitIndex = TStack_1200.BaseBitIndex + 0x20;
        iVar17 = iVar17 + 1;
        TStack_1200.CurrentBitIndex = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_142a44b6f;
        uVar2 = puVar18[lVar12 + 1];
      }
      uVar9 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_118c = (int)lVar12;
      TStack_1200.CurrentBitIndex = TStack_1200.BaseBitIndex + -1 + local_118c;
      if (iVar15 < TStack_1200.CurrentBitIndex) {
        TStack_1200.CurrentBitIndex = iVar15;
      }
    }
LAB_142a44b6f:
    TStack_1200._padding_ = CONCAT44(uVar9,iVar17);
    TStack_1200.UnvisitedBitMask = 0xffffffff;
    TStack_1200._28_4_ = local_108c;
    TStack_11d0._padding_ = TStack_1200._padding_;
    TStack_11d0.BaseBitIndex = TStack_1200.BaseBitIndex;
    TStack_11d0._28_4_ = local_108c;
    TStack_11d0.UnvisitedBitMask = 0xffffffff;
    TStack_11d0.CurrentBitIndex = TStack_1200.CurrentBitIndex;
    local_1208 = param_3;
    local_11d8 = param_3;
    TStack_11d0.Array = TStack_1200.Array;
    if (TStack_1200.CurrentBitIndex < iVar15) {
      uVar7 = uStack_10f0._4_4_;
      iVar16 = TStack_1200.CurrentBitIndex;
      do {
        iVar10 = *(int *)((longlong)iVar16 * 0x20 + 8 + *(longlong *)local_11d8);
        puVar3 = *(uchar **)((longlong)iVar16 * 0x20 + *(longlong *)local_11d8);
        iVar16 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar16 = iVar11;
        }
        iVar10 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar16);
        if (local_868.End < local_868.CurPos + iVar10) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar10);
        }
        if (iVar16 != 0) {
          local_868.CurPos = UE::Core::Private::Convert(local_868.CurPos,iVar10,puVar3,iVar16);
        }
        p<Var4 = pFVar6->ShouldVisit;
        if ((p<Var4->FileExtensionStr).Size == 0) {
LAB_142a44cde:
          local_1168 = local_1258.Data.AllocatorInstance.Data;
          iStack_1210 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          uStack_120c = uVar7;
          local_1108._12_4_ = uVar7;
          local_1108.Size = iStack_1210;
          iStack_1160 = local_1258.Data.ArrayNum + -1;
          if (local_1258.Data.ArrayNum == 0) {
            iStack_1160 = iVar11;
          }
          local_1158._12_4_ = uStack_115c;
          local_1158.Size = iStack_1160;
          local_1158.DataPtr = (wchar_t *)local_1258.Data.AllocatorInstance.Data;
          local_1218 = local_868.Base;
          local_1108.DataPtr = local_868.Base;
          PakPathCombineInternal<wchar_t>(&local_1238,&local_1158,&local_1108);
          pFVar13 = (param_4->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_1238) &&
              ((FScriptContainerElement *)&local_1238 < pFVar13 + (longlong)param_4->ArrayMax * 0x10
              )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar16 = param_4->ArrayNum;
          if (iVar16 == param_4->ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar16 + 1;
          pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
          *(undefined8 *)pFVar13 = 0;
          *(FScriptContainerElement **)pFVar13 = local_1238.Data.AllocatorInstance.Data;
          local_1238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar13 + 8) = local_1238.Data.ArrayNum;
          *(int *)(pFVar13 + 0xc) = local_1238.Data.ArrayMax;
          local_1238.Data.ArrayNum = 0;
          local_1238.Data.ArrayMax = 0;
        }
        else {
          local_10d8 = (p<Var4->FileExtensionStr).DataPtr;
          uStack_10d0 = *(undefined8 *)&(p<Var4->FileExtensionStr).Size;
          iVar10 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          iVar15 = (int)uStack_10d0;
          iVar16 = iVar10;
          if (iVar15 < iVar10) {
            iVar16 = iVar15;
          }
          iVar17 = iVar11;
          if (0 < iVar16) {
            iVar17 = iVar16;
          }
          if (iVar15 == iVar17) {
            if ((iVar15 != 0) && (iVar17 != 0)) {
              iVar16 = iVar17;
              if (iVar15 < iVar17) {
                iVar16 = iVar15;
              }
              iVar16 = FGenericPlatformStricmp::Strnicmp
                                 (local_10d8,local_868.Base + ((longlong)iVar10 - (longlong)iVar17),
                                  (longlong)iVar16);
              if (iVar16 != 0) goto LAB_142a44e05;
            }
            if (iVar15 == iVar17) goto LAB_142a44cde;
          }
        }
LAB_142a44e05:
        TStack_11d0.UnvisitedBitMask = TStack_11d0.UnvisitedBitMask & ~TStack_11d0._padding_._4_4_;
        local_868.CurPos = local_868.Base;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11d0);
        iVar16 = TStack_11d0.CurrentBitIndex;
      } while (TStack_11d0.CurrentBitIndex < (TStack_11d0.Array)->NumBits);
      iVar16 = (int)local_1228;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    param_7 = local_1220;
    iVar15 = local_1258.Data.ArrayNum;
  }
  if ((param_7->bIncludeDirectories == false) || (iVar16 < 0)) goto LAB_142a44f0e;
  iVar10 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar10 = iVar11;
  }
  if (iVar16 + 1 < iVar10) {
    iVar10 = iVar16 + 1;
  }
  iVar16 = iVar11;
  if (0 < iVar10) {
    iVar16 = iVar10;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (iVar15 != 0) {
    FVar14.Data = local_1258.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_11a0,(wchar_t *)FVar14.Data,iVar16);
  p<Var4 = param_7->ShouldVisit;
  iVar16 = local_11a0.Data.ArrayNum + -1;
  if (local_11a0.Data.ArrayNum == 0) {
    iVar16 = 0;
  }
  if ((p<Var4->FileExtensionStr).Size == 0) {
LAB_142a44ef3:
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(local_11a8,&local_11a0);
  }
  else {
    iVar15 = (int)*(undefined8 *)&(p<Var4->FileExtensionStr).Size;
    iVar10 = iVar16;
    if (iVar15 < iVar16) {
      iVar10 = iVar15;
    }
    if (0 < iVar10) {
      iVar11 = iVar10;
    }
    if (iVar15 == iVar11) {
      if ((iVar15 != 0) && (iVar11 != 0)) {
        iVar10 = iVar11;
        if (iVar15 < iVar11) {
          iVar10 = iVar15;
        }
        iVar16 = FGenericPlatformStricmp::Strnicmp
                           ((p<Var4->FileExtensionStr).DataPtr,
                            (wchar_t *)
                            (local_11a0.Data.AllocatorInstance.Data +
                            ((longlong)iVar16 - (longlong)iVar11) * 2),(longlong)iVar10);
        if (iVar16 != 0) goto LAB_142a44f00;
      }
      if (iVar15 == iVar11) goto LAB_142a44ef3;
    }
  }
LAB_142a44f00:
  if (local_11a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11a0.Data.AllocatorInstance.Data);
  }
LAB_142a44f0e:
  if (local_1258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1258.Data.AllocatorInstance.Data);
  }
  return;
}

// FindFilesAtPathInPakDirectoryInternal<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a44f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPakFile::
FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FString *param_1,TStringView<wchar_t> *param_2,
          TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *param_3,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,FString *param_6,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  uchar *puVar3;
  <lambda_1> *p<Var4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  undefined1 auStackY_1288 [32];
  FString local_1238;
  int local_1228;
  FString local_1220;
  FString local_1210;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_1200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11f8;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_11d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11c8;
  undefined1 local_11a0 [16];
  undefined8 uStack_1190;
  FScriptContainerElement *local_1188;
  int iStack_1180;
  undefined4 uStack_117c;
  FScriptContainerElement *local_1178;
  int iStack_1170;
  undefined4 uStack_116c;
  FString local_1168;
  FScriptContainerElement *local_1158;
  int iStack_1150;
  undefined4 uStack_114c;
  FString local_1148;
  TStringView<wchar_t> local_1138;
  TStringView<wchar_t> local_1128;
  TStringView<wchar_t> local_1118;
  TStringView<wchar_t> local_1108;
  TStringView<wchar_t> local_10f8;
  TStringView<wchar_t> local_10e8;
  wchar_t *local_10d8;
  undefined8 uStack_10d0;
  undefined4 local_10ac;
  undefined4 local_108c;
  TStringBuilderBase<wchar_t> local_1088;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_1068 [25];
  TStringBuilderBase<wchar_t> local_868;
  FScriptContainerElement local_848 [2048];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1288;
  local_1188 = (param_1->Data).AllocatorInstance.Data;
  local_1128.DataPtr = param_2->DataPtr;
  local_1128.Size = param_2->Size;
  local_1128._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar9 = (param_1->Data).ArrayNum;
  iVar8 = 0;
  local_11a0._8_8_ = param_5;
  iVar15 = 0;
  iStack_1180 = iVar9 + -1;
  if (iVar9 == 0) {
    iStack_1180 = iVar15;
  }
  local_1220.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_6;
  local_1118._12_4_ = uStack_117c;
  local_1118.Size = iStack_1180;
  local_1210.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  local_1118.DataPtr = (wchar_t *)local_1188;
  PakPathCombineInternal<wchar_t>(&local_1238,&local_1118,&local_1128);
  FVar12.Data = local_1210.Data.AllocatorInstance.Data;
  iVar9 = 0;
  if (param_7->bRecursive == true) {
    if (param_7->bIncludeFiles != false) {
      local_1088.Base = (wchar_t *)local_1068;
      local_1088.bIsDynamic = false;
      local_1088.bIsExternal = false;
      TStack_11f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
      local_1088.CurPos = (wchar_t *)local_1068;
      uVar7 = 1;
      local_1088.End = (wchar_t *)&local_868;
      iVar16 = *(int *)&param_3->field_0x28;
      TStack_11c8.BaseBitIndex = iVar9;
      TStack_11c8.CurrentBitIndex = 0;
      if (iVar16 != 0) {
        puVar17 = *(uint **)&param_3->field_0x20;
        if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
          puVar17 = (uint *)TStack_11f8.Array;
        }
        uVar2 = *puVar17;
        TStack_11c8.BaseBitIndex = iVar8;
        iVar15 = iVar8;
        while (uVar2 == 0) {
          lVar10 = (longlong)iVar15;
          TStack_11c8.BaseBitIndex = TStack_11c8.BaseBitIndex + 0x20;
          iVar15 = iVar15 + 1;
          TStack_11c8.CurrentBitIndex = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142a4510e;
          uVar2 = puVar17[lVar10 + 1];
        }
        uVar7 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1228 = (int)lVar10;
        TStack_11c8.CurrentBitIndex = TStack_11c8.BaseBitIndex + -1 + local_1228;
        if (iVar16 < TStack_11c8.CurrentBitIndex) {
          TStack_11c8.CurrentBitIndex = iVar16;
        }
      }
LAB_142a4510e:
      TStack_11c8._padding_ = CONCAT44(uVar7,iVar15);
      TStack_11c8.UnvisitedBitMask = 0xffffffff;
      TStack_11c8._28_4_ = local_10ac;
      TStack_11f8._padding_ = TStack_11c8._padding_;
      TStack_11f8.BaseBitIndex = TStack_11c8.BaseBitIndex;
      TStack_11f8._28_4_ = local_10ac;
      TStack_11f8.UnvisitedBitMask = 0xffffffff;
      TStack_11f8.CurrentBitIndex = TStack_11c8.CurrentBitIndex;
      local_1200 = param_3;
      local_11d0 = param_3;
      TStack_11c8.Array = TStack_11f8.Array;
      if (TStack_11c8.CurrentBitIndex < iVar16) {
        uVar6 = local_1138._12_4_;
        iVar15 = TStack_11c8.CurrentBitIndex;
        do {
          iVar8 = *(int *)((longlong)iVar15 * 0x20 + 8 + *(longlong *)local_1200);
          puVar3 = *(uchar **)((longlong)iVar15 * 0x20 + *(longlong *)local_1200);
          iVar15 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar15 = iVar9;
          }
          iVar8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar15);
          if (local_1088.End <
              (TStringBuilderBase<wchar_t> *)
              (((ForElementType<FSetElementId> *)((longlong)local_1088.CurPos + 0x38))->InlineData +
              (longlong)iVar8 * 2 + -0x38)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1088,(longlong)iVar8);
          }
          if (iVar15 != 0) {
            local_1088.CurPos = UE::Core::Private::Convert(local_1088.CurPos,iVar8,puVar3,iVar15);
          }
          p<Var4 = param_7->ShouldVisit;
          if ((p<Var4->FileExtensionStr).Size == 0) {
LAB_142a4526a:
            local_1178 = local_1238.Data.AllocatorInstance.Data;
            local_1210.Data.ArrayNum =
                 (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
            local_1210.Data.ArrayMax = uVar6;
            local_1108._12_4_ = uVar6;
            local_1108.Size = local_1210.Data.ArrayNum;
            iStack_1170 = local_1238.Data.ArrayNum + -1;
            if (local_1238.Data.ArrayNum == 0) {
              iStack_1170 = iVar9;
            }
            local_10f8._12_4_ = uStack_116c;
            local_10f8.Size = iStack_1170;
            local_10f8.DataPtr = (wchar_t *)local_1238.Data.AllocatorInstance.Data;
            local_1210.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1088.Base;
            local_1108.DataPtr = local_1088.Base;
            PakPathCombineInternal<wchar_t>(&local_1168,&local_10f8,&local_1108);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)FVar12.Data,
                       (FString *)local_11a0,(bool *)&local_1168);
            if (local_1168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1168.Data.AllocatorInstance.Data);
            }
          }
          else {
            local_10d8 = (p<Var4->FileExtensionStr).DataPtr;
            uStack_10d0 = *(undefined8 *)&(p<Var4->FileExtensionStr).Size;
            iVar8 = (int)((longlong)local_1088.CurPos - (longlong)local_1088.Base >> 1);
            iVar16 = (int)uStack_10d0;
            iVar15 = iVar8;
            if (iVar16 < iVar8) {
              iVar15 = iVar16;
            }
            iVar14 = iVar9;
            if (0 < iVar15) {
              iVar14 = iVar15;
            }
            if (iVar16 == iVar14) {
              if ((iVar16 != 0) && (iVar14 != 0)) {
                iVar15 = iVar14;
                if (iVar16 < iVar14) {
                  iVar15 = iVar16;
                }
                iVar15 = FGenericPlatformStricmp::Strnicmp
                                   (local_10d8,
                                    (wchar_t *)
                                    ((longlong)local_1088.Base +
                                    ((longlong)iVar8 - (longlong)iVar14) * 2),(longlong)iVar15);
                if (iVar15 != 0) goto LAB_142a452ec;
              }
              if (iVar16 == iVar14) goto LAB_142a4526a;
            }
          }
LAB_142a452ec:
          TStack_11f8.UnvisitedBitMask = TStack_11f8.UnvisitedBitMask & ~TStack_11f8._padding_._4_4_
          ;
          local_1088.CurPos = local_1088.Base;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11f8);
          param_6 = (FString *)local_1220.Data.AllocatorInstance.Data;
          iVar15 = TStack_11f8.CurrentBitIndex;
        } while (TStack_11f8.CurrentBitIndex < (TStack_11f8.Array)->NumBits);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
      param_5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)local_11a0._8_8_;
    }
    if (param_7->bIncludeDirectories != false) {
      iVar15 = *(int *)((longlong)param_6 + 8);
      if (iVar15 == local_1238.Data.ArrayNum) {
        if (iVar15 < 2) goto LAB_142a458b6;
        iVar15 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)param_6,(wchar_t *)local_1238.Data.AllocatorInstance.Data);
        bVar18 = iVar15 == 0;
      }
      else {
        bVar18 = iVar15 + local_1238.Data.ArrayNum == 1;
      }
      if (!bVar18) {
        p<Var4 = param_7->ShouldVisit;
        iVar15 = local_1238.Data.ArrayNum + -1;
        if (local_1238.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        if ((p<Var4->FileExtensionStr).Size != 0) {
          local_11a0._8_8_ = (p<Var4->FileExtensionStr).DataPtr;
          uStack_1190 = *(undefined8 *)&(p<Var4->FileExtensionStr).Size;
          iVar16 = (int)uStack_1190;
          iVar8 = iVar15;
          if (iVar16 < iVar15) {
            iVar8 = iVar16;
          }
          if (0 < iVar8) {
            iVar9 = iVar8;
          }
          if (iVar16 != iVar9) goto LAB_142a458b6;
          if ((iVar16 != 0) && (iVar9 != 0)) {
            iVar8 = iVar9;
            if (iVar16 < iVar9) {
              iVar8 = iVar16;
            }
            iVar15 = FGenericPlatformStricmp::Strnicmp
                               ((wchar_t *)local_11a0._8_8_,
                                (wchar_t *)
                                (local_1238.Data.AllocatorInstance.Data +
                                ((longlong)iVar15 - (longlong)iVar9) * 2),(longlong)iVar8);
            if (iVar15 != 0) goto LAB_142a458b6;
          }
          if (iVar16 != iVar9) goto LAB_142a458b6;
        }
        pFVar11 = (param_5->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_1238) &&
            ((FScriptContainerElement *)&local_1238 < pFVar11 + (longlong)param_5->ArrayMax * 0x10))
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = param_5->ArrayNum;
        if (iVar9 == param_5->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar9 + 1;
        pFVar11 = (param_5->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar11 = 0;
        *(FScriptContainerElement **)pFVar11 = local_1238.Data.AllocatorInstance.Data;
        local_1238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 8) = local_1238.Data.ArrayNum;
        *(int *)(pFVar11 + 0xc) = local_1238.Data.ArrayMax;
        local_1238.Data.ArrayNum = 0;
        local_1238.Data.ArrayMax = 0;
      }
    }
    goto LAB_142a458b6;
  }
  uVar7 = 1;
  iVar15 = (param_6->Data).ArrayNum;
  iVar16 = local_1238.Data.ArrayNum + -1;
  if (local_1238.Data.ArrayNum == 0) {
    iVar16 = iVar9;
  }
  iVar14 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar14 = iVar9;
  }
  if (iVar14 < iVar16) {
    iVar16 = 1;
    if (iVar15 != 0) {
      iVar16 = iVar15;
    }
    iVar15 = ::FString::Find(&local_1238,L"/",1,CaseSensitive,FromStart,iVar16);
  }
  else {
    iVar15 = -1;
  }
  FVar12.Data = local_1210.Data.AllocatorInstance.Data;
  iVar16 = local_1238.Data.ArrayNum;
  local_1228 = iVar15;
  if ((param_7->bIncludeFiles != false) && (iVar15 == -1)) {
    local_868.Base = (wchar_t *)local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    TStack_11f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_3->field_0x10;
    local_868.CurPos = (wchar_t *)local_848;
    local_868.End = (wchar_t *)local_48;
    iVar15 = *(int *)&param_3->field_0x28;
    iVar16 = iVar9;
    TStack_11f8.BaseBitIndex = iVar9;
    TStack_11f8.CurrentBitIndex = 0;
    if (iVar15 != 0) {
      puVar17 = *(uint **)&param_3->field_0x20;
      if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)TStack_11f8.Array;
      }
      uVar2 = *puVar17;
      TStack_11f8.BaseBitIndex = iVar8;
      iVar16 = iVar8;
      while (uVar2 == 0) {
        lVar10 = (longlong)iVar16;
        TStack_11f8.BaseBitIndex = TStack_11f8.BaseBitIndex + 0x20;
        iVar16 = iVar16 + 1;
        TStack_11f8.CurrentBitIndex = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142a455ca;
        uVar2 = puVar17[lVar10 + 1];
      }
      uVar7 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      TStack_11f8.CurrentBitIndex = TStack_11f8.BaseBitIndex + -1 + (int)lVar10;
      if (iVar15 < TStack_11f8.CurrentBitIndex) {
        TStack_11f8.CurrentBitIndex = iVar15;
      }
    }
LAB_142a455ca:
    TStack_11f8._padding_ = CONCAT44(uVar7,iVar16);
    TStack_11f8.UnvisitedBitMask = 0xffffffff;
    TStack_11f8._28_4_ = local_108c;
    TStack_11c8._padding_ = TStack_11f8._padding_;
    TStack_11c8.BaseBitIndex = TStack_11f8.BaseBitIndex;
    TStack_11c8._28_4_ = local_108c;
    TStack_11c8.UnvisitedBitMask = 0xffffffff;
    TStack_11c8.CurrentBitIndex = TStack_11f8.CurrentBitIndex;
    local_1200 = param_3;
    local_11d0 = param_3;
    TStack_11c8.Array = TStack_11f8.Array;
    if (TStack_11f8.CurrentBitIndex < iVar15) {
      iVar15 = uStack_10d0._4_4_;
      iVar8 = TStack_11f8.CurrentBitIndex;
      do {
        iVar16 = *(int *)((longlong)iVar8 * 0x20 + 8 + *(longlong *)local_11d0);
        puVar3 = *(uchar **)((longlong)iVar8 * 0x20 + *(longlong *)local_11d0);
        iVar8 = iVar16 + -1;
        if (iVar16 == 0) {
          iVar8 = iVar9;
        }
        iVar16 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar8);
        if (local_868.End <
            (FScriptContainerElement *)((longlong)local_868.CurPos + (longlong)iVar16 * 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,(longlong)iVar16);
        }
        if (iVar8 != 0) {
          local_868.CurPos = UE::Core::Private::Convert(local_868.CurPos,iVar16,puVar3,iVar8);
        }
        p<Var4 = param_7->ShouldVisit;
        if ((p<Var4->FileExtensionStr).Size == 0) {
LAB_142a4571f:
          local_1158 = local_1238.Data.AllocatorInstance.Data;
          local_1220.Data.ArrayNum =
               (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          local_1220.Data.ArrayMax = iVar15;
          local_10e8._12_4_ = iVar15;
          local_10e8.Size = local_1220.Data.ArrayNum;
          iStack_1150 = local_1238.Data.ArrayNum + -1;
          if (local_1238.Data.ArrayNum == 0) {
            iStack_1150 = iVar9;
          }
          local_1138._12_4_ = uStack_114c;
          local_1138.Size = iStack_1150;
          local_1138.DataPtr = (wchar_t *)local_1238.Data.AllocatorInstance.Data;
          local_1220.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_868.Base;
          local_10e8.DataPtr = local_868.Base;
          PakPathCombineInternal<wchar_t>(&local_1148,&local_1138,&local_10e8);
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)FVar12.Data,
                     &local_1210,(bool *)&local_1148);
          if (local_1148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1148.Data.AllocatorInstance.Data);
          }
        }
        else {
          iVar16 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
          iVar14 = (int)*(undefined8 *)&(p<Var4->FileExtensionStr).Size;
          iVar8 = iVar16;
          if (iVar14 < iVar16) {
            iVar8 = iVar14;
          }
          iVar13 = iVar9;
          if (0 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar14 == iVar13) {
            if ((iVar14 != 0) && (iVar13 != 0)) {
              iVar8 = iVar13;
              if (iVar14 < iVar13) {
                iVar8 = iVar14;
              }
              iVar8 = FGenericPlatformStricmp::Strnicmp
                                ((p<Var4->FileExtensionStr).DataPtr,
                                 (wchar_t *)
                                 ((longlong)local_868.Base +
                                 ((longlong)iVar16 - (longlong)iVar13) * 2),(longlong)iVar8);
              if (iVar8 != 0) goto LAB_142a4579e;
            }
            if (iVar14 == iVar13) goto LAB_142a4571f;
          }
        }
LAB_142a4579e:
        TStack_11c8.UnvisitedBitMask = TStack_11c8.UnvisitedBitMask & ~TStack_11c8._padding_._4_4_;
        local_868.CurPos = local_868.Base;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11c8);
        iVar8 = TStack_11c8.CurrentBitIndex;
      } while (TStack_11c8.CurrentBitIndex < (TStack_11c8.Array)->NumBits);
    }
    iVar15 = local_1228;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    param_5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)local_11a0._8_8_;
    iVar16 = local_1238.Data.ArrayNum;
  }
  if ((param_7->bIncludeDirectories == false) || (iVar15 < 0)) goto LAB_142a458b6;
  iVar8 = iVar16 + -1;
  if (iVar16 == 0) {
    iVar8 = iVar9;
  }
  if (iVar15 + 1 < iVar8) {
    iVar8 = iVar15 + 1;
  }
  iVar15 = iVar9;
  if (0 < iVar8) {
    iVar15 = iVar8;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (iVar16 != 0) {
    FVar12.Data = local_1238.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_1220,(wchar_t *)FVar12.Data,iVar15);
  p<Var4 = param_7->ShouldVisit;
  iVar15 = local_1220.Data.ArrayNum + -1;
  if (local_1220.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  if ((p<Var4->FileExtensionStr).Size == 0) {
LAB_142a4589a:
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_5,&local_1220);
  }
  else {
    iVar16 = (int)*(undefined8 *)&(p<Var4->FileExtensionStr).Size;
    iVar8 = iVar15;
    if (iVar16 < iVar15) {
      iVar8 = iVar16;
    }
    if (0 < iVar8) {
      iVar9 = iVar8;
    }
    if (iVar16 == iVar9) {
      if ((iVar16 != 0) && (iVar9 != 0)) {
        iVar8 = iVar9;
        if (iVar16 < iVar9) {
          iVar8 = iVar16;
        }
        iVar15 = FGenericPlatformStricmp::Strnicmp
                           ((p<Var4->FileExtensionStr).DataPtr,
                            (wchar_t *)
                            (local_1220.Data.AllocatorInstance.Data +
                            ((longlong)iVar15 - (longlong)iVar9) * 2),(longlong)iVar8);
        if (iVar15 != 0) goto LAB_142a458a7;
      }
      if (iVar16 == iVar9) goto LAB_142a4589a;
    }
  }
LAB_142a458a7:
  if (local_1220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1220.Data.AllocatorInstance.Data);
  }
LAB_142a458b6:
  if (local_1238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1238.Data.AllocatorInstance.Data);
  }
  return;
}

// FindFilesAtPathInTreeIndexInternal<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a45920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInTreeIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_6)

{
  code *pcVar1;
  bool bVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar9;
  undefined1 auStackY_5c8 [32];
  undefined1 local_588 [8];
  FString local_580;
  TArray<FString,TSizedDefaultAllocator<32>_> local_570;
  uint local_560;
  FString *local_558;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_550;
  FString *local_548;
  wchar_t *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FScriptContainerElement *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508 [2];
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  undefined1 local_468 [1048];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_550 = param_4;
  local_558 = param_5;
  if (param_1->Size == 0) {
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::FIteratorInternal
              ((FIteratorInternal *)local_468,&param_2->Root,Recursive,param_2->PathSeparator);
    if (local_468._488_4_ != 0) {
      do {
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator*
                  ((FIteratorInternal *)local_468,
                   (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                    *)local_508);
        pTVar3 = local_4f8;
        if ((local_4f8 ==
             (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_4e8.DataPtr = local_508[0];
        local_4e8._8_8_ = local_508[1];
        FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                  (&this->MountPoint,&local_4e8,pTVar3,param_3,param_4,param_5,param_6);
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator++((FIteratorInternal *)local_468);
      } while (local_468._488_4_ != 0);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_468 + 0x1f0));
  }
  else {
    local_4d8.DataPtr = param_1->DataPtr;
    local_4d8.Size = param_1->Size;
    local_4d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::Find(param_2,&local_4d8);
    pFVar7 = local_558;
    if (pTVar3 == (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                   *)0x0) {
      return;
    }
    local_4c8.DataPtr = param_1->DataPtr;
    local_4c8.Size = param_1->Size;
    local_4c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_548 = &this->MountPoint;
    FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (local_548,&local_4c8,pTVar3,param_3,param_4,local_558,param_6);
    if ((param_6->bRecursive == false) && (param_6->bIncludeDirectories == false)) {
      return;
    }
    local_4b8.DataPtr = param_1->DataPtr;
    local_4b8.Size = param_1->Size;
    local_4b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_570.ArrayNum = 0;
    local_570.ArrayMax = 0;
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::TryGetChildren(param_2,&local_4b8,&local_570,(uint)(param_6->bRecursive != false));
    uVar4 = (ulonglong)local_570.ArrayNum;
    FVar9 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
             )(uVar4 * 0x10 + (longlong)local_570.AllocatorInstance.Data);
    local_560 = local_570.ArrayNum;
    FVar8.Data = local_570.AllocatorInstance.Data;
    while( true ) {
      if (local_570.ArrayNum != (int)uVar4) {
        local_588[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_588);
      }
      if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )FVar8.Data == FVar9) break;
      local_538 = *(wchar_t **)FVar8.Data;
      local_498.DataPtr = param_1->DataPtr;
      local_498.Size = param_1->Size;
      local_498._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iStack_530 = *(int *)((longlong)FVar8.Data + 8) + -1;
      if (*(int *)((longlong)FVar8.Data + 8) == 0) {
        iStack_530 = 0;
      }
      local_4a8._12_4_ = uStack_52c;
      local_4a8.Size = iStack_530;
      local_4a8.DataPtr = local_538;
      PakPathCombineInternal<wchar_t>(&local_580,&local_498,&local_4a8);
      iVar5 = local_580.Data.ArrayNum;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar6 = iVar5 + -2;
        if (iVar5 == 0) {
          iVar6 = -1;
        }
        if (((iVar6 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar6)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = local_580.Data.ArrayNum;
        }
        pFVar7 = local_558;
        if (*(short *)(local_580.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) != 0x2f) {
          ::FString::AppendChars(&local_580,L"/",1);
          iVar5 = local_580.Data.ArrayNum;
          pFVar7 = local_558;
        }
      }
      local_528 = local_580.Data.AllocatorInstance.Data;
      iStack_520 = iVar5 + -1;
      if (iVar5 == 0) {
        iStack_520 = 0;
      }
      local_488._12_4_ = uStack_51c;
      local_488.Size = iStack_520;
      local_488.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
      pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
               ::Find(param_2,&local_488);
      if (pTVar3 != (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0) {
        local_518 = local_580.Data.AllocatorInstance.Data;
        iStack_510 = local_580.Data.ArrayNum + -1;
        if (local_580.Data.ArrayNum == 0) {
          iStack_510 = 0;
        }
        local_478._12_4_ = uStack_50c;
        local_478.Size = iStack_510;
        local_478.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
        FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                  (local_548,&local_478,pTVar3,param_3,local_550,pFVar7,param_6);
      }
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      uVar4 = (ulonglong)local_560;
      FVar8.Data = FVar8.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_570.AllocatorInstance.Data,local_570.ArrayNum);
    local_468._480_8_ = local_570.AllocatorInstance.Data;
  }
  if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )local_468._480_8_ !=
      (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )0x0) {
    FMemory::Free((void *)local_468._480_8_);
  }
  return;
}

// FindFilesAtPathInTreeIndexInternal<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a45ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInTreeIndexInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_6)

{
  code *pcVar1;
  bool bVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar9;
  undefined1 auStackY_5c8 [32];
  undefined1 local_588 [8];
  FString local_580;
  TArray<FString,TSizedDefaultAllocator<32>_> local_570;
  uint local_560;
  FString *local_558;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_550;
  FString *local_548;
  wchar_t *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FScriptContainerElement *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508 [2];
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  undefined1 local_468 [1048];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_550 = param_4;
  local_558 = param_5;
  if (param_1->Size == 0) {
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::FIteratorInternal
              ((FIteratorInternal *)local_468,&param_2->Root,Recursive,param_2->PathSeparator);
    if (local_468._488_4_ != 0) {
      do {
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator*
                  ((FIteratorInternal *)local_468,
                   (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                    *)local_508);
        pTVar3 = local_4f8;
        if ((local_4f8 ==
             (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_4e8.DataPtr = local_508[0];
        local_4e8._8_8_ = local_508[1];
        FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (&this->MountPoint,&local_4e8,pTVar3,param_3,param_4,param_5,param_6);
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator++((FIteratorInternal *)local_468);
      } while (local_468._488_4_ != 0);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_468 + 0x1f0));
  }
  else {
    local_4d8.DataPtr = param_1->DataPtr;
    local_4d8.Size = param_1->Size;
    local_4d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::Find(param_2,&local_4d8);
    pFVar7 = local_558;
    if (pTVar3 == (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                   *)0x0) {
      return;
    }
    local_4c8.DataPtr = param_1->DataPtr;
    local_4c8.Size = param_1->Size;
    local_4c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_548 = &this->MountPoint;
    FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (local_548,&local_4c8,pTVar3,param_3,param_4,local_558,param_6);
    if ((param_6->bRecursive == false) && (param_6->bIncludeDirectories == false)) {
      return;
    }
    local_4b8.DataPtr = param_1->DataPtr;
    local_4b8.Size = param_1->Size;
    local_4b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_570.ArrayNum = 0;
    local_570.ArrayMax = 0;
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::TryGetChildren(param_2,&local_4b8,&local_570,(uint)(param_6->bRecursive != false));
    uVar4 = (ulonglong)local_570.ArrayNum;
    FVar9 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
             )(uVar4 * 0x10 + (longlong)local_570.AllocatorInstance.Data);
    local_560 = local_570.ArrayNum;
    FVar8.Data = local_570.AllocatorInstance.Data;
    while( true ) {
      if (local_570.ArrayNum != (int)uVar4) {
        local_588[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_588);
      }
      if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )FVar8.Data == FVar9) break;
      local_538 = *(wchar_t **)FVar8.Data;
      local_498.DataPtr = param_1->DataPtr;
      local_498.Size = param_1->Size;
      local_498._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iStack_530 = *(int *)((longlong)FVar8.Data + 8) + -1;
      if (*(int *)((longlong)FVar8.Data + 8) == 0) {
        iStack_530 = 0;
      }
      local_4a8._12_4_ = uStack_52c;
      local_4a8.Size = iStack_530;
      local_4a8.DataPtr = local_538;
      PakPathCombineInternal<wchar_t>(&local_580,&local_498,&local_4a8);
      iVar5 = local_580.Data.ArrayNum;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar6 = iVar5 + -2;
        if (iVar5 == 0) {
          iVar6 = -1;
        }
        if (((iVar6 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar6)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = local_580.Data.ArrayNum;
        }
        pFVar7 = local_558;
        if (*(short *)(local_580.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) != 0x2f) {
          ::FString::AppendChars(&local_580,L"/",1);
          iVar5 = local_580.Data.ArrayNum;
          pFVar7 = local_558;
        }
      }
      local_528 = local_580.Data.AllocatorInstance.Data;
      iStack_520 = iVar5 + -1;
      if (iVar5 == 0) {
        iStack_520 = 0;
      }
      local_488._12_4_ = uStack_51c;
      local_488.Size = iStack_520;
      local_488.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
      pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
               ::Find(param_2,&local_488);
      if (pTVar3 != (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0) {
        local_518 = local_580.Data.AllocatorInstance.Data;
        iStack_510 = local_580.Data.ArrayNum + -1;
        if (local_580.Data.ArrayNum == 0) {
          iStack_510 = 0;
        }
        local_478._12_4_ = uStack_50c;
        local_478.Size = iStack_510;
        local_478.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
        FindFilesAtPathInPakDirectoryInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (local_548,&local_478,pTVar3,param_3,local_550,pFVar7,param_6);
      }
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      uVar4 = (ulonglong)local_560;
      FVar8.Data = FVar8.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_570.AllocatorInstance.Data,local_570.ArrayNum);
    local_468._480_8_ = local_570.AllocatorInstance.Data;
  }
  if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )local_468._480_8_ !=
      (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )0x0) {
    FMemory::Free((void *)local_468._480_8_);
  }
  return;
}

// FindFilesAtPathInTreeIndexInternal<`FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a460a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInTreeIndexInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
          *param_6)

{
  code *pcVar1;
  bool bVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar9;
  undefined1 auStackY_5c8 [32];
  undefined1 local_588 [8];
  FString local_580;
  FString *local_570;
  TArray<FString,TSizedDefaultAllocator<32>_> local_568;
  uint local_558;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_550;
  FString *local_548;
  wchar_t *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FScriptContainerElement *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508 [2];
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  undefined1 local_468 [1048];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_550 = param_4;
  local_570 = param_5;
  if (param_1->Size == 0) {
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::FIteratorInternal
              ((FIteratorInternal *)local_468,&param_2->Root,Recursive,param_2->PathSeparator);
    pFVar7 = local_570;
    if (local_468._488_4_ != 0) {
      do {
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator*
                  ((FIteratorInternal *)local_468,
                   (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                    *)local_508);
        pTVar3 = local_4f8;
        if ((local_4f8 ==
             (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_4e8.DataPtr = local_508[0];
        local_4e8._8_8_ = local_508[1];
        FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (&this->MountPoint,&local_4e8,pTVar3,param_3,param_4,pFVar7,param_6);
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator++((FIteratorInternal *)local_468);
      } while (local_468._488_4_ != 0);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_468 + 0x1f0));
  }
  else {
    local_4d8.DataPtr = param_1->DataPtr;
    local_4d8.Size = param_1->Size;
    local_4d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::Find(param_2,&local_4d8);
    pFVar7 = local_570;
    if (pTVar3 == (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                   *)0x0) {
      return;
    }
    local_4c8.DataPtr = param_1->DataPtr;
    local_4c8.Size = param_1->Size;
    local_4c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_548 = &this->MountPoint;
    FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (local_548,&local_4c8,pTVar3,param_3,param_4,local_570,param_6);
    if ((param_6->bRecursive == false) && (param_6->bIncludeDirectories == false)) {
      return;
    }
    local_4b8.DataPtr = param_1->DataPtr;
    local_4b8.Size = param_1->Size;
    local_4b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.ArrayNum = 0;
    local_568.ArrayMax = 0;
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::TryGetChildren(param_2,&local_4b8,&local_568,(uint)(param_6->bRecursive != false));
    uVar4 = (ulonglong)local_568.ArrayNum;
    FVar9 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
             )(uVar4 * 0x10 + (longlong)local_568.AllocatorInstance.Data);
    local_558 = local_568.ArrayNum;
    FVar8.Data = local_568.AllocatorInstance.Data;
    while( true ) {
      if (local_568.ArrayNum != (int)uVar4) {
        local_588[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_588);
      }
      if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )FVar8.Data == FVar9) break;
      local_538 = *(wchar_t **)FVar8.Data;
      local_498.DataPtr = param_1->DataPtr;
      local_498.Size = param_1->Size;
      local_498._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iStack_530 = *(int *)((longlong)FVar8.Data + 8) + -1;
      if (*(int *)((longlong)FVar8.Data + 8) == 0) {
        iStack_530 = 0;
      }
      local_4a8._12_4_ = uStack_52c;
      local_4a8.Size = iStack_530;
      local_4a8.DataPtr = local_538;
      PakPathCombineInternal<wchar_t>(&local_580,&local_498,&local_4a8);
      iVar5 = local_580.Data.ArrayNum;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar6 = iVar5 + -2;
        if (iVar5 == 0) {
          iVar6 = -1;
        }
        if (((iVar6 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar6)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = local_580.Data.ArrayNum;
        }
        pFVar7 = local_570;
        if (*(short *)(local_580.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) != 0x2f) {
          ::FString::AppendChars(&local_580,L"/",1);
          iVar5 = local_580.Data.ArrayNum;
          pFVar7 = local_570;
        }
      }
      local_528 = local_580.Data.AllocatorInstance.Data;
      iStack_520 = iVar5 + -1;
      if (iVar5 == 0) {
        iStack_520 = 0;
      }
      local_488._12_4_ = uStack_51c;
      local_488.Size = iStack_520;
      local_488.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
      pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
               ::Find(param_2,&local_488);
      if (pTVar3 != (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0) {
        local_518 = local_580.Data.AllocatorInstance.Data;
        iStack_510 = local_580.Data.ArrayNum + -1;
        if (local_580.Data.ArrayNum == 0) {
          iStack_510 = 0;
        }
        local_478._12_4_ = uStack_50c;
        local_478.Size = iStack_510;
        local_478.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
        FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (local_548,&local_478,pTVar3,param_3,local_550,pFVar7,param_6);
      }
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      uVar4 = (ulonglong)local_558;
      FVar8.Data = FVar8.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_568.AllocatorInstance.Data,local_568.ArrayNum);
    local_468._480_8_ = local_568.AllocatorInstance.Data;
  }
  if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )local_468._480_8_ !=
      (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )0x0) {
    FMemory::Free((void *)local_468._480_8_);
  }
  return;
}

// FindFilesAtPathInTreeIndexInternal<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a46460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInTreeIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_6)

{
  code *pcVar1;
  bool bVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar9;
  undefined1 auStackY_5c8 [32];
  undefined1 local_588 [8];
  FString local_580;
  FString *local_570;
  TArray<FString,TSizedDefaultAllocator<32>_> local_568;
  uint local_558;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_550;
  FString *local_548;
  wchar_t *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FScriptContainerElement *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508 [2];
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  undefined1 local_468 [1048];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_550 = param_4;
  local_570 = param_5;
  if (param_1->Size == 0) {
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::FIteratorInternal
              ((FIteratorInternal *)local_468,&param_2->Root,Recursive,param_2->PathSeparator);
    pFVar7 = local_570;
    if (local_468._488_4_ != 0) {
      do {
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator*
                  ((FIteratorInternal *)local_468,
                   (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                    *)local_508);
        pTVar3 = local_4f8;
        if ((local_4f8 ==
             (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_4e8.DataPtr = local_508[0];
        local_4e8._8_8_ = local_508[1];
        FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                  (&this->MountPoint,&local_4e8,pTVar3,param_3,param_4,pFVar7,param_6);
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator++((FIteratorInternal *)local_468);
      } while (local_468._488_4_ != 0);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_468 + 0x1f0));
  }
  else {
    local_4d8.DataPtr = param_1->DataPtr;
    local_4d8.Size = param_1->Size;
    local_4d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::Find(param_2,&local_4d8);
    pFVar7 = local_570;
    if (pTVar3 == (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                   *)0x0) {
      return;
    }
    local_4c8.DataPtr = param_1->DataPtr;
    local_4c8.Size = param_1->Size;
    local_4c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_548 = &this->MountPoint;
    FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (local_548,&local_4c8,pTVar3,param_3,param_4,local_570,param_6);
    if ((param_6->bRecursive == false) && (param_6->bIncludeDirectories == false)) {
      return;
    }
    local_4b8.DataPtr = param_1->DataPtr;
    local_4b8.Size = param_1->Size;
    local_4b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.ArrayNum = 0;
    local_568.ArrayMax = 0;
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::TryGetChildren(param_2,&local_4b8,&local_568,(uint)(param_6->bRecursive != false));
    uVar4 = (ulonglong)local_568.ArrayNum;
    FVar9 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
             )(uVar4 * 0x10 + (longlong)local_568.AllocatorInstance.Data);
    local_558 = local_568.ArrayNum;
    FVar8.Data = local_568.AllocatorInstance.Data;
    while( true ) {
      if (local_568.ArrayNum != (int)uVar4) {
        local_588[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_588);
      }
      if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )FVar8.Data == FVar9) break;
      local_538 = *(wchar_t **)FVar8.Data;
      local_498.DataPtr = param_1->DataPtr;
      local_498.Size = param_1->Size;
      local_498._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iStack_530 = *(int *)((longlong)FVar8.Data + 8) + -1;
      if (*(int *)((longlong)FVar8.Data + 8) == 0) {
        iStack_530 = 0;
      }
      local_4a8._12_4_ = uStack_52c;
      local_4a8.Size = iStack_530;
      local_4a8.DataPtr = local_538;
      PakPathCombineInternal<wchar_t>(&local_580,&local_498,&local_4a8);
      iVar5 = local_580.Data.ArrayNum;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar6 = iVar5 + -2;
        if (iVar5 == 0) {
          iVar6 = -1;
        }
        if (((iVar6 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar6)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = local_580.Data.ArrayNum;
        }
        pFVar7 = local_570;
        if (*(short *)(local_580.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) != 0x2f) {
          ::FString::AppendChars(&local_580,L"/",1);
          iVar5 = local_580.Data.ArrayNum;
          pFVar7 = local_570;
        }
      }
      local_528 = local_580.Data.AllocatorInstance.Data;
      iStack_520 = iVar5 + -1;
      if (iVar5 == 0) {
        iStack_520 = 0;
      }
      local_488._12_4_ = uStack_51c;
      local_488.Size = iStack_520;
      local_488.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
      pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
               ::Find(param_2,&local_488);
      if (pTVar3 != (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0) {
        local_518 = local_580.Data.AllocatorInstance.Data;
        iStack_510 = local_580.Data.ArrayNum + -1;
        if (local_580.Data.ArrayNum == 0) {
          iStack_510 = 0;
        }
        local_478._12_4_ = uStack_50c;
        local_478.Size = iStack_510;
        local_478.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
        FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
                  (local_548,&local_478,pTVar3,param_3,local_550,pFVar7,param_6);
      }
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      uVar4 = (ulonglong)local_558;
      FVar8.Data = FVar8.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_568.AllocatorInstance.Data,local_568.ArrayNum);
    local_468._480_8_ = local_568.AllocatorInstance.Data;
  }
  if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )local_468._480_8_ !=
      (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )0x0) {
    FMemory::Free((void *)local_468._480_8_);
  }
  return;
}

// FindFilesAtPathInTreeIndexInternal<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a46820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindFilesAtPathInTreeIndexInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,TStringView<wchar_t> *param_1,
          TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          *param_2,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,FString *param_5,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_6)

{
  code *pcVar1;
  bool bVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar9;
  undefined1 auStackY_5c8 [32];
  undefined1 local_588 [8];
  FString local_580;
  FString *local_570;
  TArray<FString,TSizedDefaultAllocator<32>_> local_568;
  uint local_558;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_550;
  FString *local_548;
  wchar_t *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FScriptContainerElement *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508 [2];
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  undefined1 local_468 [1048];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_550 = param_4;
  local_570 = param_5;
  if (param_1->Size == 0) {
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::FIteratorInternal
              ((FIteratorInternal *)local_468,&param_2->Root,Recursive,param_2->PathSeparator);
    pFVar7 = local_570;
    if (local_468._488_4_ != 0) {
      do {
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator*
                  ((FIteratorInternal *)local_468,
                   (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                    *)local_508);
        pTVar3 = local_4f8;
        if ((local_4f8 ==
             (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_4e8.DataPtr = local_508[0];
        local_4e8._8_8_ = local_508[1];
        FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (&this->MountPoint,&local_4e8,pTVar3,param_3,param_4,pFVar7,param_6);
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::operator++((FIteratorInternal *)local_468);
      } while (local_468._488_4_ != 0);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_468 + 0x1f0));
  }
  else {
    local_4d8.DataPtr = param_1->DataPtr;
    local_4d8.Size = param_1->Size;
    local_4d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::Find(param_2,&local_4d8);
    pFVar7 = local_570;
    if (pTVar3 == (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                   *)0x0) {
      return;
    }
    local_4c8.DataPtr = param_1->DataPtr;
    local_4c8.Size = param_1->Size;
    local_4c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_548 = &this->MountPoint;
    FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (local_548,&local_4c8,pTVar3,param_3,param_4,local_570,param_6);
    if ((param_6->bRecursive == false) && (param_6->bIncludeDirectories == false)) {
      return;
    }
    local_4b8.DataPtr = param_1->DataPtr;
    local_4b8.Size = param_1->Size;
    local_4b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.ArrayNum = 0;
    local_568.ArrayMax = 0;
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::TryGetChildren(param_2,&local_4b8,&local_568,(uint)(param_6->bRecursive != false));
    uVar4 = (ulonglong)local_568.ArrayNum;
    FVar9 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
             )(uVar4 * 0x10 + (longlong)local_568.AllocatorInstance.Data);
    local_558 = local_568.ArrayNum;
    FVar8.Data = local_568.AllocatorInstance.Data;
    while( true ) {
      if (local_568.ArrayNum != (int)uVar4) {
        local_588[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_588);
      }
      if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )FVar8.Data == FVar9) break;
      local_538 = *(wchar_t **)FVar8.Data;
      local_498.DataPtr = param_1->DataPtr;
      local_498.Size = param_1->Size;
      local_498._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iStack_530 = *(int *)((longlong)FVar8.Data + 8) + -1;
      if (*(int *)((longlong)FVar8.Data + 8) == 0) {
        iStack_530 = 0;
      }
      local_4a8._12_4_ = uStack_52c;
      local_4a8.Size = iStack_530;
      local_4a8.DataPtr = local_538;
      PakPathCombineInternal<wchar_t>(&local_580,&local_498,&local_4a8);
      iVar5 = local_580.Data.ArrayNum;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar6 = iVar5 + -2;
        if (iVar5 == 0) {
          iVar6 = -1;
        }
        if (((iVar6 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar6)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar5 = local_580.Data.ArrayNum;
        }
        pFVar7 = local_570;
        if (*(short *)(local_580.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) != 0x2f) {
          ::FString::AppendChars(&local_580,L"/",1);
          iVar5 = local_580.Data.ArrayNum;
          pFVar7 = local_570;
        }
      }
      local_528 = local_580.Data.AllocatorInstance.Data;
      iStack_520 = iVar5 + -1;
      if (iVar5 == 0) {
        iStack_520 = 0;
      }
      local_488._12_4_ = uStack_51c;
      local_488.Size = iStack_520;
      local_488.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
      pTVar3 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
               ::Find(param_2,&local_488);
      if (pTVar3 != (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                     *)0x0) {
        local_518 = local_580.Data.AllocatorInstance.Data;
        iStack_510 = local_580.Data.ArrayNum + -1;
        if (local_580.Data.ArrayNum == 0) {
          iStack_510 = 0;
        }
        local_478._12_4_ = uStack_50c;
        local_478.Size = iStack_510;
        local_478.DataPtr = (wchar_t *)local_580.Data.AllocatorInstance.Data;
        FindFilesAtPathInPakDirectoryInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (local_548,&local_478,pTVar3,param_3,local_550,pFVar7,param_6);
      }
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      uVar4 = (ulonglong)local_558;
      FVar8.Data = FVar8.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_568.AllocatorInstance.Data,local_568.ArrayNum);
    local_468._480_8_ = local_568.AllocatorInstance.Data;
  }
  if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )local_468._480_8_ !=
      (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
       )0x0) {
    FMemory::Free((void *)local_468._480_8_);
  }
  return;
}

// FindPrunedFilesAtPathInternal<`FPakFile::FindPrunedFilesAtPath'::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a471e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindPrunedFilesAtPathInternal<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          FVisitFilter<_public:_void___cdecl_FPakFile::FindPrunedFilesAtPath(wchar_t_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&,bool,bool,bool)const_::_2_::<lambda_1>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  FIndexSettings *pFVar10;
  byte bVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  char local_187;
  FString local_180;
  int local_170;
  int local_16c;
  longlong *local_168;
  uint uStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  uint local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  ::FString::FString(&local_180,param_1);
  uVar9 = 1;
  iVar15 = local_180.Data.ArrayNum + -1;
  if (local_180.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  if (0 < iVar15) {
    iVar15 = local_180.Data.ArrayNum + -2;
    if (local_180.Data.ArrayNum == 0) {
      iVar15 = -1;
    }
    if ((((iVar15 < 0) || (local_180.Data.ArrayNum == 0)) ||
        (local_180.Data.ArrayNum + -1 <= iVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(short *)(local_180.Data.AllocatorInstance.Data + (longlong)iVar15 * 2) != 0x2f) {
      ::FString::AppendChars(&local_180,L"/",1);
    }
  }
  iVar4 = (this->MountPoint).Data.ArrayNum;
  iVar15 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar15 = 0;
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
  }
  bVar8 = ::FString::StartsWith(&local_180,pwVar13,iVar15,IgnoreCase);
  if (!bVar8) {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_180.Data.ArrayNum != 0) {
      FVar14.Data = local_180.Data.AllocatorInstance.Data;
    }
    iVar15 = local_180.Data.ArrayNum + -1;
    if (local_180.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    bVar8 = ::FString::StartsWith(&this->MountPoint,(wchar_t *)FVar14.Data,iVar15,IgnoreCase);
    if (!bVar8) goto LAB_142a47733;
  }
  local_187 = this->bWillPruneDirectoryIndex;
  if ((bool)local_187 != false) {
    AcquireSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
  }
  pFVar10 = GetIndexSettings();
  if (((pFVar10->bValidatePruning == false) || (this->bWillPruneDirectoryIndex == false)) ||
     (this->bNeedsLegacyPruning != false)) {
    FindFilesAtPathInIndex<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (this,&this->DirectoryIndex,&this->DirectoryTreeIndex,param_2,&local_180,param_3);
  }
  else {
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_c8 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    uVar18 = 0;
    local_c0 = 0;
    local_b4 = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    FindFilesAtPathInIndex<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&this->DirectoryIndex,&this->DirectoryTreeIndex,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,&local_180,
               param_3);
    FindFilesAtPathInIndex<_FPakFile::FindPrunedFilesAtPath_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&this->PrunedDirectoryIndex,&this->PrunedDirectoryTreeIndex,&local_98,&local_180
               ,param_3);
    ValidateDirectorySearch
              (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_e8,
               &local_98,param_1);
    uVar20 = local_c0;
    local_148 = 0;
    uStack_14c = local_148;
    if (local_c0 != 0) {
      pTVar19 = pTVar3;
      if (local_c8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = local_c8;
      }
      uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      local_148 = 0;
      uVar18 = 0;
      while (uVar17 == 0) {
        lVar12 = (longlong)(int)uVar18;
        local_148 = local_148 + 0x20;
        uVar18 = uVar18 + 1;
        uStack_14c = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_142a474a1;
        uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar9 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_170 = (int)lVar12;
      uStack_14c = (local_148 - 1) + local_170;
      if ((int)local_c0 < (int)uStack_14c) {
        uStack_14c = local_c0;
      }
    }
LAB_142a474a1:
    local_168 = (longlong *)local_e8;
    uStack_144 = local_ec;
    uVar17 = local_c0 & 0xffffffe0;
    iStack_140 = local_e8._8_4_ - local_b4;
    uStack_150 = 0xffffffff;
    TStack_130.CurrentBitIndex = uStack_14c;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    TStack_130._padding_ = CONCAT44(uVar9,uVar18);
    iVar15 = (int)local_c0 >> 5;
    TStack_130._28_4_ = local_ec;
    TStack_130.BaseBitIndex = local_148;
    uStack_110 = CONCAT44(uStack_13c,iStack_140);
    bVar11 = (byte)local_c0;
    uStack_160 = uVar18;
    uStack_15c = uVar9;
    local_158 = pTVar3;
    local_138 = local_168;
    TStack_130.Array = pTVar3;
    if (((int)local_c0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar20 != local_c0) {
      pTVar19 = pTVar3;
      if (local_c8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = local_c8;
      }
      uVar9 = -1 << (bVar11 & 0x1f) &
              *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar9 == 0) {
        lVar12 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar20 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_142a475b0;
        uVar9 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_16c = (int)lVar12;
      uVar20 = local_16c + -1 + uVar17;
      if ((int)local_c0 < (int)uVar20) {
        uVar20 = local_c0;
      }
    }
LAB_142a475b0:
    while( true ) {
      plVar7 = local_138;
      if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
        local_188 = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_188);
      }
      if (((TStack_130.CurrentBitIndex == uVar20) && (TStack_130.Array == pTVar3)) &&
         (plVar7 == (longlong *)local_e8)) break;
      piVar16 = &param_2->ArrayMax;
      pFVar1 = (FScriptContainerElement *)(*plVar7 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)*piVar16 * 0x10)) &&
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
      iVar15 = param_2->ArrayNum;
      if (iVar15 == *piVar16) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar16);
      }
      param_2->ArrayNum = iVar15 + 1;
      ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar15 * 0x10),
                         (FString *)pFVar1);
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
  }
  if (local_187 != '\0') {
    ReleaseSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
  }
LAB_142a47733:
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  return;
}

// FindPrunedFilesAtPathInternal<`FPakPlatformFile::IterateDirectoryInPakFiles'::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 142a47780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindPrunedFilesAtPathInternal<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FPakFile *this,wchar_t *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          FVisitFilter<_private:_bool___cdecl_FPakPlatformFile::IterateDirectoryInPakFiles(wchar_t_const_*,UE::PakFile::Private::FPakFileDirectoryVisitorBase_&,bool,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&)_::_2_::<lambda_1>_>
          *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FIndexSettings *pFVar8;
  byte bVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStackY_1c8 [32];
  undefined1 local_197 [7];
  FString local_190;
  int local_180;
  FString local_17c;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  ::FString::FString(&local_190,param_1);
  uVar7 = 1;
  iVar12 = local_190.Data.ArrayNum + -1;
  if (local_190.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  if (0 < iVar12) {
    iVar12 = local_190.Data.ArrayNum + -2;
    if (local_190.Data.ArrayNum == 0) {
      iVar12 = -1;
    }
    if ((((iVar12 < 0) || (local_190.Data.ArrayNum == 0)) ||
        (local_190.Data.ArrayNum + -1 <= iVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(short *)(local_190.Data.AllocatorInstance.Data + (longlong)iVar12 * 2) != 0x2f) {
      ::FString::AppendChars(&local_190,L"/",1);
    }
  }
  iVar12 = (this->MountPoint).Data.ArrayNum;
  uVar14 = 0;
  if (iVar12 == 0) {
    pwVar11 = L"";
    uVar13 = uVar14;
  }
  else {
    pwVar11 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
    uVar13 = iVar12 - 1;
  }
  bVar5 = ::FString::StartsWith(&local_190,pwVar11,uVar13,IgnoreCase);
  if (!bVar5) {
    uVar13 = local_190.Data.ArrayNum - 1;
    FVar3.Data = local_190.Data.AllocatorInstance.Data;
    if (local_190.Data.ArrayNum == 0) {
      uVar13 = uVar14;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    bVar5 = ::FString::StartsWith(&this->MountPoint,(wchar_t *)FVar3.Data,uVar13,IgnoreCase);
    if (!bVar5) goto LAB_142a47c1f;
  }
  bVar5 = this->bWillPruneDirectoryIndex;
  if (bVar5 != false) {
    AcquireSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
  }
  pFVar8 = GetIndexSettings();
  if (((pFVar8->bValidatePruning == false) || (this->bWillPruneDirectoryIndex == false)) ||
     (this->bNeedsLegacyPruning != false)) {
    FindFilesAtPathInIndex<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&this->DirectoryIndex,&this->DirectoryTreeIndex,param_2,&local_190,param_3);
  }
  else {
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_d8 = (uint *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (ForElementType<FSetElementId>)0x0;
    local_b0 = 0;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    FindFilesAtPathInIndex<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&this->DirectoryIndex,&this->DirectoryTreeIndex,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8,&local_190,
               param_3);
    FindFilesAtPathInIndex<_FPakPlatformFile::IterateDirectoryInPakFiles_::__l2::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&this->PrunedDirectoryIndex,&this->PrunedDirectoryTreeIndex,&local_a8,&local_190
               ,param_3);
    ValidateDirectorySearch
              (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8,
               &local_a8,param_1);
    uVar13 = local_d0;
    uStack_15c = uVar14;
    local_158 = uVar14;
    if (local_d0 != 0) {
      puVar15 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar15 = local_d8;
      }
      uVar16 = *puVar15;
      local_158 = 0;
      uVar14 = 0;
      while (uVar16 == 0) {
        lVar10 = (longlong)(int)uVar14;
        local_158 = local_158 + 0x20;
        uVar14 = uVar14 + 1;
        uStack_15c = local_d0;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_142a47a31;
        uVar16 = puVar15[lVar10 + 1];
      }
      uVar7 = -uVar16 & uVar16;
      uVar1 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_180 = (int)lVar10;
      uStack_15c = (local_158 - 1) + local_180;
      if ((int)local_d0 < (int)uStack_15c) {
        uStack_15c = local_d0;
      }
    }
LAB_142a47a31:
    local_17c.Data._4_8_ = local_f8;
    uStack_154 = local_fc;
    local_168 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
    uVar16 = local_d0 & 0xffffffe0;
    iStack_150 = local_f8._8_4_ - local_c4;
    uStack_160 = 0xffffffff;
    TStack_140.CurrentBitIndex = uStack_15c;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    TStack_140._padding_ = CONCAT44(uVar7,uVar14);
    iVar12 = (int)local_d0 >> 5;
    TStack_140._28_4_ = local_fc;
    TStack_140.BaseBitIndex = local_158;
    uStack_120 = CONCAT44(uStack_14c,iStack_150);
    bVar9 = (byte)local_d0;
    local_17c.Data.ArrayMax = uVar14;
    uStack_16c = uVar7;
    local_148 = (longlong *)local_17c.Data._4_8_;
    TStack_140.Array = local_168;
    if (((int)local_d0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar13 != local_d0) {
      puVar15 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar15 = local_d8;
      }
      uVar7 = -1 << (bVar9 & 0x1f) & puVar15[iVar12];
      while (uVar7 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = local_d0;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_142a47b3c;
        uVar7 = puVar15[lVar10 + 1];
      }
      uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar16;
      if ((int)local_d0 < (int)uVar13) {
        uVar13 = local_d0;
      }
    }
LAB_142a47b3c:
    while( true ) {
      plVar4 = local_148;
      if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_197);
      }
      if (((TStack_140.CurrentBitIndex == uVar13) &&
          (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
         (plVar4 == (longlong *)local_f8)) break;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_2,&local_17c,(bool *)(*plVar4 + (longlong)TStack_140.CurrentBitIndex * 0x18))
      ;
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
  }
  if (bVar5 != false) {
    ReleaseSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
  }
LAB_142a47c1f:
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  return;
}

// FindPrunedFilesAtPathInternal<`FPakPlatformFile::FindFilesInternal'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 142a47c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakFile::
FindPrunedFilesAtPathInternal<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FPakFile *this,wchar_t *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          FVisitFilter<_private:_void___cdecl_FPakPlatformFile::FindFilesInternal(TArray<FString,TSizedDefaultAllocator<32>_>_&,wchar_t_const_*,wchar_t_const_*,bool)_::_5_::<lambda_1>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  FIndexSettings *pFVar10;
  byte bVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  char local_197;
  FString local_190;
  int local_180;
  int local_17c;
  longlong *local_178;
  uint uStack_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ::FString::FString(&local_190,param_1);
  uVar9 = 1;
  iVar15 = local_190.Data.ArrayNum + -1;
  if (local_190.Data.ArrayNum == 0) {
    iVar15 = 0;
  }
  if (0 < iVar15) {
    iVar15 = local_190.Data.ArrayNum + -2;
    if (local_190.Data.ArrayNum == 0) {
      iVar15 = -1;
    }
    if ((((iVar15 < 0) || (local_190.Data.ArrayNum == 0)) ||
        (local_190.Data.ArrayNum + -1 <= iVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(short *)(local_190.Data.AllocatorInstance.Data + (longlong)iVar15 * 2) != 0x2f) {
      ::FString::AppendChars(&local_190,L"/",1);
    }
  }
  iVar4 = (this->MountPoint).Data.ArrayNum;
  iVar15 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar15 = 0;
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->MountPoint).Data.AllocatorInstance.Data;
  }
  bVar8 = ::FString::StartsWith(&local_190,pwVar13,iVar15,IgnoreCase);
  if (!bVar8) {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar14.Data = local_190.Data.AllocatorInstance.Data;
    }
    iVar15 = local_190.Data.ArrayNum + -1;
    if (local_190.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    bVar8 = ::FString::StartsWith(&this->MountPoint,(wchar_t *)FVar14.Data,iVar15,IgnoreCase);
    if (!bVar8) goto LAB_142a481b3;
  }
  local_197 = this->bWillPruneDirectoryIndex;
  if ((bool)local_197 != false) {
    AcquireSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
  }
  pFVar10 = GetIndexSettings();
  if (((pFVar10->bValidatePruning == false) || (this->bWillPruneDirectoryIndex == false)) ||
     (this->bNeedsLegacyPruning != false)) {
    FindFilesAtPathInIndex<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (this,&this->DirectoryIndex,&this->DirectoryTreeIndex,param_2,&local_190,param_3);
  }
  else {
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_d8 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    uVar18 = 0;
    local_d0 = 0;
    local_c4 = 0;
    local_b8 = (ForElementType<FSetElementId>)0x0;
    local_b0 = 0;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    FindFilesAtPathInIndex<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&this->DirectoryIndex,&this->DirectoryTreeIndex,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8,&local_190,
               param_3);
    FindFilesAtPathInIndex<_FPakPlatformFile::FindFilesInternal_::__l5::<lambda_1>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              (this,&this->PrunedDirectoryIndex,&this->PrunedDirectoryTreeIndex,&local_a8,&local_190
               ,param_3);
    ValidateDirectorySearch
              (this,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_f8,
               &local_a8,param_1);
    uVar20 = local_d0;
    local_158 = 0;
    uStack_15c = local_158;
    if (local_d0 != 0) {
      pTVar19 = pTVar3;
      if (local_d8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = local_d8;
      }
      uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      local_158 = 0;
      uVar18 = 0;
      while (uVar17 == 0) {
        lVar12 = (longlong)(int)uVar18;
        local_158 = local_158 + 0x20;
        uVar18 = uVar18 + 1;
        uStack_15c = local_d0;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_142a47f21;
        uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar9 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_180 = (int)lVar12;
      uStack_15c = (local_158 - 1) + local_180;
      if ((int)local_d0 < (int)uStack_15c) {
        uStack_15c = local_d0;
      }
    }
LAB_142a47f21:
    local_178 = (longlong *)local_f8;
    uStack_154 = local_fc;
    uVar17 = local_d0 & 0xffffffe0;
    iStack_150 = local_f8._8_4_ - local_c4;
    uStack_160 = 0xffffffff;
    TStack_140.CurrentBitIndex = uStack_15c;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    TStack_140._padding_ = CONCAT44(uVar9,uVar18);
    iVar15 = (int)local_d0 >> 5;
    TStack_140._28_4_ = local_fc;
    TStack_140.BaseBitIndex = local_158;
    uStack_120 = CONCAT44(uStack_14c,iStack_150);
    bVar11 = (byte)local_d0;
    uStack_170 = uVar18;
    uStack_16c = uVar9;
    local_168 = pTVar3;
    local_148 = local_178;
    TStack_140.Array = pTVar3;
    if (((int)local_d0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar20 != local_d0) {
      pTVar19 = pTVar3;
      if (local_d8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = local_d8;
      }
      uVar9 = -1 << (bVar11 & 0x1f) &
              *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar9 == 0) {
        lVar12 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar20 = local_d0;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_142a48030;
        uVar9 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_17c = (int)lVar12;
      uVar20 = local_17c + -1 + uVar17;
      if ((int)local_d0 < (int)uVar20) {
        uVar20 = local_d0;
      }
    }
LAB_142a48030:
    while( true ) {
      plVar7 = local_148;
      if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
        local_198 = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_198);
      }
      if (((TStack_140.CurrentBitIndex == uVar20) && (TStack_140.Array == pTVar3)) &&
         (plVar7 == (longlong *)local_f8)) break;
      piVar16 = &param_2->ArrayMax;
      pFVar1 = (FScriptContainerElement *)(*plVar7 + (longlong)TStack_140.CurrentBitIndex * 0x18);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)*piVar16 * 0x10)) &&
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
      iVar15 = param_2->ArrayNum;
      if (iVar15 == *piVar16) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar16);
      }
      param_2->ArrayNum = iVar15 + 1;
      ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar15 * 0x10),
                         (FString *)pFVar1);
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
  }
  if (local_197 != '\0') {
    ReleaseSRWLockShared((PSRWLOCK)&this->DirectoryIndexLock);
  }
LAB_142a481b3:
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  return;
}

// HeapSortInternal<FFileIoStoreReadRequest_*,int,`FFileIoStoreRequestQueue::UpdateSortRequestsByOffset'::__l14::<lambda_1>,TLess<void>_> @ 142a48310

void __cdecl
AlgoImpl::
HeapSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateSortRequestsByOffset_::__l14::<lambda_1>,TLess<void>_>
          (FFileIoStoreReadRequest **param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  FFileIoStoreReadRequest *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142a4840a:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[(longlong)iVar9 + 2]->Sequence < param_1[iVar4]->Sequence) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar4]->Sequence <= pFVar1->Sequence) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Sequence < param_1[iVar6]->Sequence) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar6]->Sequence <= pFVar1->Sequence) goto LAB_142a4840a;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FFileIoStoreReadRequest_*,int,`FFileIoStoreRequestQueue::UpdateOrder'::__l5::<lambda_2>,TLess<void>_> @ 142a484e0

void __cdecl
AlgoImpl::
HeapSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateOrder_::__l5::<lambda_2>,TLess<void>_>
          (FFileIoStoreReadRequest **param_1,int param_2,<lambda_2> param_3,TLess<void> param_4)

{
  FFileIoStoreReadRequest *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142a485da:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[(longlong)iVar9 + 2]->Sequence < param_1[iVar4]->Sequence) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar4]->Sequence <= pFVar1->Sequence) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Sequence < param_1[iVar6]->Sequence) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar6]->Sequence <= pFVar1->Sequence) goto LAB_142a485da;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_> @ 142a486b0

void __cdecl
AlgoImpl::
HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,TGreater<FString>_> param_4)

{
  longlong lVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  FString *pFVar17;
  FString *pFVar18;
  FString *pFVar19;
  
  if (param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar7 = (param_2 + -2) / 2;
  iVar9 = iVar7 * 2 + 1;
  iVar15 = iVar9;
  iVar10 = iVar7;
  do {
    while (param_2 <= iVar9) {
LAB_142a48807:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar16 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar19 = param_1 + lVar16;
          do {
            iVar15 = (pFVar19->Data).ArrayNum;
            iVar7 = (pFVar19->Data).ArrayMax;
            iVar8 = 0;
            pFVar3 = (param_1->Data).AllocatorInstance.Data;
            iVar10 = (param_1->Data).ArrayNum;
            iVar14 = (param_1->Data).ArrayMax;
            (param_1->Data).AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
            (param_1->Data).ArrayNum = iVar15;
            (param_1->Data).ArrayMax = iVar7;
            (pFVar19->Data).AllocatorInstance.Data = pFVar3;
            (pFVar19->Data).ArrayNum = iVar10;
            (pFVar19->Data).ArrayMax = iVar14;
            if (1 < iVar9) {
              do {
                iVar7 = iVar8 * 2;
                iVar15 = iVar7 + 1;
                if (iVar7 + 2 < iVar9) {
                  lVar11 = (longlong)iVar7 + 2;
                  lVar1 = (longlong)iVar7 + 1;
                  if (param_1[lVar11].Data.ArrayNum == 0) {
                    pwVar13 = L"";
                  }
                  else {
                    pwVar13 = (wchar_t *)param_1[lVar11].Data.AllocatorInstance.Data;
                  }
                  if (param_1[lVar1].Data.ArrayNum == 0) {
                    pwVar12 = L"";
                  }
                  else {
                    pwVar12 = (wchar_t *)param_1[lVar1].Data.AllocatorInstance.Data;
                  }
                  iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
                  if (iVar10 < 0) {
                    iVar15 = iVar7;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar18 = param_1 + iVar8;
                pFVar17 = param_1 + iVar15;
                if ((pFVar18->Data).ArrayNum == 0) {
                  pwVar13 = L"";
                }
                else {
                  pwVar13 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
                }
                if ((pFVar17->Data).ArrayNum == 0) {
                  pwVar12 = L"";
                }
                else {
                  pwVar12 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                }
                iVar7 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
                if (-1 < iVar7) break;
                pFVar3 = (pFVar18->Data).AllocatorInstance.Data;
                iVar14 = (pFVar18->Data).ArrayNum;
                iVar8 = (pFVar18->Data).ArrayMax;
                iVar7 = (pFVar17->Data).ArrayNum;
                iVar10 = (pFVar17->Data).ArrayMax;
                (pFVar18->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
                (pFVar18->Data).ArrayNum = iVar7;
                (pFVar18->Data).ArrayMax = iVar10;
                (pFVar17->Data).AllocatorInstance.Data = pFVar3;
                (pFVar17->Data).ArrayNum = iVar14;
                (pFVar17->Data).ArrayMax = iVar8;
                iVar8 = iVar15;
              } while (iVar15 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar16 = lVar16 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar7 = iVar10 + -1;
      iVar9 = iVar15 + -2;
      iVar15 = iVar9;
      iVar10 = iVar7;
    }
    iVar9 = iVar7 * 2;
    iVar14 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      lVar16 = (longlong)iVar9 + 2;
      lVar11 = (longlong)iVar9 + 1;
      if (param_1[lVar16].Data.ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)param_1[lVar16].Data.AllocatorInstance.Data;
      }
      if (param_1[lVar11].Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)param_1[lVar11].Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
      if (iVar8 < 0) {
        iVar14 = iVar9;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar17 = param_1 + iVar7;
    pFVar19 = param_1 + iVar14;
    if ((pFVar17->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
    if (-1 < iVar9) goto LAB_142a48807;
    pFVar3 = (pFVar17->Data).AllocatorInstance.Data;
    iVar4 = (pFVar17->Data).ArrayNum;
    iVar5 = (pFVar17->Data).ArrayMax;
    iVar9 = iVar14 * 2 + 1;
    iVar7 = (pFVar19->Data).ArrayNum;
    iVar8 = (pFVar19->Data).ArrayMax;
    (pFVar17->Data).AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
    (pFVar17->Data).ArrayNum = iVar7;
    (pFVar17->Data).ArrayMax = iVar8;
    (pFVar19->Data).AllocatorInstance.Data = pFVar3;
    (pFVar19->Data).ArrayNum = iVar4;
    (pFVar19->Data).ArrayMax = iVar5;
    iVar7 = iVar14;
  } while( true );
}

// HeapifyInternal<FFileIoStoreReadRequest_*,int,FIdentityFunctor,TDereferenceWrapper<FFileIoStoreReadRequest_*,bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>_> @ 142a48940

void __cdecl
AlgoImpl::
HeapifyInternal<FFileIoStoreReadRequest_*,int,FIdentityFunctor,TDereferenceWrapper<FFileIoStoreReadRequest_*,bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>_>
          (FFileIoStoreReadRequest **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FFileIoStoreReadRequest_*,bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>
          param_4)

{
  FFileIoStoreReadRequest *pFVar1;
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
LAB_142a48a1c:
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
    if (!bVar4) goto LAB_142a48a1c;
    pFVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar6];
    param_1[iVar6] = pFVar1;
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar6;
  } while( true );
}

// IntroSortInternal<FFileIoStoreReadRequest_*,int,`FFileIoStoreRequestQueue::UpdateSortRequestsByOffset'::__l14::<lambda_1>,TLess<void>_> @ 142a48a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateSortRequestsByOffset_::__l14::<lambda_1>,TLess<void>_>
          (FFileIoStoreReadRequest **param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  FFileIoStoreReadRequest **ppFVar1;
  FFileIoStoreReadRequest *pFVar2;
  int iVar3;
  FFileIoStoreReadRequest ***pppFVar4;
  FFileIoStoreReadRequest **ppFVar5;
  FFileIoStoreReadRequest **ppFVar6;
  FFileIoStoreReadRequest **ppFVar7;
  FFileIoStoreReadRequest **ppFVar8;
  FFileIoStoreReadRequest **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FFileIoStoreReadRequest **local_338;
  FFileIoStoreReadRequest **local_328;
  FFileIoStoreReadRequest **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_142a48b10:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_142a48b40:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x000142a48b49;
          goto LAB_142a48b60;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar1)->Sequence <= (*ppFVar6)->Sequence) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_142a48c23;
      }
LAB_142a48c11:
      local_338 = ppFVar1;
      HeapSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateSortRequestsByOffset_::__l14::<lambda_1>,TLess<void>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_142a48c23:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x000142a48b49:
  if ((*ppFVar5)->Sequence <= (*ppFVar8)->Sequence) goto LAB_142a48b40;
LAB_142a48b60:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar8)->Sequence <= (*ppFVar6)->Sequence);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_142a48b40;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_142a48c23;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_142a48c23;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_142a48c11;
  goto LAB_142a48b10;
}

// IntroSortInternal<FFileIoStoreReadRequest_*,int,`FFileIoStoreRequestQueue::UpdateOrder'::__l5::<lambda_2>,TLess<void>_> @ 142a48cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateOrder_::__l5::<lambda_2>,TLess<void>_>
          (FFileIoStoreReadRequest **param_1,int param_2,<lambda_2> param_3,TLess<void> param_4)

{
  FFileIoStoreReadRequest **ppFVar1;
  FFileIoStoreReadRequest *pFVar2;
  int iVar3;
  FFileIoStoreReadRequest ***pppFVar4;
  FFileIoStoreReadRequest **ppFVar5;
  FFileIoStoreReadRequest **ppFVar6;
  FFileIoStoreReadRequest **ppFVar7;
  FFileIoStoreReadRequest **ppFVar8;
  FFileIoStoreReadRequest **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FFileIoStoreReadRequest **local_338;
  FFileIoStoreReadRequest **local_328;
  FFileIoStoreReadRequest **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_142a48d80:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_142a48db0:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x000142a48db9;
          goto LAB_142a48dd0;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar1)->Sequence <= (*ppFVar6)->Sequence) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_142a48e93;
      }
LAB_142a48e81:
      local_338 = ppFVar1;
      HeapSortInternal<FFileIoStoreReadRequest_*,int,_FFileIoStoreRequestQueue::UpdateOrder_::__l5::<lambda_2>,TLess<void>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_142a48e93:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x000142a48db9:
  if ((*ppFVar5)->Sequence <= (*ppFVar8)->Sequence) goto LAB_142a48db0;
LAB_142a48dd0:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar8)->Sequence <= (*ppFVar6)->Sequence);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_142a48db0;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_142a48e93;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_142a48e93;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_142a48e81;
  goto LAB_142a48d80;
}

// IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_> @ 142a48f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
          (FString *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FString,TGreater<FString>_> param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  int iVar15;
  FString **ppFVar16;
  FString *pFVar17;
  FString *pFVar18;
  FString *pFVar19;
  float fVar20;
  undefined1 auStack_388 [48];
  FString *local_358;
  FString *local_348;
  FString *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar20;
    memset(local_330,0,0x2e8);
    ppFVar16 = &local_348;
    do {
      pFVar12 = ppFVar16[1];
      pFVar19 = *ppFVar16;
      local_358 = ppFVar16[2];
      iVar9 = (int)((longlong)pFVar12 - (longlong)pFVar19 >> 4) + 1;
      pFVar18 = pFVar19;
      iVar15 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142a49000:
        if (8 < iVar9) {
          iVar5 = (pFVar18->Data).ArrayNum;
          iVar6 = (pFVar18->Data).ArrayMax;
          pFVar13 = pFVar12 + 1;
          pFVar19 = pFVar18 + iVar9 / 2;
          pFVar1 = (pFVar19->Data).AllocatorInstance.Data;
          iVar7 = (pFVar19->Data).ArrayNum;
          iVar8 = (pFVar19->Data).ArrayMax;
          pFVar19 = pFVar18 + iVar9 / 2;
          (pFVar19->Data).AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar19->Data).ArrayNum = iVar5;
          (pFVar19->Data).ArrayMax = iVar6;
          (pFVar18->Data).AllocatorInstance.Data = pFVar1;
          (pFVar18->Data).ArrayNum = iVar7;
          (pFVar18->Data).ArrayMax = iVar8;
          pFVar19 = pFVar18;
LAB_142a49030:
          pFVar17 = pFVar19;
          pFVar19 = pFVar17 + 1;
          if (pFVar19 <= pFVar12) goto code_r0x000142a49039;
          goto LAB_142a49070;
        }
        for (; pFVar19 = pFVar18, pFVar13 = pFVar18, pFVar18 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar17 = pFVar19, pFVar19 = pFVar13 + 1, pFVar19 <= pFVar12) {
            if ((pFVar17->Data).ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
            if (pFVar13[1].Data.ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
            }
            iVar15 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
            pFVar13 = pFVar19;
            if (-1 < iVar15) {
              pFVar19 = pFVar17;
            }
          }
          pFVar1 = (pFVar17->Data).AllocatorInstance.Data;
          iVar5 = (pFVar17->Data).ArrayNum;
          iVar6 = (pFVar17->Data).ArrayMax;
          iVar15 = (pFVar12->Data).ArrayNum;
          iVar9 = (pFVar12->Data).ArrayMax;
          (pFVar17->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar17->Data).ArrayNum = iVar15;
          (pFVar17->Data).ArrayMax = iVar9;
          (pFVar12->Data).AllocatorInstance.Data = pFVar1;
          (pFVar12->Data).ArrayNum = iVar5;
          (pFVar12->Data).ArrayMax = iVar6;
        }
        goto LAB_142a4915c;
      }
LAB_142a4914b:
      HeapSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
                (pFVar19,iVar9,param_3,param_4);
LAB_142a4915c:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_348 <= ppFVar16);
  }
  return;
code_r0x000142a49039:
  if ((pFVar18->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
  }
  if (pFVar17[1].Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
  if (-1 < iVar9) goto LAB_142a49030;
LAB_142a49070:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar18) break;
    if (pFVar14[-1].Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
  } while (-1 < iVar9);
  pFVar1 = (pFVar13->Data).AllocatorInstance.Data;
  uVar2 = pFVar14[-1].Data.ArrayNum;
  uVar3 = pFVar14[-1].Data.ArrayMax;
  if (pFVar19 <= pFVar13) {
    pFVar4 = (pFVar19->Data).AllocatorInstance.Data;
    iVar9 = pFVar17[1].Data.ArrayNum;
    iVar5 = pFVar17[1].Data.ArrayMax;
    (pFVar19->Data).AllocatorInstance.Data = pFVar1;
    pFVar17[1].Data.ArrayNum = uVar2;
    pFVar17[1].Data.ArrayMax = uVar3;
    (pFVar13->Data).AllocatorInstance.Data = pFVar4;
    pFVar14[-1].Data.ArrayNum = iVar9;
    pFVar14[-1].Data.ArrayMax = iVar5;
    goto LAB_142a49030;
  }
  pFVar4 = (pFVar18->Data).AllocatorInstance.Data;
  iVar9 = (pFVar18->Data).ArrayNum;
  iVar5 = (pFVar18->Data).ArrayMax;
  iVar15 = iVar15 + -1;
  (pFVar18->Data).AllocatorInstance.Data = pFVar1;
  (pFVar18->Data).ArrayNum = uVar2;
  (pFVar18->Data).ArrayMax = uVar3;
  (pFVar13->Data).AllocatorInstance.Data = pFVar4;
  pFVar14[-1].Data.ArrayNum = iVar9;
  pFVar14[-1].Data.ArrayMax = iVar5;
  if ((longlong)((longlong)pFVar13 + (-0x10 - (longlong)pFVar18) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar12 - (longlong)pFVar19 & 0xfffffffffffffff0U)) {
    if (pFVar19 < pFVar12) {
      *ppFVar16 = pFVar19;
      ppFVar16[1] = pFVar12;
      *(int *)(ppFVar16 + 2) = iVar15;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar13 <= pFVar18 + 1) goto LAB_142a4915c;
    pFVar12 = pFVar14 + -2;
    pFVar19 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar13) {
      *ppFVar16 = pFVar18;
      ppFVar16[1] = pFVar14 + -2;
      *(int *)(ppFVar16 + 2) = iVar15;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar12 <= pFVar19) goto LAB_142a4915c;
  }
  iVar9 = (int)((longlong)pFVar12 - (longlong)pFVar19 >> 4) + 1;
  pFVar18 = pFVar19;
  if (iVar15 == 0) goto LAB_142a4914b;
  goto LAB_142a49000;
}

// IsSortedBy<FFileIoStoreOffsetSortedRequestQueue,int,int_(__cdecl*)(FFileIoStoreOffsetSortedRequestQueue_const_&),TLess<int>_> @ 142a49240

bool __cdecl
AlgoImpl::
IsSortedBy<FFileIoStoreOffsetSortedRequestQueue,int,int_(__cdecl*)(FFileIoStoreOffsetSortedRequestQueue_const_&),TLess<int>_>
          (FFileIoStoreOffsetSortedRequestQueue *param_1,int param_2,
          _func___cdecl_int_FFileIoStoreOffsetSortedRequestQueue_ptr *param_3,TLess<int> param_4)

{
  FFileIoStoreOffsetSortedRequestQueue *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = param_1;
  if (param_2 != 0) {
    while (param_2 = param_2 + -1, param_2 != 0) {
      iVar2 = (*param_3)(pFVar1 + 1);
      iVar3 = (*param_3)(param_1);
      if (iVar2 < iVar3) {
        return false;
      }
      param_1 = param_1 + 1;
      pFVar1 = pFVar1 + 1;
    }
  }
  return true;
}

// LowerBoundInternal<FFileIoStoreOffsetSortedRequestQueue_const_,int,int,int_(__cdecl*)(FFileIoStoreOffsetSortedRequestQueue_const_&),TLess<int>_> @ 142a492c0

int __cdecl
AlgoImpl::
LowerBoundInternal<FFileIoStoreOffsetSortedRequestQueue_const_,int,int,int_(__cdecl*)(FFileIoStoreOffsetSortedRequestQueue_const_&),TLess<int>_>
          (FFileIoStoreOffsetSortedRequestQueue *param_1,int param_2,int *param_3,
          _func___cdecl_int_FFileIoStoreOffsetSortedRequestQueue_ptr *param_4,TLess<int> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = (*param_4)(param_1 + iVar1);
      if (iVar3 < *param_3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<FFileIoStoreReadRequest_*_const,int,FFileIoStoreReadRequestSortKey,FFileIoStoreReadRequestSortKey_(__cdecl*)(FFileIoStoreReadRequest_*),bool_(__cdecl*)(FFileIoStoreReadRequestSortKey_const_&,FFileIoStoreReadRequestSortKey_const_&)> @ 142a49340

int __cdecl
AlgoImpl::
LowerBoundInternal<FFileIoStoreReadRequest_*_const,int,FFileIoStoreReadRequestSortKey,FFileIoStoreReadRequestSortKey_(__cdecl*)(FFileIoStoreReadRequest_*),bool_(__cdecl*)(FFileIoStoreReadRequestSortKey_const_&,FFileIoStoreReadRequestSortKey_const_&)>
          (FFileIoStoreReadRequest **param_1,int param_2,FFileIoStoreReadRequestSortKey *param_3,
          _func___cdecl_FFileIoStoreReadRequestSortKey_FFileIoStoreReadRequest_ptr *param_4,
          _func___cdecl_bool_FFileIoStoreReadRequestSortKey_ptr_FFileIoStoreReadRequestSortKey_ptr
          *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  FFileIoStoreReadRequestSortKey local_48;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      (*param_4)(&local_48,param_1[iVar1]);
      bVar3 = (*param_5)(&local_48,param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<FPakPlatformFile::FPakListEntry,int,FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_> @ 142a493e0

/* WARNING: Enum "EVersion": Some values do not have unique names */

int __cdecl
AlgoImpl::
LowerBoundInternal<FPakPlatformFile::FPakListEntry,int,FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_>
          (FPakListEntry *param_1,int param_2,FPakListEntry *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_3->ReadOrder < param_1[iVar1].ReadOrder) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeEntryDataSlice<unsigned_int> @ 142a49440

TArrayView<unsigned_int_const_,int> * __cdecl
MakeEntryDataSlice<unsigned_int>
          (TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,uint *param_1,
          TArrayView<unsigned_int_const_,int> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_int_const_,int> *pTVar4;
  
  if (param_1 < param_2->DataPtr) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("NumHeader >= Bounds.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x22e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  uVar1 = *param_1;
  __return_storage_ptr__->DataPtr = param_1 + 1;
  __return_storage_ptr__->ArrayNum = uVar1;
  if ((int)uVar1 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (__return_storage_ptr__->ArrayNum < 1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Out.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x230,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (param_2->DataPtr + param_2->ArrayNum <
      __return_storage_ptr__->DataPtr + __return_storage_ptr__->ArrayNum) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("reinterpret_cast<const uint32*>(Out.end()) <= Bounds.end()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x231,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// MakeEntryDataSlice<FPackageId> @ 142a49540

TArrayView<FPackageId_const_,int> * __cdecl
MakeEntryDataSlice<FPackageId>
          (TArrayView<FPackageId_const_,int> *__return_storage_ptr__,uint *param_1,
          TArrayView<unsigned_int_const_,int> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPackageId_const_,int> *pTVar4;
  
  if (param_1 < param_2->DataPtr) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("NumHeader >= Bounds.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x22e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  uVar1 = *param_1;
  __return_storage_ptr__->DataPtr = (FPackageId *)(param_1 + 1);
  __return_storage_ptr__->ArrayNum = uVar1;
  if ((int)uVar1 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (__return_storage_ptr__->ArrayNum < 1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Out.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x230,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((FPackageId *)(param_2->DataPtr + param_2->ArrayNum) <
      __return_storage_ptr__->DataPtr + __return_storage_ptr__->ArrayNum) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("reinterpret_cast<const uint32*>(Out.end()) <= Bounds.end()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x231,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// MakeEntryDataSlice<FSHAHash> @ 142a49640

TArrayView<FSHAHash_const_,int> * __cdecl
MakeEntryDataSlice<FSHAHash>
          (TArrayView<FSHAHash_const_,int> *__return_storage_ptr__,uint *param_1,
          TArrayView<unsigned_int_const_,int> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSHAHash_const_,int> *pTVar4;
  
  if (param_1 < param_2->DataPtr) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("NumHeader >= Bounds.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x22e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  uVar1 = *param_1;
  __return_storage_ptr__->DataPtr = (FSHAHash *)(param_1 + 1);
  __return_storage_ptr__->ArrayNum = uVar1;
  if ((int)uVar1 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (__return_storage_ptr__->ArrayNum < 1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Out.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x230,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((FSHAHash *)(param_2->DataPtr + param_2->ArrayNum) <
      __return_storage_ptr__->DataPtr + __return_storage_ptr__->ArrayNum) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("reinterpret_cast<const uint32*>(Out.end()) <= Bounds.end()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x231,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// MaskInterval<FPakPrecacher::FCacheBlock> @ 142a49750

void __cdecl
MaskInterval<FPakPrecacher::FCacheBlock>
          (uint param_1,TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *param_2,ulong64 param_3,
          ulong64 param_4,uint param_5,ulong64 *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = ~param_2->SaltMask & param_1;
  if (((((param_2->SaltMask & param_1) != param_2->Salt) || (uVar7 == 0)) ||
      ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if ((int)uVar7 < (param_2->Items).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_2->Items).AllocatorInstance.Data;
  uVar6 = *(ulonglong *)(pFVar1 + (longlong)(int)uVar7 * 0x30) & 0xffffffffffff;
  uVar8 = (uVar6 - 1) + *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x30 + 8);
  if (uVar6 < param_3) {
    uVar6 = param_3;
  }
  if (param_4 < uVar8) {
    uVar8 = param_4;
  }
  if (uVar6 <= uVar8) {
    uVar6 = uVar6 - param_3 >> ((byte)param_5 & 0x3f);
    uVar9 = uVar8 - param_3 >> ((byte)param_5 & 0x3f);
    uVar10 = uVar6 >> 6 & 0x3ffffff;
    uVar8 = uVar9 >> 6 & 0x3ffffff;
    bVar3 = (byte)uVar9 & 0x3f;
    uVar6 = -1L << ((byte)uVar6 & 0x3f);
    uVar7 = (uint)uVar8;
    if ((uint)uVar10 == uVar7) {
      param_6[uVar10] = 0xffffffffffffffffU >> (0x3f - bVar3 & 0x3f) & uVar6 | param_6[uVar10];
    }
    else {
      uVar5 = (uint)uVar10 + 1;
      param_6[uVar10] = uVar6 | param_6[uVar10];
      if (uVar5 < uVar7) {
        memset(param_6 + uVar5,-1,(ulonglong)(uVar7 - uVar5) << 3);
      }
      param_6[uVar8] = param_6[uVar8] | 0xffffffffffffffffU >> (0x3f - bVar3 & 0x3f);
    }
  }
  return;
}

// MaskInterval<FPakPrecacher::FPakInRequest> @ 142a498f0

void __cdecl
MaskInterval<FPakPrecacher::FPakInRequest>
          (uint param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,
          ulong64 param_3,ulong64 param_4,uint param_5,ulong64 *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = ~param_2->SaltMask & param_1;
  if (((((param_2->SaltMask & param_1) != param_2->Salt) || (uVar7 == 0)) ||
      ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if ((int)uVar7 < (param_2->Items).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_2->Items).AllocatorInstance.Data;
  uVar6 = *(ulonglong *)(pFVar1 + (longlong)(int)uVar7 * 0x30) & 0xffffffffffff;
  uVar8 = (uVar6 - 1) + *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x30 + 8);
  if (uVar6 < param_3) {
    uVar6 = param_3;
  }
  if (param_4 < uVar8) {
    uVar8 = param_4;
  }
  if (uVar6 <= uVar8) {
    uVar6 = uVar6 - param_3 >> ((byte)param_5 & 0x3f);
    uVar9 = uVar8 - param_3 >> ((byte)param_5 & 0x3f);
    uVar10 = uVar6 >> 6 & 0x3ffffff;
    uVar8 = uVar9 >> 6 & 0x3ffffff;
    bVar3 = (byte)uVar9 & 0x3f;
    uVar6 = -1L << ((byte)uVar6 & 0x3f);
    uVar7 = (uint)uVar8;
    if ((uint)uVar10 == uVar7) {
      param_6[uVar10] = 0xffffffffffffffffU >> (0x3f - bVar3 & 0x3f) & uVar6 | param_6[uVar10];
    }
    else {
      uVar5 = (uint)uVar10 + 1;
      param_6[uVar10] = uVar6 | param_6[uVar10];
      if (uVar5 < uVar7) {
        memset(param_6 + uVar5,-1,(ulonglong)(uVar7 - uVar5) << 3);
      }
      param_6[uVar8] = param_6[uVar8] | 0xffffffffffffffffU >> (0x3f - bVar3 & 0x3f);
    }
  }
  return;
}

// MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock> @ 142a49a90

void __cdecl
MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *param_2,ulong64 param_3
          ,ulong64 param_4,ulong64 param_5,ulong64 param_6,uint param_7,uint param_8,
          TFunctionRef<bool___cdecl(unsigned_int)> *param_9)

{
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint local_98 [2];
  uint local_90 [2];
  uint local_88 [2];
  uint local_80 [2];
  FScriptContainerElement *local_78;
  longlong local_70;
  ulonglong local_68;
  code *local_60 [2];
  code *local_50 [3];
  
  uVar8 = *param_1;
  if (uVar8 != 0) {
    uVar7 = ~GIntervalTreeNodeNodeAllocator.SaltMask & uVar8;
    local_70 = param_4 << ((byte)param_7 & 0x3f);
    if (((((uVar8 & GIntervalTreeNodeNodeAllocator.SaltMask) != GIntervalTreeNodeNodeAllocator.Salt)
         || (uVar7 == 0)) || ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar7)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x4a,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = 0;
    if ((int)uVar7 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 0xc;
    local_68 = param_6 + 1 + param_5 >> 1;
    local_78 = pFVar9;
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      pcVar2 = *(code **)param_9;
      uVar1 = *(undefined8 *)&param_9->field_0x8;
      if (param_7 == param_8) {
        uVar8 = *(uint *)pFVar9;
        pFVar10 = pFVar9;
        while (local_78 = pFVar9, uVar8 != 0) {
          uVar7 = ~param_2->SaltMask & uVar8;
          if (((((uVar8 & param_2->SaltMask) != param_2->Salt) || (uVar7 == 0)) ||
              ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                 ,0x4a,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (param_2->Items).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar6 = (longlong)(int)uVar7;
          pFVar9 = (param_2->Items).AllocatorInstance.Data;
          uVar8 = *(uint *)(pFVar9 + lVar6 * 0x30 + 0x20);
          if ((((*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff) - 1) +
               *(longlong *)(pFVar9 + lVar6 * 0x30 + 8) < param_3) ||
             (param_4 < (*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff))) {
LAB_142a49cce:
            pFVar10 = pFVar9 + lVar6 * 0x30 + 0x20;
          }
          else {
            local_90[0] = *(uint *)pFVar10;
            cVar5 = (*pcVar2)(uVar1,local_90);
            if (cVar5 == '\0') goto LAB_142a49cce;
            *(uint *)pFVar10 = uVar8;
          }
          pFVar9 = local_78;
          uVar8 = *(uint *)pFVar10;
        }
      }
      else {
        uVar11 = local_68 - 1;
        uVar12 = uVar11;
        if (param_4 < uVar11) {
          uVar12 = param_4;
        }
        local_60[0] = pcVar2;
        local_60[1] = (code *)uVar1;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                  ((uint *)pFVar9,param_2,param_3,uVar12,param_5,uVar11,param_7 + 1,param_8,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)local_60);
      }
    }
    pFVar10 = pFVar9 + 4;
    pcVar2 = *(code **)param_9;
    uVar1 = *(undefined8 *)&param_9->field_0x8;
    uVar8 = *(uint *)(pFVar9 + 4);
    while (uVar8 != 0) {
      uVar7 = ~param_2->SaltMask & uVar8;
      if (((((uVar8 & param_2->SaltMask) != param_2->Salt) || (uVar7 == 0)) ||
          ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = 0;
      if ((int)uVar7 < (param_2->Items).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = (longlong)(int)uVar7;
      pFVar9 = (param_2->Items).AllocatorInstance.Data;
      uVar8 = *(uint *)(pFVar9 + lVar6 * 0x30 + 0x20);
      if ((((*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff) - 1) +
           *(longlong *)(pFVar9 + lVar6 * 0x30 + 8) < param_3) ||
         (param_4 < (*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff))) {
LAB_142a49e3c:
        pFVar10 = pFVar9 + lVar6 * 0x30 + 0x20;
      }
      else {
        local_88[0] = *(uint *)pFVar10;
        cVar5 = (*pcVar2)(uVar1,local_88);
        if (cVar5 == '\0') goto LAB_142a49e3c;
        *(uint *)pFVar10 = uVar8;
      }
      pFVar9 = local_78;
      uVar8 = *(uint *)pFVar10;
    }
    if (local_70 < 0) {
      pFVar9 = pFVar9 + 8;
      pcVar2 = *(code **)param_9;
      uVar1 = *(undefined8 *)&param_9->field_0x8;
      if (param_7 == param_8) {
        uVar8 = *(uint *)pFVar9;
        while (uVar8 != 0) {
          uVar7 = ~param_2->SaltMask & uVar8;
          if (((((uVar8 & param_2->SaltMask) != param_2->Salt) || (uVar7 == 0)) ||
              ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                 ,0x4a,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (param_2->Items).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar6 = (longlong)(int)uVar7;
          pFVar10 = (param_2->Items).AllocatorInstance.Data;
          uVar8 = *(uint *)(pFVar10 + lVar6 * 0x30 + 0x20);
          if ((((*(ulonglong *)(pFVar10 + lVar6 * 0x30) & 0xffffffffffff) - 1) +
               *(longlong *)(pFVar10 + lVar6 * 0x30 + 8) < param_3) ||
             (param_4 < (*(ulonglong *)(pFVar10 + lVar6 * 0x30) & 0xffffffffffff))) {
LAB_142a49f74:
            pFVar9 = pFVar10 + lVar6 * 0x30 + 0x20;
          }
          else {
            local_80[0] = *(uint *)pFVar9;
            cVar5 = (*pcVar2)(uVar1,local_80);
            if (cVar5 == '\0') goto LAB_142a49f74;
            *(uint *)pFVar9 = uVar8;
          }
          uVar8 = *(uint *)pFVar9;
        }
      }
      else {
        uVar11 = local_68;
        if (local_68 < param_3) {
          uVar11 = param_3;
        }
        local_50[0] = pcVar2;
        local_50[1] = (code *)uVar1;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                  ((uint *)pFVar9,param_2,uVar11,param_4,local_68,param_6,param_7 + 1,param_8,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)local_50);
      }
    }
    pFVar9 = local_78;
    if (((*(uint *)local_78 == 0) && (*(uint *)(local_78 + 4) == 0)) &&
       (*(uint *)(local_78 + 8) == 0)) {
      uVar8 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
      if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
             GIntervalTreeNodeNodeAllocator.Salt) || (uVar8 == 0)) ||
          ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = 0;
      uVar7 = uVar13;
      if ((int)uVar8 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar9 != GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                     (longlong)(int)uVar8 * 0xc) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("&Root == &GIntervalTreeNodeNodeAllocator.Get(*RootNode)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x17f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
      if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
             GIntervalTreeNodeNodeAllocator.Salt) || (uVar8 == 0)) ||
          ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x50,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar13;
      if ((int)uVar8 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = (longlong)(int)uVar8;
      if ((((*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc) !=
             0) || (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                            lVar6 * 0xc + 4) != 0)) ||
          (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc + 8)
           != 0)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("LeftChildOrRootOfLeftList == IntervalTreeInvalidIndex && RootOfOnList == IntervalTreeInvalidIndex && RightChildOrRootOfRightList == IntervalTreeInvalidIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x71,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_98[0] = uVar8;
      if (((GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data <=
            (FScriptContainerElement *)local_98) &&
          ((FScriptContainerElement *)local_98 <
           GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
           (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax * 4)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum ==
          GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax) {
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                        &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      lVar6 = (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum;
      GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
           GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1;
      *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data + lVar6 * 4) =
           local_98[0];
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1 ==
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        DestructItems<FIntervalTreeNode,int>
                  ((FIntervalTreeNode *)GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data,
                   GIntervalTreeNodeNodeAllocator.Items.ArrayNum);
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum = 0;
        if (GIntervalTreeNodeNodeAllocator.Items.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,0,
                     &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
        }
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum = 0;
        if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,0,
                     &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
        }
        uVar8 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
        if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum == 0) {
          if (GIntervalTreeNodeNodeAllocator.Items.ArrayNum ==
              GIntervalTreeNodeNodeAllocator.Items.ArrayMax) {
            GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                            &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
          }
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
               GIntervalTreeNodeNodeAllocator.Items.ArrayNum + 1;
        }
        else {
          if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum < 1) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar7 = GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum - 1;
          uVar8 = *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 4);
          if (~uVar7 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum != 0) {
            memmove(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                    (longlong)(int)uVar7 * 4,
                    GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                    (longlong)(int)uVar7 * 4 + 4,
                    (longlong)(int)(~uVar7 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum) << 2
                   );
          }
          GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
               GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                     GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum,
                     &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
        }
        if ((int)uVar8 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
          uVar13 = ~uVar8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar3.Data = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data;
        *(undefined8 *)
         (GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc)
             = 0;
        *(undefined4 *)(FVar3.Data + (longlong)(int)uVar8 * 0xc + 8) = 0;
        if (((~GIntervalTreeNodeNodeAllocator.SaltMask &
             (uVar8 | GIntervalTreeNodeNodeAllocator.Salt)) != 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x58,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *param_1 = 0;
    }
  }
  return;
}

// MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest> @ 142a4a4d0

void __cdecl
MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,
          ulong64 param_3,ulong64 param_4,ulong64 param_5,ulong64 param_6,uint param_7,uint param_8,
          TFunctionRef<bool___cdecl(unsigned_int)> *param_9)

{
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint local_98 [2];
  uint local_90 [2];
  uint local_88 [2];
  uint local_80 [2];
  FScriptContainerElement *local_78;
  longlong local_70;
  ulonglong local_68;
  code *local_60 [2];
  code *local_50 [3];
  
  uVar8 = *param_1;
  if (uVar8 != 0) {
    uVar7 = ~GIntervalTreeNodeNodeAllocator.SaltMask & uVar8;
    local_70 = param_4 << ((byte)param_7 & 0x3f);
    if (((((uVar8 & GIntervalTreeNodeNodeAllocator.SaltMask) != GIntervalTreeNodeNodeAllocator.Salt)
         || (uVar7 == 0)) || ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar7)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x4a,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = 0;
    if ((int)uVar7 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
             (longlong)(int)uVar7 * 0xc;
    local_68 = param_6 + 1 + param_5 >> 1;
    local_78 = pFVar9;
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      pcVar2 = *(code **)param_9;
      uVar1 = *(undefined8 *)&param_9->field_0x8;
      if (param_7 == param_8) {
        uVar8 = *(uint *)pFVar9;
        pFVar10 = pFVar9;
        while (local_78 = pFVar9, uVar8 != 0) {
          uVar7 = ~param_2->SaltMask & uVar8;
          if (((((uVar8 & param_2->SaltMask) != param_2->Salt) || (uVar7 == 0)) ||
              ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                 ,0x4a,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (param_2->Items).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar6 = (longlong)(int)uVar7;
          pFVar9 = (param_2->Items).AllocatorInstance.Data;
          uVar8 = *(uint *)(pFVar9 + lVar6 * 0x30 + 0x24);
          if ((((*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff) - 1) +
               *(longlong *)(pFVar9 + lVar6 * 0x30 + 8) < param_3) ||
             (param_4 < (*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff))) {
LAB_142a4a70e:
            pFVar10 = pFVar9 + lVar6 * 0x30 + 0x24;
          }
          else {
            local_90[0] = *(uint *)pFVar10;
            cVar5 = (*pcVar2)(uVar1,local_90);
            if (cVar5 == '\0') goto LAB_142a4a70e;
            *(uint *)pFVar10 = uVar8;
          }
          pFVar9 = local_78;
          uVar8 = *(uint *)pFVar10;
        }
      }
      else {
        uVar11 = local_68 - 1;
        uVar12 = uVar11;
        if (param_4 < uVar11) {
          uVar12 = param_4;
        }
        local_60[0] = pcVar2;
        local_60[1] = (code *)uVar1;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                  ((uint *)pFVar9,param_2,param_3,uVar12,param_5,uVar11,param_7 + 1,param_8,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)local_60);
      }
    }
    pFVar10 = pFVar9 + 4;
    pcVar2 = *(code **)param_9;
    uVar1 = *(undefined8 *)&param_9->field_0x8;
    uVar8 = *(uint *)(pFVar9 + 4);
    while (uVar8 != 0) {
      uVar7 = ~param_2->SaltMask & uVar8;
      if (((((uVar8 & param_2->SaltMask) != param_2->Salt) || (uVar7 == 0)) ||
          ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = 0;
      if ((int)uVar7 < (param_2->Items).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = (longlong)(int)uVar7;
      pFVar9 = (param_2->Items).AllocatorInstance.Data;
      uVar8 = *(uint *)(pFVar9 + lVar6 * 0x30 + 0x24);
      if ((((*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff) - 1) +
           *(longlong *)(pFVar9 + lVar6 * 0x30 + 8) < param_3) ||
         (param_4 < (*(ulonglong *)(pFVar9 + lVar6 * 0x30) & 0xffffffffffff))) {
LAB_142a4a87c:
        pFVar10 = pFVar9 + lVar6 * 0x30 + 0x24;
      }
      else {
        local_88[0] = *(uint *)pFVar10;
        cVar5 = (*pcVar2)(uVar1,local_88);
        if (cVar5 == '\0') goto LAB_142a4a87c;
        *(uint *)pFVar10 = uVar8;
      }
      pFVar9 = local_78;
      uVar8 = *(uint *)pFVar10;
    }
    if (local_70 < 0) {
      pFVar9 = pFVar9 + 8;
      pcVar2 = *(code **)param_9;
      uVar1 = *(undefined8 *)&param_9->field_0x8;
      if (param_7 == param_8) {
        uVar8 = *(uint *)pFVar9;
        while (uVar8 != 0) {
          uVar7 = ~param_2->SaltMask & uVar8;
          if (((((uVar8 & param_2->SaltMask) != param_2->Salt) || (uVar7 == 0)) ||
              ((uint)(param_2->Items).ArrayNum <= uVar7)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                 ,0x4a,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar7 < (param_2->Items).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar6 = (longlong)(int)uVar7;
          pFVar10 = (param_2->Items).AllocatorInstance.Data;
          uVar8 = *(uint *)(pFVar10 + lVar6 * 0x30 + 0x24);
          if ((((*(ulonglong *)(pFVar10 + lVar6 * 0x30) & 0xffffffffffff) - 1) +
               *(longlong *)(pFVar10 + lVar6 * 0x30 + 8) < param_3) ||
             (param_4 < (*(ulonglong *)(pFVar10 + lVar6 * 0x30) & 0xffffffffffff))) {
LAB_142a4a9b4:
            pFVar9 = pFVar10 + lVar6 * 0x30 + 0x24;
          }
          else {
            local_80[0] = *(uint *)pFVar9;
            cVar5 = (*pcVar2)(uVar1,local_80);
            if (cVar5 == '\0') goto LAB_142a4a9b4;
            *(uint *)pFVar9 = uVar8;
          }
          uVar8 = *(uint *)pFVar9;
        }
      }
      else {
        uVar11 = local_68;
        if (local_68 < param_3) {
          uVar11 = param_3;
        }
        local_50[0] = pcVar2;
        local_50[1] = (code *)uVar1;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                  ((uint *)pFVar9,param_2,uVar11,param_4,local_68,param_6,param_7 + 1,param_8,
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)local_50);
      }
    }
    pFVar9 = local_78;
    if (((*(uint *)local_78 == 0) && (*(uint *)(local_78 + 4) == 0)) &&
       (*(uint *)(local_78 + 8) == 0)) {
      uVar8 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
      if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
             GIntervalTreeNodeNodeAllocator.Salt) || (uVar8 == 0)) ||
          ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = 0;
      uVar7 = uVar13;
      if ((int)uVar8 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar9 != GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                     (longlong)(int)uVar8 * 0xc) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("&Root == &GIntervalTreeNodeNodeAllocator.Get(*RootNode)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x17f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
      if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
             GIntervalTreeNodeNodeAllocator.Salt) || (uVar8 == 0)) ||
          ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x50,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar13;
      if ((int)uVar8 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = (longlong)(int)uVar8;
      if ((((*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc) !=
             0) || (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                            lVar6 * 0xc + 4) != 0)) ||
          (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc + 8)
           != 0)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("LeftChildOrRootOfLeftList == IntervalTreeInvalidIndex && RootOfOnList == IntervalTreeInvalidIndex && RightChildOrRootOfRightList == IntervalTreeInvalidIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x71,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_98[0] = uVar8;
      if (((GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data <=
            (FScriptContainerElement *)local_98) &&
          ((FScriptContainerElement *)local_98 <
           GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
           (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax * 4)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum ==
          GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax) {
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                        &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      lVar6 = (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum;
      GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
           GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1;
      *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data + lVar6 * 4) =
           local_98[0];
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1 ==
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        DestructItems<FIntervalTreeNode,int>
                  ((FIntervalTreeNode *)GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data,
                   GIntervalTreeNodeNodeAllocator.Items.ArrayNum);
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum = 0;
        if (GIntervalTreeNodeNodeAllocator.Items.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,0,
                     &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
        }
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum = 0;
        if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,0,
                     &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
        }
        uVar8 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
        if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum == 0) {
          if (GIntervalTreeNodeNodeAllocator.Items.ArrayNum ==
              GIntervalTreeNodeNodeAllocator.Items.ArrayMax) {
            GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                            &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
          }
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
               GIntervalTreeNodeNodeAllocator.Items.ArrayNum + 1;
        }
        else {
          if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum < 1) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar7 = GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum - 1;
          uVar8 = *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 4);
          if (~uVar7 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum != 0) {
            memmove(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                    (longlong)(int)uVar7 * 4,
                    GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                    (longlong)(int)uVar7 * 4 + 4,
                    (longlong)(int)(~uVar7 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum) << 2
                   );
          }
          GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
               GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                     GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum,
                     &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
        }
        if ((int)uVar8 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
          uVar13 = ~uVar8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar3.Data = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data;
        *(undefined8 *)
         (GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc)
             = 0;
        *(undefined4 *)(FVar3.Data + (longlong)(int)uVar8 * 0xc + 8) = 0;
        if (((~GIntervalTreeNodeNodeAllocator.SaltMask &
             (uVar8 | GIntervalTreeNodeNodeAllocator.Salt)) != 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x58,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *param_1 = 0;
    }
  }
  return;
}

// Merge<UE::FilePackageStorePrivate::FMountedContainer,FIdentityFunctor,`FFilePackageStoreBackend::Mount'::__l2::<lambda_1>_> @ 142a4af10

void __cdecl
AlgoImpl::
Merge<UE::FilePackageStorePrivate::FMountedContainer,FIdentityFunctor,_FFilePackageStoreBackend::Mount_::__l2::<lambda_1>_>
          (FMountedContainer *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          <lambda_1> param_5)

{
  FIoContainerHeader *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FMountedContainer *pFVar8;
  FMountedContainer *pFVar9;
  FMountedContainer *pFVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FMountedContainer *pFVar16;
  FMountedContainer *pFVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  bool bVar22;
  bool bVar23;
  FMountedContainer *pFVar17;
  
  if (0 < param_2) {
    iVar20 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      lVar21 = (longlong)param_2;
      iVar19 = 0;
      if (0 < param_2 - iVar20) {
        uVar14 = param_2 - iVar20;
        iVar19 = 0;
        do {
          uVar13 = uVar14 >> 1;
          lVar15 = (longlong)(int)(uVar13 + iVar19) + (longlong)iVar20;
          bVar22 = param_1[lVar21].Order < param_1[lVar15].Order;
          bVar23 = false;
          if (param_1[lVar21].Order == param_1[lVar15].Order) {
            bVar22 = param_1[lVar21].Sequence < param_1[lVar15].Sequence;
            bVar23 = param_1[lVar21].Sequence == param_1[lVar15].Sequence;
          }
          if (bVar22 || bVar23) {
            iVar19 = uVar13 + iVar19 + (uVar14 & 1);
          }
          uVar14 = uVar13;
        } while (uVar13 != 0);
      }
      iVar20 = iVar20 + iVar19;
      if (param_2 <= iVar20) {
        return;
      }
      iVar19 = 0;
      pFVar8 = param_1 + iVar20;
      if (0 < param_3 - param_2) {
        uVar14 = param_3 - param_2;
        do {
          iVar11 = (uVar14 >> 1) + iVar19;
          lVar15 = iVar11 + lVar21;
          bVar22 = param_1[lVar15].Order < pFVar8->Order;
          bVar23 = false;
          if (param_1[lVar15].Order == pFVar8->Order) {
            bVar22 = param_1[lVar15].Sequence < pFVar8->Sequence;
            bVar23 = param_1[lVar15].Sequence == pFVar8->Sequence;
          }
          if (!bVar22 && !bVar23) {
            iVar19 = iVar11 + (uVar14 & 1);
          }
          uVar13 = uVar14 >> 1;
          uVar14 = uVar14 >> 1;
        } while (uVar13 != 0);
      }
      iVar11 = (iVar19 - iVar20) + param_2;
      iVar12 = param_2 - iVar20;
      if ((iVar12 != 0) && (iVar12 < iVar11)) {
        pFVar9 = pFVar8;
        pFVar16 = pFVar8 + iVar12;
        pFVar17 = pFVar8 + iVar12;
        do {
          while( true ) {
            pFVar18 = pFVar16 + 1;
            pFVar10 = pFVar9 + 1;
            uVar14 = pFVar16->Order;
            uVar13 = pFVar16->Sequence;
            pFVar1 = pFVar9->ContainerHeader;
            uVar4 = pFVar9->Order;
            uVar5 = pFVar9->Sequence;
            uVar6 = pFVar9->NumMountedPackages;
            uVar7 = (pFVar9->EntryDataRange).Begin;
            uVar2 = *(undefined8 *)&(pFVar9->EntryDataRange).End;
            pFVar9->ContainerHeader = pFVar16->ContainerHeader;
            pFVar9->Order = uVar14;
            pFVar9->Sequence = uVar13;
            uVar14 = (pFVar16->EntryDataRange).Begin;
            uVar3 = *(undefined8 *)&(pFVar16->EntryDataRange).End;
            pFVar9->NumMountedPackages = pFVar16->NumMountedPackages;
            (pFVar9->EntryDataRange).Begin = uVar14;
            *(undefined8 *)&(pFVar9->EntryDataRange).End = uVar3;
            pFVar16->ContainerHeader = pFVar1;
            pFVar16->Order = uVar4;
            pFVar16->Sequence = uVar5;
            pFVar16->NumMountedPackages = uVar6;
            (pFVar16->EntryDataRange).Begin = uVar7;
            *(undefined8 *)&(pFVar16->EntryDataRange).End = uVar2;
            pFVar9 = pFVar10;
            if (pFVar18 == pFVar8 + iVar11) break;
            pFVar16 = pFVar18;
            if (pFVar10 == pFVar17) {
              pFVar17 = pFVar18;
            }
          }
          pFVar16 = pFVar17;
        } while (pFVar10 != pFVar17);
      }
      param_2 = param_2 + iVar19;
      iVar20 = iVar20 + 1 + iVar19;
    } while (iVar20 < param_2);
  }
  return;
}

// Merge<FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_> @ 142a4b0d0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_>
          (FPakListEntry *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_> param_5)

{
  uint uVar1;
  FPakFile *pFVar2;
  FPakFile *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  FPakListEntry *pFVar7;
  FPakListEntry *pFVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FPakListEntry *pFVar13;
  FPakListEntry *pFVar14;
  FPakListEntry *pFVar15;
  int iVar16;
  FPakListEntry *pFVar8;
  
  if (0 < param_2) {
    iVar11 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar16 = 0;
      if (0 < param_2 - iVar11) {
        uVar12 = param_2 - iVar11;
        do {
          iVar6 = (uVar12 >> 1) + iVar16;
          if (param_1[param_2].ReadOrder <= param_1[(longlong)iVar6 + (longlong)iVar11].ReadOrder) {
            iVar16 = iVar6 + (uVar12 & 1);
          }
          uVar1 = uVar12 >> 1;
          uVar12 = uVar12 >> 1;
        } while (uVar1 != 0);
      }
      iVar11 = iVar11 + iVar16;
      if (param_2 <= iVar11) {
        return;
      }
      iVar16 = 0;
      pFVar13 = param_1 + iVar11;
      if (0 < param_3 - param_2) {
        uVar12 = param_3 - param_2;
        do {
          iVar6 = (uVar12 >> 1) + iVar16;
          if (pFVar13->ReadOrder < param_1[(longlong)iVar6 + (longlong)param_2].ReadOrder) {
            iVar16 = iVar6 + (uVar12 & 1);
          }
          uVar1 = uVar12 >> 1;
          uVar12 = uVar12 >> 1;
        } while (uVar1 != 0);
      }
      iVar10 = (iVar16 - iVar11) + param_2;
      iVar6 = param_2 - iVar11;
      if ((iVar6 != 0) && (iVar6 < iVar10)) {
        pFVar7 = pFVar13 + iVar6;
        pFVar14 = pFVar13;
        pFVar8 = pFVar13 + iVar6;
        do {
          while( true ) {
            pFVar9 = pFVar7 + 1;
            pFVar15 = pFVar14 + 1;
            uVar4 = *(undefined4 *)&pFVar7->field_0x4;
            pFVar2 = (pFVar7->PakFile).Reference;
            uVar12 = pFVar14->ReadOrder;
            uVar5 = *(undefined4 *)&pFVar14->field_0x4;
            pFVar3 = (pFVar14->PakFile).Reference;
            pFVar14->ReadOrder = pFVar7->ReadOrder;
            *(undefined4 *)&pFVar14->field_0x4 = uVar4;
            (pFVar14->PakFile).Reference = pFVar2;
            pFVar7->ReadOrder = uVar12;
            *(undefined4 *)&pFVar7->field_0x4 = uVar5;
            (pFVar7->PakFile).Reference = pFVar3;
            pFVar14 = pFVar15;
            if (pFVar9 == pFVar13 + iVar10) break;
            pFVar7 = pFVar9;
            if (pFVar15 == pFVar8) {
              pFVar8 = pFVar9;
            }
          }
          pFVar7 = pFVar8;
        } while (pFVar15 != pFVar8);
      }
      param_2 = param_2 + iVar16;
      iVar11 = iVar11 + 1 + iVar16;
    } while (iVar11 < param_2);
  }
  return;
}

// OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock> @ 142a4b340

bool __cdecl
OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
          (uint param_1,TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *param_2,ulong64 param_3,
          ulong64 param_4,ulong64 param_5,ulong64 param_6,uint param_7,uint param_8,
          TFunctionRef<bool___cdecl(unsigned_int)> *param_9)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  uint local_88 [2];
  uint local_80 [2];
  ulonglong local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  code *local_58 [2];
  code *local_48 [2];
  
  if (param_1 != 0) {
    local_68 = param_4 << ((byte)param_7 & 0x3f);
    uVar8 = ~GIntervalTreeNodeNodeAllocator.SaltMask & param_1;
    if ((((GIntervalTreeNodeNodeAllocator.SaltMask & param_1) != GIntervalTreeNodeNodeAllocator.Salt
         ) || (uVar8 == 0)) ||
       (uVar9 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum, uVar9 <= uVar8)) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
    }
    uVar7 = 0;
    if ((int)uVar8 < (int)uVar9) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar10 = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
              (longlong)(int)uVar8 * 0xc;
    uVar13 = param_6 + 1 + param_5 >> 1;
    local_78 = uVar13;
    local_70 = pFVar10;
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      uVar8 = *(uint *)pFVar10;
      pcVar3 = *(code **)param_9;
      uVar2 = *(undefined8 *)&param_9->field_0x8;
      if (param_7 == param_8) {
        if (uVar8 != 0) {
          piVar1 = &(param_2->Items).ArrayNum;
          do {
            uVar9 = ~param_2->SaltMask & uVar8;
            if (((((param_2->SaltMask & uVar8) != param_2->Salt) || (uVar9 == 0)) ||
                ((uint)*piVar1 <= uVar9)) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                   ,0x4a,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            uVar7 = 0;
            if ((int)uVar9 < *piVar1) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar10 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
            if (((param_3 <=
                  ((*(ulonglong *)pFVar10 & 0xffffffffffff) - 1) + *(ulonglong *)(pFVar10 + 8)) &&
                ((*(ulonglong *)pFVar10 & 0xffffffffffff) <= param_4)) &&
               (local_res8[0] = uVar8, cVar6 = (*pcVar3)(uVar2,local_res8), cVar6 == '\0')) {
              return false;
            }
            uVar8 = *(uint *)(pFVar10 + 0x20);
            pFVar10 = local_70;
            uVar13 = local_78;
          } while (uVar8 != 0);
        }
      }
      else {
        uVar11 = uVar13 - 1;
        uVar12 = uVar11;
        if (param_4 < uVar11) {
          uVar12 = param_4;
        }
        local_58[0] = pcVar3;
        local_58[1] = (code *)uVar2;
        bVar4 = OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                          (uVar8,param_2,param_3,uVar12,param_5,uVar11,param_7 + 1,param_8,
                           (TFunctionRef<bool___cdecl(unsigned_int)> *)local_58);
        if (!bVar4) {
          return false;
        }
      }
    }
    pcVar3 = *(code **)param_9;
    uVar2 = *(undefined8 *)&param_9->field_0x8;
    uVar8 = *(uint *)(pFVar10 + 4);
    while (uVar8 != 0) {
      uVar9 = ~param_2->SaltMask & uVar8;
      if (((((param_2->SaltMask & uVar8) != param_2->Salt) || (uVar9 == 0)) ||
          ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar7 = 0;
      if ((int)uVar9 < (param_2->Items).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar10 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
      if (((param_3 <= ((*(ulonglong *)pFVar10 & 0xffffffffffff) - 1) + *(ulonglong *)(pFVar10 + 8))
          && ((*(ulonglong *)pFVar10 & 0xffffffffffff) <= param_4)) &&
         (local_88[0] = uVar8, cVar6 = (*pcVar3)(uVar2,local_88), cVar6 == '\0')) {
        return false;
      }
      uVar8 = *(uint *)(pFVar10 + 0x20);
      pFVar10 = local_70;
    }
    if (local_68 < 0) {
      pcVar3 = *(code **)param_9;
      uVar2 = *(undefined8 *)&param_9->field_0x8;
      uVar8 = *(uint *)(pFVar10 + 8);
      if (param_7 != param_8) {
        uVar11 = uVar13;
        if (uVar13 < param_3) {
          uVar11 = param_3;
        }
        local_48[0] = pcVar3;
        local_48[1] = (code *)uVar2;
        bVar4 = OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                          (uVar8,param_2,uVar11,param_4,uVar13,param_6,param_7 + 1,param_8,
                           (TFunctionRef<bool___cdecl(unsigned_int)> *)local_48);
        return bVar4;
      }
      while (uVar8 != 0) {
        uVar9 = ~param_2->SaltMask & uVar8;
        if (((((param_2->SaltMask & uVar8) != param_2->Salt) || (uVar9 == 0)) ||
            ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x4a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar7 = 0;
        if ((int)uVar9 < (param_2->Items).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar10 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
        if (((param_3 <=
              ((*(ulonglong *)pFVar10 & 0xffffffffffff) - 1) + *(ulonglong *)(pFVar10 + 8)) &&
            ((*(ulonglong *)pFVar10 & 0xffffffffffff) <= param_4)) &&
           (local_80[0] = uVar8, cVar6 = (*pcVar3)(uVar2,local_80), cVar6 == '\0')) {
          return false;
        }
        uVar8 = *(uint *)(pFVar10 + 0x20);
      }
    }
  }
  return true;
}

// OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest> @ 142a4b890

bool __cdecl
OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
          (uint param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,
          ulong64 param_3,ulong64 param_4,ulong64 param_5,ulong64 param_6,uint param_7,uint param_8,
          TFunctionRef<bool___cdecl(unsigned_int)> *param_9)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res8 [2];
  uint local_88 [2];
  uint local_80 [2];
  ulonglong local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  code *local_58 [2];
  code *local_48 [2];
  
  if (param_1 != 0) {
    local_68 = param_4 << ((byte)param_7 & 0x3f);
    uVar8 = ~GIntervalTreeNodeNodeAllocator.SaltMask & param_1;
    if ((((GIntervalTreeNodeNodeAllocator.SaltMask & param_1) != GIntervalTreeNodeNodeAllocator.Salt
         ) || (uVar8 == 0)) ||
       (uVar9 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum, uVar9 <= uVar8)) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
    }
    uVar7 = 0;
    if ((int)uVar8 < (int)uVar9) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar10 = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
              (longlong)(int)uVar8 * 0xc;
    uVar13 = param_6 + 1 + param_5 >> 1;
    local_78 = uVar13;
    local_70 = pFVar10;
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      uVar8 = *(uint *)pFVar10;
      pcVar3 = *(code **)param_9;
      uVar2 = *(undefined8 *)&param_9->field_0x8;
      if (param_7 == param_8) {
        if (uVar8 != 0) {
          piVar1 = &(param_2->Items).ArrayNum;
          do {
            uVar9 = ~param_2->SaltMask & uVar8;
            if (((((param_2->SaltMask & uVar8) != param_2->Salt) || (uVar9 == 0)) ||
                ((uint)*piVar1 <= uVar9)) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                   ,0x4a,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            uVar7 = 0;
            if ((int)uVar9 < *piVar1) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar10 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
            if (((param_3 <=
                  ((*(ulonglong *)pFVar10 & 0xffffffffffff) - 1) + *(ulonglong *)(pFVar10 + 8)) &&
                ((*(ulonglong *)pFVar10 & 0xffffffffffff) <= param_4)) &&
               (local_res8[0] = uVar8, cVar6 = (*pcVar3)(uVar2,local_res8), cVar6 == '\0')) {
              return false;
            }
            uVar8 = *(uint *)(pFVar10 + 0x24);
            pFVar10 = local_70;
            uVar13 = local_78;
          } while (uVar8 != 0);
        }
      }
      else {
        uVar11 = uVar13 - 1;
        uVar12 = uVar11;
        if (param_4 < uVar11) {
          uVar12 = param_4;
        }
        local_58[0] = pcVar3;
        local_58[1] = (code *)uVar2;
        bVar4 = OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                          (uVar8,param_2,param_3,uVar12,param_5,uVar11,param_7 + 1,param_8,
                           (TFunctionRef<bool___cdecl(unsigned_int)> *)local_58);
        if (!bVar4) {
          return false;
        }
      }
    }
    pcVar3 = *(code **)param_9;
    uVar2 = *(undefined8 *)&param_9->field_0x8;
    uVar8 = *(uint *)(pFVar10 + 4);
    while (uVar8 != 0) {
      uVar9 = ~param_2->SaltMask & uVar8;
      if (((((param_2->SaltMask & uVar8) != param_2->Salt) || (uVar9 == 0)) ||
          ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar7 = 0;
      if ((int)uVar9 < (param_2->Items).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar10 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
      if (((param_3 <= ((*(ulonglong *)pFVar10 & 0xffffffffffff) - 1) + *(ulonglong *)(pFVar10 + 8))
          && ((*(ulonglong *)pFVar10 & 0xffffffffffff) <= param_4)) &&
         (local_88[0] = uVar8, cVar6 = (*pcVar3)(uVar2,local_88), cVar6 == '\0')) {
        return false;
      }
      uVar8 = *(uint *)(pFVar10 + 0x24);
      pFVar10 = local_70;
    }
    if (local_68 < 0) {
      pcVar3 = *(code **)param_9;
      uVar2 = *(undefined8 *)&param_9->field_0x8;
      uVar8 = *(uint *)(pFVar10 + 8);
      if (param_7 != param_8) {
        uVar11 = uVar13;
        if (uVar13 < param_3) {
          uVar11 = param_3;
        }
        local_48[0] = pcVar3;
        local_48[1] = (code *)uVar2;
        bVar4 = OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                          (uVar8,param_2,uVar11,param_4,uVar13,param_6,param_7 + 1,param_8,
                           (TFunctionRef<bool___cdecl(unsigned_int)> *)local_48);
        return bVar4;
      }
      while (uVar8 != 0) {
        uVar9 = ~param_2->SaltMask & uVar8;
        if (((((param_2->SaltMask & uVar8) != param_2->Salt) || (uVar9 == 0)) ||
            ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x4a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar7 = 0;
        if ((int)uVar9 < (param_2->Items).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar10 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
        if (((param_3 <=
              ((*(ulonglong *)pFVar10 & 0xffffffffffff) - 1) + *(ulonglong *)(pFVar10 + 8)) &&
            ((*(ulonglong *)pFVar10 & 0xffffffffffff) <= param_4)) &&
           (local_80[0] = uVar8, cVar6 = (*pcVar3)(uVar2,local_80), cVar6 == '\0')) {
          return false;
        }
        uVar8 = *(uint *)(pFVar10 + 0x24);
      }
    }
  }
  return true;
}

// OverlappingNodesInIntervalTreeWithShrinkingInterval<FPakPrecacher::FPakInRequest> @ 142a4bde0

bool __cdecl
OverlappingNodesInIntervalTreeWithShrinkingInterval<FPakPrecacher::FPakInRequest>
          (uint param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,
          ulong64 param_3,ulong64 *param_4,ulong64 param_5,ulong64 param_6,uint param_7,uint param_8
          ,TFunctionRef<bool___cdecl(unsigned_int)> *param_9)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TFunctionRef<bool___cdecl(unsigned_int)> local_80;
  TFunctionRef<bool___cdecl(unsigned_int)> local_70;
  TFunctionRef<bool___cdecl(unsigned_int)> local_60;
  TFunctionRef<bool___cdecl(unsigned_int)> local_50;
  TFunctionRef<bool___cdecl(unsigned_int)> local_40;
  
  if (param_1 != 0) {
    uVar8 = ~GIntervalTreeNodeNodeAllocator.SaltMask & param_1;
    if ((((GIntervalTreeNodeNodeAllocator.SaltMask & param_1) != GIntervalTreeNodeNodeAllocator.Salt
         ) || (uVar8 == 0)) ||
       (uVar6 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum, uVar6 <= uVar8)) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
    }
    uVar5 = 0;
    if ((int)uVar8 < (int)uVar6) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar9 = param_6 + 1 + param_5 >> 1;
    pFVar1 = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
             (longlong)(int)uVar8 * 0xc;
    if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
      if (param_7 == param_8) {
        local_80._0_8_ = *(undefined8 *)param_9;
        local_80._8_8_ = *(undefined8 *)&param_9->field_0x8;
        bVar3 = ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                          (*(uint *)pFVar1,param_2,param_3,param_4,&local_80);
      }
      else {
        local_70._0_8_ = *(undefined8 *)param_9;
        local_70._8_8_ = *(undefined8 *)&param_9->field_0x8;
        bVar3 = OverlappingNodesInIntervalTreeWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                          (*(uint *)pFVar1,param_2,param_3,param_4,param_5,uVar9 - 1,param_7 + 1,
                           param_8,&local_70);
      }
      if (bVar3 == false) {
        return false;
      }
    }
    local_60._0_8_ = *(undefined8 *)param_9;
    local_60._8_8_ = *(undefined8 *)&param_9->field_0x8;
    bVar3 = ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                      (*(uint *)(pFVar1 + 4),param_2,param_3,param_4,&local_60);
    if (!bVar3) {
      return false;
    }
    uVar7 = param_6;
    if (*param_4 < param_6) {
      uVar7 = *param_4;
    }
    if ((longlong)(uVar7 << ((byte)param_7 & 0x3f)) < 0) {
      local_50._0_8_ = *(undefined8 *)param_9;
      local_50._8_8_ = *(undefined8 *)&param_9->field_0x8;
      if (param_7 != param_8) {
        uVar10 = uVar9;
        if (uVar9 < param_3) {
          uVar10 = param_3;
        }
        local_40._0_8_ = local_50._0_8_;
        local_40._8_8_ = local_50._8_8_;
        bVar3 = OverlappingNodesInIntervalTreeWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                          (*(uint *)(pFVar1 + 8),param_2,uVar10,param_4,uVar9,param_6,param_7 + 1,
                           param_8,&local_40);
        return bVar3;
      }
      bVar3 = ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                        (*(uint *)(pFVar1 + 8),param_2,param_3,param_4,&local_50);
      if (!bVar3) {
        return false;
      }
    }
  }
  return true;
}

// PakPathCombineInternal<char8_t> @ 142a4c0b0

FString * __cdecl
PakPathCombineInternal<char8_t>
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<char8_t> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  FString *pFVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  iVar1 = param_1->Size;
  if (iVar1 < 1) {
LAB_142a4c11a:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("Parent.Len() > 0 && Parent[Parent.Len() - 1] == L\'/\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0x513,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar6)();
      return pFVar8;
    }
  }
  else {
    if (((iVar1 + -1 < 0) || (iVar1 <= iVar1 + -1)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar6)();
      return pFVar8;
    }
    if (param_1->DataPtr[(longlong)iVar1 + -1] != L'/') goto LAB_142a4c11a;
  }
  if (param_1->Size == 1) {
    uVar2 = *(undefined8 *)&param_2->Size;
    puVar3 = param_2->DataPtr;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    pFVar8 = FString::ConstructFromPtrSize(&local_28,puVar3,(int)uVar2);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != pFVar8) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
LAB_142a4c1f5:
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar1 = param_2->Size;
    if (iVar1 == 1) {
      if (*param_2->DataPtr == '/') {
        uVar2 = *(undefined8 *)&param_1->Size;
        pwVar5 = param_1->DataPtr;
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
        pFVar8 = FString::ConstructFromPtrSize(&local_18,pwVar5,(int)uVar2);
        if (__return_storage_ptr__ != pFVar8) {
          pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        goto LAB_142a4c1f5;
      }
LAB_142a4c23c:
      if ((*param_2->DataPtr == '/') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Child.Len() == 0 || Child[0] != CharType(\'/\')",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0x51e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar6)();
        return pFVar8;
      }
    }
    else if (iVar1 != 0) {
      if ((iVar1 < 1) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar6)();
        return pFVar8;
      }
      goto LAB_142a4c23c;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FString::Reserve(&local_38,param_2->Size + param_1->Size);
    FString::AppendChars(&local_38,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FString::AppendChars(&local_38,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// PakPathCombineInternal<wchar_t> @ 142a4c2e0

FString * __cdecl
PakPathCombineInternal<wchar_t>
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  iVar1 = param_1->Size;
  if (iVar1 < 1) {
LAB_142a4c34a:
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Parent.Len() > 0 && Parent[Parent.Len() - 1] == L\'/\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0x513,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar5)();
      return pFVar7;
    }
  }
  else {
    if (((iVar1 + -1 < 0) || (iVar1 <= iVar1 + -1)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar5)();
      return pFVar7;
    }
    if (param_1->DataPtr[(longlong)iVar1 + -1] != L'/') goto LAB_142a4c34a;
  }
  if (param_1->Size == 1) {
    uVar2 = *(undefined8 *)&param_2->Size;
    pwVar3 = param_2->DataPtr;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    pFVar7 = FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != pFVar7) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
LAB_142a4c426:
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar1 = param_2->Size;
    if (iVar1 == 1) {
      if (*param_2->DataPtr == L'/') {
        uVar2 = *(undefined8 *)&param_1->Size;
        pwVar3 = param_1->DataPtr;
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
        pFVar7 = FString::ConstructFromPtrSize(&local_18,pwVar3,(int)uVar2);
        if (__return_storage_ptr__ != pFVar7) {
          pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        goto LAB_142a4c426;
      }
LAB_142a4c46d:
      if ((*param_2->DataPtr == L'/') &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Child.Len() == 0 || Child[0] != CharType(\'/\')",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0x51e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar5)();
        return pFVar7;
      }
    }
    else if (iVar1 != 0) {
      if ((iVar1 < 1) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar5)();
        return pFVar7;
      }
      goto LAB_142a4c46d;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FString::Reserve(&local_38,param_2->Size + param_1->Size);
    FString::AppendChars(&local_38,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FString::AppendChars(&local_38,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// RadixSort32<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,int,`UE::FilePackageStorePrivate::SortByEntryOffset'::__l2::<lambda_1>_> @ 142a4c520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort32<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,int,_UE::FilePackageStorePrivate::SortByEntryOffset_::__l2::<lambda_1>_>
          (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *param_1,
          TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *param_2,int param_3,
          <lambda_1> *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar9;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *pTVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *pTVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int local_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  uint uVar8;
  
  local_2028[0x7fe] = 0x42a4c536;
  local_2028[0x7ff] = 1;
  lVar11 = (longlong)param_3;
  memset(local_5028,0,0x5000);
  pTVar10 = param_2;
  lVar14 = lVar11;
  if (0 < param_3) {
    do {
      uVar8 = (uint)*(undefined8 *)&pTVar10->field_0x8;
      uVar7 = uVar8 & 0x1fffffff;
      local_5028[uVar8 & 0x3ff] = local_5028[uVar8 & 0x3ff] + 1;
      aiStack_4028[uVar7 >> 10 & 0x7ff] = aiStack_4028[uVar7 >> 10 & 0x7ff] + 1;
      local_2028[uVar7 >> 0x15] = local_2028[uVar7 >> 0x15] + 1;
      lVar14 = lVar14 + -1;
      pTVar10 = pTVar10 + 1;
    } while (lVar14 != 0);
  }
  iVar16 = 0;
  iVar9 = -1;
  iVar18 = 0;
  lVar17 = 0;
  iVar13 = -1;
  lVar14 = 0x400;
  iVar12 = iVar13;
  do {
    iVar2 = local_5028[lVar17];
    local_5028[lVar17] = iVar9;
    iVar9 = iVar2 + iVar9;
    iVar2 = aiStack_4028[lVar17];
    aiStack_4028[lVar17] = iVar13;
    iVar16 = iVar16 + iVar2;
    iVar3 = local_2028[lVar17];
    iVar13 = iVar13 + iVar2;
    local_2028[lVar17] = iVar12;
    iVar18 = iVar18 + iVar3;
    lVar17 = lVar17 + 1;
    iVar12 = iVar12 + iVar3;
  } while (lVar17 < 0x400);
  iVar16 = iVar16 + -1;
  iVar18 = iVar18 + -1;
  do {
    iVar12 = aiStack_4028[lVar14];
    aiStack_4028[lVar14] = iVar16;
    iVar16 = iVar12 + iVar16;
    iVar12 = local_2028[lVar14];
    local_2028[lVar14] = iVar18;
    iVar18 = iVar12 + iVar18;
    lVar14 = lVar14 + 1;
  } while (lVar14 < 0x800);
  pTVar10 = param_2;
  lVar14 = lVar11;
  if (0 < lVar11) {
    do {
      uVar4 = *(undefined8 *)pTVar10;
      uVar5 = *(undefined8 *)&pTVar10->field_0x8;
      uVar7 = (uint)*(undefined8 *)&pTVar10->field_0x8 & 0x3ff;
      iVar18 = local_5028[uVar7];
      local_5028[uVar7] = iVar18 + 1;
      *(undefined8 *)(param_1 + (longlong)iVar18 + 1) = uVar4;
      *(undefined8 *)&param_1[(longlong)iVar18 + 1].field_0x8 = uVar5;
      lVar14 = lVar14 + -1;
      pTVar15 = param_1;
      pTVar10 = pTVar10 + 1;
      lVar17 = lVar11;
    } while (lVar14 != 0);
    do {
      uVar7 = (uint)(*(ulonglong *)&pTVar15->field_0x8 >> 10) & 0x7ff;
      uVar4 = *(undefined8 *)pTVar15;
      uVar5 = *(undefined8 *)&pTVar15->field_0x8;
      iVar18 = aiStack_4028[uVar7];
      aiStack_4028[uVar7] = iVar18 + 1;
      *(undefined8 *)(param_2 + (longlong)iVar18 + 1) = uVar4;
      *(undefined8 *)&param_2[(longlong)iVar18 + 1].field_0x8 = uVar5;
      lVar17 = lVar17 + -1;
      pTVar15 = pTVar15 + 1;
    } while (lVar17 != 0);
    do {
      puVar1 = &param_2->field_0x8;
      uVar4 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)&param_2->field_0x8;
      param_2 = param_2 + 1;
      uVar6 = *(ulonglong *)puVar1 >> 0x15 & 0xff;
      iVar18 = local_2028[uVar6];
      local_2028[uVar6] = iVar18 + 1;
      *(undefined8 *)(param_1 + (longlong)iVar18 + 1) = uVar4;
      *(undefined8 *)&param_1[(longlong)iVar18 + 1].field_0x8 = uVar5;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// RadixSort32<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,int,`UE::FilePackageStorePrivate::SortBySlotIndex'::__l2::<lambda_1>_> @ 142a4c740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
RadixSort32<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,int,_UE::FilePackageStorePrivate::SortBySlotIndex_::__l2::<lambda_1>_>
          (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *param_1,
          TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *param_2,int param_3,
          <lambda_1> *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *pTVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *pTVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int local_5028 [1024];
  int aiStack_4028 [1024];
  int aiStack_3028 [1024];
  int local_2028 [2048];
  
  local_2028[0x7fe] = 0x42a4c756;
  local_2028[0x7ff] = 1;
  lVar10 = (longlong)param_3;
  memset(local_5028,0,0x5000);
  pTVar9 = param_2;
  lVar13 = lVar10;
  if (0 < param_3) {
    do {
      uVar3 = *(ulonglong *)pTVar9;
      uVar8 = (uint)(uVar3 >> 0x20);
      local_5028[uVar8 & 0x3ff] = local_5028[uVar8 & 0x3ff] + 1;
      aiStack_4028[uVar8 >> 10 & 0x7ff] = aiStack_4028[uVar8 >> 10 & 0x7ff] + 1;
      local_2028[uVar3 >> 0x35] = local_2028[uVar3 >> 0x35] + 1;
      lVar13 = lVar13 + -1;
      pTVar9 = pTVar9 + 1;
    } while (lVar13 != 0);
  }
  iVar15 = 0;
  iVar7 = -1;
  iVar17 = 0;
  lVar16 = 0;
  iVar12 = -1;
  lVar13 = 0x400;
  iVar11 = iVar12;
  do {
    iVar1 = local_5028[lVar16];
    local_5028[lVar16] = iVar7;
    iVar7 = iVar1 + iVar7;
    iVar1 = aiStack_4028[lVar16];
    aiStack_4028[lVar16] = iVar12;
    iVar15 = iVar15 + iVar1;
    iVar2 = local_2028[lVar16];
    iVar12 = iVar12 + iVar1;
    local_2028[lVar16] = iVar11;
    iVar17 = iVar17 + iVar2;
    lVar16 = lVar16 + 1;
    iVar11 = iVar11 + iVar2;
  } while (lVar16 < 0x400);
  iVar15 = iVar15 + -1;
  iVar17 = iVar17 + -1;
  do {
    iVar11 = aiStack_4028[lVar13];
    aiStack_4028[lVar13] = iVar15;
    iVar15 = iVar11 + iVar15;
    iVar11 = local_2028[lVar13];
    local_2028[lVar13] = iVar17;
    iVar17 = iVar11 + iVar17;
    lVar13 = lVar13 + 1;
  } while (lVar13 < 0x800);
  pTVar9 = param_2;
  lVar13 = lVar10;
  if (0 < lVar10) {
    do {
      uVar4 = *(undefined8 *)pTVar9;
      uVar5 = *(undefined8 *)&pTVar9->field_0x8;
      uVar8 = (uint)((ulonglong)uVar4 >> 0x20) & 0x3ff;
      iVar17 = local_5028[uVar8];
      local_5028[uVar8] = iVar17 + 1;
      *(undefined8 *)(param_1 + (longlong)iVar17 + 1) = uVar4;
      *(undefined8 *)&param_1[(longlong)iVar17 + 1].field_0x8 = uVar5;
      lVar13 = lVar13 + -1;
      pTVar14 = param_1;
      pTVar9 = pTVar9 + 1;
      lVar16 = lVar10;
    } while (lVar13 != 0);
    do {
      uVar4 = *(undefined8 *)pTVar14;
      uVar5 = *(undefined8 *)&pTVar14->field_0x8;
      uVar8 = (uint)((ulonglong)uVar4 >> 0x2a) & 0x7ff;
      iVar17 = aiStack_4028[uVar8];
      aiStack_4028[uVar8] = iVar17 + 1;
      *(undefined8 *)(param_2 + (longlong)iVar17 + 1) = uVar4;
      *(undefined8 *)&param_2[(longlong)iVar17 + 1].field_0x8 = uVar5;
      lVar16 = lVar16 + -1;
      pTVar14 = pTVar14 + 1;
    } while (lVar16 != 0);
    do {
      uVar3 = *(ulonglong *)param_2;
      uVar4 = *(undefined8 *)&param_2->field_0x8;
      param_2 = param_2 + 1;
      uVar6 = uVar3 >> 0x35;
      iVar17 = local_2028[uVar6];
      local_2028[uVar6] = iVar17 + 1;
      *(ulonglong *)(param_1 + (longlong)iVar17 + 1) = uVar3;
      *(undefined8 *)&param_1[(longlong)iVar17 + 1].field_0x8 = uVar4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// RemoveFromIntervalTree<FPakPrecacher::FCacheBlock> @ 142a4cfa0

bool __cdecl
RemoveFromIntervalTree<FPakPrecacher::FCacheBlock>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,uint param_6,uint param_7)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint local_38 [2];
  FScriptContainerElement *local_30;
  
  uVar10 = *param_1;
  if (uVar10 == 0) {
    return false;
  }
  uVar9 = ~GIntervalTreeNodeNodeAllocator.SaltMask & uVar10;
  if (((((uVar10 & GIntervalTreeNodeNodeAllocator.SaltMask) != GIntervalTreeNodeNodeAllocator.Salt)
       || (uVar9 == 0)) || ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar9)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar10 = 0;
  if ((int)uVar9 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar7 = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar9 * 0xc;
  local_30 = pFVar7;
  if ((longlong)(param_4 << ((byte)param_6 & 0x3f)) < 0) {
    pFVar7 = pFVar7 + 8;
    if (param_6 != param_7) {
LAB_142a4d38f:
      bVar3 = RemoveFromIntervalTree<FPakPrecacher::FCacheBlock>
                        ((uint *)pFVar7,param_2,param_3,param_4,param_5,param_6 + 1,param_7);
      goto LAB_142a4d3ac;
    }
    uVar10 = *(uint *)pFVar7;
    while (uVar10 != 0) {
      uVar9 = ~param_2->SaltMask & uVar10;
      if (((((uVar10 & param_2->SaltMask) != param_2->Salt) || (uVar9 == 0)) ||
          ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar10 = 0;
      if ((int)uVar9 < (param_2->Items).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar8 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
      if (*(uint *)pFVar7 == param_3) goto LAB_142a4d197;
      pFVar7 = pFVar8 + 0x20;
      uVar10 = *(uint *)(pFVar8 + 0x20);
    }
  }
  else if ((longlong)(param_5 << ((byte)param_6 & 0x3f)) < 0) {
    uVar10 = *(uint *)(pFVar7 + 4);
    pFVar7 = pFVar7 + 4;
    if (uVar10 != 0) {
      do {
        uVar9 = ~param_2->SaltMask & uVar10;
        if (((((uVar10 & param_2->SaltMask) != param_2->Salt) || (uVar9 == 0)) ||
            ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x4a,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar10 = 0;
        if ((int)uVar9 < (param_2->Items).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar8 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
        if (*(uint *)pFVar7 == param_3) goto LAB_142a4d197;
        uVar10 = *(uint *)(pFVar8 + 0x20);
        pFVar7 = pFVar8 + 0x20;
      } while (uVar10 != 0);
      bVar3 = false;
      goto LAB_142a4d3ac;
    }
  }
  else {
    if (param_6 != param_7) goto LAB_142a4d38f;
    uVar10 = *(uint *)pFVar7;
    if (uVar10 != 0) {
      do {
        uVar9 = ~param_2->SaltMask & uVar10;
        if (((((uVar10 & param_2->SaltMask) != param_2->Salt) || (uVar9 == 0)) ||
            ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x4a,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar10 = 0;
        if ((int)uVar9 < (param_2->Items).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar8 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
        if (*(uint *)pFVar7 == param_3) goto LAB_142a4d197;
        uVar10 = *(uint *)(pFVar8 + 0x20);
        pFVar7 = pFVar8 + 0x20;
      } while (uVar10 != 0);
      bVar3 = false;
      goto LAB_142a4d3ac;
    }
  }
  bVar3 = false;
LAB_142a4d3ac:
  pFVar7 = local_30;
  if ((((bVar3 != false) && (*(uint *)local_30 == 0)) && (*(uint *)(local_30 + 4) == 0)) &&
     (*(uint *)(local_30 + 8) == 0)) {
    uVar10 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
    if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
           GIntervalTreeNodeNodeAllocator.Salt) || (uVar10 == 0)) ||
        ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x4a,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar9 = 0;
    if ((int)uVar10 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((pFVar7 != GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                   (longlong)(int)uVar10 * 0xc) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("&Root == &GIntervalTreeNodeNodeAllocator.Get(*RootNode)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x111,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar10 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
    if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
           GIntervalTreeNodeNodeAllocator.Salt) || (uVar10 == 0)) ||
        ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x50,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar9 = 0;
    if ((int)uVar10 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    lVar6 = (longlong)(int)uVar10;
    if ((((*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc) != 0)
         || (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc + 4)
             != 0)) ||
        (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc + 8) !=
         0)) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                                   ("LeftChildOrRootOfLeftList == IntervalTreeInvalidIndex && RootOfOnList == IntervalTreeInvalidIndex && RightChildOrRootOfRightList == IntervalTreeInvalidIndex"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                    ,0x71,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_38[0] = uVar10;
    if (((GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data <=
          (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
         (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax * 4)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum ==
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax) {
      GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                      &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
    }
    lVar6 = (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum;
    GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
         GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1;
    *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data + lVar6 * 4) =
         local_38[0];
    if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1 ==
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      DestructItems<FIntervalTreeNode,int>
                ((FIntervalTreeNode *)GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data,
                 GIntervalTreeNodeNodeAllocator.Items.ArrayNum);
      GIntervalTreeNodeNodeAllocator.Items.ArrayNum = 0;
      if (GIntervalTreeNodeNodeAllocator.Items.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,0,
                   &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
      }
      GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum = 0;
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,0,
                   &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      uVar10 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum == 0) {
        if (GIntervalTreeNodeNodeAllocator.Items.ArrayNum ==
            GIntervalTreeNodeNodeAllocator.Items.ArrayMax) {
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                          &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
        }
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
             GIntervalTreeNodeNodeAllocator.Items.ArrayNum + 1;
      }
      else {
        if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum < 1) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar9 = GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum - 1;
        uVar10 = *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                          (longlong)(int)uVar9 * 4);
        if (~uVar9 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum != 0) {
          memmove(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 4,
                  GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 4 + 4,
                  (longlong)(int)(~uVar9 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum) << 2);
        }
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
             GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                   GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum,
                   &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      uVar9 = 0;
      if ((int)uVar10 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FVar2.Data = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data;
      *(undefined8 *)
       (GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc) =
           0;
      *(undefined4 *)(FVar2.Data + (longlong)(int)uVar10 * 0xc + 8) = 0;
      if (((~GIntervalTreeNodeNodeAllocator.SaltMask &
           (uVar10 | GIntervalTreeNodeNodeAllocator.Salt)) != 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x58,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    *param_1 = 0;
  }
  return bVar3;
LAB_142a4d197:
  bVar3 = true;
  *(uint *)pFVar7 = *(uint *)(pFVar8 + 0x20);
  *(undefined4 *)(pFVar8 + 0x20) = 0;
  goto LAB_142a4d3ac;
}

// RemoveFromIntervalTree<FPakPrecacher::FPakInRequest> @ 142a4d8a0

bool __cdecl
RemoveFromIntervalTree<FPakPrecacher::FPakInRequest>
          (uint *param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,uint param_6,uint param_7)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  uint local_38 [2];
  FScriptContainerElement *local_30;
  
  uVar10 = *param_1;
  if (uVar10 == 0) {
    return false;
  }
  uVar9 = ~GIntervalTreeNodeNodeAllocator.SaltMask & uVar10;
  if (((((uVar10 & GIntervalTreeNodeNodeAllocator.SaltMask) != GIntervalTreeNodeNodeAllocator.Salt)
       || (uVar9 == 0)) || ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar9)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar10 = 0;
  if ((int)uVar9 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar7 = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar9 * 0xc;
  local_30 = pFVar7;
  if ((longlong)(param_4 << ((byte)param_6 & 0x3f)) < 0) {
    pFVar7 = pFVar7 + 8;
    if (param_6 != param_7) {
LAB_142a4dc8f:
      bVar3 = RemoveFromIntervalTree<FPakPrecacher::FPakInRequest>
                        ((uint *)pFVar7,param_2,param_3,param_4,param_5,param_6 + 1,param_7);
      goto LAB_142a4dcac;
    }
    uVar10 = *(uint *)pFVar7;
    while (uVar10 != 0) {
      uVar9 = ~param_2->SaltMask & uVar10;
      if (((((uVar10 & param_2->SaltMask) != param_2->Salt) || (uVar9 == 0)) ||
          ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar10 = 0;
      if ((int)uVar9 < (param_2->Items).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar8 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
      if (*(uint *)pFVar7 == param_3) goto LAB_142a4da97;
      pFVar7 = pFVar8 + 0x24;
      uVar10 = *(uint *)(pFVar8 + 0x24);
    }
  }
  else if ((longlong)(param_5 << ((byte)param_6 & 0x3f)) < 0) {
    uVar10 = *(uint *)(pFVar7 + 4);
    pFVar7 = pFVar7 + 4;
    if (uVar10 != 0) {
      do {
        uVar9 = ~param_2->SaltMask & uVar10;
        if (((((uVar10 & param_2->SaltMask) != param_2->Salt) || (uVar9 == 0)) ||
            ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x4a,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar10 = 0;
        if ((int)uVar9 < (param_2->Items).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar8 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
        if (*(uint *)pFVar7 == param_3) goto LAB_142a4da97;
        uVar10 = *(uint *)(pFVar8 + 0x24);
        pFVar7 = pFVar8 + 0x24;
      } while (uVar10 != 0);
      bVar3 = false;
      goto LAB_142a4dcac;
    }
  }
  else {
    if (param_6 != param_7) goto LAB_142a4dc8f;
    uVar10 = *(uint *)pFVar7;
    if (uVar10 != 0) {
      do {
        uVar9 = ~param_2->SaltMask & uVar10;
        if (((((uVar10 & param_2->SaltMask) != param_2->Salt) || (uVar9 == 0)) ||
            ((uint)(param_2->Items).ArrayNum <= uVar9)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x4a,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar10 = 0;
        if ((int)uVar9 < (param_2->Items).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar8 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
        if (*(uint *)pFVar7 == param_3) goto LAB_142a4da97;
        uVar10 = *(uint *)(pFVar8 + 0x24);
        pFVar7 = pFVar8 + 0x24;
      } while (uVar10 != 0);
      bVar3 = false;
      goto LAB_142a4dcac;
    }
  }
  bVar3 = false;
LAB_142a4dcac:
  pFVar7 = local_30;
  if ((((bVar3 != false) && (*(uint *)local_30 == 0)) && (*(uint *)(local_30 + 4) == 0)) &&
     (*(uint *)(local_30 + 8) == 0)) {
    uVar10 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
    if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
           GIntervalTreeNodeNodeAllocator.Salt) || (uVar10 == 0)) ||
        ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x4a,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar9 = 0;
    if ((int)uVar10 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((pFVar7 != GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data +
                   (longlong)(int)uVar10 * 0xc) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("&Root == &GIntervalTreeNodeNodeAllocator.Get(*RootNode)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x111,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar10 = ~GIntervalTreeNodeNodeAllocator.SaltMask & *param_1;
    if (((((*param_1 & GIntervalTreeNodeNodeAllocator.SaltMask) !=
           GIntervalTreeNodeNodeAllocator.Salt) || (uVar10 == 0)) ||
        ((uint)GIntervalTreeNodeNodeAllocator.Items.ArrayNum <= uVar10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x50,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar9 = 0;
    if ((int)uVar10 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    lVar6 = (longlong)(int)uVar10;
    if ((((*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc) != 0)
         || (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc + 4)
             != 0)) ||
        (*(int *)(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + lVar6 * 0xc + 8) !=
         0)) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                                   ("LeftChildOrRootOfLeftList == IntervalTreeInvalidIndex && RootOfOnList == IntervalTreeInvalidIndex && RightChildOrRootOfRightList == IntervalTreeInvalidIndex"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                    ,0x71,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_38[0] = uVar10;
    if (((GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data <=
          (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
         (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax * 4)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum ==
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax) {
      GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                      &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
    }
    lVar6 = (longlong)GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum;
    GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
         GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1;
    *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data + lVar6 * 4) =
         local_38[0];
    if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + 1 ==
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
      DestructItems<FIntervalTreeNode,int>
                ((FIntervalTreeNode *)GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data,
                 GIntervalTreeNodeNodeAllocator.Items.ArrayNum);
      GIntervalTreeNodeNodeAllocator.Items.ArrayNum = 0;
      if (GIntervalTreeNodeNodeAllocator.Items.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,0,
                   &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
      }
      GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum = 0;
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,0,
                   &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      uVar10 = GIntervalTreeNodeNodeAllocator.Items.ArrayNum;
      if (GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum == 0) {
        if (GIntervalTreeNodeNodeAllocator.Items.ArrayNum ==
            GIntervalTreeNodeNodeAllocator.Items.ArrayMax) {
          GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)&GIntervalTreeNodeNodeAllocator,
                          &GIntervalTreeNodeNodeAllocator.Items.ArrayMax);
        }
        GIntervalTreeNodeNodeAllocator.Items.ArrayNum =
             GIntervalTreeNodeNodeAllocator.Items.ArrayNum + 1;
      }
      else {
        if ((GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum < 1) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar9 = GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum - 1;
        uVar10 = *(uint *)(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                          (longlong)(int)uVar9 * 4);
        if (~uVar9 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum != 0) {
          memmove(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 4,
                  GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 4 + 4,
                  (longlong)(int)(~uVar9 + GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum) << 2);
        }
        GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum =
             GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance,
                   GIntervalTreeNodeNodeAllocator.FreeItems.ArrayNum,
                   &GIntervalTreeNodeNodeAllocator.FreeItems.ArrayMax);
      }
      uVar9 = 0;
      if ((int)uVar10 < GIntervalTreeNodeNodeAllocator.Items.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FVar2.Data = GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data;
      *(undefined8 *)
       (GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc) =
           0;
      *(undefined4 *)(FVar2.Data + (longlong)(int)uVar10 * 0xc + 8) = 0;
      if (((~GIntervalTreeNodeNodeAllocator.SaltMask &
           (uVar10 | GIntervalTreeNodeNodeAllocator.Salt)) != 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x58,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    *param_1 = 0;
  }
  return bVar3;
LAB_142a4da97:
  bVar3 = true;
  *(uint *)pFVar7 = *(uint *)(pFVar8 + 0x24);
  *(undefined4 *)(pFVar8 + 0x24) = 0;
  goto LAB_142a4dcac;
}

// RotateInternal<UE::FilePackageStorePrivate::FMountedContainer> @ 142a4ee00

int __cdecl
AlgoImpl::RotateInternal<UE::FilePackageStorePrivate::FMountedContainer>
          (FMountedContainer *param_1,int param_2,int param_3)

{
  FIoContainerHeader *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FMountedContainer *pFVar10;
  FMountedContainer *pFVar12;
  FMountedContainer *pFVar13;
  FMountedContainer *pFVar14;
  FMountedContainer *pFVar11;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar10 = param_1 + param_3;
    pFVar13 = param_1;
    pFVar11 = param_1 + param_3;
    do {
      while( true ) {
        pFVar12 = pFVar10 + 1;
        pFVar14 = pFVar13 + 1;
        uVar4 = pFVar10->Order;
        uVar5 = pFVar10->Sequence;
        pFVar1 = pFVar13->ContainerHeader;
        uVar6 = pFVar13->Order;
        uVar7 = pFVar13->Sequence;
        uVar8 = pFVar13->NumMountedPackages;
        uVar9 = (pFVar13->EntryDataRange).Begin;
        uVar2 = *(undefined8 *)&(pFVar13->EntryDataRange).End;
        pFVar13->ContainerHeader = pFVar10->ContainerHeader;
        pFVar13->Order = uVar4;
        pFVar13->Sequence = uVar5;
        uVar4 = (pFVar10->EntryDataRange).Begin;
        uVar3 = *(undefined8 *)&(pFVar10->EntryDataRange).End;
        pFVar13->NumMountedPackages = pFVar10->NumMountedPackages;
        (pFVar13->EntryDataRange).Begin = uVar4;
        *(undefined8 *)&(pFVar13->EntryDataRange).End = uVar3;
        pFVar10->ContainerHeader = pFVar1;
        pFVar10->Order = uVar6;
        pFVar10->Sequence = uVar7;
        pFVar10->NumMountedPackages = uVar8;
        (pFVar10->EntryDataRange).Begin = uVar9;
        *(undefined8 *)&(pFVar10->EntryDataRange).End = uVar2;
        pFVar13 = pFVar14;
        if (pFVar12 == param_1 + param_2) break;
        pFVar10 = pFVar12;
        if (pFVar14 == pFVar11) {
          pFVar11 = pFVar12;
        }
      }
      pFVar10 = pFVar11;
    } while (pFVar14 != pFVar11);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<FPakPlatformFile::FPakListEntry> @ 142a4eea0

/* WARNING: Enum "EVersion": Some values do not have unique names */

int __cdecl
AlgoImpl::RotateInternal<FPakPlatformFile::FPakListEntry>
          (FPakListEntry *param_1,int param_2,int param_3)

{
  FPakFile *pFVar1;
  FPakFile *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  FPakListEntry *pFVar6;
  FPakListEntry *pFVar8;
  FPakListEntry *pFVar9;
  FPakListEntry *pFVar10;
  FPakListEntry *pFVar7;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar6 = param_1 + param_3;
    pFVar9 = param_1;
    pFVar7 = param_1 + param_3;
    do {
      while( true ) {
        pFVar8 = pFVar6 + 1;
        pFVar10 = pFVar9 + 1;
        uVar3 = *(undefined4 *)&pFVar6->field_0x4;
        pFVar1 = (pFVar6->PakFile).Reference;
        uVar4 = pFVar9->ReadOrder;
        uVar5 = *(undefined4 *)&pFVar9->field_0x4;
        pFVar2 = (pFVar9->PakFile).Reference;
        pFVar9->ReadOrder = pFVar6->ReadOrder;
        *(undefined4 *)&pFVar9->field_0x4 = uVar3;
        (pFVar9->PakFile).Reference = pFVar1;
        pFVar6->ReadOrder = uVar4;
        *(undefined4 *)&pFVar6->field_0x4 = uVar5;
        (pFVar6->PakFile).Reference = pFVar2;
        pFVar9 = pFVar10;
        if (pFVar8 == param_1 + param_2) break;
        pFVar6 = pFVar8;
        if (pFVar10 == pFVar7) {
          pFVar7 = pFVar8;
        }
      }
      pFVar6 = pFVar7;
    } while (pFVar10 != pFVar7);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest> @ 142a4ef30

bool __cdecl
ScanNodeListWithShrinkingInterval<FPakPrecacher::FPakInRequest>
          (uint param_1,TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *param_2,
          ulong64 param_3,ulong64 *param_4,TFunctionRef<bool___cdecl(unsigned_int)> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint local_res8 [2];
  
  if (param_1 != 0) {
    piVar1 = &(param_2->Items).ArrayNum;
    do {
      uVar7 = ~param_2->SaltMask & param_1;
      if (((((param_2->SaltMask & param_1) != param_2->Salt) || (uVar7 == 0)) ||
          ((uint)*piVar1 <= uVar7)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = 0;
      if ((int)uVar7 < *piVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar8 = (param_2->Items).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
      if (((param_3 <= ((*(ulonglong *)pFVar8 & 0xffffffffffff) - 1) + *(ulonglong *)(pFVar8 + 8))
          && ((*(ulonglong *)pFVar8 & 0xffffffffffff) <= *param_4)) &&
         (local_res8[0] = param_1,
         cVar5 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_res8), cVar5 == '\0')
         ) {
        return false;
      }
      param_1 = *(uint *)(pFVar8 + 0x24);
    } while (param_1 != 0);
  }
  return true;
}

// StableSortInternal<UE::FilePackageStorePrivate::FMountedContainer,FIdentityFunctor,`FFilePackageStoreBackend::Mount'::__l2::<lambda_1>_> @ 142a4f6b0

void __cdecl
AlgoImpl::
StableSortInternal<UE::FilePackageStorePrivate::FMountedContainer,FIdentityFunctor,_FFilePackageStoreBackend::Mount_::__l2::<lambda_1>_>
          (FMountedContainer *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  FIoContainerHeader *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  
  if (0 < param_2) {
    puVar6 = &param_1[1].Order;
    iVar7 = 1;
    lVar11 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if (iVar7 < param_2) {
        bVar12 = *puVar6 < puVar6[-8];
        bVar13 = false;
        if (*puVar6 == puVar6[-8]) {
          bVar12 = puVar6[1] < puVar6[-7];
          bVar13 = puVar6[1] == puVar6[-7];
        }
        if (!bVar12 && !bVar13) {
          pFVar2 = *(FIoContainerHeader **)(puVar6 + -10);
          uVar3 = *(undefined8 *)(puVar6 + -8);
          uVar4 = *(undefined8 *)(puVar6 + -6);
          uVar5 = *(undefined8 *)(puVar6 + -4);
          *(FIoContainerHeader **)(puVar6 + -10) =
               ((FMountedContainer *)(puVar6 + -2))->ContainerHeader;
          *(undefined8 *)(puVar6 + -8) = *(undefined8 *)puVar6;
          *(undefined8 *)(puVar6 + -6) = *(undefined8 *)(puVar6 + 2);
          *(undefined8 *)(puVar6 + -4) = *(undefined8 *)(puVar6 + 4);
          ((FMountedContainer *)(puVar6 + -2))->ContainerHeader = pFVar2;
          *(undefined8 *)puVar6 = uVar3;
          *(undefined8 *)(puVar6 + 2) = uVar4;
          *(undefined8 *)(puVar6 + 4) = uVar5;
        }
      }
      iVar7 = iVar7 + 2;
      puVar6 = puVar6 + 0x10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar7 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar7 * 2;
      iVar9 = 0;
      iVar8 = param_2;
      do {
        iVar10 = iVar8;
        if (iVar1 <= iVar8) {
          iVar10 = iVar1;
        }
        Merge<UE::FilePackageStorePrivate::FMountedContainer,FIdentityFunctor,_FFilePackageStoreBackend::Mount_::__l2::<lambda_1>_>
                  (param_1 + iVar9,iVar7,iVar10,param_3,param_4);
        iVar9 = iVar9 + iVar1;
        iVar8 = iVar8 + iVar7 * -2;
      } while (iVar9 < param_2);
      iVar7 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StableSortInternal<FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_> @ 142a4f7d0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_>
          (FPakListEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_> param_4)

{
  int iVar1;
  FPakFile *pFVar2;
  FPakFile *pFVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  FPakListEntry *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  if (0 < param_2) {
    iVar8 = 1;
    lVar12 = ((longlong)param_2 - 1U >> 1) + 1;
    pFVar7 = param_1;
    do {
      if ((iVar8 < param_2) && (pFVar7->ReadOrder < pFVar7[1].ReadOrder)) {
        uVar4 = *(undefined4 *)&pFVar7[1].field_0x4;
        pFVar2 = pFVar7[1].PakFile.Reference;
        uVar5 = pFVar7->ReadOrder;
        uVar6 = *(undefined4 *)&pFVar7->field_0x4;
        pFVar3 = (pFVar7->PakFile).Reference;
        pFVar7->ReadOrder = pFVar7[1].ReadOrder;
        *(undefined4 *)&pFVar7->field_0x4 = uVar4;
        (pFVar7->PakFile).Reference = pFVar2;
        pFVar7[1].ReadOrder = uVar5;
        *(undefined4 *)&pFVar7[1].field_0x4 = uVar6;
        pFVar7[1].PakFile.Reference = pFVar3;
      }
      iVar8 = iVar8 + 2;
      pFVar7 = pFVar7 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar8 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar8 * 2;
      iVar10 = 0;
      iVar9 = param_2;
      do {
        iVar11 = iVar9;
        if (iVar1 <= iVar9) {
          iVar11 = iVar1;
        }
        Merge<FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_>
                  (param_1 + iVar10,iVar8,iVar11,param_3,param_4);
        iVar10 = iVar10 + iVar1;
        iVar9 = iVar9 + iVar8 * -2;
      } while (iVar10 < param_2);
      iVar8 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// UpperBoundInternal<FFileIoStoreReadRequest_*_const,int,FFileIoStoreReadRequestSortKey,FFileIoStoreReadRequestSortKey_(__cdecl*)(FFileIoStoreReadRequest_*),bool_(__cdecl*)(FFileIoStoreReadRequestSortKey_const_&,FFileIoStoreReadRequestSortKey_const_&)> @ 142a4f8d0

int __cdecl
AlgoImpl::
UpperBoundInternal<FFileIoStoreReadRequest_*_const,int,FFileIoStoreReadRequestSortKey,FFileIoStoreReadRequestSortKey_(__cdecl*)(FFileIoStoreReadRequest_*),bool_(__cdecl*)(FFileIoStoreReadRequestSortKey_const_&,FFileIoStoreReadRequestSortKey_const_&)>
          (FFileIoStoreReadRequest **param_1,int param_2,FFileIoStoreReadRequestSortKey *param_3,
          _func___cdecl_FFileIoStoreReadRequestSortKey_FFileIoStoreReadRequest_ptr *param_4,
          _func___cdecl_bool_FFileIoStoreReadRequestSortKey_ptr_FFileIoStoreReadRequestSortKey_ptr
          *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  FFileIoStoreReadRequestSortKey local_48;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      (*param_4)(&local_48,param_1[iVar1]);
      bVar3 = (*param_5)(param_3,&local_48);
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// UpperBoundInternal<FPakPlatformFile::FPakListEntry,int,FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_> @ 142a4f970

/* WARNING: Enum "EVersion": Some values do not have unique names */

int __cdecl
AlgoImpl::
UpperBoundInternal<FPakPlatformFile::FPakListEntry,int,FPakPlatformFile::FPakListEntry,FIdentityFunctor,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_>_>
          (FPakListEntry *param_1,int param_2,FPakListEntry *param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<void>_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_3->ReadOrder <= param_1[iVar1].ReadOrder) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>_> @ 142a4fe00

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>_> @ 142a4fe10

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> @ 142a4fe20

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// FThreadSafeStaticStat<`FAsyncIOCPUWorkTask::GetStatId'::__l2::FStat_FAsyncIOCPUWorkTask> @ 142a50670

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOCPUWorkTask::GetStatId(void)_::_2_::FStat_FAsyncIOCPUWorkTask>
* __thiscall
FThreadSafeStaticStat<`FAsyncIOCPUWorkTask::GetStatId'::__l2::FStat_FAsyncIOCPUWorkTask>::
FThreadSafeStaticStat<_FAsyncIOCPUWorkTask::GetStatId_::__l2::FStat_FAsyncIOCPUWorkTask>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FAsyncIOCPUWorkTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FAsyncIOCPUWorkTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FAsyncIOSignatureCheckTask::GetStatId'::__l2::FStat_FAsyncIOSignatureCheckTask> @ 142a50700

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FAsyncIOSignatureCheckTask::GetStatId(void)_::_2_::FStat_FAsyncIOSignatureCheckTask>
* __thiscall
FThreadSafeStaticStat<`FAsyncIOSignatureCheckTask::GetStatId'::__l2::FStat_FAsyncIOSignatureCheckTask>
::
FThreadSafeStaticStat<_FAsyncIOSignatureCheckTask::GetStatId_::__l2::FStat_FAsyncIOSignatureCheckTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FAsyncIOSignatureCheckTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FAsyncIOSignatureCheckTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,0,0> @ 142a54d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FPakAsyncReadFileHandle::FPakAsyncReadFileHandle_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FPakAsyncReadFileHandle__QEAA_PEBUFPakEntry__AEBV__TRefCountPtr_VFPakFile____PEB_W_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,0,0> @ 142a54d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FPakPlatformFile::CreatePakFileHandle_::__l2::<lambda_1>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::`2'::<lambda_1>,0,0>::
        _vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142a54d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,1,0> @ 142a54d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FPakPlatformFile::Initialize_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPakPlatformFile::Initialize'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,0,1> @ 142a54d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FPakFile::LoadLegacyIndex_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::`2'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,0,0> @ 142a54da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FPakPrecacher::StartBlockTask_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartBlockTask_FPakPrecacher__AEAAXAEAUFCacheBlock_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,1,0> @ 142a54dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests_::__l31::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::`31'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,1,0> @ 142a54de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests_::__l30::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::`30'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// operator<< @ 142a58440

FArchive * __cdecl operator<<(FArchive *param_1,FPakCompressedBlock *param_2)

{
  long64 *plVar1;
  long64 *plVar2;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->CompressedStart = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar1 = &param_2->CompressedEnd;
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar2 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *plVar1 = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
  return param_1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142a5adf8

/* [thunk]:public: virtual void * __ptr64 __cdecl FFileIoStore::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FFileIoStore::_vector_deleting_destructor__adjustor_8__(FFileIoStore *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FFileIoStore *)&this[-1].OversubscriptionLimitReached,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 142a5ae08

/* [thunk]:public: virtual void * __ptr64 __cdecl FPakEncryptedReadRequest::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
FPakEncryptedReadRequest::_vector_deleting_destructor__adjustor_72__
          (FPakEncryptedReadRequest *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPakEncryptedReadRequest *)&this[-1].field_0x78,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 142a5ae18

/* [thunk]:public: virtual void * __ptr64 __cdecl FPakReadRequest::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
FPakReadRequest::_vector_deleting_destructor__adjustor_72__(FPakReadRequest *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPakReadRequest *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 142a5ae28

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FPakReadRequestBase::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
FPakReadRequestBase::_vector_deleting_destructor__adjustor_72__
          (FPakReadRequestBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FPakReadRequestBase *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `vector_deleting_destructor' @ 142a5ae40

void * __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FTreeNode::_vector_deleting_destructor_(FTreeNode *this,uint param_1)

{
  longlong lVar1;
  FTreeNode *this_00;
  
  if ((param_1 & 2) == 0) {
    ~FTreeNode(this);
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x68);
    }
    return this;
  }
  lVar1 = *(longlong *)&this[-1].NumChildNodesAndFlags;
  this_00 = this + lVar1;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    this_00 = this_00 + -1;
    ~FTreeNode(this_00);
  }
  if ((param_1 & 1) != 0) {
    operator_delete__(&this[-1].NumChildNodesAndFlags,
                      *(longlong *)&this[-1].NumChildNodesAndFlags * 0x68 + 8);
  }
  return &this[-1].NumChildNodesAndFlags;
}

// `scalar_deleting_destructor' @ 142a5aef0

void * __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask>::
_scalar_deleting_destructor_
          (FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask> *this,
          uint param_1)

{
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5af30

void * __thiscall
FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask>::
_scalar_deleting_destructor_
          (FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask> *this,
          uint param_1)

{
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5af70

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>::_scalar_deleting_destructor_
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_> *this,uint param_1)

{
  ~FPakFileHandle<FPakCompressedReaderPolicy<FPakNoEncryption>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5afb0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall
FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>::_scalar_deleting_destructor_
          (FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_> *this,uint param_1)

{
  ~FPakFileHandle<FPakCompressedReaderPolicy<FPakSimpleEncryption>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5aff0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall
FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>::_scalar_deleting_destructor_
          (FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_> *this,uint param_1)

{
  ~FPakFileHandle<FPakReaderPolicy<FPakNoEncryption>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b030

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall
FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>::_scalar_deleting_destructor_
          (FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_> *this,uint param_1)

{
  ~FPakFileHandle<FPakReaderPolicy<FPakSimpleEncryption>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b070

void * __thiscall
IBaseDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b0a0

void * __thiscall
IBaseDelegateInstance<int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b0d0

void * __thiscall
IBaseDelegateInstance<IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b100

void * __thiscall
IBaseDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b130

void * __thiscall
IBaseDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b160

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b190

void * __thiscall
IBaseDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b1c0

void * __thiscall
TBaseFunctorDelegateInstance<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b1f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l47::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy,`FPakFile::Check'::__l24::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FFileIoStore::Initialize'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b280

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy,`FPakPlatformFile::Initialize'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b2b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b2e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b310

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b340

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b370

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b3a0

void * __thiscall
TCommonDelegateInstanceState<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b3d0

void * __thiscall
TCommonDelegateInstanceState<int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b400

void * __thiscall
TCommonDelegateInstanceState<IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b430

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b460

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b490

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b4c0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b4f0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FFileIoStore::GetCompletedIoRequests'::__l156::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      puVar1 = TlsGetValue(SmallTaskAllocator._0_4_);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = ::operator_new(0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          lpTlsValue = puVar1;
        }
        TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
        puVar1 = lpTlsValue;
      }
      if (0xff < *(int *)(puVar1 + 2)) {
        if ((void **)*puVar1 != (void **)0x0) {
          TLockFreePointerListLIFOPad<void_*,64>::Push
                    ((TLockFreePointerListLIFOPad<void_*,64> *)&SmallTaskAllocator.field_0x40,
                     (void **)*puVar1);
        }
        *puVar1 = puVar1[1];
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
      }
      *(undefined8 *)this = puVar1[1];
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      puVar1[1] = this;
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b5e0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FFileIoStore::GetCompletedIoRequests'::__l156::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FPakAsyncReadFileHandle__QEAA_PEBUFPakEntry__AEBV__TRefCountPtr_VFPakFile____PEB_W_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::`2'::<lambda_1>,0,0>::
        _vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
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
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPakPlatformFile::Initialize'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::`2'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartBlockTask_FPakPrecacher__AEAAXAEAUFCacheBlock_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::`31'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::`30'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b810

void * __thiscall
TGraphTask<FAsyncIOCPUWorkTask>::_scalar_deleting_destructor_
          (TGraphTask<FAsyncIOCPUWorkTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b870

void * __thiscall
TGraphTask<FAsyncIOSignatureCheckTask>::_scalar_deleting_destructor_
          (TGraphTask<FAsyncIOSignatureCheckTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b8d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPakSignatureFile,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPakSignatureFile,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b910

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FFileIoDispatcherBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FFileIoDispatcherBackend,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b950

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFileIoStore,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FFileIoStore,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x560);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b990

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFilePackageStoreBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FFilePackageStoreBackend,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5b9d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IMappedFileHandle,SharedPointerInternals::DefaultDeleter<IMappedFileHandle>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IMappedFileHandle,SharedPointerInternals::DefaultDeleter<IMappedFileHandle>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5ba10

void * __thiscall
TThreadSingleton<FCompressionScratchBuffersStack>::_scalar_deleting_destructor_
          (TThreadSingleton<FCompressionScratchBuffersStack> *this,uint param_1)

{
  ~TThreadSingleton<FCompressionScratchBuffersStack>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5ba50

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall
FChunkCacheWorker::_scalar_deleting_destructor_(FChunkCacheWorker *this,uint param_1)

{
  FChunkBuffer *pFVar1;
  FRunnableThread *pFVar2;
  FScriptContainerElement *pFVar3;
  FArchive *pFVar4;
  longlong lVar5;
  FChunkBuffer *pFVar6;
  
  this->_padding_ = (longlong)&___7FChunkCacheWorker__6B_;
  pFVar2 = this->Thread;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  this->Thread = (FRunnableThread *)0x0;
  if (this->QueuedRequestsEvent != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->QueuedRequestsEvent);
    this->QueuedRequestsEvent = (FEvent *)0x0;
  }
  FLockFreePointerListLIFOBase<FEvent,64,1>::~FLockFreePointerListLIFOBase<FEvent,64,1>
            ((FLockFreePointerListLIFOBase<FEvent,64,1> *)&this->EventsToRelease);
  FLockFreePointerListLIFOBase<FChunkRequest,64,1>::
  ~FLockFreePointerListLIFOBase<FChunkRequest,64,1>
            ((FLockFreePointerListLIFOBase<FChunkRequest,64,1> *)&this->FreeChunkRequests);
  pFVar3 = (this->ActiveRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueueLock);
  pFVar6 = (FChunkBuffer *)&this->RequestQueue;
  pFVar3 = (((TArray<FChunkRequest_*,TSizedDefaultAllocator<32>_> *)pFVar6)->AllocatorInstance).Data
  ;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  lVar5 = 8;
  do {
    pFVar1 = pFVar6 + -1;
    pFVar6 = pFVar6 + -1;
    FMemory::Free(pFVar1->Data);
    pFVar6->Data = (uchar *)0x0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pFVar4 = (this->Reader).Ptr;
  if (pFVar4 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Signatures).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x200,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bb80

void * __thiscall
FCompressionScratchBuffersStack::_scalar_deleting_destructor_
          (FCompressionScratchBuffersStack *this,uint param_1)

{
  operator_delete__((this->First).ScratchBuffer.Ptr);
  operator_delete__((this->First).TempBuffer.Ptr);
  TThreadSingleton<FCompressionScratchBuffersStack>::
  ~TThreadSingleton<FCompressionScratchBuffersStack>
            ((TThreadSingleton<FCompressionScratchBuffersStack> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bbd0

void * __thiscall
UE::IoStore::FFileIoDispatcherBackend::_scalar_deleting_destructor_
          (FFileIoDispatcherBackend *this,uint param_1)

{
  ~FFileIoDispatcherBackend(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bc10

void * __thiscall FFileIoStore::_scalar_deleting_destructor_(FFileIoStore *this,uint param_1)

{
  ~FFileIoStore(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bc50

void * __thiscall
FFilePackageStoreBackend::_scalar_deleting_destructor_(FFilePackageStoreBackend *this,uint param_1)

{
  ~FFilePackageStoreBackend(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bc90

void * __thiscall
FGenericFileIoStoreImpl::_scalar_deleting_destructor_(FGenericFileIoStoreImpl *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGenericFileIoStoreImpl__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequestsCritical);
  FGenericPlatformProcess::ReturnSynchEventToPool((this->EventQueue).ServiceEvent);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bcf0

void * __thiscall
FMappedFilePakProxy::_scalar_deleting_destructor_(FMappedFilePakProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DebugFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LowerLevel).SharedReferenceCount.ReferenceController);
  IMappedFileHandle::~IMappedFileHandle((IMappedFileHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bd50

void * __thiscall
FMappedFileProxy::_scalar_deleting_destructor_(FMappedFileProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMappedFileProxy__6B_;
  IMappedFileHandle::~IMappedFileHandle((IMappedFileHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bda0

void * __thiscall
FMappedRegionPakProxy::_scalar_deleting_destructor_(FMappedRegionPakProxy *this,uint param_1)

{
  IMappedFileRegion *pIVar1;
  
  pIVar1 = (this->LowerLevel).Ptr;
  if (pIVar1 != (IMappedFileRegion *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Parent).SharedReferenceCount.ReferenceController);
  IMappedFileRegion::~IMappedFileRegion((IMappedFileRegion *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5be00

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall
FPakAsyncReadFileHandle::_scalar_deleting_destructor_(FPakAsyncReadFileHandle *this,uint param_1)

{
  ~FPakAsyncReadFileHandle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5be40

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void * __thiscall
FPakEncryptedReadRequest::_scalar_deleting_destructor_(FPakEncryptedReadRequest *this,uint param_1)

{
  FPakReadRequestBase::~FPakReadRequestBase((FPakReadRequestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5be80

void * __thiscall FPakExec::_scalar_deleting_destructor_(FPakExec *this,uint param_1)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bec0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall FPakFile::_scalar_deleting_destructor_(FPakFile *this,uint param_1)

{
  ~FPakFile(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bf00

void * __thiscall
UE::PakFile::Private::FPakFileDirectoryStatVisitor::_scalar_deleting_destructor_
          (FPakFileDirectoryStatVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPakFileDirectoryVisitorBase_Private_PakFile_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bf40

void * __thiscall
UE::PakFile::Private::FPakFileDirectoryVisitor::_scalar_deleting_destructor_
          (FPakFileDirectoryVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FPakFileDirectoryVisitorBase_Private_PakFile_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bf80

void * __thiscall
UE::PakFile::Private::FPakFileDirectoryVisitorBase::_scalar_deleting_destructor_
          (FPakFileDirectoryVisitorBase *this,uint param_1)

{
  *this = (FPakFileDirectoryVisitorBase)&___7FPakFileDirectoryVisitorBase_Private_PakFile_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5bfc0

void * __thiscall
FPakPlatformFile::_scalar_deleting_destructor_(FPakPlatformFile *this,uint param_1)

{
  ~FPakPlatformFile(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c000

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void * __thiscall
FPakProcessedReadRequest::_scalar_deleting_destructor_(FPakProcessedReadRequest *this,uint param_1)

{
  ~FPakProcessedReadRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c040

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void * __thiscall FPakReadRequest::_scalar_deleting_destructor_(FPakReadRequest *this,uint param_1)

{
  FPakReadRequestBase::~FPakReadRequestBase((FPakReadRequestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c080

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void * __thiscall
FPakReadRequestBase::_scalar_deleting_destructor_(FPakReadRequestBase *this,uint param_1)

{
  ~FPakReadRequestBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c0c0

void * __thiscall
`FPakPlatformFile::FindPakFilesInDirectory'::__l2::FPakSearchVisitor::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c110

void * __thiscall FPakSizeRequest::_scalar_deleting_destructor_(FPakSizeRequest *this,uint param_1)

{
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c150

void * __thiscall
UE::PakFile::Private::FPreventDuplicatesStatVisitor::_scalar_deleting_destructor_
          (FPreventDuplicatesStatVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c1a0

void * __thiscall
UE::PakFile::Private::FPreventDuplicatesVisitor::_scalar_deleting_destructor_
          (FPreventDuplicatesVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c1f0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void * __thiscall
FSignedArchiveReader::_scalar_deleting_destructor_(FSignedArchiveReader *this,uint param_1)

{
  FArchive *pFVar1;
  
  this->_padding_ = (longlong)&___7FSignedArchiveReader__6B_;
  pFVar1 = this->PakReader;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->PakReader = (FArchive *)0x0;
  FMemory::Free((this->LastCachedChunk).Data);
  (this->LastCachedChunk).Data = (uchar *)0x0;
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c270

void * __thiscall
FSimpleScopeSecondsStat::_scalar_deleting_destructor_(FSimpleScopeSecondsStat *this,uint param_1)

{
  ~FSimpleScopeSecondsStat(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c2b0

void * __thiscall
UE::IoStore::IFileIoDispatcherBackend::_scalar_deleting_destructor_
          (IFileIoDispatcherBackend *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c2e0

void * __thiscall IPakRequestor::_scalar_deleting_destructor_(IPakRequestor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IPakRequestor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142a5c320

void * __thiscall
IPlatformFileIoStore::_scalar_deleting_destructor_(IPlatformFileIoStore *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AsyncFileTest @ 142a5fbf0

/* WARNING: Removing unreachable block (ram,0x000142a5fec0) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AsyncFileTest(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FPlatformFileManager *this;
  IPlatformFile *pIVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  lVar5 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  if (param_1->ArrayNum == 0) {
    if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
  }
  else {
    iVar13 = 0;
    if (param_1->ArrayNum < 1) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = local_20._4_4_;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((FScriptContainerElement *)&local_28 != pFVar2) {
      iVar1 = *(int *)(pFVar2 + 8);
      _Src = *(void **)pFVar2;
      local_20 = CONCAT44(local_20._4_4_,iVar1);
      if (((iVar1 != 0) || (iVar13 != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,iVar13,&local_28,iVar1,(int *)((longlong)&local_20 + 4)), iVar1 != 0)
         ) {
        memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    lVar12 = 1;
    if (1 < param_1->ArrayNum) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar2 + 0x18) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar2 + 0x10);
      }
      lVar12 = _wtoi64(pwVar10);
      if (lVar12 < 1) {
        if (1 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        goto LAB_142a5ffb6;
      }
    }
    if (2 < param_1->ArrayNum) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar2 + 0x28) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar2 + 0x20);
      }
      lVar5 = _wtoi64(pwVar10);
    }
    this = FPlatformFileManager::Get();
    pIVar6 = FPlatformFileManager::GetPlatformFile(this);
    FVar11.Data = (FScriptContainerElement *)L"";
    if ((int)local_20 != 0) {
      FVar11.Data = local_28.Data;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 400))(pIVar6,FVar11.Data,0);
    if ((plVar7 == (longlong *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("FileHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x1ab7,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar8 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,0);
    if (plVar8 == (longlong *)0x0) {
      if (1 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
    }
    else {
      if (*(char *)((longlong)plVar8 + 0x41) == '\0') {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
      if ((((char)plVar8[8] == '\0') || (*(char *)((longlong)plVar8 + 0x44) == '\0')) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("bDataIsReady && bSizeRequest",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                             ,0x8c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar14 = -1;
      if (*(char *)((longlong)plVar8 + 0x43) == '\0') {
        lVar14 = plVar8[1];
      }
      (**(code **)*plVar8)(plVar8,1);
      if (lVar14 < lVar5 + lVar12) {
        if (1 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
      }
      else {
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,lVar5,lVar12,3,0,0);
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
          FWindowsPlatformProcess::Sleep(__real_40400000);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)*plVar7)(plVar7,1);
          }
          if (3 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u_pak_AsyncFileTe_15097ce58,
                       (FLogCategoryBase *)&LogPakFile);
          }
          goto LAB_142a5ffb6;
        }
        if (1 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)*plVar7)(plVar7,1);
    }
  }
LAB_142a5ffb6:
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// CheckIoStoreContainerBlockSignatures @ 142a62090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl CheckIoStoreContainerBlockSignatures(wchar_t *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  IPlatformFile *pIVar4;
  FIoStoreTocCompressedBlockEntry *pFVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FPlatformFileManager *this;
  void *pvVar11;
  IFileHandle *pIVar12;
  FArchiveFileReaderGeneric *this_00;
  long64 lVar13;
  FArchiveFileReaderGeneric *pFVar14;
  FStaticBasicLogRecord *pFVar15;
  ulong64 uVar16;
  FArchiveFileReaderGeneric *pFVar17;
  FArchiveFileReaderGeneric *pFVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStackY_648 [32];
  int local_608;
  longlong local_5f0;
  FString local_5e8;
  FString local_5d8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_5c8;
  FPakChunkSignatureCheckFailedData local_5b8;
  undefined8 local_598;
  longlong local_590;
  FString local_588;
  LARGE_INTEGER local_578;
  IPlatformFile *local_570;
  ulonglong local_568;
  ulonglong local_560;
  wchar_t *local_558;
  LARGE_INTEGER local_550;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FIoStatus local_508;
  longlong local_4f8;
  longlong lStack_4f0;
  int local_4e8;
  FIoStoreTocResourceView local_4d8;
  TStringBuilderBase<wchar_t> local_388;
  wchar_t local_368 [256];
  FIoStoreTocResourceStorage local_168;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_648;
  bVar25 = -1 < CpuChannel->Enabled;
  local_558 = param_1;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId99,"CheckIoStoreContainerBlockSignatures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
               ,99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId99);
  }
  if (3 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  QueryPerformanceCounter(&local_578);
  pFVar18 = (FArchiveFileReaderGeneric *)0x0;
  local_4d8.Header.Reserved0 = '\0';
  local_4d8.Header.Reserved1 = 0;
  local_4d8.Header.PartitionCount = 0;
  local_598 = 0xffffffffffffffff;
  local_4d8.Header.ContainerId.Id = 0xffffffffffffffff;
  local_4d8.Header.EncryptionKeyGuid.A = 0;
  local_4d8.Header.EncryptionKeyGuid.B = 0;
  local_4d8.Header.Reserved8[4] = 0;
  local_4d8.SignatureHash.Hash[0x10] = '\0';
  local_4d8.SignatureHash.Hash[0x11] = '\0';
  local_4d8.SignatureHash.Hash[0x12] = '\0';
  local_4d8.SignatureHash.Hash[0x13] = '\0';
  local_168.Data.TypeIndex = 0;
  local_4d8.Header.EncryptionKeyGuid.C = 0;
  local_4d8.Header.EncryptionKeyGuid.D = 0;
  local_4d8.Header.Reserved3 = '\0';
  local_4d8.Header.Reserved4 = 0;
  local_4d8.Header.TocChunkPerfectHashSeedsCount = 0;
  local_4d8.Header.PartitionSize = 0;
  local_4d8.Header.TocChunksWithoutPerfectHashCount = 0;
  local_4d8.Header.Reserved7 = 0;
  local_4d8.Header.Reserved8[0] = 0;
  local_4d8.Header.Reserved8[1] = 0;
  local_4d8.ChunkIds.DataPtr = (FIoChunkId *)0x0;
  local_4d8.Header.Reserved8[2] = 0;
  local_4d8.Header.Reserved8[3] = 0;
  local_4d8.ChunkIds.ArrayNum = 0;
  local_4d8.ChunkOffsetLengths.DataPtr = (FIoOffsetAndLength *)0x0;
  local_4d8.ChunkOffsetLengths.ArrayNum = 0;
  local_4d8.ChunkPerfectHashSeeds.DataPtr = (int *)0x0;
  local_4d8.ChunkPerfectHashSeeds.ArrayNum = 0;
  local_4d8.ChunkIndicesWithoutPerfectHash.DataPtr = (int *)0x0;
  local_4d8.ChunkIndicesWithoutPerfectHash.ArrayNum = 0;
  local_4d8.CompressionBlocks.DataPtr = (FIoStoreTocCompressedBlockEntry *)0x0;
  local_4d8.CompressionBlocks.ArrayNum = 0;
  local_4d8.CompressionMethods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.CompressionMethods.ArrayNum = 0;
  local_4d8.CompressionMethods.ArrayMax = 0;
  local_4d8.SignatureHash.Hash[0] = '\0';
  local_4d8.SignatureHash.Hash[1] = '\0';
  local_4d8.SignatureHash.Hash[2] = '\0';
  local_4d8.SignatureHash.Hash[3] = '\0';
  local_4d8.SignatureHash.Hash[4] = '\0';
  local_4d8.SignatureHash.Hash[5] = '\0';
  local_4d8.SignatureHash.Hash[6] = '\0';
  local_4d8.SignatureHash.Hash[7] = '\0';
  local_4d8.SignatureHash.Hash[8] = '\0';
  local_4d8.SignatureHash.Hash[9] = '\0';
  local_4d8.SignatureHash.Hash[10] = '\0';
  local_4d8.SignatureHash.Hash[0xb] = '\0';
  local_4d8.SignatureHash.Hash[0xc] = '\0';
  local_4d8.SignatureHash.Hash[0xd] = '\0';
  local_4d8.SignatureHash.Hash[0xe] = '\0';
  local_4d8.SignatureHash.Hash[0xf] = '\0';
  local_4d8.ChunkBlockSignatures.DataPtr = (FSHAHash *)0x0;
  local_4d8.ChunkBlockSignatures.ArrayNum = 0;
  local_4d8.DirectoryIndexBuffer.DataPtr = (uchar *)0x0;
  local_4d8.DirectoryIndexBuffer.ArrayNum = 0;
  local_4d8.ChunkMetas.DataPtr = (FIoStoreTocEntryMeta *)0x0;
  local_4d8.ChunkMetas.ArrayNum = 0;
  local_4d8.LegacyChunkMetas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.LegacyChunkMetas.ArrayNum = 0;
  local_4d8.LegacyChunkMetas.ArrayMax = 0;
  FIoStoreTocResourceView::Read(&local_508,param_1,Default,&local_4d8,&local_168);
  if (local_508.ErrorCode == Ok) {
    if (local_4d8.ChunkBlockSignatures.ArrayNum == local_4d8.CompressionBlocks.ArrayNum) {
      this = FPlatformFileManager::Get();
      local_570 = FPlatformFileManager::GetPlatformFile(this);
      local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5c8.ArrayNum = 0;
      local_5c8.ArrayMax = 0;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                (&local_5c8,local_4d8.Header.CompressionBlockSize,Default);
      iVar6 = local_4d8.CompressionBlocks.ArrayNum;
      local_608 = 0;
      FString::FString(&local_518,L"");
      FString::FString(&local_528,param_1);
      FPaths::ChangeExtension(&local_538,&local_528,&local_518);
      if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
      if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data.AllocatorInstance.Data);
      }
      local_388.bIsDynamic = false;
      local_388.bIsExternal = false;
      local_388.Base = local_368;
      local_388.CurPos = local_368;
      local_388.End = (wchar_t *)&local_168;
      iVar20 = 0;
      if (0 < iVar6) {
        local_590 = 0;
        local_5f0 = 0;
        pFVar17 = pFVar18;
        pFVar14 = pFVar18;
        do {
          uVar22 = (uint)pFVar14;
          uVar24 = ~uVar22 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar22 < local_4d8.CompressionBlocks.ArrayNum) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar9 = (*pcVar1)();
            return (bool)uVar9;
          }
          pFVar5 = local_4d8.CompressionBlocks.DataPtr;
          uVar23 = (ulonglong)
                   ((*(uint *)((local_4d8.CompressionBlocks.DataPtr)->Data + local_5f0 + 4) >> 8) +
                   0xf) & 0xfffffff0;
          local_568 = uVar23;
          if ((local_4d8.Header.CompressionBlockSize < uVar23) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("BlockRawSize <= TocResource.Header.CompressionBlockSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0x83,L""), bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar9 = (*pcVar1)();
            return (bool)uVar9;
          }
          FVar3.Data = local_538.Data.AllocatorInstance.Data;
          uVar21 = *(ulonglong *)(pFVar5->Data + local_5f0) & 0xffffffffff;
          local_560 = uVar21 % local_4d8.Header.PartitionSize;
          iVar20 = (int)(uVar21 / local_4d8.Header.PartitionSize);
          pFVar18 = pFVar17;
          if (iVar20 != (int)local_598) {
            local_388.CurPos = local_388.Base;
            iVar19 = local_538.Data.ArrayNum + -1;
            if (local_538.Data.ArrayNum == 0) {
              iVar19 = 0;
            }
            uVar16 = (ulong64)iVar19;
            if (local_388.End < (FIoStoreTocResourceStorage *)(local_388.Base + uVar16)) {
              TStringBuilderBase<wchar_t>::Extend(&local_388,uVar16);
            }
            if (iVar19 != 0) {
              pvVar11 = FGenericPlatformString::Memcpy(local_388.CurPos,FVar3.Data,uVar16 * 2);
              local_388.CurPos = (wchar_t *)((longlong)pvVar11 + uVar16 * 2);
            }
            if (0 < iVar20) {
              FString::PrintfImpl(&local_588,L"_s%d");
              FVar3.Data = local_588.Data.AllocatorInstance.Data;
              iVar19 = local_588.Data.ArrayNum + -1;
              if (local_588.Data.ArrayNum == 0) {
                iVar19 = 0;
              }
              uVar16 = (ulong64)iVar19;
              if (local_388.End < (FIoStoreTocResourceStorage *)(local_388.CurPos + uVar16)) {
                TStringBuilderBase<wchar_t>::Extend(&local_388,uVar16);
              }
              if (iVar19 != 0) {
                pvVar11 = FGenericPlatformString::Memcpy(local_388.CurPos,FVar3.Data,uVar16 * 2);
                local_388.CurPos = (wchar_t *)((longlong)pvVar11 + uVar16 * 2);
              }
              if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_588.Data.AllocatorInstance.Data);
              }
            }
            if (local_388.End < (FIoStoreTocResourceStorage *)(local_388.CurPos + 5)) {
              TStringBuilderBase<wchar_t>::Extend(&local_388,5);
            }
            pvVar11 = FGenericPlatformString::Memcpy(local_388.CurPos,L".ucas",10);
            pIVar4 = local_570;
            local_388.CurPos = (wchar_t *)((longlong)pvVar11 + 10);
            pcVar1 = *(code **)((longlong)*local_570 + 0xe8);
            if (local_388.End < (FIoStoreTocResourceStorage *)((longlong)pvVar11 + 0xc)) {
              TStringBuilderBase<wchar_t>::Extend(&local_388,1);
            }
            pFVar14 = (FArchiveFileReaderGeneric *)0x0;
            *local_388.CurPos = L'\0';
            pIVar12 = (IFileHandle *)(*pcVar1)(pIVar4,local_388.Base,0);
            if (pIVar12 == (IFileHandle *)0x0) {
              if (1 < (byte)LogPakFile._0_1_) {
                if (local_388.End < (FIoStoreTocResourceStorage *)(local_388.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_388,1);
                }
                *local_388.CurPos = L'\0';
                UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
              }
              bVar7 = false;
              goto LAB_142a62ab2;
            }
            this_00 = operator_new(0xe8);
            if (this_00 != (FArchiveFileReaderGeneric *)0x0) {
              lVar13 = (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12);
              if (local_388.End < (FIoStoreTocResourceStorage *)(local_388.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_388,1);
              }
              *local_388.CurPos = L'\0';
              pFVar14 = FArchiveFileReaderGeneric::FArchiveFileReaderGeneric
                                  (this_00,pIVar12,local_388.Base,lVar13,0x40000,0);
            }
            if ((pFVar17 != pFVar14) &&
               (pFVar18 = pFVar14, pFVar17 != (FArchiveFileReaderGeneric *)0x0)) {
              (**(code **)pFVar17->_padding_)(pFVar17,1);
            }
            local_598 = CONCAT44(local_598._4_4_,iVar20);
            uVar23 = local_568;
          }
          uVar21 = local_560;
          (**(code **)(pFVar18->_padding_ + 0x1b8))(pFVar18,local_560);
          (**(code **)(pFVar18->_padding_ + 0x1f0))(pFVar18,uVar21,0);
          (**(code **)(pFVar18->_padding_ + 0x188))(pFVar18,local_5c8.AllocatorInstance.Data,uVar23)
          ;
          local_4e8 = 0;
          local_4f8 = 0;
          lStack_4f0 = 0;
          FSHA1::HashBuffer(local_5c8.AllocatorInstance.Data,uVar23,(uchar *)&local_4f8);
          uVar10 = 0;
          if ((int)uVar22 < local_4d8.ChunkBlockSignatures.ArrayNum) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar9 = (*pcVar1)();
            return (bool)uVar9;
          }
          lVar2 = local_590;
          if (((*(longlong *)((local_4d8.ChunkBlockSignatures.DataPtr)->Hash + local_590) !=
                local_4f8) ||
              (*(longlong *)((local_4d8.ChunkBlockSignatures.DataPtr)->Hash + local_590 + 8) !=
               lStack_4f0)) ||
             (*(int *)((local_4d8.ChunkBlockSignatures.DataPtr)->Hash + local_590 + 0x10) !=
              local_4e8)) {
            if (2 < (byte)LogPakFile._0_1_) {
              local_5d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_5d8.Data.ArrayNum = 0;
              local_5d8.Data.ArrayMax = 0;
              BytesToHex((uchar *)&local_4f8,0x14,&local_5d8);
              uVar10 = 0;
              if ((int)uVar22 < local_4d8.ChunkBlockSignatures.ArrayNum) {
                uVar10 = uVar24;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar1 = (code *)swi(3);
                uVar9 = (*pcVar1)();
                return (bool)uVar9;
              }
              local_5e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_5e8.Data.ArrayNum = 0;
              local_5e8.Data.ArrayMax = 0;
              BytesToHex((local_4d8.ChunkBlockSignatures.DataPtr)->Hash + lVar2,0x14,&local_5e8);
              UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
              if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
              }
              if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
              }
            }
            if (local_388.End < (FIoStoreTocResourceStorage *)(local_388.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_388,1);
            }
            *local_388.CurPos = L'\0';
            FString::FString(&local_548,local_388.Base);
            FVar3.Data = local_548.Data.AllocatorInstance.Data;
            local_5b8.PakFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar20 = local_548.Data.ArrayNum;
            local_5b8.PakFilename.Data.ArrayNum = iVar20;
            if (iVar20 == 0) {
              local_5b8.PakFilename.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar20,0,(ForAnyElementType *)&local_5b8,iVar20,
                         &local_5b8.PakFilename.Data.ArrayMax);
              memcpy(local_5b8.PakFilename.Data.AllocatorInstance.Data,FVar3.Data,
                     (longlong)iVar20 * 2);
            }
            local_5b8.ExpectedHash = 0;
            local_5b8.ReceivedHash = 0;
            local_5b8.ChunkIndex = uVar22;
            if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_548.Data.AllocatorInstance.Data);
            }
            uVar10 = 0;
            if ((int)uVar22 < local_4d8.ChunkBlockSignatures.ArrayNum) {
              uVar10 = uVar24;
            }
            if ((uVar10 == 0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar1 = (code *)swi(3);
              uVar9 = (*pcVar1)();
              return (bool)uVar9;
            }
            local_5b8.ReceivedHash = (uint)local_4f8;
            local_5b8.ExpectedHash =
                 *(uint *)((local_4d8.ChunkBlockSignatures.DataPtr)->Hash + lVar2);
            FPakPlatformFile::BroadcastPakChunkSignatureCheckFailure(&local_5b8);
            local_608 = local_608 + 1;
            if (local_5b8.PakFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_5b8.PakFilename.Data.AllocatorInstance.Data);
            }
          }
          local_590 = lVar2 + 0x14;
          local_5f0 = local_5f0 + 0xc;
          pFVar14 = (FArchiveFileReaderGeneric *)(ulonglong)(uVar22 + 1);
          pFVar17 = pFVar18;
          iVar20 = local_608;
        } while ((int)(uVar22 + 1) < iVar6);
      }
      QueryPerformanceCounter(&local_550);
      if (3 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      bVar7 = iVar20 == 0;
      pFVar17 = pFVar18;
LAB_142a62ab2:
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_388);
      if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.Data.AllocatorInstance.Data);
      }
      if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.AllocatorInstance.Data);
      }
      if (pFVar17 != (FArchiveFileReaderGeneric *)0x0) {
        (**(code **)pFVar17->_padding_)(pFVar17,1);
      }
      goto LAB_142a62b04;
    }
    if (1 < (byte)LogPakFile._0_1_) {
      pFVar15 = &LOG_Static;
      goto LAB_142a622b5;
    }
  }
  else if (1 < (byte)LogPakFile._0_1_) {
    pFVar15 = &LOG_Static;
LAB_142a622b5:
    UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogPakFile);
  }
  bVar7 = false;
LAB_142a62b04:
  FIoStatus::~FIoStatus(&local_508);
  uVar23 = (ulonglong)local_168.Data.TypeIndex;
  if ((2 < local_168.Data.TypeIndex) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return (bool)uVar9;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar23])(&local_168);
  if (local_4d8.LegacyChunkMetas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.LegacyChunkMetas.AllocatorInstance.Data);
  }
  if (local_4d8.CompressionMethods.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.CompressionMethods.AllocatorInstance.Data);
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// ComputePakChunkHash @ 142a64e90

uint __cdecl ComputePakChunkHash(void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 != (int)param_2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a64eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*FCrc::MemCrc32Func)(param_1,(int)param_2,0);
  return uVar3;
}

// CreateIoDispatcherFileBackend @ 142a666f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<FFileIoStore,1> * __cdecl
CreateIoDispatcherFileBackend(TSharedRef<FFileIoStore,1> *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FModuleManager *pFVar6;
  FName *pFVar7;
  IModuleInterface *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<FFileIoStore,1> *pTVar10;
  FGenericFileIoStoreImpl *this;
  FGenericFileIoStoreImpl *pFVar11;
  undefined1 auStack_298 [32];
  TUniquePtr<IPlatformFileIoStore,TDefaultDelete<IPlatformFileIoStore>_> local_278;
  TUniquePtr<IPlatformFileIoStore,TDefaultDelete<IPlatformFileIoStore>_> local_270;
  FName local_268 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  pwVar5 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar5,L"forcegenericio");
  pFVar11 = (FGenericFileIoStoreImpl *)0x0;
  if ((!bVar4) && (bVar3)) {
    pFVar6 = FModuleManager::Get();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"WindowsPlatformIoDispatcher",0x1b,Yes);
    bVar3 = FModuleManager::ModuleExists(pFVar6,local_258.Ptr,(FString *)0x0);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if (bVar3) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"WindowsPlatformIoDispatcher",0x1b,Yes);
      pFVar7 = FName::FName(local_268,local_138.Ptr);
      FVar1 = *pFVar7;
      pFVar6 = FModuleManager::Get();
      pIVar8 = FModuleManager::LoadModule(pFVar6,FVar1,None);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((pIVar8 != (IModuleInterface *)0x0) &&
         ((**(code **)((longlong)*pIVar8 + 0x40))(pIVar8,&local_278),
         local_278.Ptr != (IPlatformFileIoStore *)0x0)) {
        pTVar9 = operator_new(0x560);
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          __return_storage_ptr__->Object = (FFileIoStore *)0x10;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFFileIoStore___00_SharedPointerInternals__6B_;
          FFileIoStore::FFileIoStore((FFileIoStore *)(pTVar9 + 1),&local_278);
          __return_storage_ptr__->Object = (FFileIoStore *)(pTVar9 + 1);
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
          if (((FFileIoStore *)(pTVar9 + 1) == (FFileIoStore *)0x0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar10 = (TSharedRef<FFileIoStore,1> *)(*pcVar2)();
            return pTVar10;
          }
        }
        if (local_278.Ptr == (IPlatformFileIoStore *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)*local_278.Ptr)(local_278.Ptr,1);
        return __return_storage_ptr__;
      }
    }
  }
  this = operator_new(0x78);
  if (this != (FGenericFileIoStoreImpl *)0x0) {
    pFVar11 = FGenericFileIoStoreImpl::FGenericFileIoStoreImpl(this);
  }
  pTVar9 = operator_new(0x560);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FFileIoStore *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pFVar11 != (FGenericFileIoStoreImpl *)0x0) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFFileIoStore___00_SharedPointerInternals__6B_;
    local_270.Ptr = (IPlatformFileIoStore *)pFVar11;
    FFileIoStore::FFileIoStore((FFileIoStore *)(pTVar9 + 1),&local_270);
    if ((FGenericFileIoStoreImpl *)local_270.Ptr != (FGenericFileIoStoreImpl *)0x0) {
      (**(code **)*local_270.Ptr)(local_270.Ptr,1);
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    __return_storage_ptr__->Object = (FFileIoStore *)(pTVar9 + 1);
    if (((FFileIoStore *)(pTVar9 + 1) == (FFileIoStore *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TSharedRef<FFileIoStore,1> *)(*pcVar2)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// DecryptData @ 142a67240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DecryptData(uchar *param_1,ulong64 param_2,FGuid *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  TDelegate<void___cdecl(unsigned_char_*,unsigned_int,FGuid),FDefaultDelegateUserPolicy> *pTVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_PakCache_DecryptTime> FVar8;
  FEncryptionKeyManager *this;
  TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> *pTVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStackY_148 [32];
  FString local_e8;
  LARGE_INTEGER local_d8;
  FSimpleScopeSecondsStat local_d0;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FAESKey local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar12 = param_2 & 0xffffffff;
  if ((param_2 != uVar12) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar6 = FPakPlatformFile::GetPakCustomEncryptionDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_98);
  if (((*(int *)&pTVar6->field_0x10 != 0) && (*(longlong **)&pTVar6->field_0x8 != (longlong *)0x0))
     && (cVar5 = (**(code **)(**(longlong **)&pTVar6->field_0x8 + 0x38))(), cVar5 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    pTVar6 = FPakPlatformFile::GetPakCustomEncryptionDelegate();
    uVar2._0_4_ = param_3->A;
    uVar2._4_4_ = param_3->B;
    uVar3._0_4_ = param_3->C;
    uVar3._4_4_ = param_3->D;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_80);
    if (*(int *)&pTVar6->field_0x10 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)&pTVar6->field_0x8;
    }
    local_a8 = uVar2;
    uStack_a0 = uVar3;
    (**(code **)(*plVar10 + 0x60))(plVar10,param_1,uVar12,&local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  lVar11 = 0;
  FVar8 = StatPtr_STAT_PakCache_DecryptTime;
  if (StatPtr_STAT_PakCache_DecryptTime ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_DecryptTime>)0x0) {
    pFVar7 = FName::FName(&local_b0,"STAT_PakCache_DecryptTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_PakCache_DecryptTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_DecryptTime,*pFVar7,
                       L"PakCache Decrypt Time","STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",
                       true,false,NumBits,false,false,MCR_Invalid);
  }
  local_d0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_d8);
  local_68.Key[0] = '\0';
  local_68.Key[1] = '\0';
  local_68.Key[2] = '\0';
  local_68.Key[3] = '\0';
  local_68.Key[4] = '\0';
  local_68.Key[5] = '\0';
  local_68.Key[6] = '\0';
  local_68.Key[7] = '\0';
  local_68.Key[8] = '\0';
  local_68.Key[9] = '\0';
  local_68.Key[10] = '\0';
  local_68.Key[0xb] = '\0';
  local_68.Key[0xc] = '\0';
  local_68.Key[0xd] = '\0';
  local_68.Key[0xe] = '\0';
  local_68.Key[0xf] = '\0';
  local_68.Key[0x10] = '\0';
  local_68.Key[0x11] = '\0';
  local_68.Key[0x12] = '\0';
  local_68.Key[0x13] = '\0';
  local_68.Key[0x14] = '\0';
  local_68.Key[0x15] = '\0';
  local_68.Key[0x16] = '\0';
  local_68.Key[0x17] = '\0';
  local_68.Key[0x18] = '\0';
  local_68.Key[0x19] = '\0';
  local_68.Key[0x1a] = '\0';
  local_68.Key[0x1b] = '\0';
  local_68.Key[0x1c] = '\0';
  local_68.Key[0x1d] = '\0';
  local_68.Key[0x1e] = '\0';
  local_68.Key[0x1f] = '\0';
  local_d0.StartTime =
       (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  local_d0.Scale = __real_3ff0000000000000;
  local_d0.StatId.StatIdPtr = (TStatIdData *)FVar8;
  this = UE::FEncryptionKeyManager::Get();
  bVar4 = UE::FEncryptionKeyManager::TryGetKey(this,param_3,&local_68);
  if (!bVar4) {
    if (((param_3->D == 0 && param_3->C == 0) && param_3->B == 0) && param_3->A == 0) {
      pTVar9 = FCoreDelegates::GetPakEncryptionKeyDelegate();
      bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar9);
      if (bVar4) {
        pTVar9 = FCoreDelegates::GetPakEncryptionKeyDelegate();
        TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy>::Execute
                  (pTVar9,local_68.Key);
        goto LAB_142a674a4;
      }
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    FGuid::AppendString(param_3,&local_e8,Digits);
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      lVar11 = 0;
    }
  }
LAB_142a674a4:
  do {
    if (*(int *)(local_68.Key + lVar11 * 4) != 0) goto LAB_142a674da;
    lVar11 = lVar11 + 1;
  } while (lVar11 < 8);
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("Key.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x1b4,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142a674da:
  FAES::DecryptData(param_1,uVar12,&local_68);
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_d0);
  return;
}

// DumpBlocks @ 142a6a880

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __cdecl DumpBlocks(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (PakPrecacherSingleton == (FPakPrecacher *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("PakPrecacherSingleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x33f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPakPrecacher::DumpBlocks(PakPrecacherSingleton);
  return;
}

// GetPakchunkIndexFromPakFile @ 142a77970

int __cdecl GetPakchunkIndexFromPakFile(FString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  iVar2 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_18);
  return iVar2;
}

// GetRecursiveAllocatedSize @ 142a785f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
GetRecursiveAllocatedSize
          (TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
           *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  undefined1 auStack_468 [32];
  undefined1 local_448 [24];
  undefined1 local_430 [1048];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_468;
  uVar4 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
          ::FTreeNode::GetAllocatedSize(&param_1->Root);
  TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
  ::FIteratorInternal::FIteratorInternal
            ((FIteratorInternal *)local_430,&param_1->Root,Recursive,param_1->PathSeparator);
  while( true ) {
    if (local_430._488_4_ == 0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)(local_430 + 0x1f0));
      if ((ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )local_430._480_8_ !=
          (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )0x0) {
        FMemory::Free((void *)local_430._480_8_);
      }
      return uVar4;
    }
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::operator*
              ((FIteratorInternal *)local_430,
               (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                *)local_448);
    uVar2 = local_448._16_8_;
    if (((TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)local_448._16_8_ ==
         (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("InternalPair.Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x731,L""), bVar3)) break;
    uVar5 = GetRecursiveAllocatedSize
                      ((TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                        *)uVar2);
    uVar4 = uVar4 + uVar5;
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::operator++((FIteratorInternal *)local_430);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

// GetRecursiveAllocatedSize @ 142a786f0

ulong64 __cdecl
GetRecursiveAllocatedSize
          (TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
           *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulong64 uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  ulong64 uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar15 = 0;
  uVar14 = 0;
  uVar10 = uVar15;
  if (1 < *(uint *)&param_1->field_0x48) {
    uVar10 = (longlong)(int)*(uint *)&param_1->field_0x48 << 2;
  }
  puVar1 = &param_1->field_0x10;
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar4 = 1;
  uVar16 = 0;
  uVar18 = (longlong)*(int *)&param_1->field_0xc * 0x68 +
           uVar10 + ((*(int *)&param_1->field_0x2c + 0x1fU >> 5) << 2);
  uVar5 = uVar14;
  if (uVar13 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar5 = *puVar17;
    uVar10 = uVar15;
    uVar16 = 0;
    uVar14 = 0;
    while (uVar5 == 0) {
      iVar11 = (int)uVar15;
      uVar16 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uVar16;
      uVar14 = iVar11 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar5 = uVar13;
      if ((int)(((int)(uVar13 - 1) >> 0x1f & 0x1fU) + (uVar13 - 1)) >> 5 < (int)uVar14)
      goto LAB_142a787bd;
      uVar5 = puVar17[(longlong)iVar11 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar15 = (ulonglong)uVar4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res10 = (int)lVar7;
    uVar5 = (uVar16 - 1) + local_res10;
    if ((int)uVar13 < (int)uVar5) {
      uVar5 = uVar13;
    }
  }
LAB_142a787bd:
  uVar6 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar6 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar4,uVar14);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar6 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = uVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar6 < 0) || ((int)uVar13 < (int)uVar6)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return uVar18;
  }
  uVar14 = *(uint *)&param_1->field_0x28;
  if (uVar6 != uVar14) {
    puVar9 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar7 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = uVar14;
      if ((int)(((int)(uVar14 - 1) >> 0x1f & 0x1fU) + (uVar14 - 1)) >> 5 < iVar11)
      goto LAB_142a788c0;
      uVar13 = *(uint *)(puVar9 + lVar7 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar6 = (int)lVar7 + -1 + uVar12;
    if ((int)uVar14 < (int)uVar6) {
      uVar6 = uVar14;
    }
  }
LAB_142a788c0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar6) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar11 = *(int *)((longlong)TStack_60.CurrentBitIndex * 0x68 + 0xc + *(longlong *)param_1);
    uVar8 = GetRecursiveAllocatedSize
                      ((TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                        *)((longlong)TStack_60.CurrentBitIndex * 0x68 + *(longlong *)param_1 + 0x10)
                      );
    uVar18 = uVar18 + uVar8 + (longlong)iVar11 * 2;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar18;
}

// GetRecursiveAllocatedSize @ 142a78950

ulong64 __cdecl
GetRecursiveAllocatedSize
          (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
           *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int iVar10;
  ulong64 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar14 = 0;
  uVar13 = 0;
  uVar8 = uVar14;
  if (1 < *(uint *)&param_1->field_0x48) {
    uVar8 = (longlong)(int)*(uint *)&param_1->field_0x48 << 2;
  }
  puVar1 = &param_1->field_0x10;
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar4 = 1;
  uVar15 = 0;
  uVar11 = (longlong)*(int *)&param_1->field_0xc * 0x20 +
           ((*(int *)&param_1->field_0x2c + 0x1fU >> 5) << 2) + uVar8;
  uVar5 = uVar13;
  if (uVar12 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar5 = *puVar16;
    uVar8 = uVar14;
    uVar15 = 0;
    uVar13 = 0;
    while (uVar5 == 0) {
      iVar10 = (int)uVar14;
      uVar15 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)uVar15;
      uVar13 = iVar10 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar5 = uVar12;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < (int)uVar13)
      goto LAB_142a78a1d;
      uVar5 = puVar16[(longlong)iVar10 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar14 = (ulonglong)uVar4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res10 = (int)lVar7;
    uVar5 = (uVar15 - 1) + local_res10;
    if ((int)uVar12 < (int)uVar5) {
      uVar5 = uVar12;
    }
  }
LAB_142a78a1d:
  uVar6 = *(uint *)&param_1->field_0x28;
  uVar17 = uVar6 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar4,uVar13);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar6 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar6 < 0) || ((int)uVar12 < (int)uVar6)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return uVar11;
  }
  uVar13 = *(uint *)&param_1->field_0x28;
  if (uVar6 != uVar13) {
    puVar9 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar10;
      uVar17 = uVar17 + 0x20;
      iVar10 = iVar10 + 1;
      uVar6 = uVar13;
      if ((int)(((int)(uVar13 - 1) >> 0x1f & 0x1fU) + (uVar13 - 1)) >> 5 < iVar10)
      goto LAB_142a78b20;
      uVar12 = *(uint *)(puVar9 + lVar7 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar6 = (int)lVar7 + -1 + uVar17;
    if ((int)uVar13 < (int)uVar6) {
      uVar6 = uVar13;
    }
  }
LAB_142a78b20:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FUtf8String,FPakEntryLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar6) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar11 = uVar11 + (longlong)
                      *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0xc +
                              *(longlong *)param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar11;
}

// GetTypeHash @ 142a7a040

uint __cdecl GetTypeHash(FFilePackageStoreEntryRef *param_1)

{
  int *piVar1;
  FFilePackageStoreEntry *pFVar2;
  FFilePackageStoreEntrySoftReferences *pFVar3;
  uint uVar4;
  int *piVar5;
  
  pFVar2 = param_1->Entry;
  uVar4 = 0;
  piVar5 = (int *)((longlong)&(pFVar2->ImportedPackages).ArrayNum +
                  (ulonglong)(pFVar2->ImportedPackages).OffsetToDataFromThis);
  piVar1 = piVar5 + (ulonglong)(pFVar2->ImportedPackages).ArrayNum * 2;
  for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
    uVar4 = uVar4 ^ uVar4 * 0x40 + -0x61c88647 + (uVar4 >> 2) + *piVar5;
  }
  piVar5 = (int *)((longlong)&(pFVar2->ShaderMapHashes).ArrayNum +
                  (ulonglong)(pFVar2->ShaderMapHashes).OffsetToDataFromThis);
  piVar1 = piVar5 + (ulonglong)(pFVar2->ShaderMapHashes).ArrayNum * 5;
  for (; piVar5 != piVar1; piVar5 = piVar5 + 5) {
    uVar4 = uVar4 ^ uVar4 * 0x40 + -0x61c88647 + (uVar4 >> 2) + *piVar5;
  }
  pFVar3 = param_1->SoftReferences;
  if (pFVar3 != (FFilePackageStoreEntrySoftReferences *)0x0) {
    piVar5 = (int *)((longlong)&(pFVar3->Indices).ArrayNum +
                    (ulonglong)(pFVar3->Indices).OffsetToDataFromThis);
    piVar1 = piVar5 + (pFVar3->Indices).ArrayNum;
    for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
      uVar4 = uVar4 ^ uVar4 * 0x40 + -0x61c88647 + (uVar4 >> 2) + *piVar5;
    }
  }
  return uVar4;
}

// HandleContainerUnmounted @ 142a7a7d0

int __cdecl
HandleContainerUnmounted
          (TArrayView<FFileIoStoreReadRequest_*,int> *param_1,FFileIoStoreContainerFile *param_2)

{
  FFileIoStoreReadRequest **ppFVar1;
  int iVar2;
  FFileIoStoreReadRequest *pFVar3;
  FFileIoStoreReadRequest **ppFVar4;
  FFileIoStoreContainerFilePartition *pFVar5;
  int iVar6;
  FFileIoStoreContainerFilePartition *pFVar7;
  undefined1 local_res10 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`HandleContainerUnmounted'::__l2::_dynamic_atexit_destructor_for__UnmountedPartition__);
    _Init_thread_footer(&_TSS0);
  }
  iVar2 = (param_2->Partitions).ArrayNum;
  pFVar5 = (FFileIoStoreContainerFilePartition *)(param_2->Partitions).AllocatorInstance.Data;
  iVar6 = 0;
  pFVar7 = pFVar5 + iVar2;
  while( true ) {
    if ((param_2->Partitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFileIoStoreContainerFilePartition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar7) break;
    ppFVar4 = param_1->DataPtr;
    ppFVar1 = ppFVar4 + param_1->ArrayNum;
    for (; ppFVar4 != ppFVar1; ppFVar4 = ppFVar4 + 1) {
      pFVar3 = *ppFVar4;
      if (pFVar3->ContainerFilePartition == pFVar5) {
        pFVar3->bFailed = true;
        iVar6 = iVar6 + 1;
        pFVar3->ContainerFilePartition = &UnmountedPartition;
      }
    }
    pFVar5 = pFVar5 + 1;
  }
  return iVar6;
}

// HasActiveScatterTasks @ 142a7be20

bool __cdecl FileIoStoreImpl::HasActiveScatterTasks(void)

{
  return 0 < (int)ActiveScatterTasks;
}

// IsSchedulerOversubscribed @ 142a7f840

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __cdecl FileIoStoreImpl::IsSchedulerOversubscribed(ETaskPriority param_1)

{
  bool bVar1;
  
  bVar1 = LowLevelTasks::FScheduler::IsOversubscriptionLimitReached
                    (&LowLevelTasks::FScheduler::Singleton,param_1);
  return bVar1;
}

// MappedFileTest @ 142a83df0

void __cdecl MappedFileTest(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  byte bVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FPlatformFileManager *this;
  IPlatformFile *pIVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_a8 [32];
  FString local_68;
  undefined1 local_58 [24];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FString::FString(&local_68,L"../../../Engine/Config/BaseDeviceProfiles.ini");
  if ((0 < param_1->ArrayNum) &&
     (pFVar3 = (param_1->AllocatorInstance).Data, (FScriptContainerElement *)&local_68 != pFVar3)) {
    iVar2 = *(int *)(pFVar3 + 8);
    _Src = *(void **)pFVar3;
    local_68.Data.ArrayNum = iVar2;
    if ((iVar2 == 0) && (local_68.Data.ArrayMax == 0)) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,local_68.Data.ArrayMax,(ForAnyElementType *)&local_68,iVar2,
                 &local_68.Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  while( true ) {
    this = FPlatformFileManager::Get();
    pIVar7 = FPlatformFileManager::GetPlatformFile(this);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
    }
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar7 + 0x1b0))(pIVar7,local_58,FVar10.Data,0);
    if ((*(char *)(puVar8 + 3) != '\0') &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = (longlong *)*puVar8;
    *puVar8 = 0;
    bVar1 = *(byte *)(puVar8 + 3);
    if ((2 < (ulonglong)bVar1) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(puVar8);
    *(undefined1 *)(puVar8 + 3) = 2;
    uVar9 = (ulonglong)local_40;
    if ((2 < local_40) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(local_58);
    puVar8 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,0,0x7fffffffffffffff);
    if (((puVar8[1] == 0) || (puVar8[2] == 0)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((puVar8[1] == 0) || (puVar8[2] == 0)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)*puVar8)(puVar8,1);
    (**(code **)*plVar4)(plVar4,1);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ShouldCheckPak @ 142aa02c0

bool __cdecl ShouldCheckPak(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pwVar1 = FCommandLine::Get();
      bShouldCheckPak = FParse::Param(pwVar1,L"checkpak");
      _Init_thread_footer(&_TSS0);
    }
  }
  return bShouldCheckPak;
}

// TestRegisterEncryptionKey @ 142aa33b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TestRegisterEncryptionKey(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_88;
  FGuid local_78;
  FDestructionSentinel local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1->ArrayNum == 2) {
    local_78.A = 0;
    local_78.B = 0;
    local_78.C = 0;
    local_78.D = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    bVar5 = FGuid::Parse((FString *)(param_1->AllocatorInstance).Data,&local_78);
    if (bVar5) {
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      if (param_1->ArrayNum < 2) {
        local_98 = 1;
        local_90 = (longlong)param_1->ArrayNum;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar5 = FBase64::Decode((FString *)((param_1->AllocatorInstance).Data + 0x10),&local_88,
                              Standard);
      if (bVar5) {
        if (local_88.ArrayNum != 0x20) {
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("KeyBytes.Num() == sizeof(FAES::FAESKey)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0xc6,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_88.ArrayNum < 1) {
          local_90 = (longlong)local_88.ArrayNum;
          local_98 = 0;
          bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_50 = *(undefined8 *)local_88.AllocatorInstance.Data;
        uStack_48 = *(undefined8 *)(local_88.AllocatorInstance.Data + 8);
        local_40 = *(undefined8 *)(local_88.AllocatorInstance.Data + 0x10);
        uStack_38 = *(undefined8 *)(local_88.AllocatorInstance.Data + 0x18);
        this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&local_68);
        this->InvocationListLockCount = this->InvocationListLockCount + 1;
        bVar5 = false;
        uVar9 = (this->InvocationList).ArrayNum - 1;
        if (-1 < (int)uVar9) {
          lVar11 = (longlong)(int)uVar9;
          lVar10 = lVar11 << 4;
          bVar5 = false;
          do {
            iVar1 = (this->InvocationList).ArrayNum;
            uVar8 = 0;
            if ((int)uVar9 < iVar1) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_98 = lVar11, local_90 = (longlong)iVar1,
               bVar6 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this->InvocationList).AllocatorInstance.Data;
            if (((*(int *)(pFVar2 + lVar10 + 8) == 0) ||
                (plVar3 = *(longlong **)(pFVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_78,&local_50), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar11 = lVar11 + -1;
            lVar10 = lVar10 + -0x10;
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
        this->InvocationListLockCount = this->InvocationListLockCount + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// WaitPrecache @ 142aaca80

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl WaitPrecache(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  FPakPrecacher *this;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_void___cdecl_WaitPrecache(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)_::_4_::FStat_STAT_WaitPrecache>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar10;
  bool bVar11;
  double dVar12;
  FColor_u_0 local_res10 [4];
  FName local_res20;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68 [3];
  
  if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("PakPrecacherSingleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x33f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = PakPrecacherSingleton->Frees;
  QueryPerformanceCounter(&local_a0);
  fVar6 = __real_3a83126f;
  dVar12 = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  while( true ) {
    if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("PakPrecacherSingleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x33f,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this = PakPrecacherSingleton;
    lpCriticalSection = &PakPrecacherSingleton->CachedFilesScopeLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar7 = FPakPrecacher::HasRequestsAtStatus(this,Waiting);
    if ((!bVar7) && (bVar7 = FPakPrecacher::HasRequestsAtStatus(this,InFlight), !bVar7)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("PakPrecacherSingleton",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0x33f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      QueryPerformanceCounter(&local_90);
      dVar12 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar12;
      dVar12 = (double)(float)dVar12 - dVar12;
      if ((__real_3fb0000000000000 <
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("FloatFitsIn<OutType>(In, Precision)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xc0,L"Loss of data caused by narrowing conversion"), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (4 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("PakPrecacherSingleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x33f,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uVar2 != PakPrecacherSingleton->Frees) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Frees == FPakPrecacher::Get().GetFrees()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x9ec,L""), bVar7)) break;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      StatPtr_STAT_WaitPrecache =
           (FThreadSafeStaticStat<_void___cdecl_WaitPrecache(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)_::_4_::FStat_STAT_WaitPrecache>
            )0x0;
      pFVar8 = FName::FName(&local_88,"STAT_WaitPrecache");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitPrecache,*pFVar8,
                 L"STAT_WaitPrecache","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&_TSS0);
    }
    FVar9 = StatPtr_STAT_WaitPrecache;
    if (StatPtr_STAT_WaitPrecache ==
        (FThreadSafeStaticStat<_void___cdecl_WaitPrecache(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)_::_4_::FStat_STAT_WaitPrecache>
         )0x0) {
      pFVar8 = FName::FName(&local_80,"STAT_WaitPrecache");
      FVar9 = (FThreadSafeStaticStat<_void___cdecl_WaitPrecache(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)_::_4_::FStat_STAT_WaitPrecache>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitPrecache,*pFVar8,
                           L"STAT_WaitPrecache","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                           true,ST_int64,true,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar9;
    bVar7 = false;
    bVar5 = false;
    local_78.ComparisonIndex.Value = 0;
    local_78.Number = 0;
    if ((FVar3.ComparisonIndex.Value.Value == 0) && (FVar3.Number == 0)) {
      FWindowsPlatformProcess::SleepNoStats(fVar6);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
        bVar7 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res20.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
          local_res20.Number = FVar3.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x9ed);
          bVar7 = true;
          bVar5 = true;
        }
      }
      bVar11 = FThreadStats::bPrimaryEnable != false;
      FVar10 = local_78;
      if (bVar11) {
        local_78 = FVar3;
        FThreadStats::AddMessage(FVar3,CycleScopeStart);
        FVar10 = FVar3;
      }
      FWindowsPlatformProcess::SleepNoStats(fVar6);
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar11) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_68[0].NameAndInfo.Index = FVar10.ComparisonIndex.Value;
          local_68[0].NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_98);
          local_68[0].StatData.Pad[4] = '\0';
          local_68[0].StatData.Pad[5] = '\0';
          local_68[0].StatData.Pad[6] = '\0';
          local_68[0].StatData.Pad[7] = '\0';
          local_68[0].StatData.Pad[0] = local_98.s.LowPart._0_1_;
          local_68[0].StatData.Pad[1] = local_98.s.LowPart._1_1_;
          local_68[0].StatData.Pad[2] = local_98.s.LowPart._2_1_;
          local_68[0].StatData.Pad[3] = local_98.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,local_68);
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
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// IMPLEMENT_MODULE_PakFile @ 142aad0d0

void __cdecl IMPLEMENT_MODULE_PakFile(void)

{
  return;
}

// PakSignatureFileCache'' @ 15035db80

void __cdecl `dynamic_atexit_destructor_for_'FPakPlatformFile::PakSignatureFileCache__(void)

{
  FPakPlatformFile::PakSignatureFileCache._72_4_ = 0;
  if (FPakPlatformFile::PakSignatureFileCache._64_8_ != 0) {
    FMemory::Free((void *)FPakPlatformFile::PakSignatureFileCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FPakSignatureFile_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FPakPlatformFile::PakSignatureFileCache);
  return;
}

// PakSignatureFileCacheLock'' @ 15035dbc0

void __cdecl `dynamic_atexit_destructor_for_'FPakPlatformFile::PakSignatureFileCacheLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015035dbc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FPakPlatformFile::PakSignatureFileCacheLock);
  return;
}

// `dynamic_atexit_destructor_for_'AlreadyLoggedCallstack'' @ 15035dbe0

void __cdecl
`FPakFile::ValidateDirectorySearch'::__l2::_dynamic_atexit_destructor_for__AlreadyLoggedCallstack__
          (void)

{
  AlreadyLoggedCallstack.HashSize = 0;
  if (AlreadyLoggedCallstack.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)AlreadyLoggedCallstack.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&AlreadyLoggedCallstack.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'AlreadyLoggedCallstackLock'' @ 15035dc20

void __cdecl
`FPakFile::ValidateDirectorySearch'::__l2::
_dynamic_atexit_destructor_for__AlreadyLoggedCallstackLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015035dc27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&AlreadyLoggedCallstackLock);
  return;
}

// `dynamic_atexit_destructor_for_'AsyncFileTestCmd'' @ 15035dc40

void __cdecl _dynamic_atexit_destructor_for__AsyncFileTestCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AsyncFileTestCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_AsyncIOCPUWorkTaskPriority'' @ 15035dc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_AsyncIOCPUWorkTaskPriority__(void)

{
  CPrio_AsyncIOCPUWorkTaskPriority.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_AsyncIOCPUWorkTaskPriority.Variable);
  if (CPrio_AsyncIOCPUWorkTaskPriority.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_AsyncIOCPUWorkTaskPriority.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_AsyncIOCPUWorkTaskPriority.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_AsyncIOCPUWorkTaskPriority.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_IoDispatcherTaskPriority'' @ 15035dcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_IoDispatcherTaskPriority__(void)

{
  CPrio_IoDispatcherTaskPriority.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_IoDispatcherTaskPriority.Variable);
  if (CPrio_IoDispatcherTaskPriority.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_IoDispatcherTaskPriority.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_IoDispatcherTaskPriority.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_IoDispatcherTaskPriority.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarPakReaderReleaseDelay'' @ 15035dd00

void __cdecl _dynamic_atexit_destructor_for__CVarPakReaderReleaseDelay__(void)

{
  CVarPakReaderReleaseDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPakReaderReleaseDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_CachePerPakFile'' @ 15035dd20

void __cdecl _dynamic_atexit_destructor_for__CVar_CachePerPakFile__(void)

{
  CVar_CachePerPakFile._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_CachePerPakFile);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_Enable'' @ 15035dd40

void __cdecl _dynamic_atexit_destructor_for__CVar_Enable__(void)

{
  CVar_Enable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_Enable);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_EnableNoCaching'' @ 15035dd60

void __cdecl _dynamic_atexit_destructor_for__CVar_EnableNoCaching__(void)

{
  CVar_EnableNoCaching._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_EnableNoCaching);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ForceDecompressionFails'' @ 15035dd80

void __cdecl _dynamic_atexit_destructor_for__CVar_ForceDecompressionFails__(void)

{
  CVar_ForceDecompressionFails._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ForceDecompressionFails);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ForcePakProcessReads'' @ 15035dda0

void __cdecl _dynamic_atexit_destructor_for__CVar_ForcePakProcessReads__(void)

{
  CVar_ForcePakProcessReads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ForcePakProcessReads);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoDispatcherCullCancelledReadRequests'' @ 15035ddc0

void __cdecl _dynamic_atexit_destructor_for__CVar_IoDispatcherCullCancelledReadRequests__(void)

{
  CVar_IoDispatcherCullCancelledReadRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoDispatcherCullCancelledReadRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MMIOEnable'' @ 15035dde0

void __cdecl _dynamic_atexit_destructor_for__CVar_MMIOEnable__(void)

{
  CVar_MMIOEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MMIOEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MaxBlockMemory'' @ 15035de00

void __cdecl _dynamic_atexit_destructor_for__CVar_MaxBlockMemory__(void)

{
  CVar_MaxBlockMemory._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MaxBlockMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MaxRequestSizeToLowerLevelKB'' @ 15035de20

void __cdecl _dynamic_atexit_destructor_for__CVar_MaxRequestSizeToLowerLevelKB__(void)

{
  CVar_MaxRequestSizeToLowerLevelKB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MaxRequestSizeToLowerLevelKB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MaxRequestsToLowerLevel'' @ 15035de40

void __cdecl _dynamic_atexit_destructor_for__CVar_MaxRequestsToLowerLevel__(void)

{
  CVar_MaxRequestsToLowerLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MaxRequestsToLowerLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_NumUnreferencedBlocksToCache'' @ 15035de60

void __cdecl _dynamic_atexit_destructor_for__CVar_NumUnreferencedBlocksToCache__(void)

{
  CVar_NumUnreferencedBlocksToCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_NumUnreferencedBlocksToCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_PakCache_TimeToTrim'' @ 15035de80

void __cdecl _dynamic_atexit_destructor_for__CVar_PakCache_TimeToTrim__(void)

{
  CVar_PakCache_TimeToTrim._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_PakCache_TimeToTrim);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_TestRegisterEncryptionKey'' @ 15035dea0

void __cdecl _dynamic_atexit_destructor_for__CVar_TestRegisterEncryptionKey__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_TestRegisterEncryptionKey);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_UnmountTimeOutSeconds'' @ 15035dec0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_UnmountTimeOutSeconds__(void)

{
  CVar_UnmountTimeOutSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_UnmountTimeOutSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_UseDirectoryTreeForPakSearch'' @ 15035dee0

void __cdecl _dynamic_atexit_destructor_for__CVar_UseDirectoryTreeForPakSearch__(void)

{
  CVar_UseDirectoryTreeForPakSearch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_UseDirectoryTreeForPakSearch);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_UseNewTrim'' @ 15035df00

void __cdecl _dynamic_atexit_destructor_for__CVar_UseNewTrim__(void)

{
  CVar_UseNewTrim._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_UseNewTrim);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ValidateDirectoryTreeSearchConsistency'' @ 15035df20

void __cdecl _dynamic_atexit_destructor_for__CVar_ValidateDirectoryTreeSearchConsistency__(void)

{
  CVar_ValidateDirectoryTreeSearchConsistency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_ValidateDirectoryTreeSearchConsistency);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 15035df40

void __cdecl
`FPakPlatformFile::GetFilenameSecurityDelegate'::__l2::_dynamic_atexit_destructor_for__Delegate__
          (void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,
             (FWriteAccessScope *)&local_28);
  if ((::Delegate._16_4_ != 0) && (::Delegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)::Delegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&::Delegate.field_0x8,0,0,0x10);
    ::Delegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 15035dfe0

void __cdecl
`FPakPlatformFile::GetPakCustomEncryptionDelegate'::__l2::_dynamic_atexit_destructor_for__Delegate__
          (void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,
             (FWriteAccessScope *)&local_28);
  if ((::Delegate._16_4_ != 0) && (::Delegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)::Delegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&::Delegate.field_0x8,0,0,0x10);
    ::Delegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 15035e080

void __cdecl
`FPakPlatformFile::GetPakSetIndexSettingsDelegate'::__l2::_dynamic_atexit_destructor_for__Delegate__
          (void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,
             (FWriteAccessScope *)&local_28);
  if ((::Delegate._16_4_ != 0) && (::Delegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)::Delegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&::Delegate.field_0x8,0,0,0x10);
    ::Delegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'DumpBlocksCmd'' @ 15035e120

void __cdecl _dynamic_atexit_destructor_for__DumpBlocksCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpBlocksCmd);
  return;
}

// `dynamic_atexit_destructor_for_'FPackageIdMapTestInstance'' @ 15035e140

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FPackageIdMapTestInstance__(void)

{
  if (FPackageIdMapTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FPackageIdMapTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FPackageIdMapTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPakReadRequestEvent'' @ 15035e170

void __cdecl _dynamic_atexit_destructor_for__FPakReadRequestEvent__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015035e177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  return;
}

// `dynamic_atexit_destructor_for_'GIntervalTreeNodeNodeAllocator'' @ 15035e190

void __cdecl _dynamic_atexit_destructor_for__GIntervalTreeNodeNodeAllocator__(void)

{
  if (GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GIntervalTreeNodeNodeAllocator.FreeItems.AllocatorInstance.Data);
  }
  DestructItems<FIntervalTreeNode,int>
            ((FIntervalTreeNode *)GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data,
             GIntervalTreeNodeNodeAllocator.Items.ArrayNum);
  if (GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(GIntervalTreeNodeNodeAllocator.Items.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GMountStartupPaksWildCard'' @ 15035e1e0

void __cdecl _dynamic_atexit_destructor_for__GMountStartupPaksWildCard__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GMountStartupPaksWildCard.Data.AllocatorInstance.Data;
  if (GMountStartupPaksWildCard.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GMountStartupPaksWildCard.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GPakExec'' @ 15035e200

void __cdecl _dynamic_atexit_destructor_for__GPakExec__(void)

{
  if (GPakExec.Ptr != (FPakExec *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035e214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GPakExec.Ptr)->_padding_)(GPakExec.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InFlightOrDone'' @ 15035e220

void __cdecl
`FPakPrecacher::AddNewBlock'::__l2::_dynamic_atexit_destructor_for__InFlightOrDone__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
               InFlightOrDone.AllocatorInstance.Data;
  if (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InFlightOrDone'' @ 15035e240

void __cdecl
`FPakPrecacher::AddRequest'::__l2::_dynamic_atexit_destructor_for__InFlightOrDone__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
               ::__l2::InFlightOrDone.AllocatorInstance.Data;
  if (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
      ::__l2::InFlightOrDone.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
      ::__l2::InFlightOrDone.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InFlightOrDone'' @ 15035e260

void __cdecl
`FPakPrecacher::FirstUnfilledBlockForRequest'::__l2::
_dynamic_atexit_destructor_for__InFlightOrDone__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
               ::__l2::InFlightOrDone.AllocatorInstance.Data;
  if (`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
      ::__l2::InFlightOrDone.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
      ::__l2::InFlightOrDone.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Instance'' @ 15035e280

void __cdecl
`FPakPlatformFile::GetPakSigningFailureHandlerData'::__l2::
_dynamic_atexit_destructor_for__Instance__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ::Instance.MasterSignatureTableCheckFailedDelegate._8_8_,
             ::Instance.MasterSignatureTableCheckFailedDelegate._16_4_);
  if (::Instance.MasterSignatureTableCheckFailedDelegate._8_8_ != 0) {
    FMemory::Free((void *)::Instance.MasterSignatureTableCheckFailedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Instance.MasterSignatureTableCheckFailedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ::Instance.ChunkSignatureCheckFailedDelegate._8_8_,
             ::Instance.ChunkSignatureCheckFailedDelegate._16_4_);
  if (::Instance.ChunkSignatureCheckFailedDelegate._8_8_ != 0) {
    FMemory::Free((void *)::Instance.ChunkSignatureCheckFailedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Instance.ChunkSignatureCheckFailedDelegate);
                    /* WARNING: Could not recover jumptable at 0x00015035e2ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogFilePackageStore'' @ 15035e300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogFilePackageStore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogFilePackageStore);
  return;
}

// `dynamic_atexit_destructor_for_'LogPakFile'' @ 15035e320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPakFile__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPakFile);
  return;
}

// `dynamic_atexit_destructor_for_'MappedFileTestCmd'' @ 15035e340

void __cdecl _dynamic_atexit_destructor_for__MappedFileTestCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&MappedFileTestCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Requested'' @ 15035e360

void __cdecl `FPakPrecacher::AddNewBlock'::__l2::_dynamic_atexit_destructor_for__Requested__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
               AllocatorInstance.Data;
  if (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UnmountedPartition'' @ 15035e380

void __cdecl
`HandleContainerUnmounted'::__l2::_dynamic_atexit_destructor_for__UnmountedPartition__(void)

{
  if (UnmountedPartition.MappedFileHandle.Ptr != (IMappedFileHandle *)0x0) {
    (**(code **)(UnmountedPartition.MappedFileHandle.Ptr)->_padding_)
              (UnmountedPartition.MappedFileHandle.Ptr,1);
  }
  if (UnmountedPartition.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(UnmountedPartition.FilePath.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'WaitPrecacheCmd'' @ 15035e3c0

void __cdecl _dynamic_atexit_destructor_for__WaitPrecacheCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&WaitPrecacheCmd);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_FileIOVerbose'' @ 15035e3e0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_FileIOVerbose__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_FileIOVerbose.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_FileIOVerbose.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (_GCsvCategory_FileIOVerbose.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

