// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SQLiteCore
// Functions: 19

// CurrentlyOpenAsReadOnly'' @ 1413c77d0

void __cdecl `dynamic_initializer_for_'FSQLiteFile::CurrentlyOpenAsReadOnly__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSQLiteFile::CurrentlyOpenAsReadOnly__);
  return;
}

// CurrentlyOpenAsReadOnlySection'' @ 1413c77f0

void __cdecl `dynamic_initializer_for_'FSQLiteFile::CurrentlyOpenAsReadOnlySection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FSQLiteFile::CurrentlyOpenAsReadOnlySection,4000);
  atexit(`dynamic_atexit_destructor_for_'FSQLiteFile::CurrentlyOpenAsReadOnlySection__);
  return;
}

// `dynamic_initializer_for_'FSQLiteCoreTestAutomationTestInstance'' @ 1413c7820

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FSQLiteCoreTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSQLiteCoreTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FSQLiteCoreTestAutomationTestInstance,&local_18,false);
  FSQLiteCoreTestAutomationTestInstance._0_8_ = &___7FSQLiteCoreTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FSQLiteCoreTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'LogSQLiteDatabase'' @ 1413c7880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSQLiteDatabase__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSQLiteDatabase,L"LogSQLiteDatabase",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSQLiteDatabase__);
  return;
}

// `dynamic_initializer_for_'LogSQLitePreparedStatement'' @ 1413c78c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSQLitePreparedStatement__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSQLitePreparedStatement,L"LogSQLitePreparedStatement",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSQLitePreparedStatement__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSQLiteCore'' @ 1413c7900

void __cdecl _dynamic_initializer_for__ModuleRegistrantSQLiteCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SQLiteCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SQLiteCore",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSQLiteCore>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14d11e470

void * __thiscall FSQLiteCore::_scalar_deleting_destructor_(FSQLiteCore *this,uint param_1)

{
  *this = (FSQLiteCore)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d11f400

void * __thiscall FSQLiteCoreTest::_scalar_deleting_destructor_(FSQLiteCoreTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// operator() @ 14d120860

ESQLitePreparedStatementExecuteRowResult __thiscall
``FSQLiteCoreTest::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FSQLitePreparedStatement *param_1)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  longlong local_res8;
  FString local_48;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FSQLitePreparedStatement::CacheColumnNames(param_1);
  pFVar2 = (param_1->CachedColumnNames).AllocatorInstance.Data;
  iVar4 = (param_1->CachedColumnNames).ArrayNum;
  for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)iVar4 * 0x10; pFVar7 = pFVar7 + 0x10) {
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar7;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"id");
    if (iVar3 == 0) {
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
      goto LAB_14d1208e4;
    }
  }
  iVar4 = -1;
LAB_14d1208e4:
  if (((param_1->Statement != (sqlite3_stmt *)0x0) &&
      (FSQLitePreparedStatement::CacheColumnNames(param_1), -1 < iVar4)) &&
     (iVar4 < (param_1->CachedColumnNames).ArrayNum)) {
    local_res8 = sqlite3_column_int64(param_1->Statement,iVar4);
  }
  FSQLitePreparedStatement::CacheColumnNames(param_1);
  pFVar2 = (param_1->CachedColumnNames).AllocatorInstance.Data;
  iVar4 = (param_1->CachedColumnNames).ArrayNum;
  for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)iVar4 * 0x10; pFVar7 = pFVar7 + 0x10) {
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar7;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"name");
    if (iVar3 == 0) {
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
      goto LAB_14d120963;
    }
  }
  iVar4 = -1;
LAB_14d120963:
  FSQLitePreparedStatement::GetColumnValueByIndex(param_1,iVar4,&local_38);
  FSQLitePreparedStatement::CacheColumnNames(param_1);
  pFVar2 = (param_1->CachedColumnNames).AllocatorInstance.Data;
  iVar4 = (param_1->CachedColumnNames).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + (longlong)iVar4 * 0x10) {
      iVar4 = -1;
LAB_14d1209ca:
      FSQLitePreparedStatement::GetColumnValueByIndex(param_1,iVar4,&local_48);
      **(byte **)this = **(byte **)this & local_res8 == 1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar6.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar1 = **(byte **)this;
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"John");
      **(byte **)this = iVar4 == 0 & bVar1;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
      }
      bVar1 = **(byte **)this;
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"Manager");
      **(byte **)this = iVar4 == 0 & bVar1;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return Stop;
    }
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar7;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,L"title");
    if (iVar3 == 0) {
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
      goto LAB_14d1209ca;
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// sqlite3_ue_config @ 14d125d70

int __cdecl sqlite3_ue_config(void)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(0x10,0);
  FMemory::GetAllocSize(pvVar1);
  FMemory::Free(pvVar1);
  sqlite3_config(4);
  sqlite3_config(10);
  return 0;
}

// IMPLEMENT_MODULE_SQLiteCore @ 14d125de0

void __cdecl IMPLEMENT_MODULE_SQLiteCore(void)

{
  return;
}

// sqlite3_os_end @ 14d125df0

int __cdecl sqlite3_os_end(void)

{
  return 0;
}

// sqlite3_os_init @ 14d125e00

int __cdecl sqlite3_os_init(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.mxPathname =
           FWindowsPlatformMisc::GetMaxPathLength();
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.zName =
           "unreal-fs";
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xOpen =
           FSQLiteFileFuncs::Open;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xDelete =
           FSQLiteFileFuncs::Delete;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xAccess =
           FSQLiteFileFuncs::Access;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xFullPathname =
           FSQLiteFileFuncs::FullPathname;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xRandomness =
           FSQLiteFileFuncs::Randomness;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xSleep =
           FSQLiteFileFuncs::Sleep;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xCurrentTime =
           FSQLiteFileFuncs::CurrentTime;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xGetLastError =
           FSQLiteFileFuncs::GetLastError;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.
      xCurrentTimeInt64 = FSQLiteFileFuncs::CurrentTimeInt64;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.pNext =
           (sqlite3_vfs *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.pAppData =
           (void *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xDlOpen =
           (_func___cdecl_void_ptr_sqlite3_vfs_ptr_char_ptr *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xDlError =
           (_func___cdecl_void_sqlite3_vfs_ptr_int_char_ptr *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xDlSym =
           (_func___cdecl__func___cdecl_void_ptr_sqlite3_vfs_ptr_void_ptr_char_ptr *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xDlClose =
           (_func___cdecl_void_sqlite3_vfs_ptr_void_ptr *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xSetSystemCall
           = (_func___cdecl_int_sqlite3_vfs_ptr_char_ptr__func___cdecl_void_ptr *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xGetSystemCall
           = (_func___cdecl__func___cdecl_void_ptr_sqlite3_vfs_ptr_char_ptr *)0x0;
      `public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs.xNextSystemCall
           = (_func___cdecl_char_ptr_sqlite3_vfs_ptr_char_ptr *)0x0;
      _Init_thread_footer(&`public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  sqlite3_vfs_register
            (&`public:_static_void___cdecl_FSQLiteFileFuncs::Register(void)'::__l2::VFSFuncs,1);
  return 0;
}

// CurrentlyOpenAsReadOnly'' @ 150455b20

void __cdecl `dynamic_atexit_destructor_for_'FSQLiteFile::CurrentlyOpenAsReadOnly__(void)

{
  FSQLiteFile::CurrentlyOpenAsReadOnly.HashSize = 0;
  if (FSQLiteFile::CurrentlyOpenAsReadOnly.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
  {
    FMemory::Free((void *)FSQLiteFile::CurrentlyOpenAsReadOnly.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FSQLiteFile::CurrentlyOpenAsReadOnly.Elements);
  return;
}

// CurrentlyOpenAsReadOnlySection'' @ 150455b60

void __cdecl `dynamic_atexit_destructor_for_'FSQLiteFile::CurrentlyOpenAsReadOnlySection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150455b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FSQLiteFile::CurrentlyOpenAsReadOnlySection);
  return;
}

// `dynamic_atexit_destructor_for_'FSQLiteCoreTestAutomationTestInstance'' @ 150455b80

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FSQLiteCoreTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FSQLiteCoreTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogSQLiteDatabase'' @ 150455ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSQLiteDatabase__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSQLiteDatabase);
  return;
}

// `dynamic_atexit_destructor_for_'LogSQLitePreparedStatement'' @ 150455bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSQLitePreparedStatement__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSQLitePreparedStatement);
  return;
}

// `dynamic_atexit_destructor_for_'TmpPath'' @ 150455be0

void __cdecl `FSQLiteFileFuncs::Open'::__l14::_dynamic_atexit_destructor_for__TmpPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
               ::__l14::TmpPath.Data.AllocatorInstance.Data;
  if (`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
      ::__l14::TmpPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`private:_static_int___cdecl_FSQLiteFileFuncs::Open(sqlite3_vfs*___ptr64,char_const*___ptr64,sqlite3_file*___ptr64,int,int*___ptr64)'
      ::__l14::TmpPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

