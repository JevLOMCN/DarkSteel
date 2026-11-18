// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 8

// Get @ 145ae5d80

FVulkanCombinedChunkCacheFile * __cdecl FVulkanCombinedChunkCacheFile::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::Impl.MappedCacheFile.Ptr = (IMappedFileHandle *)0x0;
      `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::Impl.MappingLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::Impl.MappedRegion.Ptr = (IMappedFileRegion *)0x0;
      `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::Impl.PSOFileWriter.Ptr = (FArchive *)0x0;
      atexit(`FVulkanCombinedChunkCacheFile::Get'::__l2::_dynamic_atexit_destructor_for__Impl__);
      _Init_thread_footer(&`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
              ::__l2::Impl;
    }
  }
  return &`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
          ::__l2::Impl;
}

// GetFullCachePath @ 145ae6940

FString * __thiscall
FVulkanCombinedChunkCacheFile::GetFullCachePath(FVulkanCombinedChunkCacheFile *this)

{
  size_t sVar1;
  TStringView<wchar_t> local_78;
  FScriptContainerElement *local_68;
  int local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FVulkanCombinedChunkCacheFile::GetFullCachePath'::__l2::
             _dynamic_atexit_destructor_for__FullCachePath__);
      _Init_thread_footer(&`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
      ::__l2::FullCachePath.Data.ArrayNum < 2) {
    UE::Vulkan::GetRHICacheRootFolder(&local_38);
    UE::Vulkan::GetPSOBinaryCacheVersionedFolder(&local_48);
    local_78.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    local_78.Size = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      local_78.Size = 0;
    }
    local_68 = local_48.Data.AllocatorInstance.Data;
    local_60 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      local_60 = 0;
    }
    FPaths::CombineInternal(&local_58,&local_78,2);
    local_28.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    local_28.Size = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      local_28.Size = 0;
    }
    local_18 = L"VulkanPSOChunks";
    sVar1 = wcslen(L"VulkanPSOChunks");
    local_10 = (undefined4)sVar1;
    FPaths::CombineInternal((FString *)&local_78,&local_28,2);
    if (`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
        ::__l2::FullCachePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
                    ::__l2::FullCachePath.Data.AllocatorInstance.Data);
    }
    `public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
    ::__l2::FullCachePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_78.DataPtr;
    `public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
    ::__l2::FullCachePath.Data.ArrayNum = local_78.Size;
    `public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
    ::__l2::FullCachePath.Data.ArrayMax = local_78._12_4_;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return &`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
          ::__l2::FullCachePath;
}

// GetReader @ 145ae73c0

FPSOArchiveReader * __thiscall
FVulkanCombinedChunkCacheFile::GetReader
          (FVulkanCombinedChunkCacheFile *this,FPSOArchiveReader *__return_storage_ptr__,
          uint param_1)

{
  ulong64 *puVar1;
  IMappedFileRegion *pIVar2;
  ulong64 uVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  FPSOArchiveReader *pFVar7;
  FRWScopeLock *pFVar8;
  FVulkanCombinedChunkCacheFile *pFVar9;
  FArchiveState *this_00;
  IFileManager *pIVar10;
  FString *pFVar11;
  FArchiveState *pFVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  
  uVar14 = (ulonglong)param_1;
  if (UE::Vulkan::GMemoryMapChunkedPSOCache) {
    if (((this->MappedRegion).Ptr == (IMappedFileRegion *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedRegion",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                           ,0x17b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPSOArchiveReader *)(*pcVar5)();
      return pFVar7;
    }
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 == (FRWScopeLock *)0x0) {
      pFVar8 = (FRWScopeLock *)0x0;
    }
    else {
      pFVar9 = Get();
      pFVar8->LockType = SLT_ReadOnly;
      pFVar8->LockObject = &pFVar9->MappingLock;
      AcquireSRWLockShared((PSRWLOCK)&pFVar9->MappingLock);
    }
    pFVar12 = (FArchiveState *)0x0;
    pIVar2 = (this->MappedRegion).Ptr;
    puVar1 = &pIVar2->MappedSize;
    if (((pIVar2->MappedPtr == (uchar *)0x0) || (*puVar1 == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPSOArchiveReader *)(*pcVar5)();
      return pFVar7;
    }
    uVar3 = *puVar1;
    pIVar2 = (this->MappedRegion).Ptr;
    if (((pIVar2->MappedPtr == (uchar *)0x0) || (pIVar2->MappedSize == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPSOArchiveReader *)(*pcVar5)();
      return pFVar7;
    }
    puVar4 = pIVar2->MappedPtr;
    this_00 = ::operator_new(0xb0);
    if (this_00 != (FArchiveState *)0x0) {
      this_00->_padding_ = 0;
      this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this_00->field_0x28 = 0;
      this_00->ArSerializingDefaults = 0;
      this_00->ArPortFlags = 0;
      this_00->ArMaxSerializeSize = 0;
      (this_00->ArUEVer).FileVersionUE4 = 0;
      (this_00->ArUEVer).FileVersionUE5 = 0;
      this_00->ArLicenseeUEVer = 0;
      (this_00->ArEngineVer).Major = 0;
      (this_00->ArEngineVer).Minor = 0;
      (this_00->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
      (this_00->ArEngineVer).Changelist = 0;
      this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
      this_00->SerializedProperty = (FProperty *)0x0;
      this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
      this_00->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this_00);
      this_00[1]._padding_ = 0;
      this_00->_padding_ = (longlong)&___7FMemoryReaderView__6B_;
      this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)(puVar4 + uVar14);
      this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)(uVar3 - uVar14);
      this_00[1].InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x7fffffffffffffff;
      FArchiveState::SetIsLoading(this_00,true);
      (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
      pFVar12 = this_00;
    }
    __return_storage_ptr__->PSOBytes = puVar4 + uVar14;
    (__return_storage_ptr__->MappingLock).Ptr = pFVar8;
  }
  else {
    pIVar10 = IFileManager::Get();
    pcVar5 = *(code **)((longlong)*pIVar10 + 0x18);
    pFVar11 = GetFullCachePath(this);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar12 = (FArchiveState *)(*pcVar5)(pIVar10,pwVar13,4);
    if (pFVar12 != (FArchiveState *)0x0) {
      (**(code **)(pFVar12->_padding_ + 0x1b8))(pFVar12,uVar14);
    }
    __return_storage_ptr__->PSOBytes = (uchar *)0x0;
    (__return_storage_ptr__->MappingLock).Ptr = (FRWScopeLock *)0x0;
  }
  (__return_storage_ptr__->Archive).Ptr = (FArchive *)pFVar12;
  return __return_storage_ptr__;
}

// LoadAllCacheChunks @ 145ae9840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVulkanCombinedChunkCacheFile::LoadAllCacheChunks
          (FVulkanCombinedChunkCacheFile *this,
          TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader_&)> *param_1
          )

{
  FScriptContainerElement *_Src;
  IMappedFileHandle *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  TUniquePtr<FRWScopeLock,TDefaultDelete<FRWScopeLock>_> TVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  FString *pFVar11;
  FPlatformFileManager *pFVar12;
  IPlatformFile *pIVar13;
  IFileManager *pIVar14;
  IMappedFileHandle *pIVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  FVulkanCombinedChunkCacheFile *pFVar18;
  longlong lVar19;
  ulonglong uVar20;
  IMappedFileHandle *pIVar21;
  undefined1 auStackY_138 [32];
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [16];
  FPSOArchiveReader local_d8;
  undefined4 local_c0;
  TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader_&)> local_b8;
  undefined1 local_88 [24];
  longlong local_70;
  IMappedFileHandle *local_60 [3];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pIVar15 = (IMappedFileHandle *)0x0;
  local_c0 = 0;
  pFVar11 = GetFullCachePath(this);
  local_f8.Data = (FScriptContainerElement *)0x0;
  bVar3 = false;
  bVar10 = true;
  local_f0 = (pFVar11->Data).ArrayNum;
  lVar19 = (longlong)local_f0;
  _Src = (pFVar11->Data).AllocatorInstance.Data;
  if (local_f0 == 0) {
    local_ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f0,0,&local_f8,local_f0,&local_ec);
    memcpy(local_f8.Data,_Src,lVar19 * 2);
  }
  pFVar12 = FPlatformFileManager::Get();
  pIVar13 = FPlatformFileManager::GetPlatformFile(pFVar12);
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_f0 != 0) {
    FVar17.Data = local_f8.Data;
  }
  (**(code **)((longlong)*pIVar13 + 0x130))(pIVar13,local_88,FVar17.Data);
  bVar6 = false;
  if (local_70 < UE::Vulkan::GMaxTotalCacheSizeMb << 0x14) {
    pIVar14 = IFileManager::Get();
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_f0 != 0) {
      FVar17.Data = local_f8.Data;
    }
    local_d8.Archive.Ptr =
         (FArchive *)(**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,FVar17.Data,4);
    local_d8.PSOBytes = (uchar *)0x0;
    local_d8.MappingLock.Ptr = (FRWScopeLock *)0x0;
    if (local_d8.Archive.Ptr == (FArchive *)0x0) {
      if (4 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::LoadAllCacheChunks(TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64)>)___ptr64'
                    ::__l29::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else {
      if (4 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::LoadAllCacheChunks(TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64)>)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      local_b8._0_8_ = *(undefined8 *)param_1;
      local_b8._40_8_ = *(undefined8 *)&param_1->field_0x28;
      *(undefined8 *)&param_1->field_0x28 = 0;
      local_b8._32_8_ = *(undefined8 *)&param_1->field_0x20;
      local_b8._16_8_ = *(undefined8 *)&param_1->field_0x10;
      local_b8._24_8_ = *(undefined8 *)&param_1->field_0x18;
      if (local_b8._0_8_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      bVar6 = ReadAllCacheChunks(this,&local_d8,&local_b8);
    }
    TVar5.Ptr = local_d8.MappingLock.Ptr;
    if (local_d8.MappingLock.Ptr != (FRWScopeLock *)0x0) {
      if ((local_d8.MappingLock.Ptr)->LockType == SLT_ReadOnly) {
        ReleaseSRWLockShared((PSRWLOCK)(local_d8.MappingLock.Ptr)->LockObject);
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)(local_d8.MappingLock.Ptr)->LockObject);
      }
      ::operator_delete(TVar5.Ptr,0x10);
    }
    if (local_d8.Archive.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_d8.Archive.Ptr)(local_d8.Archive.Ptr,1);
    }
  }
  else if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::LoadAllCacheChunks(TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64)>)___ptr64'
                ::__l49::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  bVar7 = OpenWriteHandle(this,bVar6);
  if ((!bVar7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bWriteSuccess",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x166,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return (bool)uVar9;
  }
  if ((bVar6 == false) && (bVar7)) {
    WriteFileHeader((this->PSOFileWriter).Ptr,0);
    (**(code **)(*(longlong *)(this->PSOFileWriter).Ptr + 0x208))();
  }
  if ((UE::Vulkan::GMemoryMapChunkedPSOCache != false) &&
     ((this->MappedCacheFile).Ptr == (IMappedFileHandle *)0x0)) {
    pFVar12 = FPlatformFileManager::Get();
    pIVar13 = FPlatformFileManager::GetPlatformFile(pFVar12);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_f0 != 0) {
      FVar17.Data = local_f8.Data;
    }
    (**(code **)((longlong)*pIVar13 + 0x1b0))(pIVar13,local_60,FVar17.Data,0);
    uVar20 = (ulonglong)local_48;
    if ((2 < uVar20) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType)[uVar20] == '\0') {
      if ((local_48 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
      pIVar15 = local_60[0];
      local_e8._0_8_ = local_60[0];
      local_60[0] = (IMappedFileHandle *)0x0;
      if ((2 < local_48) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_48])(local_60);
      pFVar18 = (FVulkanCombinedChunkCacheFile *)local_e8;
      local_48 = 2;
      pIVar21 = pIVar15;
    }
    else {
      pFVar18 = (FVulkanCombinedChunkCacheFile *)(local_e8 + 8);
      local_e8._8_8_ = (SRWLOCK)0x0;
      bVar3 = true;
      bVar10 = false;
      pIVar21 = (IMappedFileHandle *)local_e8._0_8_;
    }
    if (this != pFVar18) {
      pIVar1 = (this->MappedCacheFile).Ptr;
      (this->MappedCacheFile).Ptr = pIVar15;
      (pFVar18->MappedCacheFile).Ptr = (IMappedFileHandle *)0x0;
      pIVar21 = (IMappedFileHandle *)local_e8._0_8_;
      if (pIVar1 != (IMappedFileHandle *)0x0) {
        (**(code **)pIVar1->_padding_)(pIVar1,1);
        pIVar21 = (IMappedFileHandle *)local_e8._0_8_;
      }
    }
    uVar4 = local_e8._8_8_;
    if ((bVar10) && (pIVar21 != (IMappedFileHandle *)0x0)) {
      (**(code **)pIVar21->_padding_)(pIVar21,1);
    }
    if ((bVar3) && ((SRWLOCK)uVar4 != (SRWLOCK)0x0)) {
      (*(code *)**(undefined8 **)uVar4)(uVar4,1);
    }
    uVar20 = (ulonglong)local_48;
    if ((2 < local_48) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar20])(local_60);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (*(longlong *)param_1 != 0) {
    plVar16 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  return bVar7;
}

// OpenWriteHandle @ 145aeb600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVulkanCombinedChunkCacheFile::OpenWriteHandle(FVulkanCombinedChunkCacheFile *this,bool param_1)

{
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *pTVar1;
  byte bVar2;
  FArchive *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  FArchive *pFVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong local_18 [2];
  
  pTVar1 = &this->PSOFileWriter;
  if (((this->PSOFileWriter).Ptr != (FArchive *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PSOFileWriter == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x18d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar7 = GetFullCachePath(this);
  pIVar8 = IFileManager::Get();
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar9 = (FArchive *)
           (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,pwVar11,(uint)param_1 << 3 | 0x10);
  if (pTVar1 == (TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *)local_18) {
    if (pFVar9 == (FArchive *)0x0) goto LAB_145aeb6b1;
    puVar10 = *(undefined8 **)pFVar9;
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar3 == (FArchive *)0x0) goto LAB_145aeb6b1;
    puVar10 = *(undefined8 **)pFVar3;
    pFVar9 = pFVar3;
  }
  (*(code *)*puVar10)(pFVar9,1);
LAB_145aeb6b1:
  if ((4 < (byte)LogRHI._0_1_) && (pTVar1->Ptr != (FArchive *)0x0)) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::OpenWriteHandle(bool)___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((2 < (byte)LogRHI._0_1_) && (pTVar1->Ptr == (FArchive *)0x0)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::OpenWriteHandle(bool)___ptr64'
                ::__l32::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (((1 < (byte)LogRHI._0_1_) && (pTVar1->Ptr != (FArchive *)0x0)) &&
     ((bVar2 = pTVar1->Ptr->field_0x29, (bVar2 >> 1 & 1) != 0 || ((bVar2 >> 2 & 1) != 0)))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::OpenWriteHandle(bool)___ptr64'
                ::__l54::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return pTVar1->Ptr != (FArchive *)0x0;
}

// ReadAllCacheChunks @ 145af2140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVulkanCombinedChunkCacheFile::ReadAllCacheChunks
          (FVulkanCombinedChunkCacheFile *this,FPSOArchiveReader *param_1,
          TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader_&)> *param_2
          )

{
  undefined1 *puVar1;
  FScriptContainerElement *_Src;
  FArchive *this_00;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FString *pFVar7;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> TVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_d8 [32];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> local_78;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> local_70;
  IMappedFileHandle *local_68 [3];
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar7 = GetFullCachePath(this);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = (pFVar7->Data).ArrayNum;
  lVar13 = (longlong)local_80;
  _Src = (pFVar7->Data).AllocatorInstance.Data;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,&local_88,local_80,&local_7c);
    memcpy(local_88.Data,_Src,lVar13 * 2);
  }
  this_00 = (param_1->Archive).Ptr;
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_8c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&local_8c);
    }
  }
  else {
    local_8c = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  puVar1 = &this_00->field_0x2a;
  if (local_8c == 5) {
    puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,&local_94);
      }
    }
    else {
      local_94 = *puVar2;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    uVar6 = FVulkanDynamicRHI::GetPrecachePSOHashVersion();
    if (local_94 == uVar6) {
      puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_90,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,&local_90);
        }
      }
      else {
        local_90 = *puVar2;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_98,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,&local_98);
        }
      }
      else {
        local_98 = *puVar2;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      if ((local_98 != 0) &&
         (uVar6 = (*FCrc::MemCrc32Func)(&UE::Vulkan::GMaxPSOsPerChunk,4,0), local_90 == uVar6)) {
        if (UE::Vulkan::GMemoryMapChunkedPSOCache != false) {
          this_01 = FPlatformFileManager::Get();
          pIVar8 = FPlatformFileManager::GetPlatformFile(this_01);
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_80 != 0) {
            FVar15.Data = local_88.Data;
          }
          (**(code **)((longlong)*pIVar8 + 0x1b0))(pIVar8,local_68,FVar15.Data,0);
          uVar10 = (ulonglong)local_50;
          if ((2 < uVar10) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                ::__l2::bIsSameType)[uVar10] == '\0') {
            if ((local_50 != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            local_70.Ptr = local_68[0];
            local_68[0] = (IMappedFileHandle *)0x0;
            if ((2 < local_50) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_50])(local_68);
            local_50 = 2;
            TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>::operator=
                      (&this->MappedCacheFile,&local_70);
            TVar11.Ptr = local_70.Ptr;
          }
          else {
            local_78.Ptr = (IMappedFileHandle *)0x0;
            TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>::operator=
                      (&this->MappedCacheFile,&local_78);
            TVar11.Ptr = local_78.Ptr;
          }
          if (TVar11.Ptr != (IMappedFileHandle *)0x0) {
            (**(code **)(TVar11.Ptr)->_padding_)(TVar11.Ptr,1);
          }
          UpdateMapping(this,local_98);
          uVar10 = (ulonglong)local_50;
          if ((2 < local_50) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10])(local_68);
        }
        uVar10 = (ulonglong)local_98;
        lVar13 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
        if (lVar13 < (longlong)uVar10) {
          do {
            UE::Core::Private::Function::CheckCallable(*(void **)param_2);
            pcVar3 = *(code **)param_2;
            plVar12 = *(longlong **)&param_2->field_0x28;
            if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
              plVar12 = (longlong *)&param_2->field_0x10;
            }
            uVar9 = (**(code **)(*plVar12 + 8))();
            (*pcVar3)(uVar9,param_1);
            uVar10 = (ulonglong)local_98;
            lVar13 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
          } while (lVar13 < (longlong)uVar10);
        }
        uVar14 = (ulonglong)local_98;
        uVar10 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
        if ((uVar10 != uVar14) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Archive.Tell() == LastValidOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                               ,0x140,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        if (*(longlong *)param_2 != 0) {
          plVar12 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar12 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        return true;
      }
      if (4 < (byte)LogVulkanRHI._0_1_) {
        (*FCrc::MemCrc32Func)(&UE::Vulkan::GMaxPSOsPerChunk,4,0);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::ReadAllCacheChunks(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64)>)___ptr64'
                    ::__l48::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else if (4 < (byte)LogVulkanRHI._0_1_) {
      FVulkanDynamicRHI::GetPrecachePSOHashVersion();
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::ReadAllCacheChunks(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64)>)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  else if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_bool___cdecl_FVulkanCombinedChunkCacheFile::ReadAllCacheChunks(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TUniqueFunction<void___cdecl(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64)>)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar12 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return false;
}

// UpdateMapping @ 145af68e0

void __thiscall
FVulkanCombinedChunkCacheFile::UpdateMapping(FVulkanCombinedChunkCacheFile *this,uint param_1)

{
  IMappedFileHandle *pIVar1;
  IMappedFileRegion *pIVar2;
  IMappedFileRegion *pIVar3;
  undefined8 *puVar4;
  TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *pTVar5;
  longlong local_18 [2];
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->MappingLock);
  pIVar1 = (this->MappedCacheFile).Ptr;
  pIVar3 = (IMappedFileRegion *)(**(code **)(pIVar1->_padding_ + 8))(pIVar1,0,param_1,0);
  pTVar5 = &this->MappedRegion;
  if (pTVar5 == (TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)local_18) {
    if (pIVar3 == (IMappedFileRegion *)0x0) goto LAB_145af6945;
    puVar4 = (undefined8 *)pIVar3->_padding_;
  }
  else {
    pIVar2 = pTVar5->Ptr;
    pTVar5->Ptr = pIVar3;
    if (pIVar2 == (IMappedFileRegion *)0x0) goto LAB_145af6945;
    puVar4 = (undefined8 *)pIVar2->_padding_;
    pIVar3 = pIVar2;
  }
  (*(code *)*puVar4)(pIVar3,1);
LAB_145af6945:
                    /* WARNING: Could not recover jumptable at 0x000145af6957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->MappingLock);
  return;
}

// WriteFileHeader @ 145af6f50

void __cdecl FVulkanCombinedChunkCacheFile::WriteFileHeader(FArchive *param_1,uint param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res8[0] = 5;
  local_res10[0] = param_2;
  local_res20[0] = (*FCrc::MemCrc32Func)(&UE::Vulkan::GMaxPSOsPerChunk,4,0);
  local_res18[0] = FVulkanDynamicRHI::GetPrecachePSOHashVersion();
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x2a;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
    *plVar2 = *plVar2 + 4;
    return;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res10);
  return;
}

